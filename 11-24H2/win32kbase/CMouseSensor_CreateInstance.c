/*
 * XREFs of CMouseSensor_CreateInstance @ 0x140198980
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1401543E0 (--0CMouseSensor@@IEAA@XZ.c)
 */

CMouseSensor *__fastcall CMouseSensor_CreateInstance(__int64 a1)
{
  __int64 UserSessionState; // rbx
  CMouseSensor *v2; // rax
  CMouseSensor *result; // rax

  UserSessionState = W32GetUserSessionState(a1);
  *(_QWORD *)(UserSessionState + 3104) = 0LL;
  v2 = (CMouseSensor *)Win32AllocPoolZInitImpl(256LL, 0x5B8uLL, 0x43486970u);
  if ( !v2 )
    return 0LL;
  result = CMouseSensor::CMouseSensor(v2);
  if ( !result )
    return 0LL;
  *(_QWORD *)(UserSessionState + 3104) = result;
  return result;
}
