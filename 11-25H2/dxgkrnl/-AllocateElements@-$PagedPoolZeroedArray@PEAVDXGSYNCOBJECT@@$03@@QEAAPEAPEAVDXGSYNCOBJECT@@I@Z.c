/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x140343A70
 * Callers:
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x140323610 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= 8 )
    {
      result = ExAllocatePool2(256LL, 8LL * a2, 1265072196LL, a4);
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
    v6 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v6;
    if ( a2 )
      memset(v6, 0, 8LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 40) = a2;
  }
  return result;
}
