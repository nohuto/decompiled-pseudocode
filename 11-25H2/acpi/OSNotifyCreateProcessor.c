/*
 * XREFs of OSNotifyCreateProcessor @ 0x140063D1C
 * Callers:
 *     OSNotifyCreate @ 0x140016320 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x140040DF0 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildProcessorExtension @ 0x14005A0E8 (ACPIBuildProcessorExtension.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = AMLIGetParent(a1);
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v5 )
    v5 = RootDeviceExtension;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a1;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x11u,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      v10);
  }
  v6 = ACPIBuildProcessorExtension(a1, v5, &v12);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v6;
      WPP_RECORDER_SF_qL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x12u,
        (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
        a1,
        v11);
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v8 + 8), a2);
    v7 = 259;
  }
  AMLIDereferenceHandleEx(v4);
  return v7;
}
