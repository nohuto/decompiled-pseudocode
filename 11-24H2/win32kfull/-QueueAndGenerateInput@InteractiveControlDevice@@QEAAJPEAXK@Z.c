/*
 * XREFs of ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1402171F8
 * Callers:
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x14021714C (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140005DB4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x14012ABF4 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x14021352C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x140220DF8 (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1402EB75C (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EC2D0 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1402EC4B4 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1402EC894 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1402EC924 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1402ECB08 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned int v6; // edx
  InteractiveControlInput *v7; // rbx
  unsigned int Messages; // edi
  unsigned __int8 *v10; // r13
  InteractiveControlInput *v11; // rax
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // r12d
  struct InteractiveControlInput *v18; // [rsp+90h] [rbp+48h] BYREF
  struct tagWND *updated; // [rsp+98h] [rbp+50h]
  int v20; // [rsp+A0h] [rbp+58h]
  const char *v21; // [rsp+A8h] [rbp+60h] BYREF

  v4 = *((unsigned __int16 *)this + 40);
  v6 = (unsigned int)a3 % *((unsigned __int16 *)this + 40);
  v7 = 0LL;
  Messages = 0;
  v18 = 0LL;
  if ( v6 )
  {
    Messages = -1073739509;
    if ( (unsigned int)dword_140398C28 > 2 )
    {
      v20 = v4;
      v21 = "InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.";
      LODWORD(v18) = a3;
      LODWORD(updated) = -1073739509;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this,
        (__int64)&unk_1403695E0,
        a3,
        a4,
        &v21);
    }
  }
  else
  {
    v10 = &a2[(unsigned int)a3];
    while ( a2 < v10 )
    {
      if ( !v7 )
      {
        v11 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
        if ( !v11 )
          return (unsigned int)-1073741670;
        v7 = InteractiveControlInput::InteractiveControlInput(v11, this);
        if ( !v7 )
          return (unsigned int)-1073741670;
      }
      v12 = InteractiveControlInput::ParseInputReport(v7, a2, v4);
      Messages = v12;
      if ( v12 < 0 )
      {
        if ( (unsigned int)dword_140398C28 > 2 )
        {
          v20 = v12;
          v18 = (struct InteractiveControlInput *)"Function failed.";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
            (__int64)&dword_140398C28,
            (__int64)&unk_1403690D7,
            v13,
            v14,
            &v18);
        }
        break;
      }
      InteractiveControlDevice::GetPreviousInputReport(this, 0LL, &v18);
      v15 = InteractiveControlDevice::DetermineMessageCreationFlags(this, v18, v7);
      v16 = v15;
      if ( v15 )
      {
        updated = InteractiveControlDevice::UpdateInputTarget(this, v15);
        InteractiveControlDevice::PerformInputActions(this, v7, v16);
        InteractiveControlDevice::QueueInput(this, 0LL, v7);
        if ( !*((_DWORD *)this + 91) )
          Messages = InteractiveControlInput::GenerateMessages((__int64)v7, updated, *((_DWORD *)this + 16), v16);
        v7 = 0LL;
      }
      a2 += v4;
    }
    if ( v7 )
      InteractiveControlInput::`scalar deleting destructor'(v7, 1u);
  }
  return Messages;
}
