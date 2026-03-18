/*
 * XREFs of DxgkKsrSaveAdapterState @ 0x14020AEC0
 * Callers:
 *     ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x140249830 (-DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkKsrSaveAdapterState(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = *(_QWORD *)(a1 + 3128);
  result = 0LL;
  *a4 = 0;
  if ( v4 )
  {
    v6 = *(_QWORD *)(v4 + 1864);
    if ( v6 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  }
  return result;
}
