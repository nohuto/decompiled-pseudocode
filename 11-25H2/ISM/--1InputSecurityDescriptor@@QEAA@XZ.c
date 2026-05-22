/*
 * XREFs of ??1InputSecurityDescriptor@@QEAA@XZ @ 0x18007F65C
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000EB24 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18000EE68 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800CF904 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015E628 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x18019EBF8 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 *     _DWMCursorBroker::Initialize_::_1_::dtor$1 @ 0x1801C8694 (_DWMCursorBroker--Initialize_--_1_--dtor$1.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$0 @ 0x1801CA291 (_DWMInputRouter--Initialize_--_1_--dtor$0.c)
 *     _DWMInputRouter::Initialize_::_1_::dtor$1 @ 0x1801CA2A3 (_DWMInputRouter--Initialize_--_1_--dtor$1.c)
 *     _ButtonRecognizer::Initialize_::_1_::dtor$0 @ 0x1801CB249 (_ButtonRecognizer--Initialize_--_1_--dtor$0.c)
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
