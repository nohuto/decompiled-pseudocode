/*
 * XREFs of FsRtlPruneTunnelCache @ 0x1409323F0
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x140931D50 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x140931F00 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     RtlDelete @ 0x14024A8A0 (RtlDelete.c)
 *     RtlDeleteNoSplay @ 0x14024AE90 (RtlDeleteNoSplay.c)
 *     FsRtlRemoveNodeFromTunnel @ 0x1403DF5B8 (FsRtlRemoveNodeFromTunnel.c)
 *     FsRtlFreeTunnelNode @ 0x1403DF654 (FsRtlFreeTunnelNode.c)
 */

__int64 __fastcall FsRtlPruneTunnelCache(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r12
  char **v3; // r13
  __int64 v5; // rdi
  __int64 v6; // rbx
  char *v7; // r14
  __int64 v8; // rax
  __int64 result; // rax
  RTL_SPLAY_LINKS *v10; // rcx
  __int64 v11; // rcx
  char **v12; // rax
  char v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+10h]

  v14 = a2;
  v2 = a2;
  v3 = (char **)(a1 + 64);
  v13 = 1;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] - (unsigned int)TunnelMaxAge;
  while ( 1 )
  {
    v7 = *v3;
    if ( *v3 == (char *)v3 )
      break;
    v8 = *((_QWORD *)v7 + 2);
    if ( v8 >= v6 && v8 <= v5 )
      break;
    v10 = (RTL_SPLAY_LINKS *)(v7 - 24);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 56) = RtlDelete(v10);
      v13 = 0;
    }
    else
    {
      RtlDeleteNoSplay(v10, (PRTL_SPLAY_LINKS *)(a1 + 56));
    }
    v11 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v12 = (char **)*((_QWORD *)v7 + 1), *v12 != v7) )
      __fastfail(3u);
    v2 = v14;
    *v12 = (char *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    --*(_WORD *)(a1 + 80);
    FsRtlFreeTunnelNode(v7 - 24, v2);
  }
  while ( 1 )
  {
    result = *(unsigned __int16 *)(a1 + 80);
    if ( (unsigned int)result <= TunnelMaxEntries )
      break;
    FsRtlRemoveNodeFromTunnel(a1, (RTL_SPLAY_LINKS *)*v3 - 1, (__int64)v2, &v13);
  }
  return result;
}
