/*
 * XREFs of KiInitializeProcessAvailableCpuState @ 0x1404B124C
 * Callers:
 *     KeInitializeProcess @ 0x1409BE04C (KeInitializeProcess.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 (__fastcall *__fastcall KiInitializeProcessAvailableCpuState(__int64 a1, __int64 a2, __int64 a3))()
{
  __int64 v3; // rbx
  __int64 (__fastcall *result)(); // rax

  v3 = a1 + 56;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  memset_0((void *)(a1 + 56), 0, 0x40uLL);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 16) = KiAvailableCpusWorkItemCallbackWrapper;
  result = KiAvailableCpusProcessWorkItemCallback;
  *(_QWORD *)(v3 + 24) = v3;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = KiAvailableCpusProcessWorkItemCallback;
  *(_QWORD *)(v3 + 56) = a3;
  return result;
}
