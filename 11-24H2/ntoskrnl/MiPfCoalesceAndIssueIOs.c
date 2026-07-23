/*
 * XREFs of MiPfCoalesceAndIssueIOs @ 0x140352778
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x140351AD0 (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalesceCandidates @ 0x1403DAED4 (MiPfIssueCoalesceCandidates.c)
 */

__int64 __fastcall MiPfCoalesceAndIssueIOs(__int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // edi
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 **v13; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 *v21; // rax
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
    v15 = *(_DWORD *)(v9 + 184);
    if ( v15 >= 0x100000 && v25 == &v25 )
    {
      v22 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        goto LABEL_25;
      v23 = *(_QWORD **)(v9 + 8);
      if ( *v23 != v9 )
        goto LABEL_25;
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      if ( a3 )
        *a3 -= *(unsigned int *)(v9 + 184);
      MiIssueHardFaultIo(v9, 0, 0LL);
      v24 = *(__int64 **)(a2 + 8);
      if ( *v24 != a2 )
LABEL_25:
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
      v16 = *(_QWORD *)(v9 + 96);
      if ( v4 <= v16
        && v8 == *(_QWORD *)(v9 + 200)
        && (v17 = v16 - v4, v18 = v15 + v17, v17 <= 0x20000)
        && v18 + v3 <= 0x100000 )
      {
        v19 = *(_QWORD *)v9;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
          goto LABEL_25;
        v20 = *(_QWORD **)(v9 + 8);
        if ( *v20 != v9 )
          goto LABEL_25;
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = v26;
        if ( (_QWORD **)*v26 != &v25 )
          goto LABEL_25;
        *(_QWORD *)(v9 + 8) = v26;
        *(_QWORD *)v9 = &v25;
        v3 += v18;
        *v21 = v9;
        v4 += v18;
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
      v11 = (__int64 *)*a1;
      if ( (__int64 *)*a1 == a1 )
        break;
      if ( (__int64 *)v11[1] != a1 )
        goto LABEL_25;
      v12 = *v11;
      if ( *(__int64 **)(*v11 + 8) != v11 )
        goto LABEL_25;
      *a1 = v12;
      *(_QWORD *)(v12 + 8) = a1;
      MiIssueHardFaultIo((__int64)v11, 0, 0LL);
      v13 = *(__int64 ***)(a2 + 8);
      if ( *v13 != (__int64 *)a2 )
        goto LABEL_25;
      *v11 = a2;
      v11[1] = (__int64)v13;
      *v13 = v11;
      *(_QWORD *)(a2 + 8) = v11;
    }
  }
  return (unsigned int)v10;
}
