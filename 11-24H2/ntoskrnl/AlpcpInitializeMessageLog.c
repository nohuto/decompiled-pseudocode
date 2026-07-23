/*
 * XREFs of AlpcpInitializeMessageLog @ 0x140740B60
 * Callers:
 *     AlpcpInitSystem @ 0x14073FD1C (AlpcpInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeMessageLog(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  PVOID v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax

  v2 = 0;
  AlpcpMessageLogLock = 0LL;
  qword_140F0F588 = (__int64)&AlpcpMessageLogListHead;
  AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
  qword_140F0F568 = (__int64)&AlpcpFreeMessageLogListHead;
  AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
  qword_140F0F558 = (__int64)&AlpcpFreeMessageSnapshotListHead;
  AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
  if ( a1 && a2 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x4000uLL, 0x6C4D6C41u);
    AlpcpMessageLogLookupTable = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v7 = 1024LL;
    do
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      Pool2 += 2;
      --v7;
    }
    while ( v7 );
    v8 = ExAllocatePool2(0x100uLL, a1 << 6, 0x6C4D6C41u);
    if ( !v8 )
    {
      v9 = AlpcpMessageLogLookupTable;
LABEL_9:
      ExFreePoolWithTag(v9, 0);
      return 3221225626LL;
    }
    v10 = ExAllocatePool2(0x100uLL, 120 * a2, 0x734D6C41u);
    if ( !v10 )
    {
      ExFreePoolWithTag(AlpcpMessageLogLookupTable, 0);
      v9 = (PVOID)v8;
      goto LABEL_9;
    }
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (_QWORD *)((v12 << 6) + v8);
        v13[7] = v13 + 6;
        v13[6] = v13 + 6;
        v14 = (_QWORD *)qword_140F0F568;
        if ( *(__int64 **)qword_140F0F568 != &AlpcpFreeMessageLogListHead )
          break;
        v13[1] = qword_140F0F568;
        ++v11;
        *v13 = &AlpcpFreeMessageLogListHead;
        *v14 = v13;
        v12 = v11;
        qword_140F0F568 = (__int64)v13;
        if ( v11 >= a1 )
          goto LABEL_16;
      }
LABEL_21:
      __fastfail(3u);
    }
LABEL_16:
    if ( a2 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        v16 = (_QWORD *)qword_140F0F558;
        v17 = (_QWORD *)(v10 + 120 * v15);
        if ( *(__int64 **)qword_140F0F558 != &AlpcpFreeMessageSnapshotListHead )
          break;
        *v17 = &AlpcpFreeMessageSnapshotListHead;
        ++v2;
        v17[1] = v16;
        *v16 = v17;
        qword_140F0F558 = (__int64)v17;
        v15 = v2;
        if ( v2 >= a2 )
          return 0LL;
      }
      goto LABEL_21;
    }
  }
  return 0LL;
}
