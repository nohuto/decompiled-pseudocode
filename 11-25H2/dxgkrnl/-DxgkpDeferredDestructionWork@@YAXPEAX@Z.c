/*
 * XREFs of ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1403593D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140189A90 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x140359410 (-DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DxgkpDeferredDestructionWork(ADAPTER_RENDER *a1)
{
  __int64 v2; // rcx

  ADAPTER_RENDER::DeferredDestructionWork(a1);
  v2 = *((_QWORD *)a1 + 2);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v2 + 16), (struct DXGADAPTER *)v2);
}
