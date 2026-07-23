/*
 * XREFs of MiPfIssueCoalesceCandidates @ 0x1403DAED4
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140352778 (MiPfCoalesceAndIssueIOs.c)
 * Callees:
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1403DAF90 (MiPfIssueCoalescedSupport.c)
 */

__int64 __fastcall MiPfIssueCoalesceCandidates(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  v3 = 0;
  if ( *a1 != a1[1] )
  {
    v10 = (_QWORD *)MiPfIssueCoalescedSupport(a1, a2);
    if ( !v10 )
    {
      v3 = -1073741670;
      goto LABEL_2;
    }
    v11 = *(_QWORD **)(a3 + 8);
    if ( *v11 == a3 )
    {
      *v10 = a3;
      v10[1] = v11;
      *v11 = v10;
      *(_QWORD *)(a3 + 8) = v10;
      goto LABEL_2;
    }
LABEL_6:
    __fastfail(3u);
  }
LABEL_2:
  while ( 1 )
  {
    v6 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
      return v3;
    if ( (_QWORD *)v6[1] != a1 )
      goto LABEL_6;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_6;
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    MiIssueHardFaultIo((__int64)v6, 0, 0LL);
    v8 = *(_QWORD **)(a3 + 8);
    if ( *v8 != a3 )
      goto LABEL_6;
    *v6 = a3;
    v6[1] = v8;
    *v8 = v6;
    *(_QWORD *)(a3 + 8) = v6;
  }
}
