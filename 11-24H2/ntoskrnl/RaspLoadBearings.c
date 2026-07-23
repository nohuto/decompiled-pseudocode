/*
 * XREFs of RaspLoadBearings @ 0x14069C8A0
 * Callers:
 *     RaspGetUnscaledGlyphData @ 0x14069C27C (RaspGetUnscaledGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     FioFwReadUshortAtOffset @ 0x1404F6034 (FioFwReadUshortAtOffset.c)
 */

__int64 __fastcall RaspLoadBearings(__int64 a1, unsigned int a2, __int64 a3, int *a4)
{
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v7; // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int16 v13; // ax
  int v14; // esi
  __int16 v15; // bx
  int v16; // r14d
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  __int16 v23; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 *)(a1 + 88);
  v5 = *(_DWORD *)(a1 + 68);
  v7 = *(_QWORD *)(a1 + 16);
  v22 = 0;
  v23 = 0;
  v11 = *(_QWORD *)(v7 + 16);
  if ( a2 >= v4 )
  {
    v16 = v5 + 4 * v4;
    result = FioFwReadBytesAtOffset(v11, v16 - 4, 4u, &v22);
    if ( (int)result < 0 )
      return result;
    v14 = (unsigned __int16)__ROR2__(v22, 8);
    result = FioFwReadUshortAtOffset(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL), v16 + 2 * (a2 - v4), &v23);
    if ( (int)result < 0 )
      return result;
    v15 = v23;
  }
  else
  {
    result = FioFwReadBytesAtOffset(v11, v5 + 4 * a2, 4u, &v22);
    if ( (int)result < 0 )
      return result;
    v13 = __ROR2__(v22, 8);
    v14 = v13;
    v15 = __ROR2__(HIWORD(v22), 8);
    if ( !v13 )
    {
      result = FioFwReadBytesAtOffset(
                 *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                 *(_DWORD *)(a1 + 68) - 4 + 4 * v4,
                 4u,
                 &v22);
      if ( (int)result < 0 )
        return result;
      v14 = (unsigned __int16)__ROR2__(v22, 8);
    }
  }
  if ( v15 < 0 )
    v15 = 0;
  v17 = *(_DWORD *)(a3 + 18);
  v18 = *(unsigned __int16 *)(a3 + 24);
  if ( v14 < v15 + *(_DWORD *)(a3 + 10) - v17 )
    v14 = v15 + *(_DWORD *)(a3 + 10) - v17;
  v19 = *(_QWORD *)(a3 + 50);
  *a4 = v14;
  *(_DWORD *)(v19 + 4 * v18) = v17 - v15;
  *(_DWORD *)(v19 + 4 * v18 + 4) = v14 + *(_DWORD *)(a3 + 18) - v15;
  v20 = *(unsigned __int16 *)(a3 + 24);
  v21 = *(_QWORD *)(a3 + 58);
  *(_DWORD *)(v21 + 4 * v20) = *(__int16 *)(a1 + 82) + *(__int16 *)(a1 + 84);
  result = 0LL;
  *(_DWORD *)(v21 + 4 * v20 + 4) = *(__int16 *)(a1 + 84) + *(__int16 *)(a1 + 82);
  *(_WORD *)(a3 + 24) += 2;
  return result;
}
