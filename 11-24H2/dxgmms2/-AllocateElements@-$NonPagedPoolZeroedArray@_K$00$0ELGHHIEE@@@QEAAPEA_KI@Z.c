/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$00$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x140034770
 * Callers:
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x1400342D0 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<unsigned __int64,1,1265072196>::AllocateElements(
        __int64 *a1,
        unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 <= 1 )
  {
    v4 = a1 + 1;
    *a1 = (__int64)v4;
    if ( a2 )
      memset(v4, 0, 8LL * a2);
    goto LABEL_6;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    *a1 = ExAllocatePool2(64LL, 8LL * a2, 1265072196LL);
LABEL_6:
    result = *a1;
    *((_DWORD *)a1 + 4) = a2;
    return result;
  }
  return 0LL;
}
