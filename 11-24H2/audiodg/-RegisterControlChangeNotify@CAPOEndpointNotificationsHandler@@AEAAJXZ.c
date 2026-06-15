/*
 * XREFs of ?RegisterControlChangeNotify@CAPOEndpointNotificationsHandler@@AEAAJXZ @ 0x140018580
 * Callers:
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x14001851C (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV-$forward_list@V.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14004C648 (--$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAPOEndpointNotificationsHandler::RegisterControlChangeNotify(
        CAPOEndpointNotificationsHandler *this)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, char *); // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // esi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, char *); // [rsp+50h] [rbp+8h] BYREF
  CAPOEndpointNotificationsHandler *v17; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 136) )
    return 0LL;
  v16 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 5);
  v4 = *v3;
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v4 + 24))(
         v3,
         &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
         1LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v5);
    if ( v16 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v16)[2])(v16);
    return v6;
  }
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
  v8 = **v16;
  v9 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = v8(v7, &GUID_65512d3a_e7b3_4e02_9663_19b0542ebe96, (char *)this + 144);
  v6 = v10;
  if ( v10 < 0 )
  {
    v14 = 126LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_21;
  }
  v17 = this;
  v11 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsDelegator,CAPOEndpointNotificationsHandler *>(
          (char *)this + 184,
          &v17);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 24LL))(
            *((_QWORD *)this + 18),
            *((_QWORD *)this + 23));
    v6 = v10;
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 136) = 1;
      if ( v16 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v16)[2])(v16);
      return 0LL;
    }
    v14 = 128LL;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7F,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
    (const char *)(unsigned int)v12);
  v6 = v13;
LABEL_21:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
  return v6;
}
