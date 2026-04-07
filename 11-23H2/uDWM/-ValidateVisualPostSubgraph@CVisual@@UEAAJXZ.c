/*
 * XREFs of ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x18001C360
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800C7000 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisual::ValidateVisualPostSubgraph(CVisual *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0x100) == 0 )
    return 0LL;
  LOBYTE(a3) = *((_DWORD *)this + 24) != 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 440LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *((_DWORD *)this + 22) &= ~0x100u;
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x3BBu, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\visual.cpp",
    (const char *)v5,
    v7);
  return v5;
}
