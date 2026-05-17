/*
 * XREFs of AVrfpSnapAlreadyLoadedDlls @ 0x180118E80
 * Callers:
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800ED09C (AVrfpIsVerifierProviderDll.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800ED0D0 (AVrfpDllLoadNotificationInternal.c)
 */

void AVrfpSnapAlreadyLoadedDlls()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_1801D4950;
  while ( v0 != &qword_1801D4950 )
  {
    v1 = (__int64)v0;
    v0 = (__int64 *)*v0;
    if ( AVrfpIsVerifierProviderDll(*(_QWORD *)(v1 + 48)) )
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: skipped resnapping provider %ws ... \n", *(_QWORD *)(v1 + 96));
    }
    else
    {
      if ( (AVrfpDebug & 1) != 0 )
        DbgPrint("AVRF: resnapping %ws ... \n", *(_QWORD *)(v1 + 96));
      AVrfpDllLoadNotificationInternal(v1);
    }
  }
}
