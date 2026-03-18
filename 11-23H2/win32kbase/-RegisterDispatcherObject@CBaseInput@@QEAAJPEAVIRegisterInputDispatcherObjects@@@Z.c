/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00768C0
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1C0084588 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00385C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C00535B8 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C00765B0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C00769D4 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C0076A14 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  CRIMBase::SensorDispatcherObject *v2; // rbp
  unsigned int v3; // edi
  unsigned int i; // ebx
  __int64 v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE v14[4]; // [rsp+30h] [rbp-648h] BYREF
  int v15; // [rsp+34h] [rbp-644h]
  _QWORD v16[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = (CBaseInput *)((char *)this + 168);
  v3 = 0;
  for ( i = 0; i < 0x11; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v7 = 3LL * v3;
      v16[3 * v3] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v16[3 * v3 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v2) )
      {
        v15 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 346LL);
      }
      ++v3;
      v16[v7 + 1] = *((_QWORD *)v2 + 5);
    }
    v2 = (CRIMBase::SensorDispatcherObject *)((char *)v2 + 64);
  }
  v8 = 0;
  if ( v3 )
  {
    v8 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
           a2,
           this,
           v3,
           v16);
    if ( v8 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v14);
      CBaseInput::OnPnpNotification(this);
      if ( !v14[0] )
        UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
    }
  }
  return (unsigned int)v8;
}
