/*
 * XREFs of ?GetInputDataPointer@CSpatialCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140031330
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14000F4FC (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x140031670 (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x1400316A4 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer(
        CSpatialCrossProcessServerInputEndpoint *this,
        struct APO_CONNECTION_PROPERTY *a2,
        struct AE_CURRENT_POSITION *a3)
{
  CSpatialCrossProcessBaseEndpoint *v3; // rdi
  UINT32 u32ValidFrameCount; // esi
  char v8; // al
  __int16 v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int ObjectsAvailableForProcessing; // eax
  bool v13; // zf
  int v14; // eax

  v3 = (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 1440);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(
      (__int64)this,
      a2->u32ValidFrameCount,
      (__int64)this - 1440,
      5,
      a2->u32ValidFrameCount,
      a2->u32BufferFlags,
      0);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  if ( u32ValidFrameCount )
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 17) + 44LL), u32ValidFrameCount);
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 17) + 64LL), 0, 0);
  v9 = u32ValidFrameCount * *((_WORD *)this - 564);
  *((_BYTE *)this + 73) = (v8 & 0x10) != 0;
  (*(void (__fastcall **)(CSpatialCrossProcessBaseEndpoint *, struct AE_CURRENT_POSITION *, _QWORD))(*(_QWORD *)v3 + 80LL))(
    v3,
    a3,
    u32ValidFrameCount);
  if ( u32ValidFrameCount )
  {
    if ( CSpatialCrossProcessBaseEndpoint::IsRunning(v3) )
    {
      *((_DWORD *)this + 20) = 2;
      a2->u32BufferFlags = BUFFER_VALID;
      ObjectsAvailableForProcessing = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
                                        v3,
                                        (unsigned int *)this + 16,
                                        (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = ObjectsAvailableForProcessing;
      if ( ObjectsAvailableForProcessing < 0 )
      {
        if ( ObjectsAvailableForProcessing != -2005139358 )
          SpatialCPTraceLoggingErrorHelper(
            "CSpatialCrossProcessServerInputEndpoint::GetInputDataPointer",
            0x139u,
            ObjectsAvailableForProcessing);
      }
      else
      {
        *((_BYTE *)this + 72) = 1;
      }
      goto LABEL_9;
    }
    v13 = *((_DWORD *)this + 20) == 2;
    *((_DWORD *)this + 20) = v13;
    if ( v13 )
    {
      v14 = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForProcessing(
              v3,
              (unsigned int *)this + 16,
              (unsigned int *)this + 17);
      *((_DWORD *)this + 19) = v14;
      if ( v14 >= 0 )
        *((_BYTE *)this + 72) = 1;
    }
  }
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v11, v10, (__int64)v3, 23, 0, u32ValidFrameCount, 101);
  a2->u32BufferFlags = BUFFER_SILENT;
  *((_DWORD *)this + 19) = 0;
LABEL_9:
  a2->pBuffer = *((_QWORD *)this - 167);
  if ( (byte_1400C4541 & 4) != 0 )
    McTemplateU0pqxxx_EventWriteTransfer(v11, v10, (__int64)v3, 6, v9, v9, 0);
}
