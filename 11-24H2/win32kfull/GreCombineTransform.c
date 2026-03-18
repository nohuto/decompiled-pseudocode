/*
 * XREFs of GreCombineTransform @ 0x1401B8590
 * Callers:
 *     NtGdiCombineTransform @ 0x1401B84A0 (NtGdiCombineTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GreCombineTransform(struct _XFORML *a1, __int64 a2, __int64 a3)
{
  _OWORD *v6; // [rsp+20h] [rbp-49h] BYREF
  _OWORD v7[2]; // [rsp+28h] [rbp-41h] BYREF
  int v8; // [rsp+48h] [rbp-21h]
  _OWORD v9[2]; // [rsp+50h] [rbp-19h] BYREF
  int v10; // [rsp+70h] [rbp+7h]
  _OWORD v11[2]; // [rsp+78h] [rbp+Fh] BYREF
  int v12; // [rsp+98h] [rbp+2Fh]

  v10 = 0;
  v8 = 0;
  v12 = 0;
  memset(v9, 0, sizeof(v9));
  memset(v7, 0, sizeof(v7));
  memset(v11, 0, sizeof(v11));
  vConvertXformToMatrix(a2, v9);
  vConvertXformToMatrix(a3, v7);
  v6 = v11;
  if ( !EXFORMOBJ::bMultiply((EXFORMOBJ *)&v6, (const struct MATRIX *)v9, (const struct MATRIX *)v7, 0) )
    return 0LL;
  *((_DWORD *)v6 + 8) = 32;
  EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v6, a1);
  return 1LL;
}
