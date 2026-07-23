/*
 * XREFs of MiInitializeFaultVaListCore @ 0x14042A6A0
 * Callers:
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x1409F07A0 (MmVirtualAccessFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeFaultVaListCore(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)a1 = a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 1) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
