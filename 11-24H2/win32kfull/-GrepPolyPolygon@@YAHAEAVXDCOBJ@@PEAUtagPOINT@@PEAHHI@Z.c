/*
 * XREFs of ?GrepPolyPolygon@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@PEAHHI@Z @ 0x1401A1B44
 * Callers:
 *     GrePolyPolygon @ 0x1401A19F0 (GrePolyPolygon.c)
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyPolygon(DC **this, struct tagPOINT *a2, int *a3, int a4, unsigned int a5)
{
  DC *v7; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // esi
  int v13; // ebx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTFX v16; // [rsp+38h] [rbp-C8h] BYREF
  int *v17[10]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[64]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v19[560]; // [rsp+E0h] [rbp-20h] BYREF

  v7 = *this;
  v10 = 1;
  if ( (*((_DWORD *)v7 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v11 = *((_QWORD *)v7 + 122);
  v12 = *(_DWORD *)(v11 + 152);
  if ( (v12 & 0x1000) != 0 )
    GreDCSelectBrush(v7, *(_QWORD *)(v11 + 160));
  if ( (v12 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(_QWORD *)(*((_QWORD *)*this + 122) + 168LL));
  if ( a4 )
  {
    v13 = *(_DWORD *)(*((_QWORD *)*this + 122) + 208LL);
    DC::QuickInitXform(*this, &v15, 516LL);
    *(_QWORD *)&v16.xLeft = v15;
    LOBYTE(v16.xRight) = v13 != 2;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v17, this, 1);
    if ( v17[1] )
    {
      v10 = bPolyPolygon(v17, &v16, a2, a3, a4, a5);
      if ( !v10 )
      {
LABEL_12:
        EPATHOBJ::vUnlock((EPATHOBJ *)v17);
        PATH_CORE::~PATH_CORE((PATH_CORE *)v19);
        CAutoTGO::vUnguard((CAutoTGO *)v18);
        return v10;
      }
      LODWORD(v17[0]) |= 0x4000u;
      if ( (*((_DWORD *)*this + 62) & 1) != 0
        || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                           v17,
                           (struct _POINTL **)this,
                           (LINEATTRS *)((char *)*this + 208),
                           (XFORMOBJ *)&v16,
                           3u) )
      {
        v10 = 1;
        goto LABEL_12;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v10 = 0;
    goto LABEL_12;
  }
  return v10;
}
