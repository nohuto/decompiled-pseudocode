/*
 * XREFs of LinkNodeWriteStateToHardware @ 0x1400B2D74
 * Callers:
 *     IrqArbCommitAllocation @ 0x1400B1CB0 (IrqArbCommitAllocation.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     LinkNodepRunSrs @ 0x1400989EC (LinkNodepRunSrs.c)
 */

__int64 LinkNodeWriteStateToHardware()
{
  __int64 i; // rbx
  int v1; // eax
  __int64 result; // rax
  __int64 *v3; // rax
  __int64 v4; // rdi

  for ( i = LinkNodeListHead - 56; &LinkNodeListHead != (__int64 *)(i + 56); i = *(_QWORD *)(i + 56) - 56LL )
  {
    v1 = *(_DWORD *)(i + 24);
    if ( *(_DWORD *)(i + 28) )
    {
      if ( !v1 || *(_DWORD *)(i + 36) != *(_DWORD *)(i + 32) )
      {
        result = LinkNodepRunSrs(*(_QWORD *)(i + 600), *(_DWORD *)(i + 36));
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( v1 )
    {
      v3 = AMLIGetNamedChild(*(__int64 **)(i + 600), 1397310559);
      v4 = (__int64)v3;
      if ( v3 )
      {
        AMLIEvalNameSpaceObject(v3, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v4);
      }
    }
  }
  return 0LL;
}
