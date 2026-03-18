/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020BD10
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1400E4040 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     RawInputManagerObjectResolveHandle @ 0x140054EF0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1400DA4B0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14014F6E0 (RIMRegisterForInputWithCallbacks.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x14020BB1C (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *const a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // r14
  int DispatcherHandles; // r15d
  void *DispatcherHandleByName; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // ebp
  bool v17; // bl
  __int64 UserSessionState; // rax
  int v19; // r8d
  int v20; // edx

  if ( a3 > 0x13 )
    return 3221225485LL;
  v8 = 0LL;
  v9 = 1;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v10 >= 0x13 )
        return 3221225485LL;
      if ( dword_140270180[3 * v10] != (_DWORD)v10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 197);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 56 * v10 + 168),
                            (const struct CRIMBase::DispatcherCreation *)&dword_140270180[3 * v10]);
      if ( DispatcherHandles < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v9 = 0;
        }
        v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          LOBYTE(v19) = v17;
          LOBYTE(v20) = v9;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v20,
            v19,
            *(_QWORD *)(UserSessionState + 69400),
            2,
            2,
            10,
            (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
            v10);
        }
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 0, 0);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 208);
  v13 = CRIMBase::GetDispatcherHandleByName((__int64)this, 3u, 0);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 211);
  v14 = CRIMBase::GetDispatcherHandleByName((__int64)this, 1u, 0);
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 80;
  v15 = RIMRegisterForInputWithCallbacks(
          *((_DWORD *)this + 36),
          0LL,
          0,
          0LL,
          (__int64)gpWin32kDriverObject,
          DispatcherHandleByName,
          v13,
          v14,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          0LL,
          0,
          (HANDLE *)this + 1);
  if ( v15 >= 0 )
  {
    CPushLock::AcquireLockExclusive((CRIMBase *)((char *)this + 152));
    v15 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v15 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 239);
    CPushLock::ReleaseLock((CRIMBase *)((char *)this + 152));
  }
  return (unsigned int)v15;
}
