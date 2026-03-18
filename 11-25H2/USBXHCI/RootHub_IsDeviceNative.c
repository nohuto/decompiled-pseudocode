/*
 * XREFs of RootHub_IsDeviceNative @ 0x140049F54
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003BBF8 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dDD @ 0x140035EFC (WPP_RECORDER_SF_dDD.c)
 *     Feature_UXTM__private_IsEnabledDeviceUsageNoInline @ 0x140044560 (Feature_UXTM__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall RootHub_IsDeviceNative(__int64 a1, int a2)
{
  __int64 v2; // r14
  char v3; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int Ulong; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r14d
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+30h] [rbp-18h]

  v2 = (unsigned int)(a2 - 1);
  v3 = 0;
  if ( *(_BYTE *)(120 * v2 + *(_QWORD *)(a1 + 48) + 13) == 3 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(v6 + 744);
    v8 = *(_QWORD *)(v6 + 88);
    if ( (v7 & 0x400000) != 0 )
    {
      Ulong = XilRegister_ReadUlong(
                *(_QWORD *)(v6 + 88),
                (unsigned int *)(*(_QWORD *)(v8 + 24) + (unsigned int)(32 * (a2 - *(_DWORD *)(v8 + 140)) + 35524)));
      v10 = Ulong;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = Ulong;
        v18 = a2;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0x110u,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v18,
          v20);
      }
      v11 = v10 >> 4;
      return (v11 & 1) == 0;
    }
    if ( (v7 & 0x800000) != 0 )
    {
      v12 = XilRegister_ReadUlong(*(_QWORD *)(v6 + 88), (unsigned int *)(*(_QWORD *)(v8 + 24) + 52512LL));
      LOBYTE(v11) = v12;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = v12;
        v19 = a2;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0x111u,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v19,
          v21);
      }
      return (v11 & 1) == 0;
    }
    if ( (unsigned int)Feature_UXTM__private_IsEnabledDeviceUsageNoInline() && *(_BYTE *)(a1 + 58) )
    {
      v15 = ((unsigned int)XilRegister_ReadUlong(v8, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v2)) >> 2) & 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDD(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v13, v14, 0x112u, v17);
      return v15 == 0;
    }
  }
  return v3;
}
