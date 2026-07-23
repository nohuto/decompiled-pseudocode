/*
 * XREFs of MiAssignBackgroundZeroThreadToProcessor @ 0x1403312CC
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiAddZeroingThreads @ 0x140413008 (MiAddZeroingThreads.c)
 *     MiSelectBestZeroingProcessor @ 0x140413840 (MiSelectBestZeroingProcessor.c)
 * Callees:
 *     KeSetUserGroupAffinityThread @ 0x1403A1240 (KeSetUserGroupAffinityThread.c)
 *     MiUpdateDomainAvailableAffinity @ 0x140413A28 (MiUpdateDomainAvailableAffinity.c)
 */

_QWORD *__fastcall MiAssignBackgroundZeroThreadToProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v7; // rdx
  _QWORD *result; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r8

  v3 = *(unsigned int *)(a3 + 44);
  v4 = a1 + 352;
  *(_DWORD *)(a1 + 344) = v3;
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a3 + 24);
  v7 = 48 * v3;
  result = (_QWORD *)(a1 + 432);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a3 + 24);
  v9 = *(_QWORD *)(a2 + 136) + v7;
  ++*(_DWORD *)(v9 + 32);
  v10 = *(_QWORD **)(v9 + 24);
  if ( *v10 != v9 + 16 )
    __fastfail(3u);
  *result = v9 + 16;
  *(_QWORD *)(a1 + 440) = v10;
  *v10 = result;
  *(_QWORD *)(v9 + 24) = result;
  if ( *(_DWORD *)a2 )
  {
    result = (_QWORD *)MiUpdateDomainAvailableAffinity(a1, v9, 1LL);
    if ( *(_DWORD *)a2 )
      return (_QWORD *)KeSetUserGroupAffinityThread(*(_QWORD *)(a1 + 328), v4);
  }
  return result;
}
