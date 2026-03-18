/*
 * XREFs of GreGetAppClipBox @ 0x1C00BAD80
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00B7250 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB2EC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB358 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00BDAA4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00C2470 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     bCvtPts1 @ 0x1C00F80F0 (bCvtPts1.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011D240 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned int v3; // edi
  DC *v5; // rcx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v7; // ebx
  DC *v8; // rcx
  struct _DC_ATTR *v9; // rax
  __int64 v10; // rsi
  DC *v12; // r10
  struct REGION *v13; // rax
  DC *v14; // r10
  struct REGION *v15; // rbx
  __int64 v16; // r9
  LONG v17; // r8d
  LONG v18; // r11d
  __int64 v19; // rcx
  LONG v20; // edx
  LONG v21; // r8d
  LONG v22; // r11d
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ebx
  LONG v31; // edx
  LONG v32; // eax
  LONG x; // r9d
  LONG v34; // r11d
  LONG v35; // eax
  LONG v36; // ebx
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // ecx
  LONG y; // r8d
  bool v41; // cc
  LONG v42; // r10d
  LONG v43; // eax
  LONG v44; // eax
  LONG v45; // r14d
  LONG v46; // eax
  LONG v47; // eax
  LONG v48; // eax
  LONG v49; // eax
  LONG v50; // eax
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // eax
  LONG v54; // eax
  LONG v55; // ecx
  int v56; // [rsp+30h] [rbp-D0h] BYREF
  DC *v57; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C0h]
  _BYTE v59[32]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-98h] BYREF
  int v61; // [rsp+74h] [rbp-8Ch]
  _BYTE v62[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v63[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v64[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v65; // [rsp+D0h] [rbp-30h]
  struct _POINTL v66; // [rsp+F0h] [rbp-10h] BYREF
  LONG v67; // [rsp+F8h] [rbp-8h]
  LONG v68; // [rsp+FCh] [rbp-4h]
  LONG v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+104h] [rbp+4h]
  LONG v71; // [rsp+108h] [rbp+8h]
  int v72; // [rsp+10Ch] [rbp+Ch]

  v3 = 0;
  v57 = 0LL;
  v58 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v59);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v57, a1);
  v5 = v57;
  if ( !v57 )
    goto LABEL_7;
  if ( (*((_DWORD *)v57 + 11) & 2) != 0 )
  {
LABEL_20:
    if ( (*((_DWORD *)v5 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v5);
      v5 = v57;
    }
    if ( !v5 )
      goto LABEL_7;
    if ( *((_WORD *)v5 + 6) != 1 )
    {
      TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, *((unsigned __int16 *)v5 + 6));
      EngSetLastError(6u);
LABEL_31:
      DCOBJ::~DCOBJ((DCOBJ *)&v57);
      return v3;
    }
    v63[0] = 0LL;
    v63[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
    v65 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v62, (struct XDCOBJ *)&v57, 1);
    if ( (v62[24] & 1) == 0 )
    {
      if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v57) )
      {
        *(_QWORD *)a2 = 0LL;
        *((_QWORD *)a2 + 1) = 0LL;
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v62);
        v3 = 3;
      }
      else
      {
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v62);
        if ( v63[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v63);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
      }
      goto LABEL_31;
    }
    if ( DC::prgnRao(v57) )
      v13 = DC::prgnRao(v12);
    else
      v13 = DC::prgnVisSnap(v12);
    v15 = v13;
    *(_OWORD *)a2 = *(_OWORD *)((char *)v13 + 56);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      *(_QWORD *)a2 = 0LL;
      v7 = 1;
      *((_QWORD *)a2 + 1) = 0LL;
    }
    else
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v60, (struct XDCOBJ *)&v57, -2147482622);
      v16 = v60;
      if ( !v60 )
      {
        v7 = 0;
LABEL_125:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v62);
        if ( v63[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v63);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
        goto LABEL_8;
      }
      v14 = v57;
      v17 = a2[2];
      v18 = a2[1];
      v19 = *((_DWORD *)v57 + 10) & 1;
      v20 = *a2 - *((_DWORD *)v57 + 2 * v19 + 254);
      *a2 = v20;
      v21 = v17 - *((_DWORD *)v14 + 2 * v19 + 254);
      a2[2] = v21;
      v22 = v18 - *((_DWORD *)v14 + 2 * v19 + 255);
      a2[1] = v22;
      v23 = a2[3] - *((_DWORD *)v14 + 2 * v19 + 255);
      a2[3] = v23;
      v24 = *(_DWORD *)(v16 + 32);
      if ( (v24 & 1) != 0 )
      {
        if ( (v24 & 0x43) == 0x43 || (v25 = bCvtPts1(v16, a2, 2LL), v14 = v57, v26 = v25 == 0, v27 = 0, !v26) )
          v27 = 1;
        if ( v61 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v27 )
        {
          v28 = (__int64)v15 + 52;
          if ( !v15 )
            v28 = 28LL;
          if ( *(_DWORD *)v28 == 1 )
          {
            v7 = 1;
          }
          else
          {
            v26 = v15 == 0LL;
            v29 = (__int64)v15 + 48;
            v30 = 0;
            if ( v26 )
              v29 = 24LL;
            LOBYTE(v30) = *(_DWORD *)v29 > 0x38u;
            v7 = v30 + 2;
          }
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        v66.x = v20;
        v67 = v21;
        v69 = v20;
        v70 = v23;
        v71 = v21;
        v72 = v23;
        v66.y = v22;
        v68 = v22;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v60, &v66, 4uLL);
        v31 = v67;
        v32 = v67;
        x = v66.x;
        v34 = v69;
        if ( v66.x < v67 )
          v32 = v66.x;
        if ( v32 >= v69 )
        {
          v35 = v69;
        }
        else
        {
          v35 = v67;
          if ( v66.x < v67 )
            v35 = v66.x;
        }
        v36 = v71;
        if ( v35 >= v71 )
        {
          v38 = v71;
        }
        else
        {
          v37 = v67;
          if ( v66.x < v67 )
            v37 = v66.x;
          if ( v37 >= v69 )
          {
            v38 = v69;
          }
          else
          {
            v38 = v67;
            if ( v66.x < v67 )
              v38 = v66.x;
          }
        }
        v39 = v68;
        y = v66.y;
        v41 = v66.y < v68;
        v42 = v70;
        *a2 = v38;
        v43 = v39;
        if ( v41 )
          v43 = y;
        if ( v43 >= v42 )
        {
          v44 = v42;
        }
        else
        {
          v44 = v39;
          if ( y < v39 )
            v44 = y;
        }
        v45 = v72;
        if ( v44 >= v72 )
        {
          v47 = v72;
        }
        else
        {
          v46 = v39;
          if ( y < v39 )
            v46 = y;
          if ( v46 >= v42 )
          {
            v47 = v42;
          }
          else
          {
            v47 = v39;
            if ( y < v39 )
              v47 = y;
          }
        }
        a2[1] = v47;
        v48 = v31;
        if ( x > v31 )
          v48 = x;
        if ( v48 <= v34 )
        {
          v49 = v34;
        }
        else
        {
          v49 = v31;
          if ( x > v31 )
            v49 = x;
        }
        if ( v49 <= v36 )
        {
          v31 = v36;
        }
        else
        {
          v50 = v31;
          if ( x > v31 )
            v50 = x;
          if ( v50 <= v34 )
          {
            v31 = v34;
          }
          else if ( x > v31 )
          {
            v31 = x;
          }
        }
        a2[2] = v31;
        v51 = v39;
        if ( y > v39 )
          v51 = y;
        if ( v51 <= v42 )
        {
          v52 = v42;
        }
        else
        {
          v52 = v39;
          if ( y > v39 )
            v52 = y;
        }
        if ( v52 <= v45 )
        {
          v39 = v45;
        }
        else
        {
          v53 = v39;
          if ( y > v39 )
            v53 = y;
          if ( v53 <= v42 )
          {
            v39 = v42;
          }
          else if ( y > v39 )
          {
            v39 = y;
          }
        }
        v14 = v57;
        v7 = 3;
        a2[3] = v39;
      }
      if ( !v7 )
        goto LABEL_125;
    }
    if ( (*(_DWORD *)(*((_QWORD *)v14 + 122) + 108LL) & 1) != 0 )
    {
      v54 = *a2;
      v55 = a2[2];
      if ( *a2 > v55 )
      {
        *a2 = v55;
        a2[2] = v54;
      }
    }
    goto LABEL_125;
  }
  if ( HIDWORD(v58) )
  {
LABEL_19:
    *((_DWORD *)v5 + 11) |= 2u;
    v5 = v57;
    LODWORD(v58) = 1;
    goto LABEL_20;
  }
  UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v57);
  if ( !UserAttr || DC::SaveAttributes(v57, UserAttr) )
  {
    v5 = v57;
    goto LABEL_19;
  }
  _InterlockedDecrement((volatile signed __int32 *)v57 + 3);
  v57 = 0LL;
LABEL_7:
  EngSetLastError(6u);
  v7 = 0;
LABEL_8:
  v8 = v57;
  if ( v57 )
  {
    if ( (_DWORD)v58 && (*((_DWORD *)v57 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v58) )
      {
        v9 = XDCOBJ::GetUserAttr((XDCOBJ *)&v57);
        v8 = v57;
        if ( v9 )
        {
          DC::RestoreAttributes(v57, v9);
          v8 = v57;
        }
      }
      *((_DWORD *)v8 + 11) &= ~2u;
      v8 = v57;
      LODWORD(v58) = 0;
    }
    v56 = 0;
    v10 = *(_QWORD *)v8;
    HmgDecrementExclusiveReferenceCountEx(v8, HIDWORD(v58), &v56);
    if ( v56 )
      GrepDeleteDC(v10, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v59);
  return v7;
}
