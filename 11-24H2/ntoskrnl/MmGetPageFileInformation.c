/*
 * XREFs of MmGetPageFileInformation @ 0x140A54280
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MmGetPageFileInformation(__int64 a1, _DWORD *a2, unsigned int a3, int a4, unsigned int *a5)
{
  _DWORD *v5; // r13
  unsigned int v6; // r15d
  unsigned int *v7; // r12
  ULONG *v8; // rax
  ULONG *v9; // r14
  ULONG v11; // eax
  ULONG v12; // edx
  unsigned int v13; // ebx
  _DWORD *v14; // rsi
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx
  unsigned __int64 v19; // r13
  unsigned int v20; // ebx
  ULONG v21; // [rsp+24h] [rbp-74h]
  unsigned int v22; // [rsp+2Ch] [rbp-6Ch]
  int v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+34h] [rbp-64h]
  ULONG v25; // [rsp+38h] [rbp-60h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  __int128 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+A0h] [rbp+8h] BYREF
  _DWORD *v30; // [rsp+A8h] [rbp+10h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  int v32; // [rsp+B8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  v5 = a2;
  LOBYTE(v29) = 0;
  v6 = a4 != 0 ? 40 : 32;
  v7 = a5;
  *a5 = 0;
  v8 = MiPartitionObjectToPartition((ULONG **)0xFFFFFFFFFFFFFFFFLL, 0, &v29);
  v9 = v8;
  if ( !v8 )
    return 3221226656LL;
  v11 = v8[4630];
  v25 = v11;
  v5[1] = 0;
  v12 = 0;
  v21 = 0;
  v13 = 0;
  v14 = a2;
  while ( v12 < v11 )
  {
    v15 = v12;
    if ( (*(_BYTE *)(*(_QWORD *)&v9[2 * v12 + 4632] + 172LL) & 0x50) == 0 )
    {
      v27 = (__int64)v5 + v13;
      v16 = v6 + v13;
      if ( v6 + v13 <= v13 || (v17 = v31, v16 > v31) )
      {
        *v7 = v16;
        v20 = -1073741820;
        goto LABEL_18;
      }
      do
      {
        v22 = **(_DWORD **)&v9[2 * v15 + 4632];
        LODWORD(a5) = *(_DWORD *)(*(_QWORD *)&v9[2 * v15 + 4632] + 12LL);
        v23 = *(_DWORD *)(*(_QWORD *)&v9[2 * v15 + 4632] + 16LL);
        v24 = *(_DWORD *)(*(_QWORD *)&v9[2 * v15 + 4632] + 8LL);
        v18 = *(_DWORD *)(*(_QWORD *)&v9[2 * v15 + 4632] + 4LL);
      }
      while ( (unsigned int)a5 >= v22 );
      v14 = (_DWORD *)((char *)v5 + v13);
      *(_DWORD *)(v27 + 4) = v22;
      *(_DWORD *)(v27 + 8) = v22 - (_DWORD)a5 - 2;
      *(_DWORD *)(v27 + 12) = v23;
      if ( v32 )
      {
        *(_DWORD *)(v27 + 32) = v24;
        *(_DWORD *)(v27 + 36) = v18;
      }
      WORD3(v28) = 0;
      v19 = *(unsigned __int16 *)(*(_QWORD *)&v9[2 * v15 + 4632] + 64LL);
      LOWORD(v28) = v19;
      *(_DWORD *)((char *)&v28 + 2) = (unsigned __int16)(v19 + 2);
      *((_QWORD *)&v28 + 1) = v27 + v6;
      *(_OWORD *)(v27 + 16) = v28;
      LODWORD(a5) = (*(_DWORD *)((char *)&v28 + 2) + 7) & 0xFFFFFFF8;
      v13 = (_DWORD)a5 + v16;
      if ( (unsigned int)a5 + v16 <= v16 || v13 > v17 )
      {
        *v7 = v13;
        v20 = -1073741820;
        goto LABEL_18;
      }
      memmove((void *)(v27 + v6), *(const void **)(*(_QWORD *)&v9[2 * v15 + 4632] + 72LL), (unsigned int)v19);
      *(_WORD *)(*((_QWORD *)&v28 + 1) + 2 * (v19 >> 1)) = 0;
      *(_DWORD *)v27 = v6 + (_DWORD)a5;
      v12 = v21;
      v5 = v30;
    }
    v21 = ++v12;
    v11 = v25;
  }
  *v14 = 0;
  *v7 = v13;
  v20 = 0;
LABEL_18:
  if ( (_BYTE)v29 )
    PsDereferencePartition(*((_QWORD *)v9 + 23));
  return v20;
}
