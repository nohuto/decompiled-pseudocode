/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016C2A0
 * Callers:
 *     bDynamicModeChange @ 0x1C00C75B0 (bDynamicModeChange.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     HmgSafeNextObjt @ 0x1C0035C80 (HmgSafeNextObjt.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     GreIntersectVisRect @ 0x1C016AF30 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  LONG cx; // ebx
  unsigned int v4; // esi
  DC *v5; // rdi
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+38h] [rbp-20h]
  int cy; // [rsp+6Ch] [rbp+14h]
  DC *v10; // [rsp+70h] [rbp+18h] BYREF

  cy = a2.cy;
  v10 = 0LL;
  cx = a2.cx;
  v4 = HmgSafeNextObjt(0LL, 1, &v10);
  if ( !v4 )
    return 1LL;
  while ( 1 )
  {
    v5 = v10;
    if ( (*((_DWORD *)v10 + 9) & 0x2000) != 0 || *((struct SURFACE **)v10 + 62) != a1 )
      goto LABEL_10;
    DC::AcquireDcVisRgnShared(v10, (__int64)&v7);
    if ( *((_QWORD *)v5 + 142) )
      break;
    if ( v8 )
    {
      v8 = 0;
      CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    }
LABEL_10:
    v4 = HmgSafeNextObjt(v4, 1, &v10);
    if ( !v4 )
      return 1LL;
  }
  if ( v8 )
  {
    v8 = 0;
    CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
  }
  if ( (unsigned int)GreIntersectVisRect(*(HDC *)v5, 0, 0, cx, cy) )
    goto LABEL_10;
  return 0LL;
}
