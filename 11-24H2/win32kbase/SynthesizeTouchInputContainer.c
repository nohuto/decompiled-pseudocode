/*
 * XREFs of SynthesizeTouchInputContainer @ 0x1402191B8
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x14020F5D0 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401221F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140203D88 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x140218CB0 (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(struct RIMCOMPLETEFRAME *a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  int InjectionDevice; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  _QWORD *v11; // rcx
  PERESOURCE *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19344) )
  {
    UserSessionState = W32GetUserSessionState(v2);
    if ( !HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 19384), 19) )
      *(_QWORD *)(W32GetUserSessionState(v2) + 19344) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v2) + 19344) || (InjectionDevice = CreateInjectionDevice(v4)) != 0 )
  {
    v6 = W32GetUserSessionState(v4);
    v7 = HMValidateHandleNoSecure(*(_QWORD *)(v6 + 19384), 19);
    InputTraceLogging::RIM::InjectInput(v7);
    v9 = W32GetUserSessionState(v8);
    v10 = 0;
    *((_QWORD *)a1 + 4) = *(_QWORD *)(v9 + 19344);
    v11 = (_QWORD *)*((_QWORD *)a1 + 29);
    *((_DWORD *)a1 + 48) = 1;
    if ( *((_DWORD *)a1 + 6) )
    {
      v11 += 4;
      do
      {
        ++v10;
        *v11 = *((_QWORD *)a1 + 4);
        v11 += 24;
      }
      while ( v10 < *((_DWORD *)a1 + 6) );
    }
    v12 = *(PERESOURCE **)(W32GetUserSessionState(v11) + 3264);
    v14 = W32GetUserSessionState(v13);
    CTouchProcessor::ProcessInjectedInput(v12, *(void **)(v14 + 19344), a1, 0, 0, 0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
