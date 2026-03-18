/*
 * XREFs of ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z @ 0x1801CF740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801CFAC4 (--$_Resize@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@UHandleTable.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::DuplicateSharedResource(_QWORD *a1, __int64 a2, unsigned int a3, char a4, int *a5)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // r15d
  int v13; // eax
  const char *v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v5 = a1[8];
  v7 = a3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  if ( (unsigned int)v7 >= 0x2C )
  {
    v15 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA64,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
    return v15;
  }
  v11 = a1[8];
  v24 = 0;
  v23 = 0LL;
  LOBYTE(v10) = a4;
  v12 = dword_180380500[v7];
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int *, __int64 *))(*(_QWORD *)v11 + 40LL))(
          v11,
          a2,
          v12,
          v10,
          &v24,
          &v23);
  v15 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v13);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
    return v15;
  }
  v16 = v23;
  v17 = a1[2];
  v18 = 2LL * (unsigned int)(v24 - 1);
  if ( v24
    && (unsigned int)v24 <= (unsigned __int64)((a1[3] - v17) >> 4)
    && *(_DWORD *)(v17 + 16LL * (unsigned int)(v24 - 1))
    && *(_DWORD *)(v17 + 16LL * (unsigned int)(v24 - 1) + 4) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAA4,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v14);
  }
  if ( (unsigned int)v24 > (unsigned __int64)((a1[3] - v17) >> 4) )
    std::vector<CChannel::HandleTableEntry>::_Resize<std::_Value_init_tag>(a1 + 2, (unsigned int)v24);
  v19 = a1[2];
  *(_DWORD *)(v19 + 8 * v18) = 1;
  *(_DWORD *)(v19 + 8 * v18 + 4) = v12;
  v20 = *(_QWORD *)(v19 + 8 * v18 + 8);
  *(_QWORD *)(v19 + 8 * v18 + 8) = v16;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  ++a1[5];
  *a5 = v24;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  return 0LL;
}
