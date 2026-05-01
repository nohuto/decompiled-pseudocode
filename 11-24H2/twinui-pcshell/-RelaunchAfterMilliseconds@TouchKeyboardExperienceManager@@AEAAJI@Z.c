/*
 * XREFs of ?RelaunchAfterMilliseconds@TouchKeyboardExperienceManager@@AEAAJI@Z @ 0x1804738A8
 * Callers:
 *     _lambda_2f931dcef3c075f3fb52ee5cb82c048c_::operator() @ 0x18046D77C (_lambda_2f931dcef3c075f3fb52ee5cb82c048c_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800858F0 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802C5680 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CE054 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3_____lambda_8564353b7dc6971d7da83ff0ca7e4bd3___ @ 0x180468DE4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8564353b7dc69.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::RelaunchAfterMilliseconds(
        TouchKeyboardExperienceManager *this,
        int a2)
{
  __int64 *v4; // rax
  unsigned int v5; // esi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // edi
  __int64 v11[2]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+80h] [rbp+30h] BYREF
  TouchKeyboardExperienceManager *v16; // [rsp+88h] [rbp+38h] BYREF

  v16 = this;
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef((__int64 *)&v16);
  v14 = 0LL;
  v15 = (volatile signed __int32 *)&v14;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v15);
  Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v4);
  v11[0] = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v11[1] = (__int64)this;
  v12 = a2;
  v5 = *((_DWORD *)this + 243);
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3_____lambda_8564353b7dc6971d7da83ff0ca7e4bd3___(
         &v15,
         (__int64)v11);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(0LL, 2LL, v5);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1021,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v9;
}
