/*
 * XREFs of __tailMerge_umpdc_dll @ 0x1800A62D3
 * Callers:
 *     __imp_load_Pdcv2ActivationClientRegister @ 0x1800A6352 (__imp_load_Pdcv2ActivationClientRegister.c)
 *     __imp_load_Pdcv2ActivationClientUnregister @ 0x1800A6364 (__imp_load_Pdcv2ActivationClientUnregister.c)
 *     __imp_load_Pdcv2ActivationClientActivate @ 0x1800A6376 (__imp_load_Pdcv2ActivationClientActivate.c)
 *     __imp_load_Pdcv2ActivationClientSetBrokeredProcessId @ 0x1800A6388 (__imp_load_Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     __imp_load_Pdcv2ActivationClientDeactivate @ 0x1800A639A (__imp_load_Pdcv2ActivationClientDeactivate.c)
 *     __imp_load_Pdcv2ActivationClientRenewActivation @ 0x1800A63AC (__imp_load_Pdcv2ActivationClientRenewActivation.c)
 *     __imp_load_SleepstudyHelperBlockerActiveDereference @ 0x1800A63BE (__imp_load_SleepstudyHelperBlockerActiveDereference.c)
 *     __imp_load_SleepstudyHelperCreateLibraryEx @ 0x1800A63D0 (__imp_load_SleepstudyHelperCreateLibraryEx.c)
 *     __imp_load_SleepstudyHelperCreateBlockerFromGuid @ 0x1800A63E2 (__imp_load_SleepstudyHelperCreateBlockerFromGuid.c)
 *     __imp_load_SleepstudyHelperBuildBlocker @ 0x1800A63F4 (__imp_load_SleepstudyHelperBuildBlocker.c)
 *     __imp_load_SleepstudyHelperSetBlockerParentHandle @ 0x1800A6406 (__imp_load_SleepstudyHelperSetBlockerParentHandle.c)
 *     __imp_load_SleepstudyHelperBlockerActiveReference @ 0x1800A6418 (__imp_load_SleepstudyHelperBlockerActiveReference.c)
 *     __imp_load_SleepstudyHelperDestroyBlockerBuilder @ 0x1800A642A (__imp_load_SleepstudyHelperDestroyBlockerBuilder.c)
 *     __imp_load_SleepstudyHelperDestroyLibrary @ 0x1800A643C (__imp_load_SleepstudyHelperDestroyLibrary.c)
 *     __imp_load_SleepstudyHelperDestroyBlocker @ 0x1800A644E (__imp_load_SleepstudyHelperDestroyBlocker.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180075C10 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_umpdc_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_umpdc_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
