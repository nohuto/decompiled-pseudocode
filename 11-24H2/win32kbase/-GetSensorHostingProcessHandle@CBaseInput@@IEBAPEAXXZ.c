/*
 * XREFs of ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x14020C618
 * Callers:
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x140210BA4 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::GetSensorHostingProcessHandle(CBaseInput *this)
{
  __int64 v1; // rcx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v5 = -1LL;
  v2 = ObOpenObjectByPointer(*(PVOID *)(v1 + 32), 0x200u, 0LL, 0x20000u, 0LL, 0, (PHANDLE)&v5);
  v3 = v5;
  if ( v2 < 0 )
    return -1LL;
  return v3;
}
