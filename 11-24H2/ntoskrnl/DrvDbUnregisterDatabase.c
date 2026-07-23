/*
 * XREFs of DrvDbUnregisterDatabase @ 0x1408240E4
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbUnregisterNode @ 0x140737BD8 (PiDrvDbUnregisterNode.c)
 * Callees:
 *     DrvDbDestroyDatabaseNode @ 0x140824478 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbFindDatabaseNode @ 0x140928D98 (DrvDbFindDatabaseNode.c)
 */

__int64 __fastcall DrvDbUnregisterDatabase(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = PiDrvDbCtx;
  v5 = 0LL;
  result = DrvDbFindDatabaseNode(PiDrvDbCtx, a2, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    if ( (*(_DWORD *)(v5 + 64) & 1) != 0 )
    {
      return 3221225485LL;
    }
    else
    {
      if ( *(_QWORD *)(v2 + 48) == v5 )
        *(_QWORD *)(v2 + 48) = 0LL;
      return DrvDbDestroyDatabaseNode(v2, v4);
    }
  }
  return result;
}
