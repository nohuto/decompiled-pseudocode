/*
 * XREFs of LdrResFindResourceDirectory @ 0x14077F230
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v9; // rax
  int v10; // r8d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  v9 = v11[0];
  if ( a2 )
    v9 = a2;
  v11[0] = v9;
  v10 = a2 != 0;
  if ( a3 )
  {
    v11[1] = a3;
    v10 = 2;
  }
  return LdrResSearchResource(a1, (unsigned int)v11, v10, a7 | 2u, a4, 0LL, a5, a6);
}
