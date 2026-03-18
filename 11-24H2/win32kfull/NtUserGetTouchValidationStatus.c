/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x140297200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     _GetTouchValidationStatus @ 0x140279C74 (_GetTouchValidationStatus.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  if ( !a1 || (LOBYTE(v4) = 19, (v3 = HMValidateHandleWithDescriptor(a1, v4)) != 0) )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3, v4);
  }
  else
  {
    UserSetLastError(6);
    UserSetLastError(0);
  }
  UserSessionSwitchLeaveCrit(v5);
  return TouchValidationStatus;
}
