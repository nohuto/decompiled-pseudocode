/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x140323510
 * Callers:
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x140322480 (NtDxgkOutputDuplPresentToHwQueue.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x140322BB0 (DxgkSignalSynchronizationObjectFromCpu.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,4>::AllocateElements(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  if ( a2 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
    {
      return 0LL;
    }
    else
    {
      result = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL, a4);
      *(_QWORD *)a1 = result;
      *(_DWORD *)(a1 + 24) = a2;
    }
  }
  else
  {
    v6 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v6;
    if ( a2 )
      memset(v6, 0, 4LL * a2);
    result = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = a2;
  }
  return result;
}
