/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x14032359C
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D37A0 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     DxgkCreateHwQueueInternal @ 0x140321C88 (DxgkCreateHwQueueInternal.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x140322480 (NtDxgkOutputDuplPresentToHwQueue.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned char,16>::AllocateElements(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  void *v7; // rcx

  if ( a2 <= 0x10 )
  {
    v7 = a1 + 1;
    *a1 = (__int64)v7;
    if ( a2 )
      memset(v7, 0, a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    *a1 = ExAllocatePool2(256LL, a2, 1265072196LL, a4);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 6) = a2;
    return result;
  }
  return 0LL;
}
