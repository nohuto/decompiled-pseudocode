/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x1802708C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801A89C4 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801A8E88 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  if ( *(int *)(v1 + 8) > 0 )
  {
    v4 = v1 - 16;
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v9,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL));
    v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 72LL))(v4, (char *)this - 16);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v9,
      v5,
      v6,
      v7);
  }
  return v2;
}
