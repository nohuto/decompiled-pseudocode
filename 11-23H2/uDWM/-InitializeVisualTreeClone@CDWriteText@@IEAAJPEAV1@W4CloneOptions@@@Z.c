/*
 * XREFs of ?InitializeVisualTreeClone@CDWriteText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180006DFC
 * Callers:
 *     ?CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006D80 (-CloneVisualTree@CDWriteText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDWriteText::InitializeVisualTreeClone(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = CVisual::InitializeVisualTreeClone(a1, a2, a3);
  if ( v5 < 0 )
  {
    v10 = 374LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v5,
      v11);
    return (unsigned int)v5;
  }
  v6 = a2 + 272;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 272) + 48LL))(a2 + 272);
  if ( v5 < 0 )
  {
    v10 = 375LL;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(a2 + 272, a1 + 328);
  (**(void (__fastcall ***)(__int64, _QWORD))v6)(a2 + 272, *(unsigned int *)(a1 + 512));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(a2 + 272, *(unsigned int *)(a1 + 516));
  LOBYTE(v7) = *(_BYTE *)(a1 + 528);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(a2 + 272, v7);
  LOBYTE(v8) = *(_BYTE *)(a1 + 529);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 40LL))(a2 + 272, v8);
  if ( (*(_DWORD *)(a1 + 88) & 0x1000) == 0 )
    *(_DWORD *)(a2 + 88) &= ~0x1000u;
  return 0LL;
}
