/*
 * XREFs of ??0CDesktopManager@@AEAA@XZ @ 0x1800B82AC
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z @ 0x18007F978 (-Create@CDesktopManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180026794 (--0CBaseObject@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0CGlassColorizationParameters@@QEAA@XZ @ 0x18002CA1C (--0CGlassColorizationParameters@@QEAA@XZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180088790 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::CDesktopManager(CDesktopManager *this)
{
  __int64 v2; // r9
  char v3; // r9
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r9

  CBaseObject::CBaseObject(this);
  *((_BYTE *)this + 23) = 1;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CDesktopManager::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CDesktopManager *)((char *)this + 104));
  *((_QWORD *)this + 26) = v2;
  *((_QWORD *)this + 27) = v2;
  *((_QWORD *)this + 54) = v2;
  CGlassColorizationParameters::CGlassColorizationParameters((CDesktopManager *)((char *)this + 484));
  *((_BYTE *)this + 516) = v3;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 528, 0LL, 0);
  *((_WORD *)this + 580) = v4;
  *((_DWORD *)this + 302) = 1050253722;
  *((_DWORD *)this + 305) = 1050253722;
  *((_BYTE *)this + 1162) = v4;
  *(_QWORD *)((char *)this + 1164) = v4;
  *(_QWORD *)((char *)this + 1172) = v4;
  *(_QWORD *)((char *)this + 1180) = 1065353216LL;
  *((_DWORD *)this + 297) = 1062836634;
  *((_DWORD *)this + 298) = 1084227584;
  *((_DWORD *)this + 299) = 1090519040;
  *((_DWORD *)this + 300) = -1065353216;
  *((_DWORD *)this + 301) = 1058642330;
  *((_DWORD *)this + 303) = 10;
  *((_DWORD *)this + 304) = 1056964608;
  *((_DWORD *)this + 306) = 1020054733;
  *((_DWORD *)this + 307) = 1041865114;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 1256, v5, v6);
  *((_QWORD *)this + 163) = v7;
  CDesktopManager::s_pDesktopManagerInstance = this;
  CDesktopManager::UpdateWindowShadows(this);
  return this;
}
