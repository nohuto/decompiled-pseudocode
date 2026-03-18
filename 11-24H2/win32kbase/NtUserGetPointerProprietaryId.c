/*
 * XREFs of NtUserGetPointerProprietaryId @ 0x14016D880
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x140126B58 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerProprietaryId(unsigned __int16 a1, void *a2)
{
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  char PointerProprietaryId; // al
  int v7; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _GUID Src; // [rsp+40h] [rbp-28h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v9, 1LL);
  Src = 0LL;
  UserSessionState = W32GetUserSessionState(v4);
  PointerProprietaryId = CTouchProcessor::GetPointerProprietaryId(
                           *(CTouchProcessor **)(UserSessionState + 3264),
                           a1,
                           &Src);
  v7 = 0;
  if ( PointerProprietaryId )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
    v7 = 1;
  }
  else
  {
    UserSetLastError(232);
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return v7;
}
