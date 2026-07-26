/*
 * XREFs of NdisMRegisterIoPortRange @ 0x14009DB80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x14009BF0C (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 */

NDIS_STATUS __stdcall NdisMRegisterIoPortRange(
        PVOID *PortOffset,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts)
{
  NDIS_STATUS v4; // ebx
  __int64 v5; // rbp
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  union _LARGE_INTEGER v8; // r14
  void *v9; // rax
  char v11; // [rsp+28h] [rbp-50h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v12; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v13; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  v5 = NumberOfPorts;
  v13.QuadPart = 0LL;
  v6 = (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
  v12 = 0LL;
  v8.QuadPart = InitialPort;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)MiniportAdapterHandle;
    LOBYTE(MiniportAdapterHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterHandle,
      1,
      20,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      v11);
  }
  if ( (v6->DriverVerifyFlags & 0x20) != 0 )
    goto LABEL_4;
  if ( (unsigned int)ndisTranslateResources(v6, 1, v8, &v13, &v12) )
  {
    v4 = -1073741823;
  }
  else if ( v12->Type == 3 )
  {
    v9 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                   (union _LARGE_INTEGER)v13.QuadPart,
                   v5,
                   516LL);
    *PortOffset = v9;
    if ( !v9 )
LABEL_4:
      v4 = -1073741670;
  }
  else
  {
    *PortOffset = (PVOID)v13.LowPart;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x15u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)v6,
      v4);
  return v4;
}
