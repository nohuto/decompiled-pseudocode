/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400490A8
 * Callers:
 *     ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x14001B38C (-ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 * Callees:
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x140019988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x140049338 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::ConsumerDwmApplyUpdates(
        CFlipManager::PresentHistory **this,
        struct _LIST_ENTRY *a2,
        struct CCompositionFrame *a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // r12
  struct _LIST_ENTRY *v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rdi
  unsigned int v14; // esi
  __int64 v15; // r12
  __int64 v16; // r13
  CFlipManager::PresentHistory *v17; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 *v21; // rdx
  __int64 *v22; // rax
  void (__fastcall *v23)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64); // rbx
  unsigned int TracingId; // eax
  __int64 v25; // [rsp+40h] [rbp-20h]
  __int64 v26; // [rsp+48h] [rbp-18h]
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-8h]
  struct CFlipPresentUpdate *v29; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+58h]

  Flink = a2->Flink;
  v4 = -1LL;
  v28 = &v27;
  v26 = -1LL;
  v27 = (__int64)&v27;
  while ( Flink != a2 )
  {
    v8 = Flink - 3;
    Flink = Flink->Flink;
    v29 = 0LL;
    CFlipManager::ConsumerDwmApplyUpdate((CFlipManager *)this, v8, a3, &v29);
    if ( v29 )
    {
      if ( !*((_DWORD *)v29 + 22) )
      {
        v4 = *((_QWORD *)v29 + 8);
        v26 = v4;
      }
      v21 = (__int64 *)(((unsigned __int64)v29 + 24) & -(__int64)(v29 != 0LL));
      v22 = v28;
      if ( (__int64 *)*v28 != &v27 )
        __fastfail(3u);
      *(_QWORD *)((((unsigned __int64)v29 + 24) & -(__int64)(v29 != 0LL)) + 8) = v28;
      *v21 = (__int64)&v27;
      *v22 = (__int64)v21;
      v28 = v21;
    }
  }
  v9 = 0;
  v29 = (struct CFlipPresentUpdate *)(*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
  v25 = *((_QWORD *)a3 + 5);
  v30 = *((_QWORD *)a3 + 7);
LABEL_5:
  v10 = 1LL;
  while ( (__int64 *)v27 != &v27 )
  {
    v11 = v27 - 24;
    v12 = -v27;
    v13 = (__int64 *)((v27 - 24) & -(__int64)(v27 != 0));
    if ( v9 >= 0 )
    {
      v14 = *(_DWORD *)((v11 & -(__int64)(v27 != 0)) + 0x58);
      if ( !v14 )
        v14 = *(_QWORD *)((v11 & -(__int64)(v27 != 0)) + 0x40) != v4;
      v15 = *(_QWORD *)((v11 & -(__int64)(v27 != 0)) + 0x40);
      v16 = *(_QWORD *)(((v27 - 24) & -(__int64)(v27 != 0)) + 0x50);
      if ( v14 )
      {
        switch ( v14 )
        {
          case 1u:
            v23 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 152);
            break;
          case 2u:
            v23 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 136);
            break;
          case 3u:
            v23 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 144);
            break;
          default:
LABEL_14:
            v17 = this[3];
            if ( v17 )
            {
              NextEntry = CFlipManager::PresentHistory::GetNextEntry(v17);
              v12 = v14;
              *(_QWORD *)NextEntry = v29;
              *((_QWORD *)NextEntry + 1) = v30;
              *((_QWORD *)NextEntry + 2) = v15;
              *((_QWORD *)NextEntry + 3) = v16;
              if ( v14 )
              {
                v12 = v14 - 2;
                if ( v14 == 2 )
                {
                  *((_DWORD *)NextEntry + 10) = 10;
                }
                else if ( v14 == 3 )
                {
                  *((_DWORD *)NextEntry + 10) = 12;
                }
              }
              else
              {
                *((_DWORD *)NextEntry + 10) = 7;
              }
            }
            v19 = (*(__int64 (__fastcall **)(struct CCompositionFrame *, __int64, __int64))(*(_QWORD *)a3 + 72LL))(
                    a3,
                    v12,
                    v10);
            v20 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, v13[8], v19, v14);
            v9 = v20;
            if ( v20 < 0 )
              CFlipManager::MarkAsLost(this, (unsigned int)v20, 19LL);
            v10 = 1LL;
            goto LABEL_20;
        }
      }
      else
      {
        v23 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(DxgkGetWin32kImportTable() + 128);
      }
      TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
      v23(TracingId, v15, v29, v25, v30, v16);
      goto LABEL_14;
    }
LABEL_20:
    v4 = v26;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*v13 + 24))(v13, 1LL);
      goto LABEL_5;
    }
  }
}
