/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x140007E30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Commit@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAXXZ @ 0x140007FA4 (-_Commit@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x140008048 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReader.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14000818C (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1400089AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(
        volatile __int64 **this,
        const struct AE_CURRENT_POSITION *a2,
        int a3)
{
  signed __int32 v6; // ebx
  _OWORD *v7; // rcx
  __int64 v8; // xmm0_8
  __int128 v9; // xmm2
  __int128 v10; // xmm2
  __int64 v11; // xmm0_8
  _OWORD *v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-18h]

  if ( (a2->Flag & 4) == 0 && a2->Flag )
    _InterlockedExchange64(this[163], a2->hnsQPCPosition);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)this[163] + 16, 0, 0);
  if ( (v6 & 1) != 0 && (v6 & 0xFFFFFF80) == 0 && (v6 & 2) != 0 )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      this[90],
      &v12);
    v7 = v12;
    if ( v12 )
    {
      v8 = *(_QWORD *)&a2->f32FramesPerSecond;
      v9 = *(_OWORD *)&a2->u64PaddingFrames;
      *v12 = *(_OWORD *)&a2->u64DevicePosition;
      v7[1] = v9;
      *((_QWORD *)v7 + 4) = v8;
      if ( (v6 & 0x10) != 0 )
      {
        *((_QWORD *)v7 + 11) = 0LL;
        *((_QWORD *)v7 + 10) = 0LL;
        _InterlockedAnd((volatile signed __int32 *)this[163] + 16, 0xFFFFFFEF);
        v7 = v12;
      }
      if ( (v6 & 8) == 0 )
      {
        *((_QWORD *)v7 + 11) = *((_QWORD *)v7 + 10);
        v10 = *(_OWORD *)&a2->u64PaddingFrames;
        v11 = *(_QWORD *)&a2->f32FramesPerSecond;
        *(_OWORD *)((char *)v7 + 40) = *(_OWORD *)&a2->u64DevicePosition;
        *(_OWORD *)((char *)v7 + 56) = v10;
        *((_QWORD *)v7 + 9) = v11;
        _InterlockedOr((volatile signed __int32 *)this[163] + 16, 0xCu);
        v7 = v12;
      }
      *((_DWORD *)v7 + 24) = a3;
      v12 = 0LL;
      util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_Commit(v13);
      std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(&v13);
      if ( v12 )
      {
        v12 = 0LL;
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(&v13);
      }
    }
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
}
