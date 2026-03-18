/*
 * XREFs of ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802DEA34
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802DE2A8 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1802DEEF0 (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1802DD458 (--$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA-AV-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CHolographicClient::ProcessRemoveExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rsi
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(&v8, &v7);
  if ( v8 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 14);
    for ( i = (__int64 *)*((_QWORD *)this + 13); i != v3 && *i != v8; ++i )
      ;
    if ( i != v3 )
    {
      while ( ++i != v3 )
      {
        v5 = *i;
        *i = 0LL;
        v6 = *(i - 1);
        *(i - 1) = v5;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 14) - 8LL));
      *((_QWORD *)this + 14) -= 8LL;
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 160LL))(*((_QWORD *)this + 3));
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v8);
}
