/*
 * XREFs of IopMcGetBuffer @ 0x140A9839C
 * Callers:
 *     IopIoRingGetBuffer @ 0x140A9ACB8 (IopIoRingGetBuffer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IopMcDereferenceMdl @ 0x1405A2C18 (IopMcDereferenceMdl.c)
 *     IopMcReferenceBufferEntry @ 0x1405A2CAC (IopMcReferenceBufferEntry.c)
 *     IopMcCreateBufferEntryMdl @ 0x140719BD8 (IopMcCreateBufferEntryMdl.c)
 *     IopMcCreatePartialMdl @ 0x140719C64 (IopMcCreatePartialMdl.c)
 */

__int64 __fastcall IopMcGetBuffer(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        __int64 a3,
        void **a4,
        struct _MDL **a5)
{
  unsigned int v5; // edi
  unsigned int v7; // ebp
  unsigned __int64 v9; // rcx
  signed __int32 v11; // eax
  char v12; // cc
  signed __int32 v13; // eax
  struct _MDL *PartialMdl; // rax

  v5 = 0;
  v7 = a3;
  v9 = a2 + (unsigned int)a3;
  *a4 = 0LL;
  *a5 = 0LL;
  if ( a2 > v9 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( v9 <= *(unsigned int *)(BugCheckParameter2 + 40) )
  {
    *a4 = (void *)(a2 + *(_QWORD *)(BugCheckParameter2 + 32));
    if ( (_DWORD)a3 && (*(_DWORD *)(BugCheckParameter2 + 12) & 5) == 0 )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 48), 1u);
      v12 = (v11 + 1 < 0) ^ __OFADD__(1, v11) | (v11 == -1);
      v13 = v11 + 1;
      if ( v12 )
        KeBugCheckEx(0x1F4u, 2uLL, BugCheckParameter2, v13, *(_QWORD *)BugCheckParameter2);
      if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 5) != 0 )
        goto LABEL_15;
      if ( !*(_QWORD *)(BugCheckParameter2 + 56) )
        IopMcCreateBufferEntryMdl(BugCheckParameter2, a2, a3, (__int64)a4);
      PartialMdl = IopMcCreatePartialMdl(BugCheckParameter2, *a4, v7, (__int64)a4);
      if ( !PartialMdl )
      {
LABEL_15:
        IopMcDereferenceMdl(BugCheckParameter2, 0);
      }
      else
      {
        *a5 = PartialMdl;
        IopMcReferenceBufferEntry(BugCheckParameter2);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v5;
}
