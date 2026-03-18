/*
 * XREFs of ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180270E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801A7CE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801A7D34 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8994 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x180270188 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Release(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  bool v2; // di
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rax
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, this[2]);
  v7 = Microsoft::BamoImpl::BamoImplObject::Release((Microsoft::BamoImpl::BamoImplObject *)this, v3, v4, v5);
  if ( !v7 )
    v2 = Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies(
           (Microsoft::BamoImpl::BamoPrincipalImpl *)this,
           v6,
           v8,
           v9);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v12);
  if ( v2 )
  {
    v10 = (*((__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector **))*this + 7))(this);
    if ( v10 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
  }
  return v7;
}
