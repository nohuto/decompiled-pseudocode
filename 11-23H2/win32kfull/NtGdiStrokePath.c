/*
 * XREFs of NtGdiStrokePath @ 0x1C02C10F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02843EC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028530C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C0268 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  __int64 v1; // r8
  ULONG v2; // ecx
  __int64 v3; // rdx
  DC *v4; // rcx
  unsigned int v5; // eax
  DC *v6; // rcx
  unsigned int v7; // ebx
  DC *v9[2]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-59h] BYREF
  struct _XFORMOBJ v11[4]; // [rsp+60h] [rbp-39h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-29h] BYREF
  __int64 v13; // [rsp+78h] [rbp-21h]

  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( !v9[0] || (*((_DWORD *)v9[0] + 9) & 0x10000) != 0 )
  {
    v2 = 87;
    goto LABEL_13;
  }
  if ( !(unsigned int)DC::bInactive(v9[0]) )
  {
    v2 = 1003;
LABEL_13:
    EngSetLastError(v2);
    goto LABEL_14;
  }
  v3 = *(_QWORD *)(v1 + 976);
  if ( (*(_DWORD *)(v3 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v1, *(_QWORD *)(v3 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&ppo, v9);
  if ( !v13 )
  {
    EngSetLastError(8u);
    v4 = v9[0];
    *((_DWORD *)v9[0] + 62) &= ~1u;
    DC::hpath(v4, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_14:
    DCOBJ::~DCOBJ((DCOBJ *)v9);
    return 0LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v9, 516);
  v5 = EPATHOBJ::bStrokeAndOrFill(&ppo, (POINTL **)v9, (LINEATTRS *)((char *)v9[0] + 208), v11, 1u);
  v6 = v9[0];
  v7 = v5;
  *((_DWORD *)v9[0] + 62) &= ~1u;
  DC::hpath(v6, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  if ( v9[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v10);
  return v7;
}
