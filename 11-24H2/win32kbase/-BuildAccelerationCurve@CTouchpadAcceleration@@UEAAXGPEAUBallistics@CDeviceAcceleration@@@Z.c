/*
 * XREFs of ?BuildAccelerationCurve@CTouchpadAcceleration@@UEAAXGPEAUBallistics@CDeviceAcceleration@@@Z @ 0x1401439A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z @ 0x1402205E4 (-_BuildAccelerationCurve@CDeviceAcceleration@@IEAAXPEAUCurve@1@GI@Z.c)
 */

void __fastcall CTouchpadAcceleration::BuildAccelerationCurve(
        CTouchpadAcceleration *this,
        unsigned __int16 a2,
        struct CDeviceAcceleration::Ballistics *a3)
{
  __int64 UserSessionState; // rax
  unsigned int v7; // r9d

  if ( *((_BYTE *)this + 8) )
  {
    UserSessionState = W32GetUserSessionState(this);
    v7 = *(_DWORD *)(UserSessionState + 16792);
    if ( !v7 )
    {
      v7 = *((_DWORD *)this + 24);
      *(_DWORD *)(UserSessionState + 16792) = v7;
    }
    CDeviceAcceleration::_BuildAccelerationCurve(
      this,
      (struct CDeviceAcceleration::Ballistics *)((char *)a3 + 144),
      a2,
      v7);
  }
}
