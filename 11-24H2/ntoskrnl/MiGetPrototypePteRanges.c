/*
 * XREFs of MiGetPrototypePteRanges @ 0x14041FB48
 * Callers:
 *     MiReplacePageOfProtoPool @ 0x140348A30 (MiReplacePageOfProtoPool.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiObtainProtoBaseFromNode @ 0x14041FDF0 (MiObtainProtoBaseFromNode.c)
 */

__int64 __fastcall MiGetPrototypePteRanges(unsigned __int64 a1, _RTL_BITMAP *a2)
{
  unsigned __int64 v2; // r12
  unsigned int v5; // r15d
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 j; // rbx
  _QWORD *v17; // rcx
  __int64 i; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rsi
  _QWORD **v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 NumberToSet; // [rsp+60h] [rbp+40h] BYREF
  __int64 v28; // [rsp+70h] [rbp+50h] BYREF

  NumberToSet = 0LL;
  v2 = a1 + 4096;
  v5 = 1;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2D750);
  v6 = (_QWORD *)qword_140E2D748;
  if ( qword_140E2D748 )
  {
    do
    {
      v28 = 0LL;
      v7 = MiObtainProtoBaseFromNode(v6, &v28);
      if ( v8 < v7 )
      {
        v6 = (_QWORD *)*v6;
      }
      else
      {
        if ( a1 < v7 + 8 * v28 )
          break;
        v6 = (_QWORD *)v6[1];
      }
    }
    while ( v6 );
  }
  v9 = (unsigned __int64)v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v10 = MiObtainProtoBaseFromNode(v9, &NumberToSet);
      v11 = NumberToSet;
      v12 = v10;
      if ( v10 < a1 )
      {
        if ( v10 + 8 * NumberToSet <= a1 )
          goto LABEL_16;
        v12 = a1;
        v11 = NumberToSet - ((__int64)(a1 - v10) >> 3);
        NumberToSet = v11;
      }
      if ( v12 >= v2 )
        goto LABEL_16;
      if ( (*(_BYTE *)(v9 + 24) & 7) == 4 )
        break;
      v13 = (__int64)(v12 - a1) >> 3;
      if ( v11 + (unsigned __int64)(unsigned int)v13 > 0x200 )
      {
        LODWORD(v11) = 512 - v13;
        NumberToSet = (unsigned int)(512 - v13);
      }
      RtlSetBits(a2, v13, v11);
      if ( (_DWORD)v13 )
      {
        v14 = *(_QWORD *)v9;
        v15 = v9;
        if ( *(_QWORD *)v9 )
        {
          while ( 1 )
          {
            v9 = v14;
            if ( !*(_QWORD *)(v14 + 8) )
              break;
            v14 = *(_QWORD *)(v14 + 8);
          }
        }
        else
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v9 || *(_QWORD *)(v9 + 8) == v15 )
              break;
            v15 = v9;
          }
        }
        if ( v9 )
          continue;
      }
      goto LABEL_16;
    }
    v5 = 0;
LABEL_16:
    j = v6[1];
    if ( j )
    {
      v17 = *(_QWORD **)j;
      if ( *(_QWORD *)j )
      {
        do
        {
          j = (unsigned __int64)v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
    }
    else
    {
      for ( i = v6[2]; ; i = *(_QWORD *)(j + 16) )
      {
        j = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD **)j == v6 )
          break;
        v6 = (_QWORD *)j;
      }
    }
    while ( j )
    {
      v19 = MiObtainProtoBaseFromNode(j, &NumberToSet);
      if ( v19 >= v2 || v19 < a1 )
        break;
      if ( (*(_BYTE *)(j + 24) & 7) == 4 )
      {
        v5 = 0;
        break;
      }
      v20 = NumberToSet;
      v21 = (__int64)(v19 - a1) >> 3;
      v22 = (unsigned int)v21;
      if ( (unsigned __int64)(unsigned int)v21 + NumberToSet > 0x200 )
      {
        v20 = (unsigned int)(512 - v21);
        NumberToSet = v20;
      }
      RtlSetBits(a2, v21, v20);
      if ( v22 + v20 == 512 )
        break;
      v23 = *(_QWORD ***)(j + 8);
      v24 = j;
      if ( v23 )
      {
        v25 = *v23;
        for ( j = *(_QWORD *)(j + 8); v25; v25 = (_QWORD *)*v25 )
          j = (unsigned __int64)v25;
      }
      else
      {
        while ( 1 )
        {
          j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !j || *(_QWORD *)j == v24 )
            break;
          v24 = j;
        }
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D750);
  return v5;
}
