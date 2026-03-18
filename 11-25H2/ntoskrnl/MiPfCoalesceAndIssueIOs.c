/*
 * XREFs of MiPfCoalesceAndIssueIOs @ 0x14037A7AC
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14037991C (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x1402096C0 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalesceCandidates @ 0x14047DA98 (MiPfIssueCoalesceCandidates.c)
 */

__int64 __fastcall MiPfCoalesceAndIssueIOs(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // edi
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 *v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 **v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 *v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-8h]

  v3 = 0;
  v26 = (__int64 *)&v25;
  v4 = 0LL;
  v25 = &v25;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = *a1;
    if ( (__int64 *)*a1 == a1 )
      break;
    v12 = *(_DWORD *)(v9 + 184);
    if ( v12 >= 0x100000 && v25 == &v25 )
    {
      v22 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        goto LABEL_18;
      v23 = *(_QWORD **)(v9 + 8);
      if ( *v23 != v9 )
        goto LABEL_18;
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      if ( a3 )
        *a3 -= *(unsigned int *)(v9 + 184);
      MiIssueHardFaultIo(v9, 0, 0LL);
      v24 = *(__int64 **)(a2 + 8);
      if ( *v24 != a2 )
LABEL_18:
        __fastfail(3u);
      *(_QWORD *)v9 = a2;
      *(_QWORD *)(v9 + 8) = v24;
      *v24 = v9;
      *(_QWORD *)(a2 + 8) = v9;
    }
    else
    {
      if ( v25 == &v25 )
      {
        if ( a3 && *a3 < 0x100000uLL )
          return 0;
        v4 = *(_QWORD *)(v9 + 96);
        v8 = *(_QWORD *)(v9 + 200);
      }
      v13 = *(_QWORD *)(v9 + 96);
      if ( v4 <= v13
        && v8 == *(_QWORD *)(v9 + 200)
        && (v14 = v13 - v4, v15 = v12 + v14, v14 <= 0x20000)
        && v15 + v3 <= 0x100000 )
      {
        v16 = *(_QWORD *)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
          goto LABEL_18;
        v17 = *(_QWORD **)(v9 + 8);
        if ( *v17 != v9 )
          goto LABEL_18;
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v18 = v26;
        if ( (_QWORD **)*v26 != &v25 )
          goto LABEL_18;
        *(_QWORD *)(v9 + 8) = v26;
        *(_QWORD *)v9 = &v25;
        v3 += v15;
        *v18 = v9;
        v4 += v15;
        v26 = (__int64 *)v9;
        if ( a3 )
          *a3 -= *(unsigned int *)(v9 + 184);
      }
      else
      {
        v10 = MiPfIssueCoalesceCandidates(&v25, v3, a2);
        if ( v10 < 0 )
          goto LABEL_5;
        v3 = 0;
      }
    }
  }
  if ( v25 == &v25 || (v10 = MiPfIssueCoalesceCandidates(&v25, v3, a2), v10 >= 0) )
    v10 = 0;
LABEL_5:
  if ( !a3 )
  {
    while ( 1 )
    {
      v19 = (__int64 *)*a1;
      if ( (__int64 *)*a1 == a1 )
        break;
      if ( (__int64 *)v19[1] != a1 )
        goto LABEL_18;
      v20 = *v19;
      if ( *(__int64 **)(*v19 + 8) != v19 )
        goto LABEL_18;
      *a1 = v20;
      *(_QWORD *)(v20 + 8) = a1;
      MiIssueHardFaultIo((__int64)v19, 0, 0LL);
      v21 = *(__int64 ***)(a2 + 8);
      if ( *v21 != (__int64 *)a2 )
        goto LABEL_18;
      *v19 = a2;
      v19[1] = (__int64)v21;
      *v21 = v19;
      *(_QWORD *)(a2 + 8) = v19;
    }
  }
  return (unsigned int)v10;
}
