/*
 * XREFs of PiDmListAddObjectWorker @ 0x1408B1A14
 * Callers:
 *     PiDmListAddObject @ 0x1408B0CE4 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x140A80DA0 (PiDmListAddList.c)
 * Callees:
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140A6ABE8 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  char v11; // si
  _QWORD *v12; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + PiDmListDefs[v8 + 3]);
  v10 = a3 + PiDmListDefs[v8 + 1];
  if ( *v9 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    PiDmObjectManagerAcquireExclusiveLock(a2);
    ++*(_DWORD *)(a3 + 12);
    PiDmObjectManagerReleaseLock(a2);
    v12 = *(_QWORD **)(v10 + 8);
    if ( *v12 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v12;
    *v12 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v11;
  return result;
}
