/*
 * XREFs of ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001927C
 * Callers:
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x140018D20 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140019398 (-EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?Enqueue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001942C (-Enqueue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x140019460 (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x140052338 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 */

void __fastcall CFlipManager::ProcessCompletedProducerPresentUpdate(
        CFlipManager::PresentHistory **this,
        struct CFlipPresentUpdate *a2)
{
  CFlipManager::PresentHistory *v4; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  _QWORD **v6; // rdi
  _QWORD *v7; // rdx
  struct CFlipPresentUpdate *v8; // r8
  CFlipManager::PresentHistory *v9; // rcx
  struct CFlipManager::PresentHistory::Entry *v10; // rax
  CFlipManager::PresentHistory *v11; // rcx
  struct CFlipManager::PresentHistory::Entry *v12; // rax

  if ( *((CFlipManager::PresentHistory **)a2 + 8) == this[30] )
  {
    CFlipManager::EnqueueConsumerUpdate((CFlipManager *)this, a2);
    v4 = this[3];
    if ( v4 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v4);
      *((_DWORD *)NextEntry + 10) = 2;
      *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 8);
    }
    v6 = (_QWORD **)(this + 22);
    if ( *v6 != v6 )
    {
      while ( 1 )
      {
        v7 = *v6;
        if ( *v6 == v6 )
          break;
        while ( *(CFlipManager::PresentHistory **)(((unsigned __int64)(v7 - 3) & -(__int64)(v7 != 0LL)) + 0x40) != this[30] )
        {
          v7 = (_QWORD *)*v7;
          if ( v7 == v6 )
            return;
        }
        CFlipQueuedObject::Remove((CFlipQueuedObject *)(((unsigned __int64)(v7 - 3) & -(__int64)(v7 != 0LL)) + 16));
        CFlipManager::EnqueueConsumerUpdate((CFlipManager *)this, v8);
        v9 = this[3];
        if ( v9 )
        {
          v10 = CFlipManager::PresentHistory::GetNextEntry(v9);
          *((_DWORD *)v10 + 10) = 5;
          *((_QWORD *)v10 + 2) = *((_QWORD *)a2 + 8);
        }
      }
    }
  }
  else if ( this[6] == (CFlipManager::PresentHistory *)1 )
  {
    CFlipManager::MarkAsLost(this, 3221225473LL, 16LL);
  }
  else
  {
    CFlipObjectQueue<CFlipPresentUpdate>::Enqueue(this + 22);
    v11 = this[3];
    if ( v11 )
    {
      v12 = CFlipManager::PresentHistory::GetNextEntry(v11);
      *((_DWORD *)v12 + 10) = 6;
      *((_QWORD *)v12 + 2) = *((_QWORD *)a2 + 8);
    }
  }
}
