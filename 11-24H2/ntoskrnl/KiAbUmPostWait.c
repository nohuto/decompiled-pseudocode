/*
 * XREFs of KiAbUmPostWait @ 0x140207AA0
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x14020765C (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAbUmPostWait(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 1144);
  v5 = a1;
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL, a3);
    }
    v8 = *(_QWORD *)(v5 + 800);
    if ( v8 )
    {
      v9 = 0LL;
      v7 = 0x7FFFFFFFFFFFFFFCLL;
      while ( (unsigned int)v9 < *(unsigned __int8 *)(v3 + 12) )
      {
        v14 = *(_QWORD *)(v8 + 8 * v9);
        v10 = (unsigned int)v9;
        if ( (v14 & 0x7FFFFFFFFFFFFFFCLL) == a2 )
        {
          LOBYTE(v14) = v14 & 0xFE;
          v11 = 88LL * (unsigned int)v9 + v3;
          if ( *(_QWORD *)(v11 + 16) && *(_BYTE *)(v11 + 25) )
          {
            _disable();
            v12 = *(_QWORD *)(v11 + 16) & 0x7FFFFFFFFFFFFFFCLL;
            if ( v12 && *(char *)(v11 + 24) >= 0 )
              v12 |= 0x8000000000000000uLL;
            KiAbEntryFreeAndEnableInterrupts(v11 + 16, v5, v12, 1LL, 0LL);
            HIBYTE(v14) &= ~0x80u;
          }
          *(_QWORD *)(v8 + 8 * v10) = v14;
          *(_BYTE *)(v11 + 24) &= ~0x40u;
          break;
        }
        v9 = (unsigned int)(v9 + 1);
      }
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
