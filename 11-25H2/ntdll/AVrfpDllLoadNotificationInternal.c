/*
 * XREFs of AVrfpDllLoadNotificationInternal @ 0x1800ED0D0
 * Callers:
 *     AVrfDllLoadNotification @ 0x1800ECFE4 (AVrfDllLoadNotification.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x180118E80 (AVrfpSnapAlreadyLoadedDlls.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     AVrfpDetectVerifiedExports @ 0x1800ED1AC (AVrfpDetectVerifiedExports.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpDllLoadNotificationInternal(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rbp
  int v4; // r14d
  _QWORD *v5; // rbx

  if ( !AVrfpEnabled )
    return 0LL;
  v2 = (__int64 *)AVrfpVerifierProvidersList;
  while ( v2 != &AVrfpVerifierProvidersList )
  {
    v3 = (_QWORD *)v2[5];
    v4 = 0;
    v2 = (__int64 *)*v2;
    if ( *v3 )
    {
      v5 = v3;
      do
      {
        if ( (v5[1] & 1) == 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), (const wchar_t *)*v5) )
        {
          if ( (AVrfpDebug & 4) != 0 )
            DbgPrint(
              "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
              NtCurrentTeb()->ClientId.UniqueProcess,
              *(_QWORD *)(a1 + 96));
          if ( (unsigned __int8)AVrfpDetectVerifiedExports(v5, a1) )
            *((_DWORD *)v5 + 2) |= 1u;
        }
        v5 = &v3[4 * (unsigned int)++v4];
      }
      while ( *v5 );
    }
  }
  return AVrfpSnapDllImports(a1);
}
