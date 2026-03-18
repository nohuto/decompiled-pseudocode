/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x140A03E50
 * Callers:
 *     ExDisableHandleTracing @ 0x140653D0C (ExDisableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x14084D2F4 (ExpUpdateDebugInfo.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x1409E5244 (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x140AB9D28 (ExEnableHandleTracing.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
