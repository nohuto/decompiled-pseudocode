/*
 * XREFs of CKeyboardSensor_Destroy @ 0x140146A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x140146AA4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

__int64 __fastcall CKeyboardSensor_Destroy(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rcx

  result = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(result + 12928) )
  {
    v3 = *(_QWORD **)(W32GetUserSessionState(v2) + 12928);
    if ( v3 )
    {
      *v3 = &CRIMBase::`vftable';
      CDeviceAcceleration::operator delete(v3);
    }
    result = W32GetUserSessionState(v3);
    *(_QWORD *)(result + 12928) = 0LL;
  }
  return result;
}
