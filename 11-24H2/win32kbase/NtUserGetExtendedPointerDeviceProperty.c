/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1401BA9F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140099270 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1401E88FC (RIMGetExtendedPointerDeviceProperty.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(void *a1, void *a2)
{
  int v4; // ebx
  ULONG v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdi
  NTSTATUS v8; // eax
  __int128 Src; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+98h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1u);
  Src = 0LL;
  v11 = 0;
  v4 = 0;
  if ( !a2 )
    goto LABEL_2;
  v6 = HMValidateHandleWithDescriptor(a1, 0x13u, 0);
  v7 = v6;
  if ( !v6 )
  {
    v5 = 6;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v6 + 184) & 0x80u) == 0 )
  {
LABEL_2:
    v5 = 87;
LABEL_3:
    UserSetLastError(v5);
    goto LABEL_12;
  }
  v12 = 0LL;
  v13 = 0;
  RtlCopyFromUser(&v12, a2, 0x14uLL);
  Src = v12;
  v11 = v13;
  v8 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v7 + 456), &Src);
  if ( v8 < 0 )
  {
    v5 = RtlNtStatusToDosError(v8);
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a2, &Src, 0x14uLL);
  v4 = 1;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
