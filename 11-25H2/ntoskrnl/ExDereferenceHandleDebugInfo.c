/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x140A0488C
 * Callers:
 *     ExDisableHandleTracing @ 0x140647E0C (ExDisableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x140851530 (ExpUpdateDebugInfo.c)
 *     ExpFreeHandleTable @ 0x1409729AC (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x140AB59E8 (ExEnableHandleTracing.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
