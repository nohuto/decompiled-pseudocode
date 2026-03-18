/*
 * XREFs of IoAddProcessThreadsToDump @ 0x14059C8DC
 * Callers:
 *     IopLiveDumpAddProcessesCallback @ 0x140594980 (IopLiveDumpAddProcessesCallback.c)
 *     IopPartialDumpAddProcessesCallback @ 0x14059DC80 (IopPartialDumpAddProcessesCallback.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140228B88 (KeEnumerateKernelStackSegments.c)
 *     MmAddRangeToCrashDump @ 0x14066C040 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IoAddProcessThreadsToDump(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  int v5; // r8d
  int v6; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a2 + 48);
  v4 = *(_QWORD **)(a2 + 48);
  v5 = 0;
  while ( v4 != v2 )
  {
    v8 = 0LL;
    v6 = MmAddRangeToCrashDump(a1, v4 - 95, 1944LL);
    v5 = v6;
    if ( v6 >= 0 && (*(_DWORD *)(v4 - 80) & 0x20000) != 0 )
    {
      *(_QWORD *)&v8 = a1;
      DWORD2(v8) = v6;
      KeEnumerateKernelStackSegments(
        (__int64)(v4 - 95),
        (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IoAddThreadStackToDump,
        (__int64)&v8);
      v5 = DWORD2(v8);
    }
    if ( v5 < 0 )
      break;
    v4 = (_QWORD *)*v4;
  }
  return (unsigned int)v5;
}
