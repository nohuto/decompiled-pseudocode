/*
 * XREFs of MiBadMemoryLogger @ 0x140674730
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x14049D66C (IopAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1404A6840 (IoWriteErrorLogEntry.c)
 */

void __fastcall MiBadMemoryLogger(__int64 a1)
{
  __int64 ErrorLogEntry; // rax

  ErrorLogEntry = IopAllocateErrorLogEntry(0LL, 0LL, 48);
  if ( ErrorLogEntry )
  {
    *(_DWORD *)(ErrorLogEntry + 12) = -1073740023;
    *(_DWORD *)(ErrorLogEntry + 16) = *(_DWORD *)a1;
    *(_QWORD *)(ErrorLogEntry + 32) = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(ErrorLogEntry + 40) = *(_DWORD *)(a1 + 8);
    *(_WORD *)(ErrorLogEntry + 2) = 4;
    IoWriteErrorLogEntry((PVOID)ErrorLogEntry);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
}
