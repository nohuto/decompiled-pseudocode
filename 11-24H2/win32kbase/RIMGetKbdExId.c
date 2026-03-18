/*
 * XREFs of RIMGetKbdExId @ 0x14013CBD8
 * Callers:
 *     RIMQueryDev @ 0x140055E98 (RIMQueryDev.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // edi
  char v5; // bl
  char v6; // si
  char *v7; // rax
  char *v8; // rbx
  __int64 UserSessionState; // rax
  struct _UNICODE_STRING InstanceName; // [rsp+50h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+90h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+98h] [rbp+38h] BYREF

  InOutBufferSize = 0;
  DataBlockObject = 0LL;
  InstanceName = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
      v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v5,
          v6,
          *(_QWORD *)(UserSessionState + 19392),
          4u,
          1u,
          0x14u,
          (__int64)&WPP_0b7b67ba98653d08fb379134e851684c_Traceguids,
          InstanceName.Buffer);
      }
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v7 = (char *)Win32AllocPoolZInitImpl(64LL, InOutBufferSize, 0x656B7352u);
      v8 = v7;
      if ( v7 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v7);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)&v8[*((unsigned int *)v8 + 14)];
        GreDeleteFastMutex(v8);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
