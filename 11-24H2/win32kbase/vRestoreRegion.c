/*
 * XREFs of vRestoreRegion @ 0x1400F3410
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall vRestoreRegion(__int64 *a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax
  ULONG_PTR v4; // rcx
  bool v5; // zf
  ULONG_PTR v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*a1 + 168);
  if ( v2 )
  {
    v5 = (*(_DWORD *)(v2 + 76))-- == 1;
    v6 = v2;
    if ( v5 )
      RGNOBJ::vDeleteRGNOBJ(&v6);
    *(_QWORD *)(*a1 + 168) = 0LL;
  }
  result = *a1;
  v4 = *(_QWORD *)(*a1 + 160);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 76))-- == 1;
    v6 = v4;
    if ( v5 )
      RGNOBJ::vDeleteRGNOBJ(&v6);
    result = *a1;
    *(_QWORD *)(*a1 + 160) = 0LL;
  }
  return result;
}
