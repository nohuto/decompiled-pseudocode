/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18009C27C
 * Callers:
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x180035D30 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180035DB0 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     _lambda_0ed677524a6dc3cf61a74a5bf9087e56_::operator() @ 0x1800368AC (_lambda_0ed677524a6dc3cf61a74a5bf9087e56_--operator().c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180067950 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18009C24C (-_ScheduleApplicationNotification@CImmersiveApp@@AEAAXW4IMM_APP_CHANGED@@PEAUHWND__@@@Z.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x18009D610 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180036BC4 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18009C7D4 (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x1801B57C8 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D50F8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3)
{
  void (__fastcall *v6)(char *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  char v10; // al
  __int64 (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rbx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  const struct APP_CHANGE_INFO *v16; // rcx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  _BYTE *v19; // rax
  _BYTE *v20; // r15
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  const struct APP_CHANGE_INFO *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r13
  _QWORD *v26; // rax
  const struct std::nothrow_t *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v31; // r12
  __int64 v32; // r14
  unsigned int Ptr; // r13d
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rsi
  unsigned __int8 (__fastcall *v37)(CImmersiveApp *); // rax
  char *i; // rbx
  __int64 v39; // r8
  unsigned __int64 j; // rdx
  __int64 v41; // [rsp+30h] [rbp-50h] BYREF
  __int64 v42[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v43[2]; // [rsp+48h] [rbp-38h] BYREF
  void *v44; // [rsp+58h] [rbp-28h]
  __int64 v45; // [rsp+60h] [rbp-20h]
  unsigned __int64 v46; // [rsp+68h] [rbp-18h] BYREF
  __int64 v47[2]; // [rsp+70h] [rbp-10h] BYREF
  int v48; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v49; // [rsp+D8h] [rbp+58h] BYREF

  v42[0] = 0LL;
  v48 = 2;
  v6 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL);
  v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(v42);
  v6((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, v7);
  v8 = v42[0];
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v42[0];
  v42[1] = v42[0];
  if ( v42[0] )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42[0] + 8LL))(v42[0]);
    v8 = v42[0];
  }
  if ( v8 )
  {
    v42[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v9 )
  {
    if ( *((_BYTE *)this + 792) )
    {
      if ( (*((_BYTE *)this + 568) & 1) != 0 )
      {
        if ( *((_QWORD *)this + 57) )
        {
          v22 = 0LL;
          v23 = a2;
          while ( v22 < a3 )
          {
            if ( *(_DWORD *)v23 == 8 )
              goto LABEL_36;
            ++v22;
            v23 = (const struct APP_CHANGE_INFO *)((char *)v23 + 16);
          }
        }
      }
      else
      {
LABEL_36:
        CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
        *((_BYTE *)this + 792) = 0;
      }
    }
    if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112);
      Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
        (CImmersiveApp *)((char *)this + 128),
        v10 != 0);
      v48 = 0;
      v49 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v49);
      v49 = 0LL;
      v41 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
      v41 = 0LL;
      v42[0] = 0LL;
      v11 = **v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v42);
      v12 = v11(v9, &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a, v42);
      if ( v12 >= 0 )
        v12 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v42[0] + 24LL))(
                v42[0],
                &SID_ImmersiveApplicationListeners,
                &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
                &v41);
      v13 = v42[0];
      if ( v42[0] )
      {
        v42[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v12 >= 0 )
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 24LL))(v41, &v49);
      v14 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( v12 >= 0 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 24LL))(v49, &v48) >= 0 && v48 )
      {
        v15 = a3;
        if ( a3 )
        {
          v16 = a2;
          v17 = a3;
          do
          {
            v15 += qword_1808C00F0[4 * *(int *)v16 + 2];
            v16 = (const struct APP_CHANGE_INFO *)((char *)v16 + 16);
            --v17;
          }
          while ( v17 );
        }
        v18 = 16 * v15;
        if ( !is_mul_ok(v15, 0x10uLL) )
          v18 = -1LL;
        v19 = operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
        v20 = v19;
        if ( v19 )
        {
          for ( i = v19; a3; --a3 )
          {
            *(_OWORD *)i = *(_OWORD *)a2;
            if ( *(_DWORD *)i != 6 && *(_DWORD *)i != 12 && !*((_QWORD *)i + 1) )
              *((_QWORD *)i + 1) = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 288));
            v36 = 4LL * *(int *)a2;
            if ( qword_1808C00F0[v36 + 1] )
            {
              v37 = (unsigned __int8 (__fastcall *)(CImmersiveApp *))qword_1808C00F0[v36 + 3];
              if ( !v37 || v37(this) )
              {
                v39 = *((_QWORD *)i + 1);
                for ( j = 0LL; j < qword_1808C00F0[v36 + 2]; ++j )
                {
                  i += 16;
                  *(_DWORD *)i = *(_DWORD *)(qword_1808C00F0[v36 + 1] + 4 * j);
                  *((_QWORD *)i + 1) = v39;
                }
              }
            }
            i += 16;
            a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
          }
          v24 = (i - v20) >> 4;
          v25 = v49;
          v44 = v20;
          v45 = v24;
          v46 = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v46);
          v47[0] = v25;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v47);
          v26 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
          v28 = (__int64)v26;
          if ( v26 )
          {
            v26[3] = 0LL;
            v26[4] = 0LL;
            v26[1] = v20;
            v26[2] = v24;
            v46 = 0LL;
            v29 = v26[3];
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            *(_QWORD *)(v28 + 24) = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
            v47[0] = 0LL;
            v30 = *(_QWORD *)(v28 + 32);
            if ( v30 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            *(_QWORD *)(v28 + 32) = v25;
            v20 = 0LL;
            v44 = 0LL;
            v45 = 0LL;
            *(_QWORD *)v28 = &CRefCountedObject<APP_NOTIFICATION_DATA>::`vftable';
            *(_DWORD *)(v28 + 40) = 0;
          }
          else
          {
            v28 = 0LL;
          }
          if ( v28 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
            v31 = *((_BYTE *)this + 743);
            v32 = v28;
            v43[0] = v28;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v43);
            Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
            v34 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
            v35 = v34;
            if ( v34 )
            {
              Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v34);
              v35[2] = 0LL;
              if ( v35 + 2 != v43 )
              {
                v35[2] = v28;
                v32 = 0LL;
              }
              *((_BYTE *)v35 + 24) = v31;
              *v35 = &off_180711178;
            }
            else
            {
              v35 = 0LL;
            }
            SHTaskPoolQueueTask(3LL, 2LL, Ptr);
            if ( v35 )
              (*(void (__fastcall **)(_QWORD *))(*v35 + 16LL))(v35);
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          operator delete(v20, v27);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v47);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
        }
      }
      v21 = v49;
      if ( v49 )
      {
        v49 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
}
