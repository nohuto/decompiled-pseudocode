/*
 * XREFs of ?OnAddRemoveGame@BroadcastDVRComponent@@UEAAJPEAUHWND__@@EI@Z @ 0x1803179F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180136920 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7_____lambda_525ae591d05ed530c7ae5511c000eda7___ @ 0x1803133D0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_525ae591d05ed.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::OnAddRemoveGame(
        BroadcastDVRComponent *this,
        HWND a2,
        char a3,
        unsigned int a4)
{
  unsigned int v8; // r14d
  char v9; // si
  unsigned int v11; // esi
  volatile signed __int32 **v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rcx
  int v15; // esi
  HWND v16; // [rsp+30h] [rbp-20h] BYREF
  char v17; // [rsp+38h] [rbp-18h]
  unsigned int v18; // [rsp+3Ch] [rbp-14h]
  BroadcastDVRComponent *v19; // [rsp+40h] [rbp-10h] BYREF
  char v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  volatile signed __int32 *v22; // [rsp+80h] [rbp+30h] BYREF

  v8 = 0;
  v22 = (volatile signed __int32 *)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
  v9 = 0;
  if ( a3 && a4 )
  {
    if ( a4 >= 0x21 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A4,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)0x80070057LL);
      if ( this )
        (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
      return 2147942487LL;
    }
    v8 = a4;
    if ( a4 - 6 > 2 && a4 - 24 > 3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A6,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)0x80070057LL);
      if ( this )
        (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
      return 2147942487LL;
    }
    v9 = 1;
  }
  v16 = a2;
  v17 = a3;
  v18 = v8;
  v19 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v20 = v9;
  v11 = *((_DWORD *)this + 60);
  v12 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_525ae591d05ed530c7ae5511c000eda7_____lambda_525ae591d05ed530c7ae5511c000eda7___(
          &v22,
          (__int64)&v16);
  v13 = *v12;
  *v12 = 0LL;
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v14);
  }
  v15 = SHTaskPoolQueueTask(3LL, 2LL, v11);
  if ( v13 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v19 )
    (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v15);
  (*(void (__fastcall **)(BroadcastDVRComponent *))(*(_QWORD *)this + 16LL))(this);
  return (unsigned int)v15;
}
