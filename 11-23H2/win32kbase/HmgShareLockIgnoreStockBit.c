/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C00AC70C
 * Callers:
 *     EngModifySurface @ 0x1C00ABA10 (EngModifySurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00B3F10 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C00444D0 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 */

struct OBJECT *__fastcall HmgShareLockIgnoreStockBit(unsigned int a1)
{
  struct OBJECT *v1; // rbx
  struct OBJECT *v3; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v1 = 0LL;
  v6 = 0LL;
  v7 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v7 )
  {
    if ( *(_BYTE *)(v6 + 14) == 5 && ((HIWORD(a1) ^ *(unsigned __int16 *)(v6 + 12)) & 0xFFFFFF7F) == 0 )
    {
      v3 = HANDLELOCK::pObj((HANDLELOCK *)&v6);
      LOBYTE(v4) = 5;
      v1 = v3;
      ++*((_DWORD *)v3 + 2);
      TrackHmgrReferenceIncrement(v4, v3);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    if ( v7 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
  }
  return v1;
}
