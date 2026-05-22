/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007F48C
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000F284 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18000F5C8 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18004F884 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2294 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015F458 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1801A6208 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$1 @ 0x1801CFB34 (_DWMCursorBroker--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x1801D22FC (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x1801D230E (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1801D26E9 (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall InputSecurityDescriptor::~InputSecurityDescriptor(InputSecurityDescriptor *this)
{
  void *v2; // rcx

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 8) )
      FreeTransientObjectSecurityDescriptor(v2);
    else
      LocalFree(v2);
    *(_QWORD *)this = 0LL;
  }
}
