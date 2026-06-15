/*
 * XREFs of ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14008E400
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z @ 0x1400393F8 (-ValidateAndGetFlags@CSpatialCrossProcessBaseEndpoint@@AEBA_NAEAW4CPFlags@1@@Z.c)
 *     ?ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z @ 0x140083AE8 (-ConvertHostPerfCounterToPerfCounter@@YAJPEA_K@Z.c)
 *     ??1ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA@XZ @ 0x14008E04C (--1ReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14008E118 (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetClockingData(
        CSpatialCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        struct AE_CURRENT_POSITION *a3,
        __int64 *a4,
        __int64 *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[5]; // [rsp+28h] [rbp-40h] BYREF

  v13 = 0;
  v9 = -2005139387;
  if ( CSpatialCrossProcessBaseEndpoint::ValidateAndGetFlags(
         this,
         (enum CSpatialCrossProcessBaseEndpoint::CPFlags *)&v13) )
  {
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadAccess(
      *((_QWORD *)this + 90),
      (__int64)v14);
    v10 = v14[0];
    if ( v14[0] )
    {
      *(_OWORD *)&a2->u64DevicePosition = *(_OWORD *)(v14[0] + 40LL);
      *(_OWORD *)&a2->u64PaddingFrames = *(_OWORD *)(v10 + 56);
      *(_QWORD *)&a2->f32FramesPerSecond = *(_QWORD *)(v10 + 72);
      if ( *((_BYTE *)this + 1288)
        && (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)&a2->hnsQPCPosition) )
      {
        *((_BYTE *)this + 1288) = 0;
      }
      *(_OWORD *)&a3->u64DevicePosition = *(_OWORD *)v10;
      *(_OWORD *)&a3->u64PaddingFrames = *(_OWORD *)(v10 + 16);
      *(_QWORD *)&a3->f32FramesPerSecond = *(_QWORD *)(v10 + 32);
      if ( *((_BYTE *)this + 1288)
        && (unsigned int)ConvertHostPerfCounterToPerfCounter((unsigned __int64 *)&a3->hnsQPCPosition) )
      {
        *((_BYTE *)this + 1288) = 0;
      }
      if ( (v13 & 0x10) != 0 )
      {
        *a4 = 0LL;
        v11 = 0LL;
      }
      else
      {
        *a4 = *(_QWORD *)(v10 + 88);
        v11 = *(_QWORD *)(v10 + 80);
      }
      v9 = 0;
      *a5 = v11;
    }
    util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::~ReadAccess((__int64)v14);
  }
  return v9;
}
