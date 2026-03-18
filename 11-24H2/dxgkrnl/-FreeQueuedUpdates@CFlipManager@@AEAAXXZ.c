/*
 * XREFs of ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x140016E30
 * Callers:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140016DE0 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x14005F940 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 * Callees:
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x140017D24 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::FreeQueuedUpdates(CFlipManager *this)
{
  _QWORD *v2; // rbp
  struct CFlipPresentUpdate *v3; // r14
  void (__fastcall *v4)(_QWORD, __int64); // rdi
  __int64 v5; // rbx
  unsigned int TracingId; // eax
  CFlipManager *v7; // rcx
  struct CFlipPresentUpdate *v8; // rbx
  CFlipManager *v9; // rcx
  _QWORD *v10; // rsi
  void (__fastcall ***v11)(_QWORD, __int64); // rcx

  v2 = (_QWORD *)((char *)this + 152);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v2);
    v4 = *(void (__fastcall **)(_QWORD, __int64))(DxgkGetWin32kImportTable() + 168);
    v5 = --*((_QWORD *)this + 21);
    TracingId = CFlipManager::GetTracingId(this);
    v4(TracingId, v5);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v7, v3);
    if ( v3 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  while ( *((CFlipManager **)this + 22) != (CFlipManager *)((char *)this + 176) )
  {
    v8 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((char *)this + 176);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v9, v8);
    if ( v8 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
  }
  v10 = (_QWORD *)((char *)this + 208);
  while ( (_QWORD *)*v10 != v10 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))((*v10 - 8LL) & -(__int64)(*v10 != 0LL));
    if ( v11 )
      (**v11)(v11, 1LL);
  }
}
