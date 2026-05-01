/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x18009CDE8
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180043DF0 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x18009BFF8 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v2; // rdi
  _QWORD *v3; // rsi
  ZBAND_NOTIFICATION_DATA *v4; // rax
  unsigned int Ptr; // r15d
  __int64 *v6; // rax
  __int64 *v7; // rbx
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  ZBAND_NOTIFICATION_DATA *v10; // rcx
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 42);
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = v2;
    v2 = 0LL;
    v3[1] = v4;
    *v3 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v3 + 4) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    *((_QWORD *)this + 42) = 0LL;
    v11[0] = (__int64)v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    Ptr = (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr;
    v6 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
      v7[2] = 0LL;
      v8 = v3;
      v9 = v3;
      if ( v7 + 2 != v11 )
      {
        v7[2] = (__int64)v3;
        v8 = 0LL;
        v9 = 0LL;
      }
      *v7 = (__int64)&off_18071CC78;
    }
    else
    {
      v8 = v3;
      v9 = v3;
      v7 = 0LL;
    }
    SHTaskPoolQueueTask(3LL, 2LL, Ptr);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
      v8 = v9;
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  }
  else
  {
    v10 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 42);
    if ( v10 )
      ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v10);
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  if ( v2 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v2);
}
