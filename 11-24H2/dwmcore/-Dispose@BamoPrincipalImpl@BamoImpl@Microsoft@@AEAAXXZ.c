/*
 * XREFs of ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x18026E520
 * Callers:
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x180270188 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18026E238 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18026E730 (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x18026E768 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rsi
  unsigned int v6; // edx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 i; // rcx
  __int64 v12; // r8
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(v5, a2, a3, a4);
  v6 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = 0;
  if ( *((_QWORD *)v5 + 8) && v6 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(v5, v6);
  v7 = *((_QWORD *)this + 4);
  v8 = (_QWORD *)((char *)this + 32);
  if ( v7 )
  {
    do
    {
      v9 = *(_QWORD *)(v7 + 32);
      v10 = 0LL;
      for ( i = *(_QWORD *)(v9 + 56); i; i = *(_QWORD *)(i + 48) )
      {
        if ( i == v7 )
        {
          v12 = *(_QWORD *)(v7 + 48);
          if ( v10 )
            *(_QWORD *)(v10 + 48) = v12;
          else
            *(_QWORD *)(v9 + 56) = v12;
          *(_QWORD *)(v7 + 48) = 0LL;
          break;
        }
        v10 = i;
      }
      if ( !i )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x101,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPeer.inl",
          (const char *)retaddr);
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_BYTE *)(v7 + 56) = 0;
      v7 = *(_QWORD *)(v7 + 40);
    }
    while ( v7 );
    v8 = (_QWORD *)((char *)this + 32);
  }
  v13 = (__int64 *)*((_QWORD *)this + 4);
  *v8 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(v5);
  if ( v13 )
  {
    do
    {
      v14 = *v13;
      v15 = (__int64 *)v13[5];
      v13[5] = 0LL;
      (*(void (__fastcall **)(__int64 *))(v14 + 8))(v13);
      v13 = v15;
    }
    while ( v15 );
  }
}
