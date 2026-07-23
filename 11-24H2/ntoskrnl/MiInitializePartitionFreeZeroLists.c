/*
 * XREFs of MiInitializePartitionFreeZeroLists @ 0x1407ED3BC
 * Callers:
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     MiMakeColor @ 0x140429F90 (MiMakeColor.c)
 *     MiColorSetHighLow @ 0x14044A1F8 (MiColorSetHighLow.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     MiInitializeFreeZeroPfnListHead @ 0x140674480 (MiInitializeFreeZeroPfnListHead.c)
 */

__int64 __fastcall MiInitializePartitionFreeZeroLists(_QWORD *a1)
{
  _SLIST_HEADER *v1; // r13
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v4; // rsi
  bool v5; // cf
  __int64 result; // rax
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _SLIST_HEADER **v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rbp
  int *v14; // rax
  unsigned int v15; // edi
  _DWORD *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r12
  __int16 v19; // si
  __int64 v20; // rcx
  int i; // r14d
  unsigned __int8 v22; // bp
  __int64 v23; // r12
  __int64 v24; // rcx
  int v25; // r13d
  __int64 *v26; // r10
  unsigned int v27; // eax
  int v28; // r11d
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-88h]
  __int64 v31; // [rsp+38h] [rbp-80h]
  __int64 v32; // [rsp+40h] [rbp-78h]
  int *v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+50h] [rbp-68h]
  _SLIST_HEADER *v35; // [rsp+58h] [rbp-60h]
  __int64 v36; // [rsp+68h] [rbp-50h]
  int Color; // [rsp+C0h] [rbp+8h] BYREF
  int v38; // [rsp+C8h] [rbp+10h]
  unsigned int v39; // [rsp+D0h] [rbp+18h]
  unsigned int v40; // [rsp+D8h] [rbp+20h]

  v1 = (_SLIST_HEADER *)a1[2046];
  v2 = a1[891];
  v3 = 0;
  v4 = a1[2];
  v5 = KeNumberNodes != 0;
  Color = 0;
  result = a1[2045];
  v30 = result;
  v35 = v1;
  while ( 1 )
  {
    v34 = v4;
    if ( !v5 )
      break;
    v7 = (unsigned int)dword_140E2DD0C;
    v8 = (__int64 *)(v4 + 5120);
    v9 = 4LL;
    v10 = 8LL * (unsigned int)dword_140E2DD0C;
    do
    {
      *v8 = v2;
      v2 += v10;
      ++v8;
      --v9;
    }
    while ( v9 );
    v36 = v2;
    v11 = (_SLIST_HEADER **)(v4 + 14944);
    v12 = 2LL;
    do
    {
      *v11 = v1;
      if ( (_DWORD)v7 )
      {
        v13 = v7;
        do
        {
          InitializeSListHead(v1++);
          --v13;
        }
        while ( v13 );
        v35 = v1;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    v14 = dword_140E2DD00;
    v15 = 0;
    v33 = dword_140E2DD00;
    v16 = (_DWORD *)v4;
    do
    {
      v17 = (unsigned int)*v14;
      v40 = *v14;
      v38 = 0;
      v18 = 0LL;
      v32 = 0LL;
      do
      {
        v19 = v38;
        v20 = 0LL;
        v31 = 0LL;
        for ( i = 0; i <= 1; ++i )
        {
          v22 = 0;
          if ( MmNumberOfChannels )
          {
            v23 = v20 + 2 * v18;
            do
            {
              v24 = v30;
              v25 = 0;
              v26 = (__int64 *)&v16[16 * v23 + 248 + 8 * v22];
              do
              {
                *v26 = v24;
                LOBYTE(v27) = 0;
                v39 = 0;
                if ( (_DWORD)v17 )
                {
                  do
                  {
                    Color = MiMakeColor(v3, v22, v27, v15, v25);
                    MiColorSetHighLow(&Color, v19);
                    Color = v28 | Color & 0xFFEFFFFF;
                    MiInitializeFreeZeroPfnListHead(v30, i, Color);
                    v24 = v29 + 88;
                    v17 = v40;
                    v27 = v39 + 1;
                    v30 = v24;
                    v39 = v27;
                  }
                  while ( v27 < v40 );
                }
                ++v25;
                ++v26;
              }
              while ( v25 <= 3 );
              ++v22;
            }
            while ( v22 < (unsigned __int8)MmNumberOfChannels );
            v18 = v32;
            v20 = v31;
          }
          v31 = ++v20;
        }
        ++v38;
        v32 = ++v18;
      }
      while ( v18 <= (v15 != 3) );
      *v16 = ExGenRandom(1, v17, v2, 0LL);
      ++v15;
      v16 += 320;
      v14 = ++v33;
    }
    while ( v15 <= 3 );
    ++v3;
    result = (unsigned __int16)KeNumberNodes;
    v4 = v34 + 57216;
    v1 = v35;
    v5 = v3 < (unsigned __int16)KeNumberNodes;
    v2 = v36;
  }
  return result;
}
