/*
 * XREFs of ?CreateDeviceDockClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoDeviceDockClientProxy@@@Z @ 0x180180D3C
 * Callers:
 *     ?Materialize_BamoDeviceDockClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011B06C (-Materialize_BamoDeviceDockClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ @ 0x18002EFA0 (-GetConnection@BamoPeer@ISMBamos_AutoBamos@@QEBAPEAVBamoConnection@2@XZ.c)
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x180081FBC (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateDeviceDockClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoDeviceDockClientProxy **a2)
{
  struct ISMBamos_AutoBamos::BamoConnection *Connection; // rax
  __int64 v4; // rdi
  _DWORD *v6; // [rsp+38h] [rbp+10h]

  Connection = ISMBamos_AutoBamos::BamoPeer::GetConnection(a1);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)Connection + 31) + 8LL) + 56LL))(*((_QWORD *)Connection + 31) + 8LL);
  v6 = operator new(0x38uLL);
  v6[6] = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoDeviceDockClientProxyImpl::`vftable';
  *(_QWORD *)v6 = &DeviceDockClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &DeviceDockClientProxy::`vftable'{for `IDeviceDockClientProxy'};
  wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
    (_QWORD *)v6 + 6,
    v4);
  *a2 = (struct BamoDeviceDockClientProxy *)v6;
  return 0LL;
}
