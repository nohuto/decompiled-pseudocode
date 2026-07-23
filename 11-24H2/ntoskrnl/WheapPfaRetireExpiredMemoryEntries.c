/*
 * XREFs of WheapPfaRetireExpiredMemoryEntries @ 0x1407C99DC
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1407C9714 (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheapPfaLogPageMonitorRemoval @ 0x1407C967C (WheapPfaLogPageMonitorRemoval.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPfaRetireExpiredMemoryEntries(unsigned __int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  PVOID *v4; // rbx
  unsigned __int64 v5; // rbp
  PVOID *v6; // rdi
  PVOID **v7; // rax

  v2 = *(unsigned int *)off_140E09648;
  if ( (_DWORD)v2 )
  {
    v3 = 10000000 * v2;
    if ( a1 >= v3 )
    {
      v4 = (PVOID *)WheapPfaList;
      v5 = a1 - v3;
      while ( v4 != &WheapPfaList )
      {
        v6 = v4;
        v4 = (PVOID *)*v4;
        if ( (unsigned __int64)v6[4] <= v5 )
        {
          if ( v4[1] != v6 || (v7 = (PVOID **)v6[1], *v7 != v6) )
            __fastfail(3u);
          *v7 = v4;
          v4[1] = v7;
          WheapPfaLogPageMonitorRemoval((__int64)v6, 2, a1);
          ExFreePoolWithTag(v6, 0x61656857u);
        }
      }
    }
  }
}
