/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$01@@QEAAPEAPEAVDXGCONTEXT@@I@Z @ 0x140300070
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<DXGCONTEXT *,2>::AllocateElements(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 2 )
  {
    v5 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v5;
    if ( a2 )
      memset(v5, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = a2;
  }
  else if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
  {
    return 0LL;
  }
  else
  {
    result = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL);
    *(_QWORD *)a1 = result;
    *(_DWORD *)(a1 + 24) = a2;
  }
  return result;
}
