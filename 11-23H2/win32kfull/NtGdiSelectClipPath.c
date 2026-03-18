/*
 * XREFs of NtGdiSelectClipPath @ 0x1C02C0D70
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B7130 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C011B9CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0159E14 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02843EC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1C02C0268 (-bInactive@DC@@QEBAHXZ.c)
 */

__int64 __fastcall NtGdiSelectClipPath(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // ecx
  ULONG v6; // ecx
  DC *v8; // rcx
  unsigned int v9; // r8d
  DC *v10; // rcx
  DC *v11[2]; // [rsp+30h] [rbp-59h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v13[8]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v14; // [rsp+68h] [rbp-21h]
  struct REGION *v15; // [rsp+100h] [rbp+77h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  if ( !v11[0] || (unsigned int)(a2 - 1) > 4 )
  {
LABEL_8:
    v6 = 87;
LABEL_9:
    EngSetLastError(v6);
LABEL_10:
    DCOBJ::~DCOBJ((DCOBJ *)v11);
    return 0LL;
  }
  v3 = 1;
  if ( *((_WORD *)v11[0] + 6) > 1u )
  {
    v4 = *((_QWORD *)v11[0] + 6);
    if ( v4 )
      v5 = *(_DWORD *)(v4 + 40);
    else
      v5 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(14, v5, *((unsigned __int16 *)v11[0] + 6), 0LL, 0LL);
    goto LABEL_8;
  }
  if ( !(unsigned int)DC::bInactive(v11[0]) )
  {
    v6 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v13, v11);
  if ( !v14 )
  {
    EngSetLastError(8u);
    v8 = v11[0];
    *((_DWORD *)v11[0] + 62) &= ~1u;
    DC::hpath(v8, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v13);
    goto LABEL_10;
  }
  v9 = *(unsigned __int8 *)(*((_QWORD *)v11[0] + 122) + 214LL);
  v15 = 0LL;
  RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v13, v9, 0LL);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
  if ( !v15 || !(unsigned int)DC::iSelect(v11[0], v15, a2) )
    v3 = 0;
  v10 = v11[0];
  *((_DWORD *)v11[0] + 62) &= ~1u;
  DC::hpath(v10, 0LL);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v13);
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v12);
  return v3;
}
