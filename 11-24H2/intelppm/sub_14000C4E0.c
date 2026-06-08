/*
 * XREFs of sub_14000C4E0 @ 0x14000C4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000C4E0(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 i; // rcx
  unsigned __int8 v20; // al
  _DWORD *v21; // rax

  v5 = 0;
  v8 = 72;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 3008))(qword_140019128, a1);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
          qword_140019128,
          v9,
          off_140018040);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(v10 + 208),
    0LL);
  if ( a2 < 0x48 )
  {
    v21 = *(_DWORD **)(v10 + 528);
    if ( v21 && *v21 )
      v8 = 32 * *v21 + 40;
LABEL_20:
    v5 = -1073741789;
    goto LABEL_21;
  }
  *(_WORD *)a3 = word_140019AC0;
  *(_WORD *)(a3 + 2) = word_140019AC2;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(v10 + 56);
  v11 = *(_QWORD *)(v10 + 280);
  if ( (v11 & 0x7F070) != 0 )
    v12 = 2;
  else
    v12 = (v11 & 7) != 0;
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 8) = v12;
  v13 = *(unsigned int **)(v10 + 528);
  if ( !v13 )
  {
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_OWORD *)(a3 + 48) = 0LL;
    *(_QWORD *)(a3 + 64) = 0LL;
    goto LABEL_21;
  }
  v14 = *v13;
  if ( (_DWORD)v14 )
  {
    v8 = 32 * v14 + 40;
    if ( a2 < v8 )
      goto LABEL_20;
  }
  *(_DWORD *)(a3 + 32) = v14;
  if ( (_DWORD)v14 )
  {
    v15 = 0LL;
    v16 = v14;
    v17 = a3 + 40;
    do
    {
      v18 = v15 + *(_QWORD *)(v10 + 528);
      for ( i = 0LL; i < 4; ++i )
        *(_DWORD *)(v17 + 4 * i) = *(unsigned __int8 *)(i + v18 + 4);
      *(_QWORD *)(v17 + 16) = *(_QWORD *)(v18 + 8);
      v20 = *(_BYTE *)(v18 + 16);
      *(_BYTE *)(v17 + 24) = v20;
      if ( v20 > 3u )
        *(_BYTE *)(v17 + 24) = 3;
      v15 += 20LL;
      *(_WORD *)(v17 + 26) = *(_WORD *)(v18 + 18);
      *(_DWORD *)(v17 + 28) = *(_DWORD *)(v18 + 20);
      v17 += 32LL;
      --v16;
    }
    while ( v16 );
  }
LABEL_21:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(v10 + 208));
  if ( a4 )
    *a4 = v8;
  return v5;
}
