/*
 * XREFs of ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x180293FA4
 * Callers:
 *     ?NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z @ 0x1804729B0 (-NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800858F0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::_lambda_76f340d5d82a2ae937276f5837d7f307_ @ 0x180294100 (_lambda_76f340d5d82a2ae937276f5837d7f307_--_lambda_76f340d5d82a2ae937276f5837d7f307_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___ @ 0x180294174 (Windows--Internal--ComTaskPool--QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::__lambda_76f340d5d82a2ae937276f5837d7f307_ @ 0x1802941F8 (_lambda_76f340d5d82a2ae937276f5837d7f307_--__lambda_76f340d5d82a2ae937276f5837d7f307_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppPropertyChanged(
        TouchKeyboardExperienceManager *this,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  WCHAR *v6; // rax
  __int64 *v7; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-61h] BYREF
  int v17[8]; // [rsp+40h] [rbp-59h] BYREF
  void *v18[4]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v19[80]; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring((char **)v18, StringRawBuffer);
  v6 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  std::wstring::wstring((char **)v17, v6);
  v15 = 0LL;
  v16 = &v15;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
  v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16A7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_8:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v15);
    goto LABEL_9;
  }
  v16 = (__int64 *)this;
  v10 = lambda_76f340d5d82a2ae937276f5837d7f307_::_lambda_76f340d5d82a2ae937276f5837d7f307_(
          (unsigned int)v19,
          (unsigned int)&v15,
          (unsigned int)&v16,
          (unsigned int)v18,
          (__int64)v17);
  v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_76f340d5d82a2ae937276f5837d7f307___(
         v12,
         v11,
         *((unsigned int *)this + 243),
         v10);
  lambda_76f340d5d82a2ae937276f5837d7f307_::__lambda_76f340d5d82a2ae937276f5837d7f307_(v19);
  if ( v9 >= 0 )
  {
    v9 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16ED,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  v13 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_9:
  std::wstring::_Tidy_deallocate((void **)v17);
  std::wstring::_Tidy_deallocate(v18);
  return (unsigned int)v9;
}
