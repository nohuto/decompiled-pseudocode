/*
 * XREFs of ?RegisterAPONotifications@CAPONode@@QEAAJXZ @ 0x140007DB0
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPONode::RegisterAPONotifications(CAPONode *this)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 3) )
    return 0LL;
  v3 = *((_QWORD *)this + 4);
  if ( !v3 || *((_BYTE *)this + 48) )
    return 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         v3,
         (char *)this + 328);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 48) = 1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A9,
    (unsigned int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
    (const char *)(unsigned int)v4,
    v6);
  return v5;
}
