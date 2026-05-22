/*
 * XREFs of ??$As@UILightDismissClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILightDismissClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005CFA4
 * Callers:
 *     ??$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VLightDismissClientProxy@@@WRL@Microsoft@@XZ @ 0x18015CC60 (--$GetAttachedObject@UILightDismissClientProxy@@VLightDismissClientProxy@@@InputSite@@QEAA-AV-$C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<ILightDismissClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_fb76c7b1_2a7b_dedb_3bb3_6fad8f50be6b, a2);
}
