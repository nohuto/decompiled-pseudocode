/*
 * XREFs of ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800FD1C4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800FC890 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionManager@@AEAA@XZ @ 0x1800FD27C (--0CExpressionManager@@AEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?PreInitClass@Time@@SAJXZ @ 0x180232420 (-PreInitClass@Time@@SAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CExpressionManager::Create(struct CExpressionManager **a1)
{
  unsigned int v2; // ebx
  CExpressionManager *v3; // rax
  CExpressionManager *v4; // rax
  struct CExpressionManager *v5; // rdi
  bool v6; // zf
  int inited; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  v3 = (CExpressionManager *)DefaultHeap::AllocClear(0x2C8uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v4 = CExpressionManager::CExpressionManager(v3);
  v5 = v4;
  if ( v4 )
  {
    CMILRefCountImpl::AddReference((CExpressionManager *)((char *)v4 + 8));
    v6 = byte_180407278 == 0;
    *a1 = v5;
    if ( v6 )
    {
      byte_180407278 = 1;
      inited = Time::PreInitClass();
      v2 = inited;
      if ( inited < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x20u, 0LL);
    }
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v2;
}
