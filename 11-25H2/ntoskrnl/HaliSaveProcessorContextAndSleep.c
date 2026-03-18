/*
 * XREFs of HaliSaveProcessorContextAndSleep @ 0x14069AE90
 * Callers:
 *     HaliAcpiSleep @ 0x14049B670 (HaliAcpiSleep.c)
 * Callees:
 *     HalpSaveProcessorState @ 0x14069AC60 (HalpSaveProcessorState.c)
 *     _guard_check_icall_no_overrides @ 0x1406A8AD0 (_guard_check_icall_no_overrides.c)
 */

__int64 __fastcall HaliSaveProcessorContextAndSleep(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64 a1),
        __int64 a3,
        int a4,
        _BYTE *a5)
{
  int v8; // r12d
  __int64 result; // rax

  v8 = 0;
  result = HalpSaveProcessorState(a1);
  while ( !v8 )
  {
    *a5 = result;
    if ( (_BYTE)result )
      return 0LL;
    v8 = 1;
    _InterlockedIncrement(&HalpSaveStateSync);
    if ( !a2 )
      return 0LL;
    while ( HalpSaveStateSync != a4 )
      _mm_pause();
    guard_check_icall_no_overrides(a2);
    result = a2(a3);
  }
  if ( (_DWORD)result == 1073742484 )
    *a5 = 1;
  return result;
}
