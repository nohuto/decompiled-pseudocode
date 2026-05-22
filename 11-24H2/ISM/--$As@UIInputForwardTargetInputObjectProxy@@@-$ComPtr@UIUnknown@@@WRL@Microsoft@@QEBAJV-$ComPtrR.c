/*
 * XREFs of ??$As@UIInputForwardTargetInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardTargetInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005CDD0
 * Callers:
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801A7238 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardTargetInputObjectProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_d4ef4959_f5fd_4cf7_9e90_49eefb52f5a4, a2);
}
