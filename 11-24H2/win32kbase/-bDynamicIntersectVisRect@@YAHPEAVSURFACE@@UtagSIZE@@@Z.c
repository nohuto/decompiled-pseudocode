/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x14017596C
 * Callers:
 *     bDynamicModeChange @ 0x140175A68 (bDynamicModeChange.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     HmgSafeNextObjt @ 0x140086CD0 (HmgSafeNextObjt.c)
 *     GreIntersectVisRect @ 0x140179B90 (GreIntersectVisRect.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C3128 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  unsigned int v3; // esi
  DC *v4; // rdi
  __int64 v6; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+38h] [rbp-20h]
  LONG cy; // [rsp+6Ch] [rbp+14h]
  DC *v9; // [rsp+70h] [rbp+18h] BYREF

  cy = a2.cy;
  v9 = 0LL;
  v3 = HmgSafeNextObjt(0LL, 1, &v9);
  if ( !v3 )
    return 1LL;
  while ( 1 )
  {
    v4 = v9;
    if ( (*((_DWORD *)v9 + 9) & 0x2000) != 0 || *((struct SURFACE **)v9 + 62) != a1 )
      goto LABEL_10;
    DC::AcquireDcVisRgnShared(v9);
    if ( *((_QWORD *)v4 + 142) )
      break;
    if ( v7 )
    {
      v7 = 0;
      CPushLock::ReleaseLock((CPushLock *)(v6 + 1112));
    }
LABEL_10:
    v3 = HmgSafeNextObjt(v3, 1, &v9);
    if ( !v3 )
      return 1LL;
  }
  if ( v7 )
  {
    v7 = 0;
    CPushLock::ReleaseLock((CPushLock *)(v6 + 1112));
  }
  if ( (unsigned int)GreIntersectVisRect(*(HDC *)v4, cy) )
    goto LABEL_10;
  return 0LL;
}
