/*
 * XREFs of McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x140054E14
 * Callers:
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14003E5B0 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 *     ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140054684 (-VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEA.c)
 *     ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x1400547AC (-VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14000DC70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqxxxtq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        int a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v11; // [rsp+30h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-69h] BYREF
  int *v13; // [rsp+50h] [rbp-59h]
  __int64 v14; // [rsp+58h] [rbp-51h]
  char *v15; // [rsp+60h] [rbp-49h]
  __int64 v16; // [rsp+68h] [rbp-41h]
  char *v17; // [rsp+70h] [rbp-39h]
  __int64 v18; // [rsp+78h] [rbp-31h]
  __int64 *v19; // [rsp+80h] [rbp-29h]
  __int64 v20; // [rsp+88h] [rbp-21h]
  char *v21; // [rsp+90h] [rbp-19h]
  __int64 v22; // [rsp+98h] [rbp-11h]
  char *v23; // [rsp+A0h] [rbp-9h]
  __int64 v24; // [rsp+A8h] [rbp-1h]
  char *v25; // [rsp+B0h] [rbp+7h]
  __int64 v26; // [rsp+B8h] [rbp+Fh]
  int v27; // [rsp+F8h] [rbp+4Fh] BYREF

  v27 = a4;
  v14 = 4LL;
  v11 = 0LL;
  v13 = &v27;
  v16 = 4LL;
  v15 = &a5;
  v18 = 8LL;
  v17 = &a6;
  v20 = 8LL;
  v19 = &v11;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(
           &DxgkControlGuid_Context,
           &EventReprogramVSyncSuppressionForPresent,
           a3,
           8u,
           &v12);
}
