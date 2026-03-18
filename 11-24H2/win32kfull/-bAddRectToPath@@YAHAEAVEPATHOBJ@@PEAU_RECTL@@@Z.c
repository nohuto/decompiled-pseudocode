/*
 * XREFs of ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x14020FD78
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140059DF0 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 * Callees:
 *     ?bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14020FDE8 (-bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall bAddRectToPath(struct EPATHOBJ *a1, struct _RECTL *a2, __int64 a3, unsigned int a4)
{
  struct _POINTL v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  LONG y; // [rsp+2Ch] [rbp-2Ch]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+34h] [rbp-24h]
  LONG x; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]

  v5.x = 16 * a2->left;
  x = v5.x;
  v5.y = 16 * a2->top;
  y = v5.y;
  v6 = 16 * a2->right;
  v8 = v6;
  v9 = 16 * a2->bottom;
  v11 = v9;
  return EPATHOBJ::bAddPolygon(a1, (const struct EXFORMOBJR *)a2, &v5, a4);
}
