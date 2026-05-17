/*
 * XREFs of AVrfpSnapAlreadyLoadedDlls @ 0x180115C90
 * Callers:
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800EC8BC (AVrfpIsVerifierProviderDll.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800EC8F0 (AVrfpDllLoadNotificationInternal.c)
 */

void AVrfpSnapAlreadyLoadedDlls()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi

  v0 = (__int64 *)qword_1801D28D0;
  while ( v0 != &qword_1801D28D0 )
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
