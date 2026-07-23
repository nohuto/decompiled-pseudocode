/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x1404BBF14
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x1403C0654 (MiCheckFreeModifiedReservations.c)
 *     MiRescanPagefileBitmaps @ 0x1403D965C (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

BOOLEAN __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  BOOLEAN v1; // bl
  __int64 v2; // rsi
  _RTL_BALANCED_NODE *v3; // r14
  _RTL_BALANCED_NODE *v5; // rdi
  _RTL_BALANCED_NODE *v6; // rbp
  _RTL_BALANCED_NODE *v7; // rax
  unsigned __int64 v8; // rdx
  BOOLEAN v9; // r8
  unsigned __int64 v10; // rax
  _RTL_RB_TREE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  BOOLEAN result; // al

  v1 = 0;
  v2 = a1 + 112;
  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = (_RTL_BALANCED_NODE *)(a1 + 144);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  v5 = *(_RTL_BALANCED_NODE **)(a1 + 160);
  v6 = (_RTL_BALANCED_NODE *)((char *)v5 + 28616);
  memset_0(v5, 0, 0x7000uLL);
  while ( v5 < v6 )
  {
    v7 = v3->Children[1];
    if ( v7->Children[0] != v3 )
      __fastfail(3u);
    v5->Children[0] = v3;
    v5->Children[1] = v7;
    v7->Children[0] = v5;
    v3->Children[1] = v5;
    v5 = (_RTL_BALANCED_NODE *)((char *)v5 + 56);
  }
  HIDWORD(v5[2].Left) = -1;
  LODWORD(v5[2].Children[0]) = -1;
  v8 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v8 )
    v8 ^= v2;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + 8);
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      {
        if ( !v10 )
          break;
        v10 ^= v8;
      }
      if ( !v10 )
        break;
      v8 = v10;
    }
    v9 = 1;
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v8, v9, v5);
  v11 = (_RTL_RB_TREE *)(a1 + 128);
  v12 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 && v12 )
    v12 ^= (unsigned __int64)v11;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( LODWORD(v5[2].Children[0]) >= *(_DWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_31;
          v13 ^= v12;
        }
        if ( !v13 )
        {
LABEL_31:
          v1 = 1;
          break;
        }
      }
      else
      {
        v13 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v12;
        }
        if ( !v13 )
          break;
      }
      v12 = v13;
    }
  }
  result = RtlRbInsertNodeEx(v11, (PRTL_BALANCED_NODE)v12, v1, v5 + 1);
  *(_DWORD *)(a1 + 108) = -1;
  return result;
}
