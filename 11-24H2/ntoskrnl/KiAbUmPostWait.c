/*
 * XREFs of KiAbUmPostWait @ 0x14032F080
 * Callers:
 *     KeWaitForAlertByThreadId @ 0x14032EC3C (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiAbUmPostWait(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rbx
  ULONG_PTR v4; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 1144);
  v4 = a1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v7 = *(_QWORD *)(v4 + 800);
    if ( v7 )
    {
      v8 = 0LL;
      v6 = 0x7FFFFFFFFFFFFFFCLL;
      while ( (unsigned int)v8 < *(unsigned __int8 *)(v2 + 12) )
      {
        v13 = *(_QWORD *)(v7 + 8 * v8);
        v9 = (unsigned int)v8;
        if ( (v13 & 0x7FFFFFFFFFFFFFFCLL) == a2 )
        {
          LOBYTE(v13) = v13 & 0xFE;
          v10 = 88LL * (unsigned int)v8 + v2;
          if ( *(_QWORD *)(v10 + 16) && *(_BYTE *)(v10 + 25) )
          {
            _disable();
            v11 = *(_QWORD *)(v10 + 16) & 0x7FFFFFFFFFFFFFFCLL;
            if ( v11 && *(char *)(v10 + 24) >= 0 )
              v11 |= 0x8000000000000000uLL;
            KiAbEntryFreeAndEnableInterrupts(v10 + 16, v4, v11, 1LL, 0LL);
            HIBYTE(v13) &= ~0x80u;
          }
          *(_QWORD *)(v7 + 8 * v9) = v13;
          *(_BYTE *)(v10 + 24) &= ~0x40u;
          break;
        }
        v8 = (unsigned int)(v8 + 1);
      }
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
