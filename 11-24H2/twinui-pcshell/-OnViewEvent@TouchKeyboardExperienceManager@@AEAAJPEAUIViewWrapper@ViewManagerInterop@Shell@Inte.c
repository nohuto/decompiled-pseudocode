/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18009AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800479B8 (--4-$shared_ptr@VFlyoutView@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18009AC6C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1801CFD50 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801D2E90 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801E455C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?ViewVisibilityRevokedChanged@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180223BAC (-ViewVisibilityRevokedChanged@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x180469048 (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___ @ 0x180469880 (wil--ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  struct EventRegistrationToken v6; // r8
  unsigned int v7; // ebx
  struct IUnknown ***Ptr; // rbx
  struct IUnknown ***v10; // r14
  int v11; // eax
  std::_Ref_count_base *v12; // rbx
  const struct _tlgProvider_t *v13; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp-30h] BYREF
  int v21[2]; // [rsp+48h] [rbp-28h] BYREF
  const char **v22; // [rsp+50h] [rbp-20h]
  std::_Ref_count_base *v23[2]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v25; // [rsp+B0h] [rbp+40h] BYREF
  const char *v26; // [rsp+B8h] [rbp+48h] BYREF

  v25 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v25);
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( v25 )
    {
      if ( v25 == 4 )
      {
        *(_OWORD *)v23 = 0LL;
        AcquireSRWLockExclusive(this + 53);
        *(_QWORD *)v21 = this + 53;
        Ptr = (struct IUnknown ***)this[54].Ptr;
        v10 = (struct IUnknown ***)this[55].Ptr;
        while ( Ptr != v10 && !(unsigned int)SHIsSameObject(**Ptr, a2) )
          Ptr += 2;
        v26 = (const char *)Ptr;
        if ( Ptr != this[55].Ptr )
        {
          std::shared_ptr<FlyoutView>::operator=(v23, Ptr);
          *(_QWORD *)v21 = this;
          v22 = &v26;
          v11 = wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8___(v21);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10A0,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v11);
        }
        if ( this != (RTL_SRWLOCK *)-424LL )
          ReleaseSRWLockExclusive(this + 53);
        v12 = v23[0];
        v13 = TouchKeyboardExperienceTraceLogging::Provider();
        if ( v12 )
        {
          v16 = (int)v13;
          if ( *(_DWORD *)v13 > 5u )
          {
            LODWORD(v26) = *((_DWORD *)v12 + 26);
            StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)v12 + 14), 0LL);
            *(_QWORD *)v21 = "viewInfo destroyed";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v16,
              (unsigned int)&unk_1807FC743,
              v17,
              v18,
              (__int64)v21,
              (__int64)&StringRawBuffer,
              (__int64)&v26);
          }
          v19 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, v12);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10AB,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v19);
          (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this[73].Ptr + 16) + 216LL))(
            *((_QWORD *)this[73].Ptr + 16),
            *((unsigned int *)v12 + 26));
        }
        else if ( *(_DWORD *)v13 > 5u )
        {
          v26 = "viewInfo destroyed - no matching viewInfo";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
            (_DWORD)v13,
            (unsigned int)&unk_1807FC7A7,
            v14,
            v15,
            (__int64)&v26);
        }
        if ( v23[1] )
          std::_Ref_count_base::_Decref(v23[1]);
      }
      else if ( v25 == 7 )
      {
        TouchKeyboardExperienceTelemetryLogger::ViewVisibilityRevokedChanged();
      }
    }
    else
    {
      LODWORD(v26) = TouchKeyboardExperienceManager::OnViewCreated(
                       (TouchKeyboardExperienceManager *)this,
                       (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
                       v6);
      if ( (int)v26 < 0 )
        TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>(&v26);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
