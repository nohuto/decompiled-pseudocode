/*
 * XREFs of MiAnyProtosAreMapped @ 0x14045B2B8
 * Callers:
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 * Callees:
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 17;
  if ( a1 == a2[3] )
    v4 = a2[1];
  else
    v4 = *(_QWORD *)(a1 + 8);
  if ( a1 == a2[4] )
    v5 = a2[2] + 8LL;
  else
    v5 = *(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 44);
  if ( v4 < v5 )
  {
    do
    {
      v7 = MiCheckProtoPtePageState(*(_QWORD *)a1, v4, 0, &v11);
      if ( v7 )
      {
        v9 = v5;
        if ( v5 > (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v9 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v4 < v9 )
        {
          if ( (*(_QWORD *)v4 & 1) != 0 )
          {
            v2 = 1;
            v4 = v5;
            break;
          }
          v4 += 8LL;
        }
        LOBYTE(v6) = v11;
        if ( v11 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v6, v8);
          LOBYTE(v6) = 17;
          v11 = 17;
        }
      }
      else
      {
        LOBYTE(v6) = v11;
        v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v4 < v5 );
    if ( (_BYTE)v6 != 17 )
      MiUnlockProtoPoolPage(v7, v6, v8);
  }
  return v2;
}
