/*
 * XREFs of ?bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1401A57B8
 * Callers:
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140330C60 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bPolyBezierTo(
        EPATHOBJ *this,
        const struct EXFORMOBJR *a2,
        const struct _POINTL *a3,
        __int64 a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[2] = 0LL;
  v5[0] = a3;
  v5[1] = (unsigned int)a4;
  v6 = 0;
  return EPATHOBJ::bPolyBezierTo(this, a2, v5, a4);
}
