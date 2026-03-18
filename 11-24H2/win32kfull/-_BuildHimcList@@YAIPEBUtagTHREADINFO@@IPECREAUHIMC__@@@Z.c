/*
 * XREFs of ?_BuildHimcList@@YAIPEBUtagTHREADINFO@@IPECREAUHIMC__@@@Z @ 0x14027FABC
 * Callers:
 *     NtUserBuildHimcList @ 0x14020A6F0 (NtUserBuildHimcList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _BuildHimcList(const struct tagTHREADINFO *a1, unsigned int a2, struct HIMC__ *volatile *a3)
{
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 j; // rdx
  __int64 k; // r8
  __int64 i; // rdx

  v5 = 0LL;
  if ( a1 )
  {
    for ( i = *((_QWORD *)a1 + 104); i && (unsigned int)v5 < a2; i = *(_QWORD *)(i + 56) )
    {
      a3[v5] = *(struct HIMC__ *volatile *)i;
      v5 = (unsigned int)(v5 + 1);
    }
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    for ( j = *(_QWORD *)(v7 + 328); j; j = *(_QWORD *)(j + 704) )
    {
      for ( k = *(_QWORD *)(j + 832); k && (unsigned int)v5 < a2; k = *(_QWORD *)(k + 56) )
      {
        a3[v5] = *(struct HIMC__ *volatile *)k;
        v5 = (unsigned int)(v5 + 1);
      }
    }
  }
  return (unsigned int)v5;
}
