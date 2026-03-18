/*
 * XREFs of IopCheckHandleForRevocation @ 0x1405972F0
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x140418C10 (IopCancelIrpsInFileObjectList.c)
 *     IopSetFileObjectExtensionFlag @ 0x140434650 (IopSetFileObjectExtensionFlag.c)
 *     ExUnlockHandleTableEntry @ 0x14093D890 (ExUnlockHandleTableEntry.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A628 (IopCancelIrpsInThreadListForCurrentProcess.c)
 */

char __fastcall IopCheckHandleForRevocation(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 v7; // rbx

  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                             + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)] == IoFileObjectType )
  {
    v6 = ((*a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 48;
    if ( *(_QWORD *)(((*a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x38) == *a4 )
    {
      v7 = a4[1];
      IopSetFileObjectExtensionFlag(v6, 4u);
      IopCancelIrpsInFileObjectList(v6, v7, 0, 0, 0, 0);
      IopCancelIrpsInThreadListForCurrentProcess(v6, 0LL);
    }
  }
  ExUnlockHandleTableEntry(a1, a2);
  return 0;
}
