/*
 * XREFs of KeAbUserModeEntryFree @ 0x1404706A0
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeAbUserModeEntryFree(ULONG_PTR a1, unsigned int a2)
{
  __int64 v2; // rdi
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 1144);
  v4 = a1;
  if ( v2 )
  {
    result = *(unsigned __int8 *)(v2 + 12);
    if ( a2 < (unsigned int)result )
    {
      CurrentIrql = KeGetCurrentIrql();
      v7 = 2LL;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1);
      }
      v8 = (_QWORD *)(v2 + 88LL * a2 + 16);
      if ( *v8 )
      {
        _disable();
        KiAbEntryFreeAndEnableInterrupts((__int64)v8, v4, 0LL, 1, 0LL);
      }
      v9 = *(_QWORD *)(v4 + 800);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 8LL * a2);
        HIBYTE(v10) &= ~0x80u;
        *(_QWORD *)(v9 + 8LL * a2) = v10;
      }
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
