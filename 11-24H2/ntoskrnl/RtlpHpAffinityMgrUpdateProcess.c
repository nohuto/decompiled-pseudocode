/*
 * XREFs of RtlpHpAffinityMgrUpdateProcess @ 0x1403689B4
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x1403687F4 (RtlpHpVsContextHandleContention.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
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
  unsigned __int64 v16; // r9
  unsigned __int8 *v17; // r11
  unsigned __int8 v18; // r8
  signed __int8 v19; // al
  int v20; // eax
  int v22; // ecx
  unsigned __int64 i; // rbx
  bool v24; // zf
  signed __int8 v25; // al
  __int64 v26; // rax
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
      v26 = *(_QWORD *)(a1 + 8);
      v16 = MEMORY[0xFFFFF78000000008] - v26;
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v26) >= 0x100000 )
      {
        v16 &= 0xFFFFFFFFFFF00000uLL;
        *(_QWORD *)(a1 + 8) = v16 + v26;
      }
    }
    else
    {
      v16 = 0LL;
    }
    *(_BYTE *)a1 = 0;
    v17 = (unsigned __int8 *)(a1 + 2);
    v18 = *(_BYTE *)(a1 + 1);
    if ( v16 < 0x100000 )
      goto LABEL_15;
    while ( 1 )
    {
      v17 = (unsigned __int8 *)(a1 + 2);
      if ( v18 >= *(_BYTE *)(a1 + 2) )
        break;
      LOBYTE(v22) = v18;
      for ( i = v16 >> 20; (_DWORD)i; LODWORD(i) = i - 1 )
      {
        if ( !(_BYTE)v22 )
          break;
        v22 = 3 * (unsigned __int8)v22 / 4;
      }
      v25 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v22, v18);
      v24 = v18 == (unsigned __int8)v25;
      v18 = v25;
      if ( v24 )
      {
        v18 = v22;
LABEL_15:
        while ( v18 < *v17 )
        {
          v19 = _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 1), v18 + 1, v18);
          if ( v18 == v19 )
          {
            if ( v18 < *v17 - 1 )
            {
              v20 = v18 + 1;
              goto LABEL_19;
            }
            LODWORD(v27) = 3;
            return v27;
          }
          v18 = v19;
        }
        break;
      }
    }
    v20 = v18;
LABEL_19:
    HIDWORD(v27) = v20;
    LODWORD(v27) = 2;
  }
  return v27;
}
