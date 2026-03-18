/*
 * XREFs of RootHub_Usb4TunnelState @ 0x14004B1B4
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDD @ 0x140035EFC (WPP_RECORDER_SF_dDD.c)
 *     Feature_UXTM__private_IsEnabledDeviceUsageNoInline @ 0x140044560 (Feature_UXTM__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall RootHub_Usb4TunnelState(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  int Ulong; // eax
  char v9; // di
  bool v10; // zf
  int v11; // eax
  char v12; // di
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // r8
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+30h] [rbp-18h]

  v2 = (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(120 * v2 + *(_QWORD *)(a1 + 48) + 13) != 3 )
    return 4LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 744);
  v7 = *(_QWORD *)(v5 + 88);
  if ( (v6 & 0x400000) != 0 )
  {
    Ulong = XilRegister_ReadUlong(
              *(_QWORD *)(v5 + 88),
              (unsigned int *)(*(_QWORD *)(v7 + 24) + (unsigned int)(32 * (a2 - *(_DWORD *)(v7 + 140)) + 35524)));
    v9 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = Ulong;
      v18 = a2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0xBu,
        0x113u,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v18,
        v20);
    }
    v10 = (v9 & 0x10) == 0;
LABEL_10:
    if ( v10 )
      return 3LL;
    else
      return 2LL;
  }
  if ( (v6 & 0x800000) != 0 )
  {
    v11 = XilRegister_ReadUlong(*(_QWORD *)(v5 + 88), (unsigned int *)(*(_QWORD *)(v7 + 24) + 52512LL));
    v12 = v11;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = v11;
      v19 = a2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0xBu,
        0x114u,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v19,
        v21);
    }
    v10 = (v12 & 1) == 0;
    goto LABEL_10;
  }
  if ( !(unsigned int)Feature_UXTM__private_IsEnabledDeviceUsageNoInline() || !*(_BYTE *)(a1 + 58) )
    return 4LL;
  v15 = ((unsigned int)XilRegister_ReadUlong(v7, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v2)) >> 2) & 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dDD(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v14, v16, 0x115u, v17);
  return 3 - (unsigned int)(v15 != 0);
}
