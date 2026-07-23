/*
 * XREFs of MiFreeDeferredCrcPages @ 0x140345FC8
 * Callers:
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFreeDeferredCrcPages(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi
  int v10; // [rsp+30h] [rbp+8h]

  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  while ( 1 )
  {
    v4 = (_QWORD *)*v4;
    if ( !v4 )
      break;
    v8 = v4[2];
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    v10 = *(_DWORD *)(v8 + 32);
    BYTE2(v10) = BYTE2(v10) & 0xF8 | 6;
    *(_DWORD *)(v8 + 32) = v10;
    MiDecrementShareCountEx(v8, 0LL, a3, a4);
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
