/*
 * XREFs of ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802E19B0
 * Callers:
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802E2160 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z @ 0x18022D784 (-RemoveFromCache@CD2DBitmapCache@@QEAA_NPEBVIDeviceResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleBitmapRealization::NotifyInvalidResource(
        CDxHandleBitmapRealization *this,
        const struct IDeviceResource *a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this - 16);
  if ( !CD2DBitmapCache::RemoveFromCache((CDxHandleBitmapRealization *)((char *)this - 16), a2) )
  {
    v6 = v2;
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD *))(v2[41] + 32LL))(v2 + 41);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
    v4 = (__int64)(v2[45] - v2[44]) >> 3;
    while ( (_DWORD)v4 )
    {
      LODWORD(v4) = v4 - 1;
      v5 = *(void (__fastcall ****)(_QWORD, __int64))(v2[44] + 8LL * (unsigned int)v4);
      (**v5)(v5, v3);
    }
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 80LL))(v2);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v6);
  }
}
