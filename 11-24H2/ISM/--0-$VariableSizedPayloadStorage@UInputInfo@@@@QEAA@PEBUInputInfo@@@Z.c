/*
 * XREFs of ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x18005BD90
 * Callers:
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800E7764 (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014CAB0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E86C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
        __int64 a1,
        int *a2,
        __int64 a3,
        const char *a4)
{
  size_t v6; // rbp
  void *v7; // rax
  const struct std::nothrow_t *v8; // rdx
  void *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)a1 = 0LL;
  v6 = a2[6];
  if ( v6 < 0x20 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F2,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      a4);
  v7 = operator new[](a2[6]);
  v9 = *(void **)a1;
  *(_QWORD *)a1 = v7;
  if ( v9 )
    operator delete(v9, v8);
  *(_DWORD *)(a1 + 8) = v6;
  memcpy_0(*(void **)a1, a2, v6);
  return a1;
}
