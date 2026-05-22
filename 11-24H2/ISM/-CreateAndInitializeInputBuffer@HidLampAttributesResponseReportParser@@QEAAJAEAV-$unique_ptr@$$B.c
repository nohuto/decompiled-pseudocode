/*
 * XREFs of ?CreateAndInitializeInputBuffer@HidLampAttributesResponseReportParser@@QEAAJAEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18008EFD0
 * Callers:
 *     ?ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@Z @ 0x1800EADC4 (-ReceiveLampAttributesReport@HidLampArrayDevice@@AEAAJHPEAULampAttributesResponseDeviceReport@@@.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800765AC (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E878 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampAttributesResponseReportParser::CreateAndInitializeInputBuffer(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  void *v6; // rax
  _BYTE *v7; // rbx
  const struct std::nothrow_t *v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = operator new[](*(unsigned int *)(a1 + 20), (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  v7 = v6;
  if ( v6 )
  {
    memset_0(v6, 0, *(unsigned int *)(a1 + 20));
    *v7 = *(_BYTE *)(a1 + 16);
    std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
      a2,
      (const struct std::nothrow_t *)&v12);
    *a3 = *(_DWORD *)(a1 + 20);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v12, v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampattributesrespon"
                    "sereportparser.cpp",
      (const char *)0x8007000ELL,
      v10);
    return 2147942414LL;
  }
}
