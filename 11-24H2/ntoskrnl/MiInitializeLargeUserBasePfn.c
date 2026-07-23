/*
 * XREFs of MiInitializeLargeUserBasePfn @ 0x1404F2E50
 * Callers:
 *     MiInsertLargeUserMapping @ 0x14026AC6C (MiInsertLargeUserMapping.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiInitializeLargeUserBasePfn(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h]

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)a1 = (a3 >> 3) ^ (*(_QWORD *)a1 ^ (a3 >> 3)) & 0xFFFFF00000000001uLL;
  v8 = *(_DWORD *)(a1 + 32);
  BYTE2(v8) = BYTE2(v8) & 0xF8 | 6;
  *(_DWORD *)(a1 + 32) = v8;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
