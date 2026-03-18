/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@E$0BA@@@QEAAPEAEI@Z @ 0x1402BA484
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D8A50 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 *     NtDxgkOutputDuplPresentToHwQueue @ 0x1402B90B0 (NtDxgkOutputDuplPresentToHwQueue.c)
 *     DxgkCreateHwQueueInternal @ 0x1402BAF98 (DxgkCreateHwQueueInternal.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned char,16>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 0x10 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, a2);
    goto LABEL_4;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 )
  {
    *a1 = ExAllocatePool2(256LL, a2, 1265072196LL);
LABEL_4:
    result = *a1;
    *((_DWORD *)a1 + 6) = a2;
    return result;
  }
  return 0LL;
}
