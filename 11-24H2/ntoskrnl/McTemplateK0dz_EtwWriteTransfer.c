/*
 * XREFs of McTemplateK0dz_EtwWriteTransfer @ 0x1404B86A4
 * Callers:
 *     PipProcessRestartPhase1 @ 0x1407344CC (PipProcessRestartPhase1.c)
 *     PipProcessRestartPhase2 @ 0x140734598 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x1408AFCBC (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PipProcessStartPhase1 @ 0x1409BE300 (PipProcessStartPhase1.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0dz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5)
{
  const wchar_t *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-48h] BYREF
  int *v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+48h] [rbp-30h]
  const wchar_t *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+98h] [rbp+20h] BYREF

  v15 = a4;
  v5 = a5;
  v10 = &v15;
  v11 = 4LL;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v13 = v7;
  v14 = 0;
  if ( !a5 )
    v5 = L"NULL";
  v12 = v5;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 3u, &v9);
}
