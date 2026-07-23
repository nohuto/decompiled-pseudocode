/*
 * XREFs of PopDiagTraceDeviceIdleCheck @ 0x14049C678
 * Callers:
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  PVOID v5; // rcx
  _WORD *v6; // rdx
  char v7; // al
  char v8; // al
  int v9; // ecx
  _WORD v11[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-BCh] BYREF
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  PVOID *p_Object; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  __int16 *v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+94h] [rbp-74h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  _WORD *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  char *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF
  int v37; // [rsp+140h] [rbp+38h] BYREF
  int v38; // [rsp+148h] [rbp+40h] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v38 = a3;
  v37 = a2;
  v11[0] = 0;
  v12 = 0;
  Object = 0LL;
  if ( !PopDiagHandleRegistered )
    return (char)DeviceAttachmentBaseRefWithTag;
  LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK);
  if ( !(_BYTE)DeviceAttachmentBaseRefWithTag )
    goto LABEL_3;
  DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 24), 0x67446F50u);
  Object = DeviceAttachmentBaseRefWithTag;
  v5 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)DeviceAttachmentBaseRefWithTag[39];
    v6 = DeviceAttachmentBaseRefWithTag[5];
    if ( v6 )
    {
      v12 = v6[20] >> 1;
      v7 = *(_BYTE *)(a1 + 52) - 1;
      UserData.Ptr = a1 + 24;
      LOBYTE(v11[0]) = v7;
      v8 = *(_BYTE *)(a1 + 56) - 1;
      *(_QWORD *)&UserData.Size = 8LL;
      HIBYTE(v11[0]) = v8;
      p_Object = &Object;
      v17 = &v12;
      v16 = 8LL;
      v18 = 2LL;
      v9 = (unsigned __int16)v6[20];
      v19 = *((_QWORD *)v6 + 6);
      v22 = a1 + 16;
      v24 = a1 + 20;
      v26 = &v37;
      v28 = &v38;
      v30 = a1 + 12;
      v32 = v11;
      v34 = (char *)v11 + 1;
      v20 = v9;
      v33 = 1LL;
      v35 = 1LL;
      v21 = 0;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwWriteEx(
                                                 PopDiagHandle,
                                                 &POP_ETW_EVENT_DEVICE_IDLE_CHECK,
                                                 0LL,
                                                 0,
                                                 0LL,
                                                 0LL,
                                                 0xBu,
                                                 &UserData);
LABEL_3:
      v5 = Object;
    }
  }
  if ( v5 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
