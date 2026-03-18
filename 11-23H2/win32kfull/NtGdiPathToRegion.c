/*
 * XREFs of NtGdiPathToRegion @ 0x1C02C0C10
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00C7C70 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02843EC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C0268 (-bInactive@DC@@QEBAHXZ.c)
 */

struct HOBJ__ *__fastcall NtGdiPathToRegion(HDC a1)
{
  ULONG v1; // ecx
  DC *v3; // rcx
  unsigned int v4; // r8d
  struct HOBJ__ *v5; // rbx
  DC *v6; // rcx
  DC *v7[2]; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v9[8]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v10; // [rsp+58h] [rbp-21h]
  struct OBJECT *v11; // [rsp+E8h] [rbp+6Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( !v7[0] )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_4:
    DCOBJ::~DCOBJ((DCOBJ *)v7);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, v7);
  if ( !v10 )
  {
    EngSetLastError(8u);
    v3 = v7[0];
    *((_DWORD *)v7[0] + 62) &= ~1u;
    DC::hpath(v3, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
    goto LABEL_4;
  }
  v4 = *(unsigned __int8 *)(*((_QWORD *)v7[0] + 122) + 214LL);
  v11 = 0LL;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v11, (struct EPATHOBJ *)v9, v4, 0LL);
  if ( v11 )
  {
    v5 = RGNOBJ::hrgnAssociate(&v11);
    if ( !v5 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v11);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v7[0];
  *((_DWORD *)v7[0] + 62) &= ~1u;
  DC::hpath(v6, 0LL);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v8);
  return v5;
}
