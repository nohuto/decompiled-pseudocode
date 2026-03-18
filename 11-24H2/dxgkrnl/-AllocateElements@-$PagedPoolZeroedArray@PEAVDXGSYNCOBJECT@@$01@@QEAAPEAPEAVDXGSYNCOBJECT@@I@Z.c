/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1402FD3E0
 * Callers:
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(__int64 a1, unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
    {
      return 0LL;
    }
    else
    {
      result = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 24) = a2;
    }
  }
  else
  {
    v4 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v4;
    if ( a2 )
      memset(v4, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = a2;
  }
  return result;
}
