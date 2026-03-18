/*
 * XREFs of ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180227920
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CConnection@@QEAAJH@Z @ 0x180222CBC (-Initialize@CConnection@@QEAAJH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0CInternalMilCmdConnection@@QEAA@XZ @ 0x18025946C (--0CInternalMilCmdConnection@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAA@XZ @ 0x1802594E0 (--1-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@std@@.c)
 *     ?reset@?$unique_ptr@VCInternalMilCmdConnection@@U?$default_delete@VCInternalMilCmdConnection@@@std@@@std@@QEAAXPEAVCInternalMilCmdConnection@@@Z @ 0x180259698 (-reset@-$unique_ptr@VCInternalMilCmdConnection@@U-$default_delete@VCInternalMilCmdConnection@@@s.c)
 */

__int64 __fastcall MilCompositionEngine_Initialize(int a1, struct HMIL_CONNECTION__ **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  CInternalMilCmdConnection *v7; // rax
  CInternalMilCmdConnection *v8; // rdi
  struct CTransport **v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CTransport **v14; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 52LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)v4);
    return v4;
  }
  if ( g_pConnection )
  {
    v4 = -2147483634;
    v5 = 53LL;
    goto LABEL_3;
  }
  v7 = (CInternalMilCmdConnection *)DefaultHeap::AllocClear(0x90uLL);
  v8 = v7;
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  memset_0(v7, 0, 0x90uLL);
  v14 = (struct CTransport **)CInternalMilCmdConnection::CInternalMilCmdConnection(v8);
  v9 = v14;
  v10 = CConnection::Initialize(v14, a1);
  v12 = v10;
  if ( v10 >= 0 )
  {
    v14 = 0LL;
    std::unique_ptr<CInternalMilCmdConnection>::reset(v11, v9);
    *a2 = g_pConnection;
    std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(&v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
      (const char *)(unsigned int)v10);
    std::unique_ptr<CInternalMilCmdConnection>::~unique_ptr<CInternalMilCmdConnection>(&v14);
    return v12;
  }
}
