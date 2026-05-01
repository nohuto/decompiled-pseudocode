/*
 * XREFs of TestOpen @ 0x1801D2320
 * Callers:
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x18028A320 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x180193D60 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TestOpen(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  __int64 (__fastcall *v5)(_QWORD, _QWORD, __int64, __int64, _OWORD *); // r10
  char v7; // di
  HMODULE KernelBaseModuleHandle; // rax

  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _OWORD *))`TestOpen'::`2'::s_pfnTestOpen;
  v7 = a3;
  if ( `TestOpen'::`2'::s_pfnTestOpen
    || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
        `TestOpen'::`2'::s_pfnTestOpen = (__int64)GetProcAddress(KernelBaseModuleHandle, "TestOpen"),
        (v5 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _OWORD *))`TestOpen'::`2'::s_pfnTestOpen) != 0LL) )
  {
    LOBYTE(a3) = v7;
    return v5(a1, a2, a3, a4, a5);
  }
  else
  {
    *a5 = 0LL;
    a5[1] = 0LL;
    a5[2] = 0LL;
    return 0LL;
  }
}
