/*
 * XREFs of ?QueryInterface@ControllerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180179E50
 * Callers:
 *     ?QueryInterface@ControllerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180179F40 (-QueryInterface@ControllerProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180179F50 (-QueryInterface@ControllerProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ControllerProcessor@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180179F60 (-QueryInterface@ControllerProcessor@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@NonPointerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180192D90 (-QueryInterface@NonPointerProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall ControllerProcessor::QueryInterface(ControllerProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x253,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return -2147024809;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 16;
LABEL_15:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
  if ( !v8 )
  {
    (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 72;
    goto LABEL_15;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
  if ( !v9 )
  {
    (*(void (__fastcall **)(ControllerProcessor *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 8;
    goto LABEL_15;
  }
  return NonPointerProcessor::QueryInterface(this, a2, a3);
}
