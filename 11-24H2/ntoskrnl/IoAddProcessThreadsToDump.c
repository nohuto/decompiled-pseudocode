/*
 * XREFs of IoAddProcessThreadsToDump @ 0x14059CFE4
 * Callers:
 *     IopLiveDumpAddProcessesCallback @ 0x140595010 (IopLiveDumpAddProcessesCallback.c)
 *     IopPartialDumpAddProcessesCallback @ 0x14059E3A0 (IopPartialDumpAddProcessesCallback.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14021F4D8 (KeEnumerateKernelStackSegments.c)
 *     MmAddRangeToCrashDump @ 0x140678B70 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IoAddProcessThreadsToDump(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  int v5; // r8d
  int v6; // eax
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a2 + 48);
  v4 = *(_QWORD **)(a2 + 48);
  v5 = 0;
  while ( v4 != v2 )
  {
    v9 = 0LL;
    v6 = MmAddRangeToCrashDump(a1, v4 - 95, 1944LL);
    v5 = v6;
    if ( v6 >= 0 && (*(_DWORD *)(v4 - 80) & 0x20000) != 0 )
    {
      *(_QWORD *)&v9 = a1;
      DWORD2(v9) = v6;
      KeEnumerateKernelStackSegments(
        (__int64)(v4 - 95),
        (void (__fastcall *)(__int64, _QWORD *, __int64))IoAddThreadStackToDump,
        (__int64)&v9,
        v7);
      v5 = DWORD2(v9);
    }
    if ( v5 < 0 )
      break;
    v4 = (_QWORD *)*v4;
  }
  return (unsigned int)v5;
}
