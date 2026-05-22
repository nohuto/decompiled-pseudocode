/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180043C40
 * Callers:
 *     <none>
 * Callees:
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x180043DDC (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  bool v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rdi
  const char *v5; // r9
  signed __int32 v6; // edi
  bool v7; // sf
  unsigned __int32 v8; // edi
  __int64 v9; // rbp
  const char *v10; // r9
  signed __int32 v11; // edx
  signed __int32 v12; // edx
  __int64 v14; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h]

  v2 = 0;
  v3 = *((_QWORD *)this + 2);
  v16 = 0LL;
  v4 = *(_QWORD *)(v3 + 32);
  if ( *(_DWORD *)(v4 + 184) != GetCurrentThreadId() )
  {
    v16 = v3;
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16));
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
  }
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
  v7 = v6 - 1 < 0;
  v8 = v6 - 1;
  if ( v7 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
      v5);
  if ( !v8 )
  {
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 24LL))(this);
    v2 = Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(this);
  }
  if ( v16 )
  {
    v9 = *(_QWORD *)(v16 + 32);
    if ( *(_DWORD *)(v9 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v10);
    *(_DWORD *)(v9 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 16) + 32LL))(*(_QWORD *)(v9 + 16));
  }
  if ( v16 )
  {
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 8), 0xFFFFFFFF);
    v7 = v11 - 1 < 0;
    v12 = v11 - 1;
    if ( v7 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v5);
    if ( !v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  }
  if ( v2 )
  {
    v14 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *))(*(_QWORD *)this + 56LL))(this);
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
  }
  return v8;
}
