/*
 * XREFs of Processor @ 0x14006EDE0
 * Callers:
 *     <none>
 * Callees:
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall Processor(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // rsi
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(a1[40], *(_QWORD *)(a2[10] + 32), a1[10], a1[11], a2 + 8, 0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 12;
    *(_DWORD *)(*v2 + 88) = 12;
    v6 = HeapAlloc(a1[40], 1330794568, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v7 = *(_QWORD *)(*v2 + 96);
      *(_BYTE *)(v7 + 8) = *(_BYTE *)(a2[10] + 56);
      *(_DWORD *)v7 = *(_DWORD *)(a2[10] + 96);
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a2[10] + 136);
      if ( ghCreate )
        ghCreate(12LL, *v2 + 120);
      return (unsigned int)PushScope(a1, a1[15], a2[5], 0LL, *v2, a1[11], a1[40], a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      PrintDebugMessage(0x97u, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return NameSpaceObject;
}
