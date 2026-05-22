/*
 * XREFs of ?QueryInterface@ButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CEC0
 * Callers:
 *     ?QueryInterface@ButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B05B0 (-QueryInterface@ButtonProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ButtonProcessor::QueryInterface(ButtonProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      return 2147500034LL;
    }
    else
    {
      (*(void (__fastcall **)(ButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)0x80070057LL,
      v7);
    return 2147942487LL;
  }
}
