/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x140A00380
 * Callers:
 *     ExDisableHandleTracing @ 0x14065246C (ExDisableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x1408495B4 (ExpUpdateDebugInfo.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x1409DFCA4 (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x140AB4D44 (ExEnableHandleTracing.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  ULONG_PTR v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedAdd(&ExpTotalTraceBuffers, -v3);
  }
}
