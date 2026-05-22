/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E884
 * Callers:
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x18006FB80 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 *     ??0Win32kInterop@@QEAA@XZ @ 0x1800EF148 (--0Win32kInterop@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x180165F9C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_b07e28b8d9a43b43078b009fd4c08247___ @ 0x18016A0D0 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Windows--Foundati.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_de6bcc426287dbdda407399e3f0c7994___ @ 0x18016A160 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Wind_ea_18016A160.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::IPropertyValue___lambda_7c875662d6abaa9f8d1386a75bd755d7___ @ 0x18016A1EC (Windows--Internal--MakeOpLambda_0_Windows--Internal--CMarshaledInterfaceResult_Wind_ea_18016A1EC.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_16bcd66e868557b6123b295398ded03e___ @ 0x18016A284 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_16bcd66e868557b6123b29539.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_2c3f3b4f1bafb50fab998dee840e32d8___ @ 0x18016A314 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_2c3f3b4f1bafb50fab998dee8.c)
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_a408cc100a5b103155a70fabf7a2049b___ @ 0x18016A3AC (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_a408cc100a5b103155a70fabf.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18009D6F0 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
