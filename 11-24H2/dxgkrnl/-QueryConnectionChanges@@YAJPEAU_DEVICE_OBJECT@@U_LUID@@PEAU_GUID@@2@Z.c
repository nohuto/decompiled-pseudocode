/*
 * XREFs of ?QueryConnectionChanges@@YAJPEAU_DEVICE_OBJECT@@U_LUID@@PEAU_GUID@@2@Z @ 0x140087114
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x140087EB8 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall QueryConnectionChanges(
        struct _DEVICE_OBJECT *a1,
        struct _LUID a2,
        struct _GUID *a3,
        struct _GUID *a4)
{
  struct _GUID *v8; // r9
  DWORD ConnectionChanges; // edi
  struct _LUID v11; // [rsp+30h] [rbp-59h] BYREF
  struct _LUID v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  struct _GUID *v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+8Ch] [rbp+3h]
  struct _LUID *v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  struct _LUID *v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+ACh] [rbp+23h]

  if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 512LL) )
  {
    v23 = 0;
    v20 = 0;
    v17 = 0;
    v21 = &v11;
    v18 = v8;
    v15 = (__int64 *)&v12;
    v11 = a2;
    v12 = (struct _LUID)2048LL;
    v22 = 8;
    v19 = 16;
    v16 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E5A8, byte_14013EC6C, a3, 0LL, 5u, v14);
  }
  ConnectionChanges = DxgkQueryConnectionChanges((__int64)a1, 0, 0, 0, 1, 0);
  if ( (unsigned int)dword_14015E5A8 > 5 && tlgKeywordOn((__int64)&dword_14015E5A8, 512LL) )
  {
    v26 = 0;
    v23 = 0;
    v20 = 0;
    v17 = 0;
    v24 = &v11;
    v11.LowPart = ConnectionChanges;
    v21 = &v12;
    v15 = &v13;
    v12 = a2;
    v13 = 2048LL;
    v25 = 4;
    v22 = 8;
    v18 = a4;
    v19 = 16;
    v16 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14015E5A8, byte_14013ECCF, a3, 0LL, 6u, v14);
  }
  return ConnectionChanges;
}
