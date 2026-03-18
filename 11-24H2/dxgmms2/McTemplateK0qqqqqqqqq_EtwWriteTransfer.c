/*
 * XREFs of McTemplateK0qqqqqqqqq_EtwWriteTransfer @ 0x14003FC0C
 * Callers:
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x14002EEFC (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0qqqqqqqqq_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        ...)
{
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-99h] BYREF
  int *v12; // [rsp+40h] [rbp-89h]
  __int64 v13; // [rsp+48h] [rbp-81h]
  char *v14; // [rsp+50h] [rbp-79h]
  __int64 v15; // [rsp+58h] [rbp-71h]
  char *v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  char *v18; // [rsp+70h] [rbp-59h]
  __int64 v19; // [rsp+78h] [rbp-51h]
  char *v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  char *v22; // [rsp+90h] [rbp-39h]
  __int64 v23; // [rsp+98h] [rbp-31h]
  char *v24; // [rsp+A0h] [rbp-29h]
  __int64 v25; // [rsp+A8h] [rbp-21h]
  va_list v26; // [rsp+B0h] [rbp-19h]
  __int64 v27; // [rsp+B8h] [rbp-11h]
  va_list v28; // [rsp+C0h] [rbp-9h]
  __int64 v29; // [rsp+C8h] [rbp-1h]
  int v30; // [rsp+108h] [rbp+3Fh] BYREF
  __int64 v31; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  va_list va1; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va1, a10);
  va_start(va, a10);
  v31 = va_arg(va1, _QWORD);
  v30 = a4;
  v13 = 4LL;
  v12 = &v30;
  v15 = 4LL;
  v14 = &a5;
  v17 = 4LL;
  v16 = &a6;
  v19 = 4LL;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  va_copy(v26, va);
  va_copy(v28, va1);
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &PendingFlipsForThisEntry, a3, 0xAu, &v11);
}
