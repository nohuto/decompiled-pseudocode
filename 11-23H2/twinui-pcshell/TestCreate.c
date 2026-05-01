/*
 * XREFs of TestCreate @ 0x180098EA4
 * Callers:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180045EC4 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098DD0 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1802893E8 (-start@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC __fastcall TestCreate(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r11
  char v8; // di
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))`TestCreate'::`2'::s_pfnTestCreate;
  v8 = a3;
  if ( `TestCreate'::`2'::s_pfnTestCreate
    || (KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle(),
        result = GetProcAddress(KernelBaseModuleHandle, "TestCreate"),
        `TestCreate'::`2'::s_pfnTestCreate = (__int64)result,
        (v6 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))result) != 0LL) )
  {
    LOBYTE(a3) = v8;
    return (FARPROC)v6(a1, 0LL, a3, a4, a5, a6);
  }
  return result;
}
