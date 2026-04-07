/*
 * XREFs of ?Create@CSystemBackdropVisual@@SAJW4SYSTEMBACKDROP_TYPE@@PEAPEAV1@@Z @ 0x180031BB8
 * Callers:
 *     ?CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006F70 (-CloneVisualTree@CLightMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180006FF0 (-CloneVisualTree@CMicaSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x18003B464 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 *     ?CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x1800A3D40 (-CloneVisualTree@CAcrylicSystemBackdropVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??0CSystemBackdropVisual@@QEAA@XZ @ 0x180031CEC (--0CSystemBackdropVisual@@QEAA@XZ.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemBackdropVisual::Create(int a1, CSystemBackdropVisual **a2)
{
  int v3; // ecx
  CSystemBackdropVisual *v4; // rax
  CSystemBackdropVisual *v5; // rbx
  void **v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int v10; // ecx
  CSystemBackdropVisual *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdx
  CSystemBackdropVisual *v14; // rax
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CSystemBackdropVisual *v17; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v3 = a1 - 2;
  if ( v3 )
  {
    v10 = v3 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        v8 = -2147418113;
        v12 = 2147549183LL;
        v13 = 37LL;
        goto LABEL_18;
      }
      v11 = (CSystemBackdropVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                       WPF::g_pProcessHeap,
                                       312LL);
      v5 = v11;
      v17 = v11;
      if ( v11 )
      {
        memset_0(v11, 0, 0x138uLL);
        CSystemBackdropVisual::CSystemBackdropVisual(v5);
        v6 = &CLightMicaSystemBackdropVisual::`vftable';
        goto LABEL_4;
      }
    }
    else
    {
      v14 = (CSystemBackdropVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 16LL))(
                                       WPF::g_pProcessHeap,
                                       312LL);
      v5 = v14;
      v17 = v14;
      if ( v14 )
      {
        memset_0(v14, 0, 0x138uLL);
        CSystemBackdropVisual::CSystemBackdropVisual(v5);
        v6 = &CAcrylicSystemBackdropVisual::`vftable';
        goto LABEL_4;
      }
    }
  }
  else
  {
    v4 = (CSystemBackdropVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                                    WPF::g_pProcessHeap,
                                    312LL);
    v5 = v4;
    v17 = v4;
    if ( v4 )
    {
      memset_0(v4, 0, 0x138uLL);
      CSystemBackdropVisual::CSystemBackdropVisual(v5);
      v6 = &CMicaSystemBackdropVisual::`vftable';
LABEL_4:
      *(_QWORD *)v5 = v6;
      goto LABEL_5;
    }
  }
  v5 = 0LL;
LABEL_5:
  v17 = v5;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(CSystemBackdropVisual *))(*(_QWORD *)v5 + 8LL))(v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
    v12 = (unsigned int)v7;
    v13 = 42LL;
  }
  else
  {
    v8 = -2147024882;
    v12 = 2147942414LL;
    v13 = 40LL;
  }
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)v12,
    v15);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
  return v8;
}
