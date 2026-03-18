/*
 * XREFs of XFORMOBJ_bApplyXform @ 0x1400DC420
 * Callers:
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1400DAEB0 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400C56E8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall XFORMOBJ_bApplyXform(XFORMOBJ *pxo, ULONG iMode, ULONG cPoints, PVOID pvIn, PVOID pvOut)
{
  _DWORD *v5; // rdi
  const struct _POINTFIX *v6; // rbx
  unsigned __int64 v7; // rbp
  const struct MATRIX *v9; // rdx
  const struct _POINTFIX *v10; // rsi
  const struct _POINTFIX *i; // rax
  BOOL result; // eax
  struct _POINTL *v13; // rdx
  __int64 v14; // r8
  _OWORD *v15; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v16[2]; // [rsp+28h] [rbp-50h] BYREF
  int v17; // [rsp+48h] [rbp-30h]

  v5 = pvOut;
  v6 = (const struct _POINTFIX *)pvIn;
  v7 = cPoints;
  if ( !pxo || !pvIn || !pvOut )
    return 0;
  if ( !iMode )
  {
    v13 = (struct _POINTL *)pvIn;
    if ( pvIn == pvOut )
    {
      v14 = cPoints;
LABEL_25:
      LOBYTE(result) = EXFORMOBJ::bXform((EXFORMOBJ *)pxo, v13, *(__int64 *)&cPoints, (__int64)pvIn);
      return result;
    }
    if ( EXFORMOBJ::bXform((EXFORMOBJ *)pxo, (const struct _POINTL *)pvIn, (struct _POINTFIX *)pvOut, cPoints) )
    {
      while ( v5 < (_DWORD *)((char *)pvOut + 8 * v7) )
      {
        *v5 = (*v5 + 8) >> 4;
        v5[1] = (v5[1] + 8) >> 4;
        v5 += 2;
      }
      return 1;
    }
    return 0;
  }
  if ( iMode == 2 )
  {
    LOBYTE(result) = EXFORMOBJ::bXform(
                       (EXFORMOBJ *)pxo,
                       (const struct _POINTL *)pvIn,
                       (struct _POINTFIX *)pvOut,
                       cPoints);
    return result;
  }
  v9 = *(const struct MATRIX **)&pxo->ulReserved;
  v17 = 0;
  v15 = v16;
  memset(v16, 0, sizeof(v16));
  if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)&v15, v9) )
    return 0;
  if ( iMode != 1 )
  {
    if ( iMode == 3 )
    {
      LOBYTE(result) = EXFORMOBJ::bXform((EXFORMOBJ *)&v15, v6, (struct _POINTL *)pvOut, v7);
      return result;
    }
    return 0;
  }
  pvIn = (PVOID)(unsigned int)v7;
  if ( v6 == pvOut )
  {
    *(_QWORD *)&cPoints = (unsigned int)v7;
    pxo = (XFORMOBJ *)&v15;
    v13 = (struct _POINTL *)v6;
    goto LABEL_25;
  }
  v10 = &v6[v7];
  for ( i = v6; i < v10; ++i )
  {
    i->x *= 16;
    i->y *= 16;
  }
  result = EXFORMOBJ::bXform((EXFORMOBJ *)&v15, v6, (struct _POINTL *)pvOut, (unsigned int)v7);
  while ( v6 < v10 )
  {
    v6->x >>= 4;
    v6->y >>= 4;
    ++v6;
  }
  return result;
}
