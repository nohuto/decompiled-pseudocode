/*
 * XREFs of ?QueryInterface@SystemContextProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180108C00
 * Callers:
 *     ?QueryInterface@SystemContextProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801086B0 (-QueryInterface@SystemContextProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemContextProvider::QueryInterface(
        SystemContextProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      return 2147500034LL;
    }
    else
    {
      (*(void (__fastcall **)(SystemContextProvider *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (void *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
