/*
 * XREFs of ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDEF0
 * Callers:
 *     <none>
 * Callees:
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01A2688 (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     ?Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01FD0A8 (-Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1C01FD1C0 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // r9d
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  v8 = a2;
  *(_QWORD *)(a2 + 16) = a2 + v2;
  v3 = 1;
  CIVDeserializer::Deserialize((CIVDeserializer *)&v8, (void **)(a2 + 72));
  if ( *(_DWORD *)(v4 + 24) == 2 )
  {
    CIVDeserializer::Deserialize((CIVDeserializer *)&v8, (void **)(v4 + 208));
    if ( v6 )
      CIVDeserializer::Deserialize((CIVDeserializer *)&v8, (struct _IV_HID_POINTER_DEVICE_INFO *)(v4 + 216));
  }
  *(_QWORD *)(v4 + 1360) = v4 + (*(_QWORD *)(v4 + 1360) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (int)RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification(v5, v4, v4 + 8) < 0 )
    return 0;
  return v3;
}
