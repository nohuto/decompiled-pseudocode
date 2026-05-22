/*
 * XREFs of ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x18002CD70
 * Callers:
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x18002CC60 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x18002D2C0 (-OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180035150 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x180035FCC (-DeliverRawMouseToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAV.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180060D40 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B8790 (-OnInputReport@GazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall InputContext::Create(struct InputContext **a1)
{
  char *v2; // rax
  char *v3; // r14
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  char *v8; // rcx
  __int64 v9; // rax
  const struct std::nothrow_t *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  char *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  char *v17; // r8
  char *v18; // rcx
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
      (const char *)0x80070057LL,
      v19);
    return 2147942487LL;
  }
  v2 = (char *)malloc(0xC0uLL);
  v3 = v2;
  if ( v2 )
    memset_0(v2, 0, 0xC0uLL);
  if ( v3 )
  {
    *((_QWORD *)v3 + 1) = 0LL;
    memset_0(v3 + 24, 0, 0xA8uLL);
    *((_DWORD *)v3 + 2) = 1;
    *(_QWORD *)v3 = &InputContext::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    v4 = v3 + 24;
    *((_DWORD *)v3 + 6) = 0;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_QWORD *)v3 + 5) = 0LL;
    v5 = operator new(0x20uLL);
    *v5 = v5;
    v5[1] = v5;
    *((_QWORD *)v3 + 4) = v5;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 7LL;
    *((_QWORD *)v3 + 10) = 8LL;
    *((_DWORD *)v3 + 6) = 1065353216;
    v6 = *((_QWORD *)v3 + 4);
    v7 = operator new(0x80uLL);
    v8 = (char *)*((_QWORD *)v3 + 6);
    v9 = (__int64)(*((_QWORD *)v3 + 8) - (_QWORD)v8) >> 3;
    if ( v9 )
    {
      v10 = (const struct std::nothrow_t *)(8 * v9);
      if ( (unsigned __int64)(8 * v9) >= 0x1000 )
      {
        v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
        v17 = (char *)*((_QWORD *)v8 - 1);
        v18 = (char *)(v8 - v17);
        if ( (unsigned __int64)(v18 - 8) > 0x1F )
        {
          _o__invalid_parameter_noinfo_noreturn(v18, v10);
LABEL_21:
          std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * v14));
LABEL_11:
          v4[3] = v7;
          v15 = v7 + 16;
          v4[4] = v7 + 16;
          v4[5] = v7 + 16;
          do
            *v7++ = v6;
          while ( v7 != v15 );
          *((_QWORD *)v3 + 22) = 0LL;
          goto LABEL_14;
        }
        v8 = v17;
      }
      operator delete(v8, v10);
    }
    *((_QWORD *)v3 + 6) = v7;
    v11 = v7 + 16;
    *((_QWORD *)v3 + 7) = v7 + 16;
    *((_QWORD *)v3 + 8) = v7 + 16;
    do
      *v7++ = v6;
    while ( v7 != v11 );
    v4 = v3 + 112;
    *((_DWORD *)v3 + 28) = 0;
    *((_QWORD *)v3 + 15) = 0LL;
    *((_QWORD *)v3 + 16) = 0LL;
    v12 = operator new(0x18uLL);
    *v12 = v12;
    v12[1] = v12;
    *((_QWORD *)v3 + 15) = v12;
    *((_QWORD *)v3 + 17) = 0LL;
    *((_QWORD *)v3 + 18) = 0LL;
    *((_QWORD *)v3 + 19) = 0LL;
    *((_QWORD *)v3 + 20) = 7LL;
    *((_QWORD *)v3 + 21) = 8LL;
    *((_DWORD *)v3 + 28) = 1065353216;
    v6 = *((_QWORD *)v3 + 15);
    v7 = operator new(0x80uLL);
    v13 = (char *)*((_QWORD *)v3 + 17);
    v14 = (__int64)(*((_QWORD *)v3 + 19) - (_QWORD)v13) >> 3;
    if ( !v14 )
      goto LABEL_11;
    goto LABEL_21;
  }
  v3 = 0LL;
LABEL_14:
  if ( v3 )
  {
    *a1 = (struct InputContext *)v3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\ContextualProcessors\\inc\\IContextualProcessor.h",
      (const char *)0x8007000ELL,
      v19);
    return 2147942414LL;
  }
}
