/*
 * XREFs of ??1?$com_ptr_t@VBamoEdgyNotificationSourceClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180061F48
 * Callers:
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x180061DB0 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<BamoEdgyNotificationSourceClientProxy,wil::err_returncode_policy>::~com_ptr_t<BamoEdgyNotificationSourceClientProxy,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
