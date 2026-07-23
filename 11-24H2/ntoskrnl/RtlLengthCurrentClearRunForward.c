/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x1403C5560
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v5; // r8d
  _DWORD *v6; // r10
  int v7; // edi
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  char v14; // r8
  bool v15; // zf
  char v16; // r8
  unsigned int v17; // edx

  v3 = *((_QWORD *)a1 + 1);
  v5 = *a1;
  v6 = (_DWORD *)(v3 + 4 * ((unsigned __int64)a2 >> 5));
  v7 = *a1 & 0x1F;
  v8 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(unsigned int)(*a1 - 1) >> 5));
  v9 = v8 - 1;
  if ( !v7 )
    v9 = v8;
  v10 = a2 & 0x1F;
  v11 = 0;
  LODWORD(v12) = *v6 & ~*((_DWORD *)qword_140011DF0 + v10);
  if ( v6 <= v9 )
  {
    while ( !(_DWORD)v12 )
    {
      v11 += 32;
      if ( v11 >= a3 && v11 - (unsigned int)v10 >= a3 )
        goto LABEL_13;
      if ( v6 == v9 )
        goto LABEL_4;
      LODWORD(v12) = *++v6;
    }
    v16 = -1;
    v15 = !_BitScanForward64((unsigned __int64 *)&v12, (unsigned int)v12);
    if ( !v15 )
      v16 = v12;
    v11 += v16;
  }
  else
  {
LABEL_4:
    if ( v7 )
    {
      if ( v11 )
        LODWORD(v12) = v6[1];
      v13 = *((_DWORD *)qword_140011DF0 + (v5 & 0x1F));
      v14 = -1;
      v15 = !_BitScanForward64((unsigned __int64 *)&v12, (unsigned int)v12 | ~v13);
      if ( !v15 )
        v14 = v12;
      v11 += v14;
    }
  }
LABEL_13:
  v17 = v11 - v10;
  if ( v17 > a3 )
    return a3;
  return v17;
}
