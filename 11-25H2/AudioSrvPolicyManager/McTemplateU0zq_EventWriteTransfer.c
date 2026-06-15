/*
 * XREFs of McTemplateU0zq_EventWriteTransfer @ 0x180038320
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180002030 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800382BC (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0zq_EventWriteTransfer(__int64 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+4Ch] [rbp-2Ch]
  int *v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+98h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  v11 = &v13;
  v12 = 4LL;
  if ( !a3 )
    a3 = L"NULL";
  v8 = a3;
  return McGenEventWrite_EventWriteTransfer((__int64)L"NULL", &EVT_AUDIOSRV_SOUND_LEVEL_CHANGED, (__int64)a3, 3u, &v7);
}
