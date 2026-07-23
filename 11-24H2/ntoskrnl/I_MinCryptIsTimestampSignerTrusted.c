/*
 * XREFs of I_MinCryptIsTimestampSignerTrusted @ 0x1408261C4
 * Callers:
 *     MincryptIsTimestampBeforeRevocation @ 0x140826528 (MincryptIsTimestampBeforeRevocation.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

char __fastcall I_MinCryptIsTimestampSignerTrusted(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int *v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  int v11; // r8d
  _DWORD *v12; // rcx
  int v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 0;
  if ( !qword_140FD8098 )
    return 0;
  if ( !*(_DWORD *)(qword_140FD8098 + 160) )
    return 0;
  v3 = *(_QWORD *)(qword_140FD8098 + 168);
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 48);
  v6 = (unsigned int *)(v3 + a1);
  v15 = v3;
  v7 = *v6;
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v8 = 0LL;
    if ( v7 )
      break;
LABEL_11:
    if ( ++v4 >= v5 )
      return 0;
  }
  v9 = *(_QWORD *)(a2 + 40);
  v10 = 120LL * v4;
  v11 = *(_DWORD *)(v10 + v9);
  v14 = v11;
  while ( 1 )
  {
    v12 = (_DWORD *)(v3 + v6[v8 + 1]);
    if ( *v12 == v11 )
      break;
LABEL_10:
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v7 )
      goto LABEL_11;
  }
  if ( memcmp(v12 + 1, (const void *)(v10 + v9 + 8), *(unsigned int *)(v10 + v9 + 4)) )
  {
    v3 = v15;
    v11 = v14;
    goto LABEL_10;
  }
  return 1;
}
