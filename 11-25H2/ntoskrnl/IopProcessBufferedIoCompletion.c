/*
 * XREFs of IopProcessBufferedIoCompletion @ 0x1402A2A40
 * Callers:
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1402A2964 (IopIoRingCompleteIrp.c)
 *     IopCopyCompleteReadRequest @ 0x1402D3570 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopProcessBufferedIoCompletion(__int64 a1)
{
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  void *v5; // rcx
  const void *v6; // rdx

  v2 = (_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 16);
  if ( (v3 & 0x10) != 0 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 48);
      if ( v4 != -2147483626 && (v4 & 0xC0000000) != 0xC0000000 )
      {
        v5 = *(void **)(a1 + 112);
        v6 = *(const void **)(a1 + 24);
        if ( v5 != v6 )
          memmove(v5, v6, *(_QWORD *)(a1 + 56));
      }
    }
    if ( (*v2 & 0x20) != 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  *v2 &= 0xFFFFFFCF;
}
