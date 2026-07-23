/*
 * XREFs of MiAnyProtosAreMapped @ 0x1404506B8
 * Callers:
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 */

__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r14d
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF

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
      v7 = MiCheckProtoPtePageState(*(_QWORD *)a1, v4, 0, &v12);
      if ( v7 )
      {
        v10 = v5;
        if ( v5 > (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v10 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v4 < v10 )
        {
          if ( (*(_QWORD *)v4 & 1) != 0 )
          {
            v2 = 1;
            v4 = v5;
            break;
          }
          v4 += 8LL;
        }
        LOBYTE(v6) = v12;
        if ( v12 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v6, v8, v9);
          LOBYTE(v6) = 17;
          v12 = 17;
        }
      }
      else
      {
        LOBYTE(v6) = v12;
        v4 = (v4 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v4 < v5 );
    if ( (_BYTE)v6 != 17 )
      MiUnlockProtoPoolPage(v7, v6, v8, v9);
  }
  return v2;
}
