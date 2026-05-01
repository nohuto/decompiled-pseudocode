/*
 * XREFs of wistd::__function::__func__lambda_717e164a524f047529d307b394259e9b__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1802A4C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_358e99305f92347d1d7773659819cb56___ @ 0x1801FF000 (Windows--Internal--ComTaskPool--QueueTask__lambda_358e99305f92347d1d7773659819cb56___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wistd::__function::__func__lambda_717e164a524f047529d307b394259e9b__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a2 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v5 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_358e99305f92347d1d7773659819cb56___(v2, &v5);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xED,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v5);
  }
}
