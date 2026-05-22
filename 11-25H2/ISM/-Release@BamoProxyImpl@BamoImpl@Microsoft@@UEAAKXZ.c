/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18004E950
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18004EB10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rsi
  const char *v8; // r9
  signed __int32 v9; // edi
  bool v10; // sf
  int v11; // edi
  __int64 v12; // rbp
  const char *v13; // r9
  signed __int32 v14; // edx
  signed __int32 v15; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+30h] [rbp+8h]

  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 24);
    v7 = *(_QWORD *)(v6 + 32);
    if ( *(int *)(v7 + 8) <= 0 )
    {
      v11 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
      if ( v11 < 0 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
          a4);
      if ( !v11 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 24LL))(this);
    }
    else
    {
      v18 = 0LL;
      if ( *(_DWORD *)(v7 + 184) != GetCurrentThreadId() )
      {
        v18 = v6;
        if ( v6 )
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 24LL))(*(_QWORD *)(v7 + 16));
        *(_DWORD *)(v7 + 184) = GetCurrentThreadId();
      }
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF);
      v10 = v9 - 1 < 0;
      v11 = v9 - 1;
      if ( v10 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x33,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
          v8);
      if ( !v11 )
        (*(void (__fastcall **)(Microsoft::BamoImpl::BamoProxyImpl *))(*(_QWORD *)this + 24LL))(this);
      if ( v18 )
      {
        v12 = *(_QWORD *)(v18 + 32);
        if ( *(_DWORD *)(v12 + 184) != GetCurrentThreadId() )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x9A3,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v13);
        *(_DWORD *)(v12 + 184) = 0;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 16) + 32LL))(*(_QWORD *)(v12 + 16));
      }
      if ( v18 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF);
        v10 = v14 - 1 < 0;
        v15 = v14 - 1;
        if ( v10 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x33,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
            v8);
        if ( !v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
      }
    }
  }
  else
  {
    return Microsoft::BamoImpl::BamoImplObject::Release(this);
  }
  return (unsigned int)v11;
}
