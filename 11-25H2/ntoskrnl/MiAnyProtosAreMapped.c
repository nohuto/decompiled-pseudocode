/*
 * XREFs of MiAnyProtosAreMapped @ 0x14045BF40
 * Callers:
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rbp
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // dl
  unsigned __int8 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 17;
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
      v6 = MiCheckProtoPtePageState(*(_QWORD *)a1, v4, 0, &v12);
      if ( v6 )
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
        v10 = v12;
        if ( v12 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v12, v7, v8);
          v10 = 17;
          v12 = 17;
        }
      }
      else
      {
        v10 = v12;
        v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v4 < v5 );
    if ( v10 != 17 )
      MiUnlockProtoPoolPage(v6, v10, v7, v8);
  }
  return v2;
}
