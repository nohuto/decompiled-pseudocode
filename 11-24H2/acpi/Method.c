/*
 * XREFs of Method @ 0x140041060
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     AddObjSymbol @ 0x1400411D0 (AddObjSymbol.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall Method(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  unsigned int NameSpaceObject; // eax
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(_QWORD *)(a2[10] + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(_QWORD *)(a1 + 88),
                      a2 + 8,
                      0);
  v6 = NameSpaceObject;
  if ( NameSpaceObject )
  {
    if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
    {
      v6 = 0;
      *(_QWORD *)(a1 + 120) = a2[5];
    }
  }
  else
  {
    *(_WORD *)(*v2 + 66LL) = 8;
    *(_DWORD *)(*v2 + 88LL) = *((_DWORD *)a2 + 10) - *(_DWORD *)(a1 + 120) + 194;
    v7 = HeapAlloc(*(_QWORD *)(a1 + 320), 1413827912, *(_DWORD *)(*v2 + 88LL));
    *(_QWORD *)(*v2 + 96LL) = v7;
    if ( v7 )
    {
      v8 = *(_QWORD *)(*v2 + 96LL);
      AddObjSymbol(v8 + 194);
      memset(*(void **)(*v2 + 96LL), 0, *(unsigned int *)(*v2 + 88LL));
      *(_BYTE *)(v8 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
      memmove((void *)(v8 + 194), *(const void **)(a1 + 120), a2[5] - *(_QWORD *)(a1 + 120));
      *(_QWORD *)(a1 + 120) = a2[5];
      KeInitializeSpinLock((PKSPIN_LOCK)(v8 + 184));
      *(_QWORD *)(v8 + 24) = v8 + 16;
      *(_QWORD *)(v8 + 16) = v8 + 16;
    }
    else
    {
      v6 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(0x68u, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return v6;
}
