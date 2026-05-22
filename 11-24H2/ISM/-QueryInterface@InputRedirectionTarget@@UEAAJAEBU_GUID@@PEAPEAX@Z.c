/*
 * XREFs of ?QueryInterface@InputRedirectionTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0310
 * Callers:
 *     ?QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0400 (-QueryInterface@InputRedirectionTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B0410 (-QueryInterface@InputRedirectionTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputRedirectionTarget::QueryInterface(
        InputRedirectionTarget *this,
        const struct _GUID *a2,
        InputRedirectionTarget **a3)
{
  InputRedirectionTarget *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_71951a11_6ad9_47fc_ac52_d90bf1e97b13.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
LABEL_16:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)v4 + 8;
LABEL_15:
    v4 = (InputRedirectionTarget *)(v8 & -(__int64)(v4 != 0LL));
    goto LABEL_16;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v9 )
  {
    (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)this + 8LL))(this);
    v8 = (unsigned __int64)v4 + 16;
    goto LABEL_15;
  }
  return 2147500034LL;
}
