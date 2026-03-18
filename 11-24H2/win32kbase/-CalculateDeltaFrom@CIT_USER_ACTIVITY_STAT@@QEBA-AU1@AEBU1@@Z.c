/*
 * XREFs of ?CalculateDeltaFrom@CIT_USER_ACTIVITY_STAT@@QEBA?AU1@AEBU1@@Z @ 0x1400B2D44
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CIT_USER_ACTIVITY_STAT::CalculateDeltaFrom(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 UserSessionState; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  __int64 v9; // r8
  unsigned int v10; // r10d
  unsigned int v11; // eax
  unsigned int v12; // edx

  UserSessionState = W32GetUserSessionState(a1);
  v7 = *a1;
  v8 = *a1;
  *a2 = 0;
  a2[1] = 0;
  v9 = *(_QWORD *)(UserSessionState + 18968);
  v10 = v8 - *a3;
  if ( v7 >= *a3 )
    goto LABEL_5;
  v11 = -1;
  if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                        - *(_QWORD *)(v9 + 64)) <= 0xFFFFFFFF )
    v11 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_DWORD *)(v9 + 64);
  if ( v10 <= v11 )
LABEL_5:
    *a2 = v10;
  v12 = a3[1] & 0x7FFFFFFF;
  if ( (a1[1] & 0x7FFFFFFF) > v12 )
    a2[1] = (a1[1] - v12) & 0x7FFFFFFF;
  return a2;
}
