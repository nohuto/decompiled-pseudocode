/*
 * XREFs of MiAllocateEnclavePagesForMdl @ 0x1404136E4
 * Callers:
 *     MiFindPagesForMdl @ 0x140412AB4 (MiFindPagesForMdl.c)
 * Callees:
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiAllocateEnclavePages @ 0x140394D84 (MiAllocateEnclavePages.c)
 */

__int64 __fastcall MiAllocateEnclavePagesForMdl(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  char v6; // al
  char v8; // r8
  __int64 result; // rax
  __int64 *v10; // rax
  int v11; // r8d
  _QWORD *v12; // r9
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v6 = a3 & 2;
  v8 = a3 & 2 | 1;
  v14 = 0LL;
  if ( (a3 & 4) == 0 )
    v8 = v6;
  v13 = 0LL;
  MiAllocateEnclavePages(a1, a5, v8, a4, (__int64)&v13);
  if ( !v14 )
    return 0LL;
  while ( 1 )
  {
    v10 = MiUnlinkPageChainHead((__int64)&v13);
    if ( !v10 )
      break;
    *v12 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x44000000000LL) >> 4);
  }
  result = 1LL;
  *(_DWORD *)(a2 + 40) += v11 << 12;
  return result;
}
