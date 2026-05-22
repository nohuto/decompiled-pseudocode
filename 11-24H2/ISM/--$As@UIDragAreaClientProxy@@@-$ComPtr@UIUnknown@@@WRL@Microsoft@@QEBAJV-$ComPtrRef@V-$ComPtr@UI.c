/*
 * XREFs of ??$As@UIDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005E6B8
 * Callers:
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014BF4C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IDragAreaClientProxy>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_e718b12a_faef_306d_9346_9fccb7899886, a2);
}
