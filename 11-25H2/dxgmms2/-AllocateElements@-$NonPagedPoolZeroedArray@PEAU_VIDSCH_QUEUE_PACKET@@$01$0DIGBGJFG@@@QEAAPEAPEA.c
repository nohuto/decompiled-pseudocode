/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x140035FD0
 * Callers:
 *     VidSchEnqueueCpuEvent @ 0x1400E4D10 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements(
        __int64 a1,
        unsigned int a2)
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
      result = ExAllocatePool2(64LL, 8LL * a2, 945908054LL);
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
