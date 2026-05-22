/*
 * XREFs of ?QueryInterface@TipToGlassProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083100
 * Callers:
 *     ?QueryInterface@TipToGlassProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B22B0 (-QueryInterface@TipToGlassProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TipToGlassProcessor::QueryInterface(
        TipToGlassProcessor *this,
        const struct _GUID *a2,
        TipToGlassProcessor **a3)
{
  TipToGlassProcessor *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\pentiptoglass\\system\\l"
                    "ib\\tiptoglassprocessor.cpp",
      (const char *)0x80070057LL,
      v8);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(TipToGlassProcessor *))(*(_QWORD *)this + 8LL))(this);
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(TipToGlassProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (TipToGlassProcessor *)(((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
    goto LABEL_11;
  }
  return 2147500034LL;
}
