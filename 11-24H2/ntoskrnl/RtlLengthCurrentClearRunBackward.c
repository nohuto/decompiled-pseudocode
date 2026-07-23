/*
 * XREFs of RtlLengthCurrentClearRunBackward @ 0x1403C5648
 * Callers:
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunBackward(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int *v3; // rbx
  unsigned __int64 v4; // rax
  unsigned int v5; // edx
  unsigned int v6; // r11d
  unsigned int v8; // r8d
  unsigned int *v9; // rcx
  unsigned int i; // edx
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v14; // rcx
  unsigned int v15; // r8d

  v3 = *(unsigned int **)(a1 + 8);
  v4 = a2;
  v5 = a2 & 0x1F;
  v6 = 31 - v5;
  v8 = 0;
  v9 = &v3[v4 >> 5];
  for ( i = *((_DWORD *)qword_140011DF0 + v5) & *v9; !i; i = *v9 )
  {
    v8 += 32;
    if ( v8 >= a3 && v8 - v6 >= a3 || v9 == v3 )
      goto LABEL_9;
    --v9;
  }
  v11 = i;
  v12 = -1;
  if ( _BitScanReverse64((unsigned __int64 *)&v14, v11) )
    v12 = v14;
  v8 += 31 - v12;
LABEL_9:
  v15 = v8 - v6;
  if ( v15 > a3 )
    return a3;
  return v15;
}
