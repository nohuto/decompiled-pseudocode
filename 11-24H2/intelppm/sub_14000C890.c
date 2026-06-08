/*
 * XREFs of sub_14000C890 @ 0x14000C890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000C890(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // r8
  __int64 i; // rcx
  int v19; // eax
  unsigned int *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _DWORD *v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  int *v27; // rax
  int v28; // eax

  v7 = 0;
  v8 = 128;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 3008))(qword_140019128, a1);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
          qword_140019128,
          v9,
          off_140018040);
  v11 = v10;
  if ( a2 < 0x80 )
  {
    v27 = *(int **)(v10 + 504);
    if ( v27 )
    {
      v28 = *v27;
      if ( v28 )
        v8 = 40 * v28 + 88;
    }
LABEL_20:
    v7 = -1073741789;
    goto LABEL_21;
  }
  *(_BYTE *)a3 = byte_140019B06;
  *(_BYTE *)(a3 + 1) = byte_140019B07;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v10 + 56);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v10 + 512);
  v12 = *(_QWORD *)(v10 + 280);
  if ( (v12 & 0x3000000) != 0 )
    v13 = 3;
  else
    v13 = (v12 & 0x300000) != 0;
  *(_DWORD *)(a3 + 16) = 0;
  v14 = (_DWORD *)(a3 + 32);
  *(_DWORD *)(a3 + 20) = 0;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 12) = v13;
  v15 = 0LL;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v11 + 56);
  do
  {
    v16 = *(unsigned __int8 *)(v11 + v15++ + 480);
    *v14++ = v16;
  }
  while ( v15 < 4 );
  v17 = (_DWORD *)(a3 + 56);
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v11 + 484);
  for ( i = 0LL; i < 4; ++i )
  {
    v19 = *(unsigned __int8 *)(v11 + i + 492);
    *v17++ = v19;
  }
  *(_QWORD *)(a3 + 72) = *(_QWORD *)(v11 + 496);
  v20 = *(unsigned int **)(v11 + 504);
  if ( !v20 )
  {
    *(_OWORD *)(a3 + 80) = 0LL;
    *(_OWORD *)(a3 + 96) = 0LL;
    *(_OWORD *)(a3 + 112) = 0LL;
    goto LABEL_21;
  }
  v21 = *v20;
  if ( (_DWORD)v21 )
  {
    v8 = 40 * v21 + 88;
    if ( a2 < v8 )
      goto LABEL_20;
  }
  *(_DWORD *)(a3 + 80) = v21;
  if ( (_DWORD)v21 )
  {
    v22 = 0LL;
    v23 = v21;
    v24 = (_DWORD *)(a3 + 96);
    do
    {
      v25 = *(_QWORD *)(v11 + 504);
      v22 += 20LL;
      *(v24 - 2) = *(_DWORD *)(v22 + v25 - 16);
      *(v24 - 1) = *(_DWORD *)(v22 + v25 - 12);
      *v24 = *(_DWORD *)(v22 + v25 - 8);
      v24 += 10;
      *(v24 - 9) = *(_DWORD *)(v22 + v25 - 4);
      v26 = *(_DWORD *)(v22 + v25);
      *((_QWORD *)v24 - 3) = 0LL;
      *((_QWORD *)v24 - 2) = 0LL;
      *(v24 - 8) = v26;
      --v23;
    }
    while ( v23 );
  }
LABEL_21:
  if ( a4 )
    *a4 = v8;
  return v7;
}
