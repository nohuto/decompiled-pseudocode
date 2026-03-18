/*
 * XREFs of OSNotifyCreateDevice @ 0x1400165E0
 * Callers:
 *     OSNotifyCreate @ 0x140016320 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x140040DF0 (ACPIBuildMissingChildren.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildDeviceExtension @ 0x140047880 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x140048B6C (ACPIBuildDeviceRequest.c)
 */

__int64 __fastcall OSNotifyCreateDevice(__int64 BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rax
  __int64 v5; // rsi
  ULONG_PTR v6; // rdx
  int v7; // edx
  int v8; // ebx
  int v10; // r9d
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = BugCheckParameter3;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, v3, 0LL);
  v8 = ACPIBuildDeviceExtension(v3, v6, &v11);
  if ( v11 )
  {
    if ( v8 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), a2);
      LOBYTE(v3) = v11;
      v8 = ACPIBuildDeviceRequest(v11);
      if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = 13;
        goto LABEL_14;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v8 = -1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 12;
LABEL_14:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      22,
      v10,
      (__int64)&WPP_537052fec54a3dab9555f154ee754e1c_Traceguids,
      v3,
      v8);
  }
LABEL_7:
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v8;
}
