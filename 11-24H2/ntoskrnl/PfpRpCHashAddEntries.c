/*
 * XREFs of PfpRpCHashAddEntries @ 0x140A5EF34
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x140A5EDA0 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     FsRtlAcquirePushLockExclusive @ 0x1403B475C (FsRtlAcquirePushLockExclusive.c)
 *     VmpReleasePushLockExclusive @ 0x1404816E0 (VmpReleasePushLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PfpRpCHashGrow @ 0x1406F6670 (PfpRpCHashGrow.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 *a4, unsigned int a5)
{
  __int64 v5; // rsi
  int v6; // ecx
  __int64 *v7; // rdi
  unsigned __int64 v9; // rbp
  unsigned int v10; // r15d
  int v12; // esi
  _QWORD *v13; // rbx
  void *v14; // rcx
  __int64 v15; // r9
  int v16; // r8d
  int v17; // esi
  __int64 v18; // rdx
  unsigned __int64 v19; // r11
  __int64 *v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v25; // [rsp+68h] [rbp+10h]
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v5 = a1;
  v6 = *(_DWORD *)(a2 + 8);
  P = 0LL;
  v7 = a4;
  v9 = (unsigned __int64)a4 + ((unsigned __int64)a5 << v6);
  v10 = 1 << v6;
  if ( a5 )
    FsRtlAcquirePushLockExclusive(a3);
  while ( (unsigned __int64)v7 < v9 )
  {
    if ( (unsigned int)(2 * *(_DWORD *)(a2 + 16)) >= *(_DWORD *)(a2 + 12) )
    {
      VmpReleasePushLockExclusive((volatile signed __int64 *)a3);
      v12 = PfpRpCHashGrow(v5, a2, a3, &P);
      if ( v12 < 0 )
        goto LABEL_7;
    }
    v15 = *v7;
    v16 = *(_DWORD *)(a2 + 12);
    if ( !v16 )
    {
      v20 = 0LL;
LABEL_24:
      memmove(v20, v7, v10);
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_20;
    }
    v17 = *(_DWORD *)(a2 + 8);
    v18 = 0LL;
    v25 = *v7;
    v19 = (37
         * (BYTE6(v25)
          + 37
          * (BYTE5(v25)
           + 37
           * (BYTE4(v25)
            + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v15 + 11623883)))))))
         + HIBYTE(v25)) & (unsigned int)(v16 - 1);
    v20 = (__int64 *)(*(_QWORD *)a2 + (v19 << v17));
    if ( !*v20 )
      goto LABEL_24;
    v21 = *v20;
    do
    {
      v22 = v21;
      if ( v21 == v15 )
        break;
      if ( !v18 )
      {
        v18 = 2654435761LL * v15 + 1;
        if ( ((-79 * (_BYTE)v15) & 1) != 0 )
          v18 = 2654435761LL * v15;
      }
      v19 = (unsigned int)(v16 - 1) & (v18 + v19);
      v20 = (__int64 *)(*(_QWORD *)a2 + (v19 << v17));
      v22 = *v20;
      v21 = *v20;
    }
    while ( *v20 );
    if ( !v22 )
      goto LABEL_24;
LABEL_20:
    v5 = a1;
    v7 = (__int64 *)((char *)v7 + v10);
  }
  if ( a5 )
    VmpReleasePushLockExclusive((volatile signed __int64 *)a3);
  v12 = 0;
LABEL_7:
  v13 = P;
  while ( 1 )
  {
    v14 = v13;
    if ( !v13 )
      break;
    v13 = (_QWORD *)*v13;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v12;
}
