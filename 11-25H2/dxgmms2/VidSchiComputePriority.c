/*
 * XREFs of VidSchiComputePriority @ 0x1400FF86C
 * Callers:
 *     VidSchSetPriorityContext @ 0x1400FF770 (VidSchSetPriorityContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiComputePriority(__int64 a1, int a2, int a3, char a4, _DWORD *a5)
{
  __int64 v6; // rdi
  int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // eax
  int v11; // r14d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v6 + 2792) & 4) == 0 )
  {
    v7 = 7;
    if ( a2 <= 7 )
    {
      v7 = a2;
      if ( a2 < -7 )
        v7 = -7;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
    v9 = dword_14007399C[15 * *(int *)(v8 + 24) + v7];
    *a5 = v9;
    if ( v9 >= 0x1E
      && !a3
      && !*(_BYTE *)(v8 + 2633)
      && (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 408LL) & 2) == 0
      && !SeSinglePrivilegeCheck((LUID)14LL, 1) )
    {
      return 3221225506LL;
    }
    v11 = a4 & 1;
    if ( v11 && (*(_DWORD *)(v6 + 2792) & 0x200) != 0 && *a5 < 0x10u )
      *a5 = 16;
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL * *(unsigned int *)(v6 + 4));
    if ( *(_BYTE *)(v12 + 5) )
    {
      v13 = *(_DWORD *)(v6 + 208);
    }
    else
    {
      if ( !*(_BYTE *)(v12 + 4) )
      {
        if ( !*(_BYTE *)(v6 + 7064) )
          return 0LL;
        if ( !*(_BYTE *)(v8 + 2632) )
        {
          v14 = *(_QWORD *)(v8 + 8);
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 408) & 2) == 0 && !v11 )
              *a5 = 8;
          }
        }
LABEL_27:
        if ( *(_BYTE *)(v6 + 7064) )
        {
          if ( v7 == -7 )
            *a5 = 0;
        }
        return 0LL;
      }
      v13 = *(_DWORD *)(v6 + 212);
    }
    *a5 = v13;
    goto LABEL_27;
  }
  *a5 = KeQueryPriorityThread(KeGetCurrentThread());
  return 0LL;
}
