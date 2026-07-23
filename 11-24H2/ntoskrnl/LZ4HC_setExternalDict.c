/*
 * XREFs of LZ4HC_setExternalDict @ 0x1405FEE30
 * Callers:
 *     LZ4HC_compress_generic_dictCtx @ 0x1405F7104 (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_setExternalDict(__int64 a1, __int64 a2)
{
  __int64 *v3; // r9
  __int64 v4; // rcx
  _DWORD *v6; // r10
  unsigned int *v7; // r11
  __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  _DWORD *v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // edx
  int v15; // eax
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 262152);
  v4 = *(_QWORD *)(a1 + 262152);
  v6 = (_DWORD *)(a1 + 0x40000);
  v7 = (unsigned int *)(a1 + 262168);
  if ( *(_QWORD *)(a1 + 0x40000) >= (unsigned __int64)(v4 + 4) )
  {
    v8 = *v7;
    v9 = *(_DWORD *)(a1 + 262176);
    v10 = *v6 - v4 + v8 - 3;
    if ( v9 < v10 )
    {
      v11 = (_DWORD *)(v4 + v9 - v8);
      do
      {
        v12 = (unsigned __int64)(unsigned int)(-1640531535 * *v11) >> 17;
        v13 = v9 - *(_DWORD *)(a1 + 4 * v12);
        if ( v13 > 0xFFFF )
          LOWORD(v13) = -1;
        v11 = (_DWORD *)((char *)v11 + 1);
        *(_WORD *)(a1 + 2LL * (unsigned __int16)v9 + 0x20000) = v13;
        *(_DWORD *)(a1 + 4 * v12) = v9++;
      }
      while ( v9 < v10 );
      v4 = *v3;
      v6 = (_DWORD *)(a1 + 0x40000);
      v3 = (__int64 *)(a1 + 262152);
    }
  }
  v14 = *v7;
  v15 = *v6 - *(_DWORD *)v3;
  *(_QWORD *)(a1 + 262184) = 0LL;
  result = (unsigned int)(v14 + v15);
  *v3 = a2;
  *(_QWORD *)v6 = a2;
  *v7 = result;
  *(_DWORD *)(a1 + 262176) = result;
  *(_DWORD *)(a1 + 262172) = v14;
  *(_QWORD *)(a1 + 262160) = v4;
  return result;
}
