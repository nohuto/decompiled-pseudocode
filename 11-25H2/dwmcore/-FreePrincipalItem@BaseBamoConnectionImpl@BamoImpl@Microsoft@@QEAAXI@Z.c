/*
 * XREFs of ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x180278E78
 * Callers:
 *     ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x180278C30 (-Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x18026CB3C (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x180279E44 (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  _BYTE *v6; // rdx
  int v7; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 6) == GetCurrentThreadId() )
    {
LABEL_3:
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(this, a2);
      return;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 47) )
      goto LABEL_3;
    v4 = *((_QWORD *)this + 7);
    v10 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 88LL))(v4, &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25E,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v5,
        v8);
    if ( v10 == GetCurrentThreadId() )
      goto LABEL_3;
  }
  v6 = (_BYTE *)*((_QWORD *)this + 25);
  if ( v6 == *((_BYTE **)this + 26) )
  {
    std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((__int64)this + 192, v6, &v11);
  }
  else
  {
    *(_DWORD *)v6 = a2;
    *((_QWORD *)this + 25) += 4LL;
  }
  if ( !*((_BYTE *)this + 219) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 12) + 8LL));
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), Microsoft::BamoImpl::BaseBamoConnectionImpl *, __int64))(**((_QWORD **)this + 6) + 152LL))(
           *((_QWORD *)this + 6),
           Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback,
           this,
           4LL);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4CC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v7,
        v8);
    *((_BYTE *)this + 219) = 1;
  }
}
