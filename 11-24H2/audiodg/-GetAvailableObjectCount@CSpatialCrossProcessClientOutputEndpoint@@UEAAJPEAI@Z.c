/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14008FA90
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitState@PingPongState@@AEAA?AW4State@1@PEBW421@@Z @ 0x1400319A4 (-CommitState@PingPongState@@AEAA-AW4State@1@PEBW421@@Z.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008D630 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x14008E010 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14008E2D0 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  int ObjectsAvailableForRendering; // edi
  unsigned int *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edx
  void *v12; // rcx
  int v14; // [rsp+48h] [rbp+10h] BYREF
  int v15; // [rsp+50h] [rbp+18h] BYREF

  ObjectsAvailableForRendering = 0;
  if ( !a2 )
  {
    ObjectsAvailableForRendering = -2147467261;
LABEL_16:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount",
      83,
      (unsigned int)ObjectsAvailableForRendering,
      a4);
    return (unsigned int)ObjectsAvailableForRendering;
  }
  *a2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    ObjectsAvailableForRendering = -2005139437;
    goto LABEL_16;
  }
  v7 = (unsigned int *)((char *)this + 1460);
  if ( *((_BYTE *)this + 1472) )
  {
    *a2 = *v7;
  }
  else
  {
    ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering(
                                     (SpatialBlock **)this - 2,
                                     (unsigned int *)this + 364,
                                     (unsigned int *)this + 365);
    if ( ObjectsAvailableForRendering < 0 )
      goto LABEL_16;
    v8 = *(_QWORD *)this;
    v15 = 0;
    v14 = 0;
    ObjectsAvailableForRendering = (*(__int64 (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, int *, int *))(v8 + 64))(
                                     this,
                                     &v15,
                                     &v14);
    if ( ObjectsAvailableForRendering < 0
      || (ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
                                           (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                                           (unsigned int *)this + 367,
                                           v9,
                                           v10),
          ObjectsAvailableForRendering < 0) )
    {
      PingPongState::CommitState((__int64)this + 560, (__int64)&`PingPongState::AbortWrite'::`2'::nextState);
      goto LABEL_16;
    }
    v11 = v15 + v14;
    v12 = (void *)*((_QWORD *)this + 170);
    if ( v12 )
    {
      if ( v11 <= *((_DWORD *)this + 338) )
      {
        *((_DWORD *)this + 335) = 0;
        *((_DWORD *)this + 334) = v11;
        if ( v11 )
          memset_0(v12, 0, 4LL * v11);
      }
    }
    *a2 = *v7;
    *((_BYTE *)this + 1472) = 1;
  }
  return (unsigned int)ObjectsAvailableForRendering;
}
