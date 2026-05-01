/*
 * XREFs of ?EnumObjects@CPinnedList@@UEAAJPEAPEAUIEnumFullIDList@@@Z @ 0x18068D8B0
 * Callers:
 *     ?EnumObjects@CPinnedList@@W7EAAJPEAPEAUIEnumFullIDList@@@Z @ 0x180688040 (-EnumObjects@CPinnedList@@W7EAAJPEAPEAUIEnumFullIDList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z @ 0x18068AC4C (--0CPinnedListEnum@@QEAA@PEAVCPinnedList@@W4PinnedListEnumFlags@@@Z.c)
 *     ?Attach@?$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z @ 0x18068C444 (-Attach@-$ComPtr@VCPinnedListEnum@@@WRL@Microsoft@@QEAAXPEAVCPinnedListEnum@@@Z.c)
 *     ?Release@CPinnedListEnum@@UEAAKXZ @ 0x180694100 (-Release@CPinnedListEnum@@UEAAKXZ.c)
 */

__int64 __fastcall CPinnedList::EnumObjects(CPinnedList *this, struct IEnumFullIDList **a2)
{
  CPinnedListEnum *v4; // rax
  CPinnedListEnum *v5; // rbx
  HRESULT v7; // eax
  unsigned int v8; // edi
  _OWORD *v9; // [rsp+20h] [rbp-28h]
  void *that; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  that = 0LL;
  v9 = operator new(0x38uLL);
  *v9 = 0LL;
  v9[1] = 0LL;
  v9[2] = 0LL;
  *((_QWORD *)v9 + 6) = 0LL;
  v4 = (CPinnedListEnum *)CPinnedListEnum::CPinnedListEnum((__int64)v9, (__int64)this - 16, 0);
  Microsoft::WRL::ComPtr<CPinnedListEnum>::Attach((CPinnedListEnum **)&that, v4);
  v5 = (CPinnedListEnum *)that;
  if ( that )
  {
    v7 = QISearch(that, &pqit, &GUID_d0191542_7954_4908_bc06_b2360bbe45ba, (void **)a2);
    v8 = v7;
    if ( v7 >= 0 )
      v8 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7EF,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)v7);
    CPinnedListEnum::Release(v5);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EE,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
