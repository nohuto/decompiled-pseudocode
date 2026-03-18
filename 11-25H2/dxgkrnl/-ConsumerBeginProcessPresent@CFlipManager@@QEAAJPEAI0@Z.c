/*
 * XREFs of ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x140007DFC
 * Callers:
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x14004E750 (NtFlipObjectConsumerBeginProcessPresent.c)
 * Callees:
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140007BCC (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x140007FD0 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x140008824 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14000A110 (-ApplyUpdateToConsumer@CFlipManager@@AEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x14000A414 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z @ 0x14000B034 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::ConsumerBeginProcessPresent(CFlipManager *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  CFlipPresentUpdate *v7; // rbx
  int v8; // edi
  _QWORD *v9; // r15
  _QWORD *v10; // rcx
  struct CFlipPresentUpdate *v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64); // rdi
  __int64 v13; // rbx
  unsigned int TracingId; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // rdx
  __int64 v18; // rax

  v3 = 0;
  v7 = 0LL;
  if ( *((_OWORD *)this + 17) != 0LL
    || (v9 = (_QWORD *)((char *)this + 152), v10 = (_QWORD *)*((_QWORD *)this + 19), v10 == v9) )
  {
    v8 = -1073741823;
  }
  else
  {
    v11 = (struct CFlipPresentUpdate *)((unsigned __int64)(v10 - 3) & -(__int64)(v10 != 0LL));
    *((_QWORD *)this + 34) = v11;
    v8 = CFlipManager::ApplyUpdateToConsumer(this, v11);
    if ( v8 >= 0 )
    {
      CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v9);
      v12 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
      v13 = --*((_QWORD *)this + 21);
      TracingId = CFlipManager::GetTracingId(this);
      v12(TracingId, v13);
      if ( (_QWORD *)*v9 == v9 )
        KeResetEvent(*((PRKEVENT *)this + 36));
      v15 = DXGQUOTAALLOCATOR<256,1970291526>::operator new();
      v7 = (CFlipPresentUpdate *)v15;
      if ( v15 )
      {
        v16 = *((_QWORD *)this + 29);
        *(_QWORD *)(v15 + 8) = 0LL;
        v17 = (_QWORD *)((v15 + 24) & -(__int64)(v15 != -16));
        v17[1] = v17;
        *v17 = v17;
        *(_QWORD *)v15 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
        *(_QWORD *)(v15 + 16) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
        *(_DWORD *)(v15 + 40) = 0;
        *(_QWORD *)(v15 + 48) = 0LL;
        *(_QWORD *)(v15 + 56) = 0LL;
        *(_QWORD *)(v15 + 64) = v16;
        *(_BYTE *)(v15 + 72) = 1;
        *(_QWORD *)(v15 + 80) = 0LL;
        *(_DWORD *)(v15 + 88) = 0;
        v8 = CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
               (CFlipManager *)((char *)this + 104),
               (struct CFlipPresentUpdate *)v15);
        if ( v8 >= 0 )
        {
          CFlipPresentUpdate::SetFlipPropertySet(v7, *(struct CFlipPropertySet **)(*((_QWORD *)this + 34) + 56LL));
          *((_QWORD *)this + 35) = v7;
          *a2 = *((_DWORD *)v7 + 10);
          v18 = *(_QWORD *)(*((_QWORD *)this + 35) + 56LL);
          if ( v18 )
            v3 = *(_DWORD *)(v18 + 32);
          *a3 = v3;
          return (unsigned int)v8;
        }
      }
      else
      {
        v7 = 0LL;
        v8 = -1073741801;
      }
    }
  }
  CFlipManager::FreeCurrentUpdates(this);
  if ( v7 )
    (*(void (__fastcall **)(CFlipPresentUpdate *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  return (unsigned int)v8;
}
