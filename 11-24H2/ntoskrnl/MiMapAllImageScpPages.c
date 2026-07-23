/*
 * XREFs of MiMapAllImageScpPages @ 0x14091BCE0
 * Callers:
 *     MiMapProcessExecutable @ 0x14091B024 (MiMapProcessExecutable.c)
 * Callees:
 *     MiGetNextVad @ 0x140291ACC (MiGetNextVad.c)
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     MiGetFirstVad @ 0x1403C6358 (MiGetFirstVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     MiDoesImageContainFunctionOverrideFixups @ 0x14091BD84 (MiDoesImageContainFunctionOverrideFixups.c)
 */

_QWORD *__fastcall MiMapAllImageScpPages(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rax
  unsigned __int64 v4; // rbx
  __int64 v6; // r8

  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 1061LL) |= 4u;
  CurrentThread = KeGetCurrentThread();
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  for ( i = (__int64)MiGetFirstVad(a1); ; i = MiGetNextVad(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    if ( (*(_DWORD *)(i + 48) & 0x70) == 0x20 && (MiReadVadFlags2(i) & 0x20) != 0 )
    {
      if ( (unsigned int)MiDoesImageContainFunctionOverrideFixups(**(_QWORD **)(v4 + 72)) )
        MiMapImageScpCfgPages(a1, v4, v6);
    }
  }
  return UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
}
