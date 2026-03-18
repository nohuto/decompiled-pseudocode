/*
 * XREFs of ?GrepPolyPolyline@@YAHAEAVXDCOBJ@@PEBUtagPOINT@@PEBKKI@Z @ 0x1401BAE44
 * Callers:
 *     GrePolyPolyline @ 0x1401BACF0 (GrePolyPolyline.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1400D2E5C (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1400D373C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1400D3A58 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400D3F84 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall GrepPolyPolyline(
        DC **this,
        const struct tagPOINT *a2,
        const unsigned int *a3,
        unsigned int a4,
        signed int a5)
{
  __int64 v6; // r15
  DC *v7; // rcx
  unsigned int v8; // edi
  int v11; // ebx
  DC *v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v16; // r15
  const unsigned int *v18; // [rsp+30h] [rbp-D0h] BYREF
  const struct tagPOINT *v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int16 v22; // [rsp+50h] [rbp-B0h]
  struct _RECTFX v23; // [rsp+58h] [rbp-A8h] BYREF
  int *v24[10]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[64]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v26[560]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a4;
  v7 = *this;
  v8 = 0;
  if ( (*((_DWORD *)v7 + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return v8;
  }
  v11 = *(_DWORD *)(*((_QWORD *)v7 + 122) + 208LL);
  DC::QuickInitXform(v7, &v18, 516LL);
  v12 = *this;
  LOBYTE(v23.xRight) = v11 != 2;
  *(_QWORD *)&v23.xLeft = v18;
  v13 = *((_QWORD *)v12 + 122);
  v14 = *(_DWORD *)(v13 + 152);
  if ( (v14 & 0x1000) != 0 )
    GreDCSelectBrush(v12, *(_QWORD *)(v13 + 160));
  if ( (v14 & 0x2000) != 0 )
    GreDCSelectPen(*this, *(_QWORD *)(*((_QWORD *)*this + 122) + 168LL));
  if ( !(_DWORD)v6 )
    return 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v24, this, 1);
  if ( v24[1] )
  {
    v18 = &a3[v6];
    do
    {
      v16 = *(int *)a3;
      a5 -= v16;
      if ( a5 < 0 || (int)v16 < 2 )
      {
        EngSetLastError(0x57u);
        PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v24);
        return 0LL;
      }
      v19 = a2;
      v22 = 0;
      v20 = 1LL;
      v21 = 0LL;
      if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v24, &v23, &v19) )
        goto LABEL_19;
      v21 = 0LL;
      v22 = 0;
      v20 = (unsigned int)(v16 - 1);
      v19 = a2 + 1;
      if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v24, &v23, &v19, v20) )
        goto LABEL_19;
      ++a3;
      a2 += v16;
    }
    while ( a3 < v18 );
    if ( (*((_DWORD *)*this + 62) & 1) != 0
      || (unsigned int)EPATHOBJ_bStrokeAndOrFill(
                         v24,
                         (struct _POINTL **)this,
                         (LINEATTRS *)((char *)*this + 208),
                         (XFORMOBJ *)&v23,
                         1u) )
    {
      v8 = 1;
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)v24);
    PATH_CORE::~PATH_CORE((PATH_CORE *)v26);
    CAutoTGO::vUnguard((CAutoTGO *)v25);
    return v8;
  }
  EngSetLastError(8u);
LABEL_19:
  EPATHOBJ::vUnlock((EPATHOBJ *)v24);
  PATH_CORE::~PATH_CORE((PATH_CORE *)v26);
  CAutoTGO::vUnguard((CAutoTGO *)v25);
  return 0LL;
}
