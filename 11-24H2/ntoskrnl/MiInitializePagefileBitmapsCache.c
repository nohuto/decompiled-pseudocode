/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x140366010
 * Callers:
 *     MiCheckFreeModifiedReservations @ 0x1402D00FC (MiCheckFreeModifiedReservations.c)
 *     MiRescanPagefileBitmaps @ 0x14036660C (MiRescanPagefileBitmaps.c)
 *     MiCreatePagefile @ 0x1407EDFA0 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rsi
  __int64 v3; // r14
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  bool v9; // r8
  unsigned __int64 v10; // rax
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char result; // al

  v1 = 0;
  v2 = a1 + 112;
  *(_QWORD *)(a1 + 112) = 0LL;
  v3 = a1 + 144;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  v5 = *(_QWORD **)(a1 + 160);
  v6 = v5 + 3577;
  memset_0(v5, 0, 0x7000uLL);
  while ( v5 < v6 )
  {
    v7 = *(_QWORD **)(v3 + 8);
    if ( *v7 != v3 )
      __fastfail(3u);
    *v5 = v3;
    v5[1] = v7;
    *v7 = v5;
    *(_QWORD *)(v3 + 8) = v5;
    v5 += 7;
  }
  *((_DWORD *)v5 + 13) = -1;
  *((_DWORD *)v5 + 12) = -1;
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
  RtlRbInsertNodeEx((__int64 *)v2, v8, v9, (unsigned __int64)v5);
  v11 = (__int64 *)(a1 + 128);
  v12 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(a1 + 136) & 1) != 0 && v12 )
    v12 ^= (unsigned __int64)v11;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v5 + 12) >= *(_DWORD *)(v12 + 24) )
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
  result = RtlRbInsertNodeEx(v11, v12, v1, (unsigned __int64)(v5 + 3));
  *(_DWORD *)(a1 + 108) = -1;
  return result;
}
