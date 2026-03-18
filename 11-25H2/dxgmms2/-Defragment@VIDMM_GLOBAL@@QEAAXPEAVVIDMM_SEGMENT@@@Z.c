/*
 * XREFs of ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF6C
 * Callers:
 *     VidMmDefragmentSegment @ 0x1400FF568 (VidMmDefragmentSegment.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400188F8 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004CBC0 (-GetActiveVprEnd@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     ?GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ @ 0x14004CBE8 (-GetActiveVprStart@VIDMM_SEGMENT@@QEBA_KXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x140093400 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?OldDefragment@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009CF04 (-OldDefragment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400AB930 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400ACAE4 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E1744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140111974 (-TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::Defragment(VIDMM_GLOBAL *this, struct VIDMM_SEGMENT *a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  VIDMM_SEGMENT *v6; // rcx
  unsigned __int64 ActiveVprEnd; // rbx
  struct VIDMM_SEGMENT *v8; // r14
  char *v9; // rbx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  VIDMM_DEVICE *v12; // rbp

  *((_QWORD *)a2 + 68) = *(_QWORD *)(*(_QWORD *)this + 112LL);
  if ( (*((_DWORD *)this + 1746) & 0x4000) != 0 )
  {
    WdLogSingleEntry1(4LL, a2);
    WdLogGlobalForLineNumber = 26253;
  }
  else
  {
    v4 = *((unsigned __int16 *)a2 + 210);
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    VIDMM_GLOBAL::StartPreparation(this, 0xFFFFFFFFLL, 0LL, 0LL, 1002);
    v5 = *((_QWORD *)this + 3);
    if ( (*(_DWORD *)(344 * v4 + *(_QWORD *)(v5 + 2992) + 16) & 4) != 0
      && (*(_BYTE *)(v5 + 2460) & 8) != 0
      && (*((_DWORD *)this + 1746) & 0x20000) == 0 )
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 26284;
      VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this);
      VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(a2);
      if ( (*((_BYTE *)a2 + 106) & 1) != 0 )
      {
        VIDMM_SEGMENT::GetActiveVprStart(a2);
        ActiveVprEnd = VIDMM_SEGMENT::GetActiveVprEnd(v6);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD))(*(_QWORD *)a2 + 128LL))(a2, 0LL);
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          ActiveVprEnd,
          *((_QWORD *)a2 + 9));
      }
      else
      {
        (*(void (__fastcall **)(struct VIDMM_SEGMENT *, _QWORD, _QWORD))(*(_QWORD *)a2 + 128LL))(
          a2,
          0LL,
          *((_QWORD *)a2 + 9));
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, a2);
      WdLogGlobalForLineNumber = 26311;
      v8 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 24);
      while ( v8 != (struct VIDMM_SEGMENT *)((char *)a2 + 192) )
      {
        v9 = (char *)v8 - 24;
        v8 = *(struct VIDMM_SEGMENT **)v8;
        if ( !(unsigned __int8)PsIsSystemProcess(**(_QWORD **)v9)
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v9 + 32LL) + 408LL) & 1) == 0 )
        {
          v10 = v9 + 40;
          v11 = (_QWORD *)*((_QWORD *)v9 + 5);
          while ( v11 != v10 )
          {
            v12 = (VIDMM_DEVICE *)v11[4];
            v11 = (_QWORD *)*v11;
            if ( *((_QWORD *)v12 + 3) )
            {
              if ( !*((_QWORD *)v12 + 23) )
                VIDMM_DEVICE::PartiallySuspend(v12);
              VIDMM_DEVICE::FaultAllAllocations(v12);
            }
          }
        }
      }
      VIDMM_SEGMENT::OldDefragment(a2);
    }
    VIDMM_GLOBAL::EndPreparation(this, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    if ( (byte_140081243 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
}
