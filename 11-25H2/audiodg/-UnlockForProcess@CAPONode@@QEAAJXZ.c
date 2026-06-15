/*
 * XREFs of ?UnlockForProcess@CAPONode@@QEAAJXZ @ 0x140008E88
 * Callers:
 *     ?DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z @ 0x1400090A0 (-DeactivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@@Z.c)
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x14000AC20 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     wil::details::lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___::_lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___ @ 0x140058114 (wil--details--lambda_call__lambda_64d0eb5368601f43b2aeea154398bca8___--_lambda_call__lambda_64d0.c)
 *     ?CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400810F0 (-CancelGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterAPONotifications@CAPONode@@QEAAJXZ @ 0x140008EF8 (-UnregisterAPONotifications@CAPONode@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPONode::UnlockForProcess(CAPONode *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CAPONode::UnregisterAPONotifications(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C7,
      (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
      (const char *)(unsigned int)v2);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C8,
    (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
