/*
 * XREFs of GreRectVisible @ 0x1C00BD078
 * Callers:
 *     NtGdiRectVisible @ 0x1C00BDB10 (NtGdiRectVisible.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00B7130 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00BB318 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00BB868 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00F80F0 (bCvtPts1.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C011D48C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0159E50 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C015A002 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreRectVisible(HDC a1, struct _RECTL *a2)
{
  unsigned int v3; // edi
  unsigned int v6; // ebx
  struct REGION *v7; // rax
  struct _RECTL v8; // xmm0
  LONG left; // eax
  LONG right; // r8d
  __int64 v11; // rcx
  LONG v12; // eax
  LONG v13; // edx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h]
  struct REGION *v18; // [rsp+50h] [rbp-B0h] BYREF
  DC *v19[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v20[40]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[32]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v23[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v24; // [rsp+E0h] [rbp-20h]
  char v25[8]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v26; // [rsp+108h] [rbp+8h]
  struct _RECTL v27; // [rsp+180h] [rbp+80h] BYREF
  struct _POINTL v28; // [rsp+190h] [rbp+90h] BYREF
  struct _POINTL v29; // [rsp+198h] [rbp+98h] BYREF
  LONG v30; // [rsp+1A0h] [rbp+A0h]
  LONG bottom; // [rsp+1A4h] [rbp+A4h]
  LONG v32; // [rsp+1A8h] [rbp+A8h]
  LONG v33; // [rsp+1ACh] [rbp+ACh]

  v3 = 0;
  v19[0] = 0LL;
  v19[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v20);
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( !v19[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v19);
    return 0xFFFFFFFFLL;
  }
  v6 = 1;
  if ( *((_WORD *)v19[0] + 6) == 1 )
  {
    v22[0] = 0LL;
    v22[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
    v24 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v19, 1);
    if ( (v21[24] & 1) == 0 )
    {
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
      goto LABEL_13;
    }
    v7 = XDCOBJ::prgnEffRao(v19);
    v8 = *a2;
    v18 = v7;
    v27 = v8;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v19, -2147483132);
    if ( (*(_DWORD *)(v16 + 32) & 1) != 0 )
    {
      EXFORMOBJ::vOrder((EXFORMOBJ *)&v16, &v27);
      if ( (*(_BYTE *)(v16 + 32) & 0x43) != 0x43 )
        bCvtPts1(v16, &v27, 2LL);
      left = v27.left;
      right = v27.right;
      if ( v17 )
      {
        left = v27.left + 1;
        right = v27.right + 1;
        ++v27.left;
        ++v27.right;
      }
      v11 = *((_DWORD *)v19[0] + 10) & 1LL;
      v27.left = *((_DWORD *)v19[0] + 2 * v11 + 254) + left;
      v27.right = *((_DWORD *)v19[0] + 2 * v11 + 254) + right;
      v27.top += *((_DWORD *)v19[0] + 2 * v11 + 255);
      v27.bottom += *((_DWORD *)v19[0] + 2 * v11 + 255);
      LOBYTE(v3) = RGNOBJ::bInside((RGNOBJ *)&v18, &v27) == 2;
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
      v6 = v3;
      goto LABEL_13;
    }
    v12 = a2->right;
    v13 = a2->left;
    v28.y = a2->top;
    v29.x = v12;
    v29.y = v28.y;
    v30 = v12;
    bottom = a2->bottom;
    v33 = bottom;
    v28.x = v13;
    v32 = v13;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v25);
    if ( v26 )
    {
      if ( (unsigned int)EPATHOBJ::bMoveTo((EPATHOBJ *)v25, (struct EXFORMOBJ *)&v16, &v28)
        && (unsigned int)EPATHOBJ::bPolyLineTo((EPATHOBJ *)v25, (struct EXFORMOBJ *)&v16, &v29, 3u)
        && EPATHOBJ::bCloseFigure((EPATHOBJ *)v25) )
      {
        v15 = 0LL;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v25, 1u, 0LL);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v15);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
        if ( v15 && v14 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v14, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v15, 8u)
            && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v14) != 1 )
          {
            v6 = 2;
          }
        }
        else
        {
          EngSetLastError(8u);
          v6 = -1;
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v14);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
        goto LABEL_17;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v6 = -1;
LABEL_17:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v25);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    if ( v22[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v22);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
    if ( v19[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
    return v6;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v19[0] + 6));
  EngSetLastError(6u);
  v6 = -1;
LABEL_13:
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return v6;
}
