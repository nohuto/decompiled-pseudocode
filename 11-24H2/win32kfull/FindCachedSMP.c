/*
 * XREFs of FindCachedSMP @ 0x14012926C
 * Callers:
 *     GetCachedSMP @ 0x140129054 (GetCachedSMP.c)
 * Callees:
 *     CreateStandardMonoPattern @ 0x1401299CC (CreateStandardMonoPattern.c)
 */

__int64 **__fastcall FindCachedSMP(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  int v4; // r12d
  __int64 v6; // rdi
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  __int64 **i; // rcx
  __int64 **result; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  void *v15; // rcx
  _QWORD *v16; // rax
  unsigned int v17; // eax
  char *v18; // rax
  char *v19; // rsi
  __int64 v20; // rcx
  __int16 v21; // ax
  __int16 v22; // [rsp+20h] [rbp-20h] BYREF
  char v23; // [rsp+22h] [rbp-1Eh]
  char v24; // [rsp+23h] [rbp-1Dh]
  __int16 v25; // [rsp+24h] [rbp-1Ch]
  __int64 v26; // [rsp+26h] [rbp-1Ah]
  __int16 v27; // [rsp+2Eh] [rbp-12h]
  char *v28; // [rsp+30h] [rbp-10h]

  v3 = *(_DWORD *)(a1 + 28);
  v4 = a2;
  v6 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 112);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v6 + 16));
  v7 = *(_QWORD **)(v6 + 40);
  v8 = v7;
  if ( v7 )
  {
    v9 = 0LL;
    while ( v8 )
    {
      if ( *(_DWORD *)v8 == v3 )
      {
        if ( v9 )
        {
          v9[1] = v8[1];
          v8[1] = *(_QWORD *)(v6 + 40);
          *(_QWORD *)(v6 + 40) = v8;
        }
        for ( i = (__int64 **)v8[2]; i; i = (__int64 **)*i )
        {
          if ( *((unsigned __int16 *)i + 4) == v4 )
            return i;
        }
        goto LABEL_23;
      }
      v9 = v8;
      v8 = (_QWORD *)v8[1];
    }
  }
  if ( *(_WORD *)(v6 + 70) >= 0xAu )
  {
    v12 = (_QWORD *)v7[1];
    v13 = 0LL;
    while ( v12 )
    {
      v13 = v7;
      v7 = v12;
      v12 = (_QWORD *)v12[1];
    }
    v14 = (_QWORD *)v7[2];
    while ( 1 )
    {
      v15 = v14;
      if ( !v14 )
        break;
      v14 = (_QWORD *)*v14;
      EngFreeMem(v15);
    }
    EngFreeMem(v7);
    v13[1] = 0LL;
    --*(_WORD *)(v6 + 70);
  }
  v16 = EngAllocMem(0, 0x18u, 0x32305448u);
  v8 = v16;
  if ( !v16 )
    goto LABEL_26;
  *(_DWORD *)v16 = v3;
  v16[1] = *(_QWORD *)(v6 + 40);
  v16[2] = 0LL;
  ++*(_WORD *)(v6 + 70);
  *(_QWORD *)(v6 + 40) = v16;
LABEL_23:
  v26 = 0LL;
  v27 = 0;
  v28 = 0LL;
  v22 = 1;
  v23 = 1;
  v24 = v4;
  v25 = 3848;
  v17 = CreateStandardMonoPattern(a1, &v22);
  if ( v17 + 16 < v17 )
    goto LABEL_26;
  v18 = (char *)EngAllocMem(0, v17 + 16, 0x33305448u);
  v19 = v18;
  if ( v18 )
  {
    v28 = v18 + 16;
    CreateStandardMonoPattern(a1, &v22);
    v20 = v8[2];
    *((_WORD *)v19 + 6) = WORD2(v26);
    v21 = v26;
    *(_QWORD *)v19 = v20;
    LOWORD(v20) = WORD1(v26);
    *((_WORD *)v19 + 7) = v21;
    result = (__int64 **)v19;
    *((_WORD *)v19 + 5) = v20;
    *((_WORD *)v19 + 4) = v4;
    v8[2] = v19;
  }
  else
  {
LABEL_26:
    EngReleaseSemaphore(*(HSEMAPHORE *)(v6 + 16));
    return 0LL;
  }
  return result;
}
