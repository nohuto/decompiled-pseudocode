/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x18023D5F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800E9B3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z @ 0x1801DB908 (-Create@-$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4,
        unsigned int a5)
{
  unsigned int v7; // r8d
  unsigned __int64 v10; // r10
  __int64 v11; // rdx
  LPVOID v12; // rax
  void *v13; // rcx
  unsigned int i; // esi
  unsigned int v15; // edx
  __int64 v16; // r9
  struct CResource *ResourceWithoutType; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  v7 = *((_DWORD *)a3 + 2);
  if ( !v7 || (v10 = *((unsigned int *)a3 + 3), !(_DWORD)v10) || v7 + *((_DWORD *)this + 92) > (unsigned int)v10 )
  {
    v11 = 61LL;
    goto LABEL_16;
  }
  if ( a5 != 4LL * v7 )
  {
    v11 = 64LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
  if ( !*((_QWORD *)this + 43) )
  {
    v12 = operator new[](saturated_mul(v10, 8uLL));
    v13 = (void *)*((_QWORD *)this + 43);
    *((_QWORD *)this + 43) = v12;
    if ( v13 )
      operator delete(v13);
  }
  for ( i = 0; i < *((_DWORD *)a3 + 2); ++*((_DWORD *)this + 92) )
  {
    v15 = *a4;
    v16 = 0LL;
    v20 = 0LL;
    if ( v15 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v15);
      if ( ResourceWithoutType )
      {
        CWeakReference<CResource>::Create((__int64)ResourceWithoutType, &v20);
        v16 = v20;
      }
    }
    ++a4;
    ++i;
    *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * *((unsigned int *)this + 92)) = v16;
  }
  return 0LL;
}
