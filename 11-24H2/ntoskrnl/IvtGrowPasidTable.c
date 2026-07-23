/*
 * XREFs of IvtGrowPasidTable @ 0x14056BEE0
 * Callers:
 *     <none>
 * Callees:
 *     IvtAllocateScalableModePasidTables @ 0x14056A9EC (IvtAllocateScalableModePasidTables.c)
 *     IvtExtendScalableModePasidTables @ 0x14056B7D8 (IvtExtendScalableModePasidTables.c)
 */

__int64 __fastcall IvtGrowPasidTable(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
  __int64 result; // rax
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  int v13; // r12d
  unsigned int v14; // r14d
  _DWORD *v15; // [rsp+50h] [rbp-48h] BYREF
  _DWORD *v16; // [rsp+A0h] [rbp+8h] BYREF

  if ( a4 >= 0x100000 )
    return 3221225485LL;
  v11 = *(_DWORD **)(a2 + 64);
  v12 = 0LL;
  v13 = a5;
  v15 = 0LL;
  v16 = v11;
  if ( v11 )
  {
    v14 = v11[9];
    if ( v11[11] != a3 )
      return 3221225659LL;
    result = IvtExtendScalableModePasidTables(a1, (__int64)v11, a4, 1);
    if ( (int)result >= 0 )
      goto LABEL_12;
  }
  else
  {
    v14 = 0;
    result = 3221225473LL;
  }
  if ( a4 < v14 )
    return result;
  result = IvtAllocateScalableModePasidTables(a1, a2, a3, a4, a4, v13, 1, &v15, &v16);
  if ( (int)result < 0 )
    return result;
  v11 = v16;
  v12 = v15;
LABEL_12:
  if ( v11 != v12 )
    *(_QWORD *)(a2 + 72) = v12;
  if ( v11 && v11[12] != v13 )
  {
    if ( v12 )
      v12[12] = 1;
    else
      v11[12] = 1;
  }
  *(_DWORD *)(a2 + 80) = a6;
  return result;
}
