/*
 * XREFs of MiFindFreePageFileSpaceForward @ 0x1403C4D94
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlFindNextClearRunUlong @ 0x1403C598C (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiFindFreePageFileSpaceForward(__int64 a1, _DWORD *a2, unsigned int a3, char a4)
{
  __int64 v4; // r15
  _DWORD *v6; // rsi
  int v7; // edx
  unsigned int v9; // ebx
  int v10; // r14d
  unsigned int NextClearRunUlong; // r8d
  int v12; // r13d
  __int64 result; // rax
  __int64 v14; // rax
  int v15; // r10d
  int v16; // r15d
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-18h]
  _DWORD v21[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  int v25; // [rsp+A8h] [rbp+58h] BYREF

  v4 = a1;
  v25 = 0;
  v21[1] = 0;
  v6 = a2;
  v7 = *a2;
  LODWORD(v20) = 0;
  v9 = 0;
  v19 = 0LL;
  v10 = 0;
  v21[0] = *(_DWORD *)a1;
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 32LL);
  NextClearRunUlong = RtlFindNextClearRunUlong((unsigned int)v21, v7, a3, -1, (__int64)&v25);
  if ( NextClearRunUlong )
  {
    while ( 1 )
    {
      v12 = v25 + NextClearRunUlong;
      if ( NextClearRunUlong >= v9 && (NextClearRunUlong >= a3 || a4 >= 0) )
      {
        v14 = *(_QWORD *)(v4 + 80);
        v15 = v25 & 0x1F;
        v16 = a3;
        v17 = v25 - v15;
        if ( a3 <= 0x20 )
          v16 = 32;
        v20 = *(_QWORD *)(v14 + 16) + 4 * ((unsigned __int64)v17 >> 5);
        LODWORD(v19) = v15 + NextClearRunUlong;
        while ( 1 )
        {
          v18 = RtlFindNextClearRunUlong((unsigned int)&v19, v15, NextClearRunUlong, v16, (__int64)&v25);
          if ( !v18 )
            break;
          v15 = v25 + v18;
          if ( v18 > v9 )
          {
            v10 = v17 + v25;
            v9 = v18;
            if ( v18 > a3 )
              v9 = a3;
            if ( v9 == a3 )
              goto LABEL_4;
          }
        }
        if ( v9 == a3 )
        {
LABEL_4:
          v6 = a2;
          break;
        }
        v4 = a1;
      }
      NextClearRunUlong = RtlFindNextClearRunUlong((unsigned int)v21, v12, NextClearRunUlong, -1, (__int64)&v25);
      if ( !NextClearRunUlong )
        goto LABEL_4;
    }
  }
  if ( a4 < 0 && v9 < a3 )
  {
    v9 = 0;
    v10 = 0;
  }
  result = v9;
  *v6 = v10;
  return result;
}
