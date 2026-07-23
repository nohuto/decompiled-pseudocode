/*
 * XREFs of PfpFlushEventBuffers @ 0x140971A8C
 * Callers:
 *     PfpFlushBuffers @ 0x140971DE0 (PfpFlushBuffers.c)
 * Callees:
 *     PfFbBufferListFlushStandby @ 0x140473B84 (PfFbBufferListFlushStandby.c)
 *     PfFbBufferListInsertInFree @ 0x140473C20 (PfFbBufferListInsertInFree.c)
 *     PfTFullEventListAdd @ 0x140483C48 (PfTFullEventListAdd.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PfpCopyEvent @ 0x140971B9C (PfpCopyEvent.c)
 */

__int64 __fastcall PfpFlushEventBuffers(_SLIST_HEADER *a1)
{
  _SLIST_ENTRY *v1; // r15
  _SLIST_ENTRY *v3; // rbx
  int v4; // esi
  PSLIST_ENTRY i; // rdx
  _SLIST_ENTRY *v6; // rax
  _SLIST_ENTRY *v7; // rdi
  _SLIST_ENTRY *v8; // r14
  _SLIST_ENTRY *v10; // rdx

  v1 = (_SLIST_ENTRY *)&a1[26];
  v3 = 0LL;
  v4 = 0;
  PfFbBufferListFlushStandby((__int64)a1, (__int64)&a1[26]);
  for ( i = RtlpInterlockedFlushSList(a1 + 34); i; v3 = v6 )
  {
    v6 = i;
    i = i->Next;
    v6->Next = v3;
  }
  while ( v3 )
  {
    v7 = v3;
    v3 = v3->Next;
    v8 = v7 + 3;
    if ( *((_DWORD *)&v7[2].Next + 2) )
    {
      while ( 1 )
      {
        v4 = PfpCopyEvent(a1, v8);
        if ( v4 < 0 )
          break;
        v8 += (LODWORD(v8->Next) >> 2) & 0x3FF;
        if ( (*((_DWORD *)&v7[2].Next + 2))-- == 1 )
          goto LABEL_7;
      }
      memmove(&v7[3], v8, (unsigned int)(LODWORD(v7[2].Next) - (_DWORD)v8));
      v10 = v7;
      while ( 1 )
      {
        PfTFullEventListAdd((__int64)a1, v10);
        if ( !v3 )
          break;
        v10 = v3;
        v3 = v3->Next;
      }
      return (unsigned int)v4;
    }
LABEL_7:
    PfFbBufferListInsertInFree(v1, v7, LODWORD(v7[2].Next) - (_DWORD)v7, *((_DWORD *)&v7[2].Next + 3), 1);
  }
  return (unsigned int)v4;
}
