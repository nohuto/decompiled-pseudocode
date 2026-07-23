/*
 * XREFs of RtlpUnwindEpilogue @ 0x140438C20
 * Callers:
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 * Callees:
 *     RtlpVirtualPopShadowStack @ 0x1402375E0 (RtlpVirtualPopShadowStack.c)
 *     RtlpUnwindOpSlots @ 0x140439000 (RtlpUnwindOpSlots.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpUnwindEpilogue(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  int v7; // r13d
  __int64 v8; // r8
  _BYTE *v9; // r12
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  unsigned int v16; // edx
  unsigned int v17; // r15d
  unsigned __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // r9
  unsigned int v22; // r11d
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // [rsp+90h] [rbp+8h]
  __int16 v28; // [rsp+90h] [rbp+8h]
  unsigned __int64 v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  v27 = a1;
  v6 = 0;
  v7 = 0;
  v8 = 0x7FFFFFFF0000LL;
  while ( 1 )
  {
    v9 = (_BYTE *)(a1 + *((unsigned int *)a4 + 2));
    if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (unsigned __int8)v9[2];
    v11 = v10;
    v12 = 0;
    if ( v9[2] )
    {
      do
      {
        v13 = *(unsigned __int16 *)&v9[2 * v12 + 4];
        v14 = (unsigned __int16)v13;
        v15 = HIBYTE(*(_WORD *)&v9[2 * v12 + 4]) & 0xF;
        if ( !v15 || v15 == 10 )
          break;
        if ( v15 == 2 && (v13 & 0xF000) == 0 )
        {
          v11 = v12;
        }
        else if ( v11 != v10 )
        {
          v11 = -1;
        }
        if ( (BYTE1(v13) & 0xF) == 2 || (BYTE1(v13) & 0xF) == 1 )
          ++v7;
        LOWORD(v14) = BYTE1(v13);
        v12 += RtlpUnwindOpSlots(v13, v14, v8);
      }
      while ( v12 < v10 );
      v8 = 0x7FFFFFFF0000LL;
      a2 = v29;
    }
    if ( v12 < v10 || (*v9 & 0x20) == 0 )
    {
      if ( v11 < v10 && v7 == 2 && v12 == v10 )
        v12 = v11;
      v16 = 0;
      while ( 1 )
      {
        v17 = v16;
        if ( v12 >= v10 )
          goto LABEL_21;
        v28 = *(_WORD *)&v9[2 * v12 + 4];
        v22 = HIBYTE(v28) >> 4;
        if ( (v28 & 0xF00) != 0 )
          break;
        if ( v16 >= a3 )
        {
          v23 = *(_QWORD *)(a5 + 152);
          if ( v29 <= 0x7FFFFFFEFFFFLL && (v23 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( *(_QWORD *)a6 && (v23 < **(_QWORD **)a6 || v23 > **(_QWORD **)(a6 + 8) - 8LL) )
            return 3221225512LL;
          *(_QWORD *)(a5 + 152) += 8LL;
          *(_QWORD *)(a5 + 120 + 8LL * v22) = *(_QWORD *)v23;
          v24 = *(_QWORD *)(a6 + 16);
          if ( v24 )
            *(_QWORD *)(v24 + 8LL * v22 + 128) = v23;
        }
        ++v16;
        if ( v22 >= 8 )
          v16 = v17 + 2;
        ++v12;
      }
      if ( v12 >= v10 )
        goto LABEL_21;
      if ( (HIBYTE(v28) & 0xF) == 2 && !v22 )
      {
        if ( v16 >= a3 )
          *(_QWORD *)(a5 + 152) += 8LL;
        ++v12;
      }
      if ( v12 < v10 && (v9[2 * v12 + 5] & 0xF) == 0xA )
      {
        v25 = *(_QWORD *)(a5 + 152);
        v26 = v25 + 24;
        if ( v29 <= 0x7FFFFFFEFFFFLL && (v25 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !*(_QWORD *)a6 || v25 >= **(_QWORD **)a6 && v25 <= **(_QWORD **)(a6 + 8) - 8LL )
        {
          if ( v29 <= 0x7FFFFFFEFFFFLL && (v26 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( !*(_QWORD *)a6 || v26 >= **(_QWORD **)a6 && v26 <= **(_QWORD **)(a6 + 8) - 8LL )
          {
            *(_QWORD *)(a5 + 248) = *(_QWORD *)v25;
            *(_QWORD *)(a5 + 152) = *(_QWORD *)v26;
            return 0LL;
          }
        }
      }
      else
      {
LABEL_21:
        v18 = *(_QWORD *)(a5 + 152);
        if ( v29 <= 0x7FFFFFFEFFFFLL && (v18 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( !*(_QWORD *)a6 || v18 >= **(_QWORD **)a6 && v18 <= **(_QWORD **)(a6 + 8) - 8LL )
        {
          *(_QWORD *)(a5 + 248) = *(_QWORD *)v18;
          *(_QWORD *)(a5 + 152) += 8LL;
          RtlpVirtualPopShadowStack(a5, 1, 1);
          return 0LL;
        }
      }
      return 3221225512LL;
    }
    if ( (unsigned int)++v6 > 0x20 )
      return 3221225727LL;
    v19 = (unsigned __int8)v9[2];
    v20 = (unsigned int)(v19 + 1);
    if ( (v19 & 1) == 0 )
      v20 = (unsigned __int8)v9[2];
    a4 = &v9[2 * v20 + 4];
    a1 = v27;
  }
}
