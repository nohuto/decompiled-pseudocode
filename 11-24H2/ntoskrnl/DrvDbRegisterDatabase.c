/*
 * XREFs of DrvDbRegisterDatabase @ 0x140823F40
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 * Callees:
 *     DrvDbCreateDatabaseNode @ 0x140824140 (DrvDbCreateDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbRegisterDatabase(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v8 = PiDrvDbCtx;
  a7 = 0LL;
  v10 = 0LL;
  v14 = 0LL;
  if ( (int)DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &a7) >= 0 )
    return 0x40000000LL;
  if ( a3 )
  {
    result = DrvDbFindDatabaseNode(v8, a3, &v14);
    if ( (int)result < 0 )
      return result;
    v10 = v14;
  }
  v13 = (8 * (a6 & 2)) | 0x20;
  if ( (a6 & 1) == 0 )
    v13 = 8 * (a6 & 2);
  return DrvDbCreateDatabaseNode(v8, a2, v10, 0LL, a5, v13, PiDrvDbNodeActionCallback, a8, &a7);
}
