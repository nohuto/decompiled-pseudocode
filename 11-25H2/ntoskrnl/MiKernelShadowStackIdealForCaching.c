/*
 * XREFs of MiKernelShadowStackIdealForCaching @ 0x14048AE28
 * Callers:
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140674890 (MiRemoveNonIdealCachedStacks.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiValidateKernelShadowStackPage @ 0x140346F68 (MiValidateKernelShadowStackPage.c)
 */

__int64 __fastcall MiKernelShadowStackIdealForCaching(
        _QWORD *BugCheckParameter2,
        ULONG_PTR a2,
        __int64 *a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // r9
  ULONG_PTR v10; // r14
  unsigned int v12; // r8d

  *a3 = 0LL;
  v4 = 0;
  *a4 = -1;
  v8 = BugCheckParameter2;
  if ( (unsigned __int64)BugCheckParameter2 < a2 )
  {
    v9 = 0LL;
    do
    {
      v10 = (*v8 >> 12) & 0xFFFFFFFFFFLL;
      if ( !v9 )
        *a3 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(48 * v10 - 0x220000000000LL + 40) >> 43) & 0x3FFLL));
      MiValidateKernelShadowStackPage((ULONG_PTR)v8, 48 * v10 - 0x220000000000LL);
      if ( *a4 == -1 )
      {
        *a4 = MiPageToNode(v10);
      }
      else if ( *a4 != (unsigned int)MiPageToNode(v10) )
      {
        v4 = 1;
      }
      v9 = *a3;
      if ( (*(_DWORD *)(*a3 + 4) & 8) != 0 && (unsigned int)MiGetPfnSlabType(48 * v10 - 0x220000000000LL) == 9 )
        v4 = v12;
      ++v8;
    }
    while ( (unsigned __int64)v8 < a2 );
  }
  return v4;
}
