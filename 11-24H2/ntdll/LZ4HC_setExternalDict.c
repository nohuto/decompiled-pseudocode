/*
 * XREFs of LZ4HC_setExternalDict @ 0x18011BB84
 * Callers:
 *     LZ4HC_compress_generic_dictCtx @ 0x1800F951C (LZ4HC_compress_generic_dictCtx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LZ4HC_setExternalDict(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 v4; // r11
  _DWORD *v5; // r10
  unsigned int *v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // ebp
  _DWORD *v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // ecx

  v2 = (__int64 *)(a1 + 262152);
  v4 = *(_QWORD *)(a1 + 262152);
  v5 = (_DWORD *)(a1 + 0x40000);
  v7 = (unsigned int *)(a1 + 262168);
  if ( *(_QWORD *)(a1 + 0x40000) >= (unsigned __int64)(v4 + 4) )
  {
    v8 = *v7;
    v9 = *(_DWORD *)(a1 + 262176);
    v10 = *v5 - v4 + v8 - 3;
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
      v4 = *v2;
      v5 = (_DWORD *)(a1 + 0x40000);
      v2 = (__int64 *)(a1 + 262152);
    }
  }
  v14 = *v7;
  result = (unsigned int)(*v5 - *(_DWORD *)v2);
  *(_QWORD *)(a1 + 262184) = 0LL;
  *(_DWORD *)(a1 + 262172) = v14;
  v16 = result + v14;
  *v7 = v16;
  *v2 = a2;
  *(_QWORD *)v5 = a2;
  *(_QWORD *)(a1 + 262160) = v4;
  *(_DWORD *)(a1 + 262176) = v16;
  return result;
}
