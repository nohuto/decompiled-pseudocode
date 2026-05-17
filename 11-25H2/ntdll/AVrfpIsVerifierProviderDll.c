/*
 * XREFs of AVrfpIsVerifierProviderDll @ 0x1800ED09C
 * Callers:
 *     AVrfDllLoadNotification @ 0x1800ECFE4 (AVrfDllLoadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x180118E80 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfDllUnloadNotification @ 0x18011BEB0 (AVrfDllUnloadNotification.c)
 * Callees:
 *     <none>
 */

char __fastcall AVrfpIsVerifierProviderDll(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // r8

  v1 = (__int64 *)AVrfpVerifierProvidersList;
  while ( v1 != &AVrfpVerifierProvidersList )
  {
    v2 = v1[4];
    v1 = (__int64 *)*v1;
    if ( v2 && *(_QWORD *)(v2 + 48) == a1 )
      return 1;
  }
  return 0;
}
