/*
 * XREFs of ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801263A8
 * Callers:
 *     ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801257B0 (-InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180126818 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 *     ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x180126864 (-BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z.c)
 *     ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x1801269B0 (-Insert@-$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z.c)
 *     ?Add@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAHAEBQEAVCBufferedOutputPointer@@@Z @ 0x180218738 (-Add@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@Q.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CInteractionContextWrapper::AddBufferedOutput(
        CInteractionContextWrapper *this,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        const struct INTERACTION_CONTEXT_OUTPUT *a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  _BYTE *v14; // rax
  _BYTE *v15; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  CInteractionContextWrapper::BoundBufferedOutput(this, a4);
  v9 = -2147024882;
  v10 = DefaultHeap::AllocClear(0x60uLL);
  v11 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *(_QWORD *)v10 = 0LL;
  v10[2] = 0;
  memset_0(v10 + 3, 0, 0x50uLL);
  if ( a5 )
  {
    *(_QWORD *)v11 = a4;
    v11[2] = a3;
    *(_OWORD *)(v11 + 3) = *(_OWORD *)a5;
    *(_OWORD *)(v11 + 7) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(v11 + 11) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(v11 + 15) = *((_OWORD *)a5 + 3);
    *(_OWORD *)(v11 + 19) = *((_OWORD *)a5 + 4);
    v9 = CQueue<CBufferedInteractionOutput *>::Insert((char *)this + 536, v12, v11);
  }
  if ( !CInteractionContextWrapper::FindBufferedOutputPointer(this, a2) )
  {
    v14 = DefaultHeap::AllocClear(8uLL);
    if ( !v14 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v14[4] = 0;
    v15 = v14;
    *(_DWORD *)v14 = a2;
    CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::Add((char *)this + 600, &v15);
  }
  return v9;
}
