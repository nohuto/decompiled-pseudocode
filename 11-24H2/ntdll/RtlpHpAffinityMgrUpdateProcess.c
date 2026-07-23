/*
 * XREFs of RtlpHpAffinityMgrUpdateProcess @ 0x18011A86C
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextHandleContention @ 0x18011A6A4 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpAffinityMgrUpdateProcess(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // ebp
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned int v11; // r11d
  unsigned __int16 *v12; // r9
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // r9
  unsigned __int8 *v18; // r11
  unsigned __int8 v19; // r8
  int v20; // ecx
  unsigned __int64 i; // rbx
  bool v22; // zf
  signed __int8 v23; // al
  signed __int8 v24; // al
  int v25; // eax
  __int64 v27; // [rsp+38h] [rbp+18h]

  v27 = 0LL;
  v5 = 0;
  v9 = a4;
  v10 = a2;
  v11 = 0xFFFF;
  if ( a4 )
  {
    v12 = a3;
    do
    {
      v13 = *v12;
      v14 = v13;
      if ( v13 >= v10 )
        v14 = v10;
      v10 = v14;
      if ( v13 > a2 && v13 < v11 )
        v11 = *v12;
      v15 = v5;
      if ( v13 != a2 )
        v15 = v9;
      ++v5;
      v12 += 2;
      v9 = v15;
    }
    while ( v5 < a4 );
  }
  if ( a3[2 * v9 + 1] != 1 )
  {
    if ( (*(_BYTE *)(a1 + 3) & 1) != 0 )
    {
      if ( (a5 & 1) == 0 )
      {
        LODWORD(v27) = 1;
        if ( v11 != 0xFFFF )
          v10 = v11;
        HIDWORD(v27) = v10;
        return v27;
      }
      v16 = *(_QWORD *)(a1 + 8);
      v17 = MEMORY[0x7FFE0008] - v16;
      if ( (unsigned __int64)(MEMORY[0x7FFE0008] - v16) >= 0x100000 )
      {
        v17 &= 0xFFFFFFFFFFF00000uLL;
        *(_QWORD *)(a1 + 8) = v17 + v16;
      }
    }
    else
    {
      v17 = 0LL;
    }
    *(_BYTE *)a1 = 0;
    v18 = (unsigned __int8 *)(a1 + 2);
    v19 = *(_BYTE *)(a1 + 1);
    if ( v17 < 0x100000 )
      goto LABEL_27;
    while ( 1 )
    {
      v18 = (unsigned __int8 *)(a1 + 2);
      if ( v19 >= *(_BYTE *)(a1 + 2) )
        break;
      LOBYTE(v20) = v19;
      for ( i = v17 >> 20; (_DWORD)i; LODWORD(i) = i - 1 )
      {
        if ( !(_BYTE)v20 )
          break;
        v20 = 3 * (unsigned __int8)v20 / 4;
      }
      v23 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v20, v19);
      v22 = v19 == (unsigned __int8)v23;
      v19 = v23;
      if ( v22 )
      {
        v19 = v20;
LABEL_27:
        while ( v19 < *v18 )
        {
          v24 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v19 + 1, v19);
          if ( v19 == v24 )
          {
            if ( v19 < *v18 - 1 )
            {
              v25 = v19 + 1;
              goto LABEL_34;
            }
            LODWORD(v27) = 3;
            return v27;
          }
          v19 = v24;
        }
        break;
      }
    }
    v25 = v19;
LABEL_34:
    HIDWORD(v27) = v25;
    LODWORD(v27) = 2;
  }
  return v27;
}
