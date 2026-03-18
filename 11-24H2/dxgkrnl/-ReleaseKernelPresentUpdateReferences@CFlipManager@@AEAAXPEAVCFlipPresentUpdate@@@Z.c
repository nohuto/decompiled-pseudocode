/*
 * XREFs of ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68
 * Callers:
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x140016E30 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1400170CC (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     _lambda_45b452eeef8f878a1390d07846441040_::operator() @ 0x14009E944 (_lambda_45b452eeef8f878a1390d07846441040_--operator().c)
 *     wil::details::lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___::reset @ 0x14009F4B4 (wil--details--lambda_call__lambda_88f3ed85026e62755ea077db9998d4dd___--reset.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1400A07BC (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?RemoveUsageReference@CPoolBufferResource@@QEAAXXZ @ 0x1400195A8 (-RemoveUsageReference@CPoolBufferResource@@QEAAXXZ.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x140019614 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CFlipManager::ReleaseKernelPresentUpdateReferences(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  CFlipPropertySetBase *v4; // rcx
  CPoolBufferResource *v5; // rcx

  v2 = *((_QWORD *)a2 + 6);
  v3 = v2 + *((unsigned int *)a2 + 10);
  while ( v2 < v3 )
  {
    if ( *(_DWORD *)v2 < 2u )
      goto LABEL_13;
    if ( *(_DWORD *)v2 == 2 || *(_DWORD *)v2 == 3 )
    {
      CFlipResource::Release(*(CFlipResource **)(v2 + 8));
LABEL_13:
      v2 += 16LL;
    }
    else if ( *(_DWORD *)v2 == 4 )
    {
      v4 = *(CFlipPropertySetBase **)(v2 + 24);
      if ( v4 )
        CFlipPropertySetBase::Release(v4);
      v5 = *(CPoolBufferResource **)(v2 + 16);
      if ( v5 )
      {
        CPoolBufferResource::RemoveUsageReference(v5);
        CFlipResource::Release(*(CFlipResource **)(v2 + 16));
      }
      v2 += 40LL;
    }
  }
}
