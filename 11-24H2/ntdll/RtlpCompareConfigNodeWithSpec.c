/*
 * XREFs of RtlpCompareConfigNodeWithSpec @ 0x18000260C
 * Callers:
 *     RtlpTraverseParents @ 0x1800022C0 (RtlpTraverseParents.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpCompareConfigNodeWithSpec(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  char v4; // r10
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  bool v12; // zf
  int v13; // r8d
  __int16 v14; // cx

  v4 = 0;
  if ( !a1 || !a4 )
    return 0;
  v7 = *a4;
  v8 = (unsigned __int16)a4[1] >> 14;
  if ( v8 == 2 )
  {
    if ( (v7 & 0x8000u) != 0LL )
      return 0;
    v10 = *(_QWORD *)(a1 + 24);
    if ( (int)v7 >= *(unsigned __int16 *)(v10 + 6) )
      return 0;
    v11 = 28 * v7;
    v12 = *(_QWORD *)(v10 + 16) + v11 == 0;
    v7 = *(_QWORD *)(v10 + 16) + v11;
    v13 = 0;
    if ( v12 )
      return 0;
    v14 = *(_WORD *)(v7 + 4);
    if ( (v14 & 0xEBFF) != 0 || v14 == 1024 )
    {
      v8 = 1;
      LOWORD(v7) = *(_WORD *)(v7 + 4);
    }
    else
    {
      LOWORD(v7) = *(_WORD *)(v7 + 6);
      if ( (__int16)v7 <= 0 )
      {
        v8 = 0;
        LOWORD(v7) = 0;
        v13 = -1073741811;
      }
      else
      {
        v8 = 3;
      }
    }
    if ( v13 < 0 )
      return 0;
  }
  if ( a2 == v8 )
    return a3 == (__int16)v7;
  return v4;
}
