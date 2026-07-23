/*
 * XREFs of MiGetBaseResidentPage @ 0x140310FE0
 * Callers:
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiDemoteLargeFreePage @ 0x1402EFE44 (MiDemoteLargeFreePage.c)
 *     MiTradePage @ 0x1402FEF60 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 *     MiActivePageClaimCandidate @ 0x140310420 (MiActivePageClaimCandidate.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x14041DC14 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiSetPfnRemovalRequested @ 0x1406757A0 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetBaseResidentPage(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v2; // rbp
  unsigned int v3; // r15d
  ULONG_PTR v4; // rdi
  int i; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // esi
  unsigned int v9; // ecx
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-38h]

  v1 = a1;
  v13 = 0LL;
  v14 = 0LL;
  v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v3 = 0;
  v4 = v2;
  for ( i = 2; ; --i )
  {
    v6 = v3;
    v7 = MiPageSizes[i] - 1;
    if ( (v7 & v4) != 0 )
    {
      v4 &= ~v7;
      v1 = 48 * v4 - 0x220000000000LL;
      if ( ++v3 > 3 )
        KeBugCheckEx(0x1Au, 0x1500uLL, v2, v4, 0LL);
      *((_QWORD *)&v13 + v6) = v1;
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v8);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v1 + 24) < 0 );
      }
    }
    if ( (*(_QWORD *)(v1 + 40) & 0x10000000000LL) != 0 && (*(_DWORD *)(v1 + 36) & 0x18000000) != 0 )
      break;
    if ( !i )
      KeBugCheckEx(0x1Au, 0x1501uLL, v2, v4, 0LL);
  }
  v9 = 0;
  v10 = (__int64 *)&v13;
  do
  {
    v11 = *v10;
    if ( !*v10 )
      break;
    if ( v11 != v1 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v9;
    ++v10;
  }
  while ( v9 < 3 );
  return v1;
}
