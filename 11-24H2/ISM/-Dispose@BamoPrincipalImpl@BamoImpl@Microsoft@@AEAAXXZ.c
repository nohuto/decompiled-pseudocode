/*
 * XREFs of ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1800431B8
 * Callers:
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x180043DDC (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 * Callees:
 *     ?DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@@Z @ 0x1800434A0 (-DisconnectFromPrincipal@BamoStubImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalI.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1800719C4 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180079928 (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18007FA14 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rsi
  const char *v3; // r9
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rcx
  _QWORD *i; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(v2);
  v4 = *((unsigned int *)this + 6);
  *((_DWORD *)this + 6) = 0;
  if ( *((_QWORD *)v2 + 8) && (_DWORD)v4 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(v2, v4);
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  v6 = (_QWORD *)((char *)this + 32);
  if ( v5 )
  {
    do
    {
      v7 = v5[4];
      v8 = 0LL;
      for ( i = *(_QWORD **)(v7 + 56); i; i = (_QWORD *)i[6] )
      {
        if ( i == v5 )
        {
          v4 = v5[6];
          if ( v8 )
            v8[6] = v4;
          else
            *(_QWORD *)(v7 + 56) = v4;
          v5[6] = 0LL;
          break;
        }
        v8 = i;
      }
      if ( !i )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x101,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPeer.inl",
          v3);
      LOBYTE(v4) = 1;
      Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal(v5, v4, 0LL);
      v5 = (_QWORD *)v5[5];
    }
    while ( v5 );
    v6 = (_QWORD *)((char *)this + 32);
  }
  v10 = (__int64 *)*((_QWORD *)this + 4);
  *v6 = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(v2);
  if ( v10 )
  {
    do
    {
      v11 = *v10;
      v12 = (__int64 *)v10[5];
      v10[5] = 0LL;
      (*(void (__fastcall **)(__int64 *))(v11 + 8))(v10);
      v10 = v12;
    }
    while ( v12 );
  }
}
