/*
 * XREFs of SdbpInitializeMatchers @ 0x140943694
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SdbpInitializeMatchers(__int64 a1)
{
  char *v1; // r8
  char *v2; // r9
  char *v3; // r10
  char *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = (char *)&qword_1400022E0 - a1;
  v2 = (char *)&off_1400022E8 - a1;
  v3 = (char *)&qword_1400022F0 - a1;
  v4 = (char *)&qword_1400022F8 - a1;
  v5 = a1 + 600;
  v6 = 25LL;
  do
  {
    *(_DWORD *)(v5 - 8) = *(_DWORD *)&v1[v5 - 600];
    *(_QWORD *)v5 = *(_QWORD *)&v2[v5 - 600];
    *(_QWORD *)(v5 + 8) = *(_QWORD *)&v3[v5 - 600];
    result = *(unsigned int *)&v4[v5 - 600];
    *(_DWORD *)(v5 + 16) = result;
    v5 += 32LL;
    --v6;
  }
  while ( v6 );
  return result;
}
