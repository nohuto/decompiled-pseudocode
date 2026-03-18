/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_CONTEXT@@$07$0ELGHHIEE@@@QEAAPEAPEAU_VIDSCH_CONTEXT@@I@Z @ 0x14002BBD0
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<_VIDSCH_CONTEXT *,8,1265072196>::AllocateElements(
        __int64 a1,
        unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 > 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
    {
      return 0LL;
    }
    else
    {
      result = ExAllocatePool2(64LL, 8LL * a2, 1265072196LL);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 72) = a2;
    }
  }
  else
  {
    v4 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v4;
    if ( a2 )
      memset(v4, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 72) = a2;
  }
  return result;
}
