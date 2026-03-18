/*
 * XREFs of ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1801A7E3C
 * Callers:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801A7A90 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1801A7D34 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1801A9164 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18026DE70 (-AddRef@BaseBamoConnectionImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801A7CE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

Microsoft::BamoImpl::BamoImplObject **__fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
        Microsoft::BamoImpl::BamoImplObject **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v5; // rcx

  v5 = *a1;
  *a1 = (Microsoft::BamoImpl::BamoImplObject *)a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  if ( v5 )
    Microsoft::BamoImpl::BamoImplObject::Release(v5, a2, a3, a4);
  return a1;
}
