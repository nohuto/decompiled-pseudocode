/*
 * XREFs of CMouseSensor_Destroy @ 0x140210EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x140146A10 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CMouseSensor_Destroy(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  CRIMBase *v3; // rcx

  result = W32GetUserSessionState(a1);
  if ( *(_QWORD *)(result + 3104) )
  {
    v3 = *(CRIMBase **)(W32GetUserSessionState(v2) + 3104);
    if ( v3 )
      CRIMBase::`scalar deleting destructor'(v3, 1);
    result = W32GetUserSessionState(v3);
    *(_QWORD *)(result + 3104) = 0LL;
  }
  return result;
}
