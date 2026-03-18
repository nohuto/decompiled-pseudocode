/*
 * XREFs of GreExtSelectClipRgnInternal @ 0x1C011B070
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C000674C (_ExcludeUpdateRgn.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00103B8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     NtGdiExtSelectClipRgn @ 0x1C011B050 (NtGdiExtSelectClipRgn.c)
 *     DrawTextExWorker @ 0x1C024C94C (DrawTextExWorker.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D04 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0010D3C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     GreDereferenceObject @ 0x1C0049FA8 (GreDereferenceObject.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0089018 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB358 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00FB428 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FEBE0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C011B9CC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013DB9C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013DC2C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013E238 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013E2BC (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264500 (--0SURFREF@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0264948 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026632C (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnInternal(__int64 a1, HRGN a2, int a3, int a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  struct UMPDOBJ *v13; // rdx
  DC *v14; // r9
  int v15; // ebx
  struct _DC_ATTR *v16; // rax
  __int64 v17; // rbx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v19; // rax
  unsigned int v20; // ecx
  struct REGION *v21; // rax
  DC *v22; // rdx
  __int64 v23; // r8
  struct REGION *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  DC *v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  HSURF v39; // rbx
  Gre::Base *v40; // rcx
  struct Gre::Base::SESSION_GLOBALS *v41; // rbx
  char v42; // si
  __int64 v43; // rax
  __int64 v44; // rax
  DC *v46; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h]
  _BYTE v48[32]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v49[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  unsigned int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  DC *v54[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v55[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  HDC v59; // [rsp+D8h] [rbp-28h]
  DC *v60[2]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v61[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v62[32]; // [rsp+110h] [rbp+10h] BYREF
  HSURF *v63; // [rsp+130h] [rbp+30h]
  _BYTE v64[32]; // [rsp+138h] [rbp+38h] BYREF
  struct SURFACE *v65; // [rsp+158h] [rbp+58h]
  struct REGION *v66; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v67[40]; // [rsp+168h] [rbp+68h] BYREF
  int v68; // [rsp+190h] [rbp+90h]
  _BYTE v69[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v70[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v71[32]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v72; // [rsp+1F0h] [rbp+F0h]
  char v73; // [rsp+250h] [rbp+150h] BYREF

  v8 = 0;
  if ( (unsigned int)(a3 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return v8;
  }
  v47 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v48);
  LOBYTE(v9) = 1;
  v46 = (DC *)HmgLockEx(a1, v9, 0LL);
  if ( v46 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v11 = *ThreadWin32Thread) != 0 && (v12 = *(_QWORD *)(v11 + 40), v12 != v11 + 40) )
      v13 = (struct UMPDOBJ *)(v12 - 40);
    else
      v13 = 0LL;
    v14 = v46;
    if ( *((_WORD *)v46 + 6) == 1 )
    {
      *((_QWORD *)v46 + 271) = v13;
      *((_DWORD *)v46 + 544) = 0xFFFF;
      v14 = v46;
    }
    else if ( *((struct UMPDOBJ **)v46 + 271) != v13 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v46, v13);
      goto LABEL_17;
    }
    if ( HIDWORD(v47) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v14 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_14:
        _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
LABEL_18:
        v46 = 0LL;
LABEL_19:
        EngSetLastError(6u);
        goto LABEL_20;
      }
      v15 = *((_DWORD *)v14 + 528);
      if ( v15 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v14 = v46;
        goto LABEL_14;
      }
    }
    else
    {
      if ( !*((_DWORD *)v14 + 528) )
        goto LABEL_38;
      *((_DWORD *)v14 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v14 = v46;
LABEL_38:
  if ( !v14 )
    goto LABEL_19;
  if ( (*((_DWORD *)v14 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v47) )
    {
LABEL_44:
      *((_DWORD *)v14 + 11) |= 2u;
      v14 = v46;
      LODWORD(v47) = 1;
      goto LABEL_45;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
    if ( !UserAttr || DC::SaveAttributes(v46, UserAttr) )
    {
      v14 = v46;
      goto LABEL_44;
    }
LABEL_17:
    _InterlockedDecrement((volatile signed __int32 *)v46 + 3);
    goto LABEL_18;
  }
LABEL_45:
  if ( (*((_DWORD *)v14 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v14);
    v14 = v46;
  }
  if ( !v14 )
    goto LABEL_19;
  if ( !a4 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v14) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_19;
    v14 = v46;
  }
  if ( *((unsigned __int16 *)v14 + 6) > 1u )
  {
    v19 = *((_QWORD *)v14 + 6);
    if ( v19 )
      v20 = *(_DWORD *)(v19 + 40);
    else
      v20 = 0;
    TraceLoggingWriteUnsupportedGdiUsage(11LL, v20, *((unsigned __int16 *)v14 + 6));
    goto LABEL_19;
  }
  if ( a2 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v66, a2, 1, 0);
    v21 = v66;
    if ( !v66 )
    {
LABEL_80:
      if ( !v68 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v66);
        v21 = v66;
      }
      if ( v21 )
        _InterlockedDecrement((volatile signed __int32 *)v21 + 3);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v67);
      goto LABEL_20;
    }
    v8 = DC::iSelect(v46, v66, a3);
    if ( !v8 )
    {
LABEL_79:
      v21 = v66;
      goto LABEL_80;
    }
    v70[0] = 0LL;
    v70[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v71);
    v72 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v69, (struct XDCOBJ *)&v46, 1);
    v8 = 0;
    if ( (v69[24] & 1) == 0 )
    {
LABEL_76:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v69);
      if ( v70[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v70);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v71);
      goto LABEL_79;
    }
    v22 = v46;
    v23 = *((_QWORD *)v46 + 146);
    if ( v23 && (*((_DWORD *)v46 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v46) )
      goto LABEL_144;
    if ( !*((_QWORD *)v22 + 144) )
    {
      v24 = DC::prgnVisSnap(v22);
      goto LABEL_69;
    }
    if ( v23 )
    {
LABEL_144:
      if ( (*((_DWORD *)v22 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v22) )
        goto LABEL_69;
    }
    v24 = (struct REGION *)*((_QWORD *)v22 + 144);
LABEL_69:
    v25 = (__int64)v24 + 52;
    if ( !v24 )
      v25 = 28LL;
    if ( *(_DWORD *)v25 == 1 )
    {
      v8 = 1;
    }
    else
    {
      v26 = (__int64)v24 + 48;
      if ( !v24 )
        v26 = 24LL;
      LOBYTE(v8) = *(_DWORD *)v26 > 0x38u;
      v8 += 2;
    }
    goto LABEL_76;
  }
  if ( a3 != 5 )
    goto LABEL_21;
  v8 = DC::iSelect(v14, 0LL, 5);
  if ( v8 )
  {
    v54[0] = 0LL;
    v54[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v55);
    v56 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v50, (struct XDCOBJ *)&v46, 1);
    v30 = v52;
    v8 = 0;
    if ( (v52 & 1) != 0 )
    {
      v31 = v46;
      if ( !*((_QWORD *)v46 + 145) || (*((_DWORD *)v46 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v46) )
        v28 = *((_QWORD *)v31 + 143);
      v32 = v28 + 52;
      v29 = 28LL;
      if ( !v28 )
        v32 = 28LL;
      if ( *(_DWORD *)v32 == 1 )
      {
        v8 = 1;
      }
      else
      {
        v33 = v28 + 48;
        v27 = 24LL;
        if ( !v28 )
          v33 = 24LL;
        LOBYTE(v8) = *(_DWORD *)v33 > 0x38u;
        v8 += 2;
      }
    }
    if ( v54[0] && HIBYTE(v56) )
    {
      v34 = *((_QWORD *)v54[0] + 6);
      if ( (v30 & 0x1000) != 0 )
      {
        DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v50);
        if ( (v52 & 0x10) != 0 )
        {
          *((_DWORD *)v54[0] + 9) &= ~0x4000u;
          DC::pSurface(v54[0], *(struct SURFACE **)(v34 + 2528));
        }
        DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v50);
      }
      DLODCOBJ::vUnlock((DLODCOBJ *)v54);
      v30 = v52;
      v54[0] = 0LL;
    }
    if ( (v30 & 0x1000) != 0 )
    {
      GreDecLockCount(v27, v30, v28, v29);
      v52 &= ~0x1000u;
      v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v35 )
      {
        *(_QWORD *)(v35 + 320) = 0LL;
        *(_QWORD *)(v35 + 312) = 0LL;
      }
      LODWORD(v30) = v52;
    }
    else if ( (v30 & 0x800000) != 0 )
    {
      GreDecLockCount(v27, v30, v28, v29);
      LODWORD(v30) = v52 & 0xFF7FFFFF;
      v52 &= ~0x800000u;
    }
    if ( v50 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
      GreReleaseSemaphoreInternal(v50);
      LODWORD(v30) = v52;
    }
    if ( (v30 & 8) != 0 )
      v52 = v30 & 0xFFFFFFF7;
    if ( v51 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
      GreReleaseSemaphoreInternal(v51);
    }
    if ( v58 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v60, v59);
      SURFREF::SURFREF((SURFREF *)v62);
      SURFREF::SURFREF((SURFREF *)v64);
      LOBYTE(v36) = 5;
      v37 = HmgShareLock(v57, v36);
      LOBYTE(v38) = 5;
      v63 = (HSURF *)v37;
      v65 = (struct SURFACE *)HmgShareLock(v58, v38);
      v39 = *v63;
      DC::pSurface(v60[0], v65);
      DEC_SHARE_REF_CNT(v63);
      v63 = 0LL;
      DEC_SHARE_REF_CNT(v65);
      v65 = 0LL;
      GreDereferenceObject(v39, 1u);
      v40 = v60[0];
      v59 = 0LL;
      v57 = 0LL;
      *((_DWORD *)v60[0] + 9) |= v53;
      v41 = Gre::Base::Globals(v40);
      if ( (*((_DWORD *)v60[0] + 9) & 0x200) != 0 )
      {
        v42 = 0;
        if ( !(unsigned int)GreGetLockCount(v60[0])
          && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v41 + 15)) )
        {
          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v41 + 15));
          EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v41 + 15));
          v42 = 1;
        }
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v73);
        v43 = HmgShareUnlockRemoveObject(v58, 0LL, 0LL, 0LL, 5);
        if ( v43 )
          SURFACE::bDeleteSurface(v43, 0LL, 1LL);
        *((_QWORD *)v60[0] + 63) = 0LL;
        DC::vClearRendering(v60[0]);
        v58 = 0LL;
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v73);
        if ( v42 )
        {
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
          GreReleaseSemaphoreInternal(*((_QWORD *)v41 + 15));
        }
      }
      else
      {
        v44 = HmgShareUnlockRemoveObject(v58, 0LL, 0LL, 0LL, 5);
        if ( v44 )
          SURFACE::bDeleteSurface(v44, 0LL, 1LL);
        *((_QWORD *)v60[0] + 63) = 0LL;
        v58 = 0LL;
      }
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
      GreReleaseSemaphoreInternal(*((_QWORD *)v41 + 10));
      if ( v65 )
        DEC_SHARE_REF_CNT(v65);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
      if ( v63 )
        DEC_SHARE_REF_CNT(v63);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v62);
      if ( v60[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v60);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v61);
    }
    if ( v54[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v54);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v55);
  }
LABEL_20:
  v14 = v46;
LABEL_21:
  if ( v14 )
  {
    if ( (_DWORD)v47 && (*((_DWORD *)v14 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v47) )
      {
        v16 = XDCOBJ::GetUserAttr((XDCOBJ *)&v46);
        if ( v16 )
          DC::RestoreAttributes(v46, v16);
        v14 = v46;
      }
      *((_DWORD *)v14 + 11) &= ~2u;
      v14 = v46;
      LODWORD(v47) = 0;
    }
    v49[0] = 0;
    v17 = *(_QWORD *)v14;
    HmgDecrementExclusiveReferenceCountEx(v14, HIDWORD(v47), v49);
    if ( v49[0] )
      GrepDeleteDC(v17, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
  return v8;
}
