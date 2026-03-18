/*
 * XREFs of EditionGetUserObjectInformationEntryPoint @ 0x1C006F0A0
 * Callers:
 *     <none>
 * Callees:
 *     _GetUserObjectInformation @ 0x1C006F2F4 (_GetUserObjectInformation.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionGetUserObjectInformationEntryPoint(
        HANDLE Handle,
        int a2,
        volatile void *a3,
        unsigned int a4,
        _DWORD *a5)
{
  SIZE_T v5; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PERESOURCE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 CurrentThreadWin32Thread; // rax
  ULONG v19; // r8d
  _DWORD *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int UserObjectInformation; // edi
  PVOID v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  __int64 v32[7]; // [rsp+58h] [rbp-50h] BYREF

  v5 = a4;
  LODWORD(v32[0]) = 0;
  EnterCrit(0LL, 0LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v9) + 8)
    || (v14 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v11, v10, v12, v13),
        !ExIsResourceAcquiredSharedLite(*v14)) )
  {
    LODWORD(Object) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v16, v15, v17);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  v19 = 4;
  if ( a2 != 1 )
    v19 = 2;
  ProbeForWrite(a3, v5, v19);
  if ( a5 )
  {
    v20 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = *v20;
  }
  Object = 0LL;
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
    {
      UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v32);
      SetHandleFlag(Handle, 2LL, 0LL);
      if ( a5 )
        *a5 = v32[0];
    }
    else
    {
      UserObjectInformation = 0;
      UserSetLastError(8LL);
    }
  }
  else
  {
    UserObjectInformation = 0;
  }
  v24 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  v25 = PsGetCurrentThreadWin32Thread(v24, v21, v22);
  --*(_DWORD *)(v25 + 48);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return UserObjectInformation;
}
