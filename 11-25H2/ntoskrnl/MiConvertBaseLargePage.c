/*
 * XREFs of MiConvertBaseLargePage @ 0x140464978
 * Callers:
 *     MiConvertLargePfnToSmall @ 0x14038A700 (MiConvertLargePfnToSmall.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 *     MiLargePagePromote @ 0x1404384BC (MiLargePagePromote.c)
 *     MiFreeLargePageChain @ 0x1404AE044 (MiFreeLargePageChain.c)
 *     MiTryUnlinkNodeLargePages @ 0x140678C18 (MiTryUnlinkNodeLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertBaseLargePage(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v4; // [rsp+10h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 24) = v2 & 0xC000000000000000uLL | 1;
    HIWORD(v4) = HIWORD(*(_DWORD *)(a1 + 32));
    LOWORD(v4) = 2;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v2 & 0xC000000000000000uLL;
    HIWORD(v4) = HIWORD(*(_DWORD *)(a1 + 32));
    LOWORD(v4) = 0;
  }
  result = v4;
  *(_DWORD *)(a1 + 32) = v4;
  return result;
}
