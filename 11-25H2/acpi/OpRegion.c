/*
 * XREFs of OpRegion @ 0x140030DC0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     MapUnmapPhysMem @ 0x140030F40 (MapUnmapPhysMem.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall OpRegion(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int NameSpaceObject; // edi
  __int64 v6; // rax
  unsigned int *v7; // rbx
  char v8; // al

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      a1[40],
                      *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL),
                      a1[10],
                      a1[11],
                      (_QWORD *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*(_QWORD *)v2 + 66LL) = 10;
    *(_DWORD *)(*(_QWORD *)v2 + 88LL) = 48;
    v6 = HeapAlloc(a1[40], 1196576584, *(_DWORD *)(*(_QWORD *)v2 + 88LL));
    *(_QWORD *)(*(_QWORD *)v2 + 96LL) = v6;
    if ( v6 )
    {
      memset(*(void **)(*(_QWORD *)v2 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 88LL));
      v7 = *(unsigned int **)(*(_QWORD *)v2 + 96LL);
      *((_BYTE *)v7 + 12) = *(_BYTE *)(*(_QWORD *)(a2 + 80) + 56LL);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v7[2] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 136LL);
      KeInitializeSpinLock((PKSPIN_LOCK)v7 + 3);
      *((_QWORD *)v7 + 5) = v7 + 8;
      *((_QWORD *)v7 + 4) = v7 + 8;
      v8 = *((_BYTE *)v7 + 12);
      if ( v8 )
      {
        if ( v8 == 1 )
          *(_QWORD *)v7 = *v7;
      }
      else
      {
        NameSpaceObject = MapUnmapPhysMem(a1, *(_QWORD *)v7, v7[2], v7);
        if ( !NameSpaceObject )
          *((_BYTE *)v7 + 13) |= 1u;
      }
      if ( ghCreate )
        ghCreate(10LL, *(_QWORD *)v2 + 120LL);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      PrintDebugMessage(0x74u, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return NameSpaceObject;
}
