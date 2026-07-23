/*
 * XREFs of PopCompressHiberBlocks @ 0x140B5E674
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x1405D0B64 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopAddPagesToCompressedPageSet @ 0x140B5E434 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x140B5E75C (PopCountDataAsProduced.c)
 */

__int64 __fastcall PopCompressHiberBlocks(_BYTE *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  char *v8; // r9
  char *v9; // rax
  unsigned int v10[4]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v11[24]; // [rsp+50h] [rbp-158h] BYREF
  char *v12; // [rsp+68h] [rbp-140h]
  _BYTE v13[128]; // [rsp+100h] [rbp-A8h] BYREF

  memset_0(v11, 0, 0xB0uLL);
  v10[0] = 0;
  while ( 1 )
  {
    result = PopGetNextTable((__int64)a1, (__int64)v10, (__int64)v13, (__int64)v11, a3, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = v12;
    *(_QWORD *)(a2 + 56) += result;
    v9 = PopAddPagesToCompressedPageSet(a1, a2, v10, v8, a3, result, 0LL);
    PopCountDataAsProduced(a2, v9, v10, v13, v7, 0);
  }
  return result;
}
