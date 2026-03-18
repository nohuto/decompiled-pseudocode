/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E46B0
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E4154 (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 * Callees:
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140061410 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E47E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E486C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z @ 0x14020C324 (-GetDispatcherHandleByIndex@CRIMBase@@IEBAPEAXIW4HandleAccessMode@1@@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x14020C3BC (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x14020CCC0 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rbp
  unsigned int i; // edi
  int v6; // ebx
  _BYTE v8[16]; // [rsp+30h] [rbp-638h] BYREF
  _QWORD v9[192]; // [rsp+40h] [rbp-628h] BYREF

  v2 = 0LL;
  for ( i = 0; i < 0x13; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v9[3 * v2] = CRIMBase::GetDispatcherObjectByIndex(this, i);
      v9[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      v9[3 * v2 + 1] = CRIMBase::GetDispatcherHandleByIndex(this, i);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  v6 = 0;
  if ( (_DWORD)v2 )
  {
    v6 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
           a2,
           this,
           (unsigned int)v2,
           v9);
    if ( v6 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v8);
      CBaseInput::OnPnpNotification(this);
      ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)v8);
    }
  }
  return (unsigned int)v6;
}
