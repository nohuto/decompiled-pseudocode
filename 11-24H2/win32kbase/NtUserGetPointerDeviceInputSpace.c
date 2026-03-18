/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1401BAE60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ResolveMouseOrPointerDevice @ 0x140048AC0 (ResolveMouseOrPointerDevice.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1400E097C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(__int64 a1, void *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 InputSpaceId; // rax
  struct _LUID Src; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v9, 1u);
  v4 = 0;
  Src = 0LL;
  v11 = 0LL;
  v10 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v11, &v10) )
  {
    if ( v10 )
      InputSpaceId = (__int64)InputConfig::Mouse::GetInputSpaceId(v5);
    else
      InputSpaceId = *(_QWORD *)(v11 + 228);
    v9[1] = InputSpaceId;
    Src = (struct _LUID)InputSpaceId;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 8uLL);
    v4 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v4;
}
