/*
 * XREFs of DSA_EnumCallback @ 0x180683808
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x18068AEEC (--1CPinList@@QEAA@XZ.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180694BA0 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F8A80 (DSA_GetItemPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __stdcall DSA_EnumCallback(HDSA hdsa, PFNDAENUMCALLBACK pfnCB, void *pData)
{
  int i; // ebx
  PVOID ItemPtr; // rax

  if ( hdsa )
  {
    if ( pfnCB )
    {
      for ( i = 0; i < *(_DWORD *)hdsa; ++i )
      {
        ItemPtr = DSA_GetItemPtr(hdsa, i);
        if ( !((unsigned int (__fastcall *)(PVOID, void *))pfnCB)(ItemPtr, pData) )
          break;
      }
    }
  }
}
