/*
 * XREFs of MiReducePteUseCount @ 0x14042F6B0
 * Callers:
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiClearDriverTablePtes @ 0x1404EE8A0 (MiClearDriverTablePtes.c)
 * Callees:
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReducePteUseCount(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r9
  unsigned int v6; // edi
  ULONG_PTR v7; // rbx
  int v8; // esi
  __int64 v9; // r8
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  _KPROCESS *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 KernelWaitTime; // rax
  __int64 v17; // rax

  BugCheckParameter4 = a3;
  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *v4;
  v6 = 0;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL
    && (v5 & 1) != 0
    && ((v5 & 0x42) == 0 || (v5 & 0x20) == 0) )
  {
    v13 = MiPteHasShadow();
    if ( v13 )
    {
      KernelWaitTime = v13[2].KernelWaitTime;
      if ( KernelWaitTime )
      {
        v17 = *(_QWORD *)(KernelWaitTime + 8 * ((v15 >> 3) & 0x1FF));
        if ( (v17 & 0x20) != 0 )
          v14 |= 0x20uLL;
        v5 = v14 | 0x42;
        if ( (v17 & 0x42) == 0 )
          v5 = v14;
      }
    }
  }
  v7 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v7 + 36) & 0x4000000) != 0 )
    v9 = HIDWORD(*(_QWORD *)v7);
  else
    v9 = *(_QWORD *)(v7 + 16) >> 16;
  v10 = v9 & 0x3FF;
  if ( v10 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v7, v10, BugCheckParameter4);
  v11 = v10 - BugCheckParameter4;
  if ( (*(_DWORD *)(v7 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v7 = ((unsigned __int64)v11 << 32) ^ (*(_QWORD *)v7 ^ ((unsigned __int64)v11 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v7 + 16) = ((unsigned __int64)v11 << 16) ^ (*(_QWORD *)(v7 + 16) ^ ((unsigned __int64)v11 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v6) = v11 == 0;
  return v6;
}
