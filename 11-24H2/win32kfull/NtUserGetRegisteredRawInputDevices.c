/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x14020F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _GetRegisteredRawInputDevices @ 0x14020F454 (_GetRegisteredRawInputDevices.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(__int64 a1, __int64 a2, int a3)
{
  unsigned int RegisteredRawInputDevices; // ebx
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v10, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
  if ( a3 == 16 )
  {
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  UserSessionSwitchLeaveCrit(v7);
  return RegisteredRawInputDevices;
}
