/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@_K$0CA@@@QEAAPEA_KI@Z @ 0x14039242C
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021F500 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned __int64,32>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 0x20 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 8LL * a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
  {
    *a1 = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 66) = a2;
    return result;
  }
  return 0LL;
}
