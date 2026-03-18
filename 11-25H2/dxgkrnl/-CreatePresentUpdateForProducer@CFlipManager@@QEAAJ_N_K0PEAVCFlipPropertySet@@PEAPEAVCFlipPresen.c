/*
 * XREFs of ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_N_K0PEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000B060
 * Callers:
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140009F2C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14000A414 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000AD24 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x14000B034 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009CEA8 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009D4BC (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009DA2C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::CreatePresentUpdateForProducer(
        CFlipManager *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        struct CFlipPropertySet *a5,
        struct CFlipPresentUpdate **a6,
        struct FlipManagerTokenIFlipInfo **a7)
{
  int v8; // ebp
  char v9; // r12
  int v11; // esi
  __int64 v13; // rax
  struct CFlipPresentUpdate *v14; // rbx
  __int64 v15; // r9
  _QWORD *v16; // rdx
  int v17; // eax
  unsigned __int64 v18; // r9
  struct FlipManagerObject *v19; // r8
  CEndpointResourceStateManager *v20; // rcx
  int v21; // eax
  struct CFlipPresentUpdate *v22; // rcx
  int TracingId; // eax
  CFlipManager::PresentHistory *v24; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v8 = (unsigned __int8)a4;
  v9 = a2;
  v11 = -1073741823;
  if ( *((_QWORD *)this + 6) == 1LL )
  {
    a4 = *((_QWORD *)this + 29);
    if ( a4 > 0xFFFFFFFF )
      CFlipManager::MarkAsLost(this, 3221225473LL, 22LL);
  }
  if ( !*((_BYTE *)this + 32) )
  {
    v13 = DXGQUOTAALLOCATOR<256,1970291526>::operator new((__int64)this, a2, a3, a4);
    v14 = (struct CFlipPresentUpdate *)v13;
    if ( v13 )
    {
      v15 = *((_QWORD *)this + 29);
      *(_QWORD *)(v13 + 8) = 0LL;
      v16 = (_QWORD *)((v13 + 24) & -(__int64)(v13 != -16));
      v16[1] = v16;
      *v16 = v16;
      *(_DWORD *)(v13 + 40) = 0;
      *(_QWORD *)(v13 + 48) = 0LL;
      *(_QWORD *)(v13 + 56) = 0LL;
      *(_DWORD *)(v13 + 88) = 0;
      *(_QWORD *)v13 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
      *(_QWORD *)(v13 + 16) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
      *(_QWORD *)(v13 + 64) = v15;
      *(_BYTE *)(v13 + 72) = v9;
      *(_QWORD *)(v13 + 80) = a3;
      v17 = *((_DWORD *)this + 84);
      if ( !v17 )
      {
        v17 = v8 + 1;
        *((_DWORD *)this + 84) = v8 + 1;
      }
      v18 = *((_QWORD *)this + 46);
      v19 = (CFlipManager *)((char *)this - 32);
      v20 = (CFlipManager *)((char *)this + 56);
      if ( v17 == 2 )
        v21 = CEndpointResourceStateManager::PrepareCompTexOptimizedUpdateForStateManager(v20, v14, v19, v18);
      else
        v21 = CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(v20, v14, v19, v18);
      v11 = v21;
      v22 = v14;
      if ( v21 < 0
        || *((_QWORD *)this + 6) == 1LL
        && (TracingId = CFlipManager::GetTracingId(this),
            v11 = CEndpointResourceStateManager::PrepareIFlipInfo(
                    (struct _LIST_ENTRY *)((char *)this + 56),
                    a5,
                    TracingId,
                    v14,
                    a7),
            v22 = v14,
            v11 < 0) )
      {
        (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v22 + 24LL))(v22, 1LL);
      }
      else
      {
        CFlipPresentUpdate::SetFlipPropertySet(v14, a5);
        v24 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
        if ( v24 )
        {
          NextEntry = CFlipManager::PresentHistory::GetNextEntry(v24);
          *((_DWORD *)NextEntry + 10) = 0;
          *((_QWORD *)NextEntry + 2) = *((_QWORD *)v14 + 8);
        }
        *a6 = v14;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v11;
}
