/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x14002BF40
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401EFCAC (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x140322BB0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
    {
      return 0LL;
    }
    else
    {
      result = ExAllocatePool2(64LL, 8LL * a2, 1265072196LL, a4);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 40) = a2;
    }
  }
  else
  {
    v6 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v6;
    if ( a2 )
      memset(v6, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 40) = a2;
  }
  return result;
}
