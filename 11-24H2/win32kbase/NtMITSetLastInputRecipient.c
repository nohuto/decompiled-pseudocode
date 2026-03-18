/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1401B8C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14006AFC0 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     PtiFromThreadId @ 0x1400D8ED0 (PtiFromThreadId.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtMITSetLastInputRecipient(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v8, 1u);
  v3 = 0LL;
  if ( IsInputThread(v2) )
  {
    v5 = PtiFromThreadId(a1);
    if ( v5 )
    {
      LastWokenThread::Set(v5, 1u, 0, v6);
      v3 = 1LL;
      goto LABEL_7;
    }
    v4 = 87;
  }
  else
  {
    v4 = 5;
  }
  UserSetLastError(v4);
LABEL_7:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v3;
}
