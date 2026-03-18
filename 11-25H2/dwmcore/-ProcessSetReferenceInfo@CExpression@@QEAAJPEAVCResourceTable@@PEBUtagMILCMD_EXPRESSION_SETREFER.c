/*
 * XREFs of ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x180245578
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180236804 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpression::ProcessSetReferenceInfo(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETREFERENCEINFO *a3,
        _DWORD *a4,
        unsigned int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  LPVOID v11; // rax
  void *v12; // rcx
  unsigned int i; // edx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5
    || (v9 = *((unsigned int *)a3 + 3), !(_DWORD)v9)
    || (int)v5 + *((_DWORD *)this + 93) > (unsigned int)v9 )
  {
    v10 = 123LL;
    goto LABEL_18;
  }
  if ( a5 != 20 * v5 )
  {
    v10 = 126LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( !*((_QWORD *)this + 44) )
  {
    v11 = operator new[](saturated_mul(v9, 0x1CuLL));
    v12 = (void *)*((_QWORD *)this + 44);
    *((_QWORD *)this + 44) = v11;
    if ( v12 )
      operator delete(v12);
  }
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++*((_DWORD *)this + 93) )
  {
    ++i;
    v14 = *(_OWORD *)a4;
    a4 += 5;
    v15 = *((_QWORD *)this + 44) + 28LL * *((unsigned int *)this + 93);
    *(_OWORD *)v15 = v14;
    *(_DWORD *)(v15 + 16) = *(a4 - 1);
    *(_DWORD *)(v15 + 20) = 0x7FFFFFFF;
    *(_BYTE *)(v15 + 24) = 0;
  }
  if ( *((_DWORD *)this + 93) == *((_DWORD *)a3 + 3) && ((*((_BYTE *)this + 224) & 2) != 0 || *((_QWORD *)this + 40)) )
  {
    v16 = (*(__int64 (__fastcall **)(CExpression *))(*(_QWORD *)this + 224LL))(this);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
        (const char *)(unsigned int)v16);
  }
  return 0LL;
}
