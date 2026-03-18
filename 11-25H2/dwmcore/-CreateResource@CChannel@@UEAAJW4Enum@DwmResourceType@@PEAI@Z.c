/*
 * XREFs of ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x1801DDB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801DDCB4 (--$_Resize@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@UHandleTable.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CreateResource(_QWORD *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v7; // rcx
  unsigned int v8; // r12d
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF

  v3 = a1[8];
  v5 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  if ( (unsigned int)v5 >= 0x2C )
  {
    v11 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA64,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x299,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    return v11;
  }
  v7 = a1[8];
  v20 = 0;
  v19 = 0LL;
  v8 = dword_18038B640[v5];
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, __int64 *))(*(_QWORD *)v7 + 24LL))(
         v7,
         v8,
         &v20,
         &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    return v11;
  }
  v12 = v19;
  v13 = a1[2];
  v14 = 2LL * (v20 - 1);
  if ( v20
    && v20 <= (unsigned __int64)((a1[3] - v13) >> 4)
    && *(_DWORD *)(v13 + 16LL * (v20 - 1))
    && *(_DWORD *)(v13 + 16LL * (v20 - 1) + 4) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAA4,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      v10);
  }
  if ( v20 > (unsigned __int64)((a1[3] - v13) >> 4) )
    std::vector<CChannel::HandleTableEntry>::_Resize<std::_Value_init_tag>(a1 + 2, v20);
  v15 = a1[2];
  *(_DWORD *)(v15 + 8 * v14) = 1;
  *(_DWORD *)(v15 + 8 * v14 + 4) = v8;
  v16 = *(_QWORD *)(v15 + 8 * v14 + 8);
  *(_QWORD *)(v15 + 8 * v14 + 8) = v12;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  ++a1[5];
  *a3 = v20;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  return 0LL;
}
