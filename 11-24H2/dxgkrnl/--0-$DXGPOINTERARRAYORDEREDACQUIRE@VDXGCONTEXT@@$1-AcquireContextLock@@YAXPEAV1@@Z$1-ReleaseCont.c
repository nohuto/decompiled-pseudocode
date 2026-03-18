/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x140022A50
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1401AC9A0 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z @ 0x1401B3D50 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEBD@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1401DF180 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1401DFCB0 (DxgkPresentMultiPlaneOverlay2.c)
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1402A4B90 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1402B7698 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1402BE310 (DxgkPresentMultiPlaneOverlay3.c)
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 *     DxgkRender @ 0x140332650 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z @ 0x14034DF70 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEBD@Z.c)
 *     OutputDuplPresent @ 0x140399FF8 (OutputDuplPresent.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  void *Pool2; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx

  v5 = 0LL;
  v6 = a3;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a3 <= 4 )
  {
    Pool2 = (void *)(a1 + 8);
    *(_QWORD *)a1 = Pool2;
    if ( a3 )
    {
      memset(Pool2, 0, 8LL * a3);
      Pool2 = *(void **)a1;
    }
    goto LABEL_4;
  }
  v10 = 0LL;
  Pool2 = 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 8 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 8 * v6, 1265072196LL);
    *(_QWORD *)a1 = Pool2;
LABEL_4:
    *(_DWORD *)(a1 + 40) = v6;
    v10 = v6;
  }
  *(_WORD *)(a1 + 48) = 1;
  if ( Pool2 )
  {
    memmove(Pool2, a2, 8 * v10);
    qsort(*(void **)a1, *(unsigned int *)(a1 + 40), 8uLL, DxgkComparePointers);
    v11 = 1LL;
    v12 = *(unsigned int *)(a1 + 40);
    while ( v11 < v12 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v11) == *(_QWORD *)(*(_QWORD *)a1 + 8 * v11 - 8) )
        return a1;
      ++v11;
    }
    if ( a5 )
    {
      if ( (_DWORD)v12 )
      {
        do
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v5++) + 440LL));
        while ( v5 < *(unsigned int *)(a1 + 40) );
      }
      *(_BYTE *)(a1 + 49) = 1;
    }
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}
