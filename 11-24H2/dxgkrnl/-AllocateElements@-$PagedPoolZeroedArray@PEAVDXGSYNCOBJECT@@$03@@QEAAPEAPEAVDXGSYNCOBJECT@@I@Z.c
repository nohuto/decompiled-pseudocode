/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x140330AE0
 * Callers:
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1402BA4F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(__int64 a1, unsigned int a2)
{
  void *v4; // rcx
  __int64 result; // rax

  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
    {
      result = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 40) = a2;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v4 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v4;
    if ( a2 )
      memset(v4, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 40) = a2;
  }
  return result;
}
