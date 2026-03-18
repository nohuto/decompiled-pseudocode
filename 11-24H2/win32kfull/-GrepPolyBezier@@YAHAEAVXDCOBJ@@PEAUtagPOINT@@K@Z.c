/*
 * XREFs of ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140330C60
 * Callers:
 *     GrePolyBezier @ 0x140330E40 (GrePolyBezier.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400DB55C (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1401A57B8 (-bPolyBezierTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyBezier(DC **this, const struct _POINTL *a2, unsigned int a3)
{
  DC *v5; // rcx
  ULONG v7; // ecx
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebx
  struct _RECTFX v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  int *v15[88]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = *this;
  if ( (*((_DWORD *)v5 + 9) & 0x10000) != 0 )
  {
    v7 = 6;
LABEL_19:
    EngSetLastError(v7);
    return 0LL;
  }
  if ( a3 < 4 || a3 % 3 != 1 )
  {
    v7 = 87;
    goto LABEL_19;
  }
  v8 = *((_QWORD *)v5 + 122);
  v9 = *(_DWORD *)(v8 + 152);
  if ( (v9 & 0x1000) != 0 )
    GreDCSelectBrush(v5, *(_QWORD *)(v8 + 160));
  if ( (v9 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(_QWORD *)(*((_QWORD *)*this + 122) + 168LL));
  v10 = *(_DWORD *)(*((_QWORD *)*this + 122) + 208LL);
  DC::QuickInitXform(*this, &v14, 516LL);
  *(_QWORD *)&v13.xLeft = v14;
  LOBYTE(v13.xRight) = v10 != 2;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v15, this, 1);
  v11 = 0;
  if ( !v15[1] )
  {
    EngSetLastError(8u);
LABEL_11:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v15);
    return 0LL;
  }
  if ( !(unsigned __int8)EPATHOBJ::bMoveTo((EPATHOBJ *)v15, (const struct EXFORMOBJR *)&v13, a2)
    || !(unsigned __int8)EPATHOBJ::bPolyBezierTo((EPATHOBJ *)v15, (const struct EXFORMOBJR *)&v13, a2 + 1, a3 - 1) )
  {
    goto LABEL_11;
  }
  if ( (*((_DWORD *)*this + 62) & 1) != 0
    || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                       v15,
                       (struct _POINTL **)this,
                       (LINEATTRS *)((char *)*this + 208),
                       (XFORMOBJ *)&v13,
                       1u) )
  {
    v11 = 1;
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v15);
  return v11;
}
