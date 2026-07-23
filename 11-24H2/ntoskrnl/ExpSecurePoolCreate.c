/*
 * XREFs of ExpSecurePoolCreate @ 0x140656D00
 * Callers:
 *     ExCreatePool @ 0x1406525E0 (ExCreatePool.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x140458A08 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140459100 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall ExpSecurePoolCreate(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int128 v3; // xmm6
  ULONG_PTR v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == 2 && a2 )
  {
    v6 = 0LL;
    *(_WORD *)((char *)&v6 + 1) = 1;
    LOBYTE(v6) = 3;
    v3 = v6;
    v4 = RtlpHpMetadataAlloc(0x10uLL, 0x10uLL, 0, (unsigned __int64 *)&v6);
    if ( v4 )
    {
      *(_QWORD *)(v4 + 8) = 0LL;
      v2 = -1073741637;
      *(_DWORD *)v4 = -1347437123;
      *(_DWORD *)(v4 + 4) = 2;
      v6 = v3;
      RtlpHpMetadataFree(v4, &v6);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
