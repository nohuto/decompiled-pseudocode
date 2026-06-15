/*
 * XREFs of McTemplateU0qzz_EtwEventWriteTransfer @ 0x180114374
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18007A700 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18005190C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qzz_EtwEventWriteTransfer(
        __int64 a1,
        __int64 a2,
        int a3,
        const wchar_t *a4,
        const wchar_t *a5)
{
  const wchar_t *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  bool v10; // zf
  _BYTE v12[16]; // [rsp+30h] [rbp-50h] BYREF
  int *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  const wchar_t *v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+58h] [rbp-28h]
  int v17; // [rsp+5Ch] [rbp-24h]
  const wchar_t *v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]
  int v21; // [rsp+A0h] [rbp+20h] BYREF

  v21 = a3;
  v5 = a5;
  v13 = &v21;
  v6 = -1LL;
  v14 = 4LL;
  v7 = 10LL;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = (unsigned int)(2 * v8 + 2);
  }
  else
  {
    v9 = 10LL;
  }
  v16 = v9;
  v17 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v10 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v7 = (unsigned int)(2 * v6 + 2);
    v10 = a5 == 0LL;
  }
  if ( v10 )
    v5 = L"NULL";
  v19 = v7;
  v18 = v5;
  v20 = 0;
  return McGenEventWrite_EtwEventWriteTransfer(
           v9,
           (__int64)&EVT_CAPTUREMONITOR_MONITOR_RESTART_LIMIT_HIT,
           v7,
           4,
           (__int64)v12);
}
