/*
 * XREFs of NtUserGetPointerDeviceOrientation @ 0x140062E50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerDeviceOrientation(__int64 a1, void *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // esi
  __int64 v7; // r14
  int v8; // edi
  int v9; // edi
  __int64 MouseProcessor; // rax
  __int64 v12; // rax
  int Src; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v14, 1LL);
  Src = 1;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( a1 == -1 )
    goto LABEL_2;
  v12 = HMValidateHandleNoSecure(a1, 19);
  v4 = v12;
  if ( v12 )
  {
    if ( !*(_DWORD *)(v12 + 48) )
    {
LABEL_2:
      v8 = 1;
LABEL_3:
      v6 = 1;
      goto LABEL_4;
    }
    if ( (*(_DWORD *)(v12 + 184) & 0x80u) != 0 )
    {
      v7 = *(_QWORD *)(v12 + 456);
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( v6 )
  {
    if ( v8 || *(_DWORD *)(v7 + 24) == 7 )
    {
      v9 = 1;
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v4);
      if ( MouseProcessor )
        v9 = *(_DWORD *)(MouseProcessor + 3016);
      Src = v9;
    }
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 4uLL);
    v5 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v5;
}
