/*
 * XREFs of ?OnIdleStateChanged@BroadcastDVRComponent@@UEAAJH@Z @ 0x1801FA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_398c59650b4848a9090526bc8733f68c___ @ 0x1802B5EE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_398c59650b4848a9090526bc8733f68c___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BroadcastDVRComponent::OnIdleStateChanged(BroadcastDVRComponent *this, int a2)
{
  char *v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // [rsp+20h] [rbp-18h] BYREF
  char *v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)this - 136;
  if ( this != (BroadcastDVRComponent *)136 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))((char *)this - 136);
  if ( *((_BYTE *)this + 296) )
  {
    v9 = a2;
    v10 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v8 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, int *))Windows::Internal::ComTaskPool::QueueTask__lambda_398c59650b4848a9090526bc8733f68c___)(
           v7,
           v6,
           *((unsigned int *)this + 26),
           &v9);
    if ( v10 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA5,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v8);
    if ( v4 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
    return (unsigned int)v8;
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
    return 0LL;
  }
}
