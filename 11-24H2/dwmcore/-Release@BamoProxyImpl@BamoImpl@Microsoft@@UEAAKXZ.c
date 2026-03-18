/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801A9590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A7CB4 (--1-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801A7CE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801A7D34 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct Microsoft::BamoImpl::ConnectionIndirector *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl **v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  if ( v4
    && (a2 = *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v4 + 24), *(int *)(*((_QWORD *)a2 + 4) + 8LL) > 0) )
  {
    Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, a2);
    v6 = Microsoft::BamoImpl::BamoImplObject::Release(this, v7, v8, v9);
    if ( v11 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v11[4]);
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>((Microsoft::BamoImpl::BamoImplObject **)&v11);
  }
  else
  {
    return (unsigned int)Microsoft::BamoImpl::BamoImplObject::Release(this, (__int64)a2, a3, a4);
  }
  return v6;
}
