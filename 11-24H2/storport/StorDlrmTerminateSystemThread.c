/*
 * XREFs of StorDlrmTerminateSystemThread @ 0x1401B3494
 * Callers:
 *     StorAdapterInitializeDlrmIfSupported @ 0x1401B2EF0 (StorAdapterInitializeDlrmIfSupported.c)
 *     StorDlrmCleanup @ 0x1401B32A4 (StorDlrmCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall StorDlrmTerminateSystemThread(__int64 a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_QWORD *)(a1 + 80) )
  {
    result = *(_DWORD *)(a1 + 12);
    if ( (result & 4) == 0 )
    {
      *(_DWORD *)(a1 + 12) |= 4u;
      _InterlockedOr(v4, 0);
      KeSetEvent((PRKEVENT)(a1 + 88), 0, 0);
      v3 = *(void **)(a1 + 80);
      Timeout.QuadPart = -30000000LL;
      ZwWaitForSingleObject(v3, 0, &Timeout);
      result = ZwClose(*(HANDLE *)(a1 + 80));
      *(_QWORD *)(a1 + 80) = 0LL;
    }
  }
  return result;
}
