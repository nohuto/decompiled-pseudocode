/*
 * XREFs of AVrfpDllUnloadNotificationInternal @ 0x180112258
 * Callers:
 *     AVrfDllUnloadNotification @ 0x180113F70 (AVrfDllUnloadNotification.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     AVrfpClearVerifiedExports @ 0x18011C6D4 (AVrfpClearVerifiedExports.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 */

__int64 __fastcall AVrfpDllUnloadNotificationInternal(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *v3; // rsi
  int v4; // ebp
  _QWORD *v5; // rbx

  if ( AVrfpEnabled )
  {
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
          if ( (v5[1] & 1) != 0 && !wcsicmp(*(const wchar_t **)(a1 + 96), (const wchar_t *)*v5) )
          {
            if ( (AVrfpDebug & 4) != 0 )
              DbgPrint(
                "AVRF: pid 0x%X: found dll descriptor for `%ws' with verified exports \n",
                NtCurrentTeb()->ClientId.UniqueProcess,
                *(_QWORD *)(a1 + 96));
            if ( (unsigned __int8)AVrfpClearVerifiedExports(v5[3], a1) )
              *((_DWORD *)v5 + 2) &= ~1u;
          }
          v5 = &v3[4 * (unsigned int)++v4];
        }
        while ( *v5 );
      }
    }
  }
  return 0LL;
}
