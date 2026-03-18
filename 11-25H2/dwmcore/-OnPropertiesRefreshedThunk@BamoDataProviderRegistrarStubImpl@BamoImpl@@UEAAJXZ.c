/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x18027AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF6D4 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801CF974 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rbx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  if ( *(int *)(v1 + 8) > 0 )
  {
    v4 = v1 - 16;
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v6,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL));
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 72LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v6);
  }
  return v2;
}
