/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0102AF0
 * Callers:
 *     NtGdiGetPixel @ 0x1C0005580 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C0079B5C (GreMaskBlt.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00FBB30 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     GrePlgBlt @ 0x1C0290660 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C02970E0 (NtGdiTransparentBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0299D74 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 * Callees:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00081A8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C000DFBC (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0026D20 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004DD9C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0076170 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00BB358 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00BC430 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00BDAA4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00BDAD8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00BE394 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011C6C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C834 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265BE8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0265C84 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 */

_BOOL8 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, LONG a2, LONG a3, int a4, int a5)
{
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // r15
  REGION *v9; // r14
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // rbx
  LONG *v15; // rax
  LONG v16; // ecx
  LONG v17; // eax
  __int64 v18; // rax
  LONG x; // r15d
  __int64 v20; // r15
  __int64 v21; // rax
  LONG v22; // ecx
  __int64 v23; // rcx
  Gre::Base *v24; // rcx
  int v25; // r13d
  struct Gre::Base::SESSION_GLOBALS *v26; // r15
  Gre::Base *v27; // rcx
  __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rax
  LONG v32; // ecx
  LONG v33; // eax
  LONG v34; // eax
  int v35; // eax
  __int64 v36; // rax
  LONG v37; // ecx
  LONG v38; // edx
  LONG v39; // eax
  __int64 v40; // r15
  __int64 v41; // rdx
  int v42; // r8d
  int v43; // ecx
  LONG left; // r13d
  HSURF v45; // rbx
  __int64 v46; // rcx
  __int64 (__fastcall *v47)(_QWORD, unsigned __int64 *); // rax
  Gre::Base *v48; // rcx
  struct Gre::Base::SESSION_GLOBALS *v49; // rax
  int v51; // [rsp+50h] [rbp-B0h]
  struct _POINTL v52; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  REGION *v54; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  int v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+84h] [rbp-7Ch]
  __int64 v59; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v60; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v61; // [rsp+98h] [rbp-68h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v62; // [rsp+A0h] [rbp-60h]
  _QWORD v63[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v64[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-28h]
  _BYTE v66[32]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v67[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v68[64]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v69[32]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v70[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v71[64]; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v72; // [rsp+1C0h] [rbp+C0h] BYREF
  int v73[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v74; // [rsp+1D8h] [rbp+D8h]
  int v75; // [rsp+1DCh] [rbp+DCh]
  struct _RECTL v76; // [rsp+1E0h] [rbp+E0h] BYREF
  struct tagRECT v77; // [rsp+1F0h] [rbp+F0h] BYREF

  v5 = *(_QWORD *)a1;
  v6 = 0;
  v7 = a4;
  v73[0] = a4;
  v9 = 0LL;
  v52.x = a3;
  v10 = 8;
  v55 = 0LL;
  v61 = 0LL;
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 36) & 0x200) == 0 )
    return 0LL;
  if ( !*((_QWORD *)Gre::Base::Globals(a1) + 38) )
    return 0LL;
  v11 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4001) != 0x4001
    || !*(_QWORD *)(v11 + 472)
    || !*(_QWORD *)(v11 + 496)
    || !*(_DWORD *)(v11 + 488) && !*(_DWORD *)(v11 + 492) )
  {
    return 0LL;
  }
  if ( KeAreApcsDisabled() )
    return 0LL;
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v67);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v66, a1, 0);
  if ( (v66[24] & 1) == 0 )
    goto LABEL_58;
  v12 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
    return 1LL;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 24LL);
  if ( !*(_DWORD *)(v12 + 492) )
  {
    v15 = (LONG *)DC::prgnVisSnap((DC *)v12);
    if ( !v15 )
      goto LABEL_58;
    v77.left = v15[14];
    v77.top = v15[15];
    v16 = v15[16];
    v17 = v15[17];
    v77.right = v16;
    v77.bottom = v17;
    if ( IsRectEmptyInl(&v77) )
      goto LABEL_58;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_58;
  if ( !a5 )
    goto LABEL_58;
  v18 = v7 + a2;
  x = v52.x;
  if ( (unsigned __int64)(v18 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_58;
  if ( (unsigned __int64)(v52.x + (__int64)a5 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_58;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v63, a1, 516);
  if ( (*(_DWORD *)(v63[0] + 32LL) & 2) == 0 )
    goto LABEL_58;
  v52.x = a2;
  v52.y = x;
  EXFORMOBJ::bXform((EXFORMOBJ *)v63, &v52, 1LL);
  v20 = *(_QWORD *)a1;
  v21 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1;
  v22 = *(_DWORD *)(*(_QWORD *)a1 + 8 * v21 + 1020) + v52.y;
  v76.left = *(_DWORD *)(*(_QWORD *)a1 + 8 * v21 + 1016) + v52.x;
  v76.right = v76.left + v73[0];
  v76.bottom = v22 + a5;
  v76.top = v22;
  v52.y = v22;
  v72 = v76;
  v52.x = v76.left;
  ERECTL::vOrder((ERECTL *)&v72);
  v23 = *(_QWORD *)(v20 + 496);
  v56 = 0LL;
  v57 = *(_DWORD *)(v23 + 56);
  v58 = *(_DWORD *)(v23 + 60);
  ERECTL::operator*=(&v72.left, (int *)&v56);
  if ( IsRectEmptyInl((const struct tagRECT *)&v72) )
    goto LABEL_58;
  if ( *(_DWORD *)(v20 + 492) )
    goto LABEL_61;
  if ( (*(_DWORD *)(v20 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v20 + 496), 0LL, (struct DC *)v20);
  v25 = 0;
  v26 = Gre::Base::Globals(v24);
  v62 = v26;
  GreAcquireSemaphore(*((_QWORD *)v26 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v26 + 9), 7LL);
  if ( *((_QWORD *)Gre::Base::Globals(v27) + 38) )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v64, *(HWND *)(*(_QWORD *)a1 + 472LL));
    v28 = v65;
    if ( !v65 )
    {
LABEL_53:
      v65 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v64);
      v26 = v62;
      goto LABEL_54;
    }
    v29 = *(_QWORD *)(v65 + 144);
    if ( (*(_DWORD *)(v29 + 252) & 0x80u) != 0 )
      goto LABEL_50;
    v30 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
    v31 = v30 + 24;
    if ( !v30 )
      v31 = 0LL;
    if ( *(_QWORD *)(v29 + 184) != v31 )
      goto LABEL_50;
    if ( !*(_QWORD *)(v29 + 80) )
    {
      v51 = 1;
LABEL_44:
      v36 = *(_QWORD *)(v29 + 184);
      *(_QWORD *)v73 = 0LL;
      if ( v36 )
      {
        v37 = *(_DWORD *)(v36 + 32);
        v38 = *(_DWORD *)(v36 + 36);
      }
      else
      {
        v38 = v73[1];
        v37 = v73[0];
      }
      v55.x = *(_DWORD *)(v28 + 56);
      v39 = *(_DWORD *)(v28 + 60);
      *(_QWORD *)&v72.left = 0LL;
      v72.right = v37;
      v72.bottom = v38;
      *(_DWORD *)(v29 + 252) |= 0x80u;
      v55.y = v39;
      if ( !v9 )
        goto LABEL_42;
      v73[0] = *((_DWORD *)v9 + 14);
      v73[1] = *((_DWORD *)v9 + 15);
      v74 = *((_DWORD *)v9 + 16);
      v75 = *((_DWORD *)v9 + 17);
      ERECTL::operator*=(&v72.left, v73);
      if ( !ERECTL::bEmpty((ERECTL *)&v72) )
        goto LABEL_42;
      REGION::vDeleteREGION(v9);
      *(_DWORD *)(v29 + 252) |= 0x80u;
      v28 = v65;
LABEL_50:
      v25 = 0;
LABEL_51:
      if ( v28 )
        _InterlockedDecrement((volatile signed __int32 *)(v28 + 12));
      goto LABEL_53;
    }
    v59 = *(_QWORD *)(v29 + 80);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v53);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v53);
    if ( v59 )
    {
      if ( v53 )
      {
        if ( !RGNOBJ::bContain((RGNOBJ *)&v59, &v72) )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v54);
          if ( v54 )
          {
            v32 = *(_DWORD *)(v28 + 60);
            v33 = *(_DWORD *)(v28 + 64);
            v76.left = *(_DWORD *)(v28 + 56);
            v76.top = v32;
            v76.right = v33;
            v34 = *(_DWORD *)(v28 + 68);
            v60.x = v76.left;
            v60.y = v32;
            v76.bottom = v34;
            ERECTL::bOffsetSubtract((ERECTL *)&v76, &v60, 0);
            RGNOBJ::vSet((RGNOBJ *)&v53, &v76);
            if ( RGNOBJ::iCombine((RGNOBJ *)&v54, (struct RGNOBJ *)&v53, (struct RGNOBJ *)&v59, 4) )
            {
              v9 = v54;
              v35 = 1;
              goto LABEL_41;
            }
            if ( v54 )
              REGION::vDeleteREGION(v54);
          }
        }
      }
    }
    v35 = 0;
LABEL_41:
    v51 = v35;
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v53);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v53);
    if ( !v51 )
    {
LABEL_42:
      v28 = v65;
      v25 = v51;
      goto LABEL_51;
    }
    goto LABEL_44;
  }
LABEL_54:
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v26 + 9));
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 0LL) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
    if ( v9 )
      REGION::vDeleteREGION(v9);
    goto LABEL_58;
  }
  if ( v25 )
  {
LABEL_61:
    v40 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 492LL) )
    {
      v72.left += *(_DWORD *)(v14 + 2560);
      v72.right += *(_DWORD *)(v14 + 2560);
      v72.top += *(_DWORD *)(v14 + 2564);
      v72.bottom += *(_DWORD *)(v14 + 2564);
    }
    else
    {
      ERECTL::bOffsetAdd((ERECTL *)&v72, &v55, 0);
    }
    v41 = *(_QWORD *)(v14 + 2528);
    v42 = *(_DWORD *)(v14 + 2564);
    LODWORD(v56) = *(_DWORD *)(v14 + 2560);
    v57 = *(_DWORD *)(v41 + 56) + v56;
    v43 = *(_DWORD *)(v41 + 60);
    HIDWORD(v56) = v42;
    v58 = v42 + v43;
    ERECTL::operator*=(&v72.left, (int *)&v56);
    if ( IsRectEmptyInl((const struct tagRECT *)&v72) )
    {
      if ( v9 )
        REGION::vDeleteREGION(v9);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
      if ( v67[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v67);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v68);
    }
    else
    {
      left = v72.left;
      v73[0] = v72.top;
      if ( *(_DWORD *)(v40 + 492) )
      {
        v72.left -= *(_DWORD *)(v14 + 2560);
        v72.right -= *(_DWORD *)(v14 + 2560);
        v72.top -= *(_DWORD *)(v14 + 2564);
        v72.bottom -= *(_DWORD *)(v14 + 2564);
      }
      else
      {
        ERECTL::bOffsetSubtract((ERECTL *)&v72, &v55, 0);
      }
      v45 = *(HSURF *)(*(_QWORD *)(v40 + 496) + 32LL);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v66);
      if ( v67[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v67);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v68);
      while ( 1 )
      {
        DLODCOBJ::DLODCOBJ((DLODCOBJ *)v70);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v69, a1, 0);
        v46 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v46 )
        {
          v47 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v46 + 3440);
          if ( v47 )
          {
            v6 = v47(*(_QWORD *)(v46 + 1768), &v61);
            if ( v6 == 258 )
            {
              v49 = Gre::Base::Globals(v48);
              KeDelayExecutionThread(0, 0, *((PLARGE_INTEGER *)v49 + 294));
              --v10;
            }
          }
        }
        else
        {
          v6 = -1073741823;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v69);
        if ( v70[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v70);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v71);
        if ( v6 != 258 )
          break;
        if ( !v10 )
          goto LABEL_85;
      }
      if ( v6 >= 0 )
        return bSpDwmUpdateSurface(0LL, v61, a1, v45, 1.0, left, v73[0], (struct ERECTL *)&v72, v9);
LABEL_85:
      if ( v9 )
        REGION::vDeleteREGION(v9);
    }
    return 0LL;
  }
LABEL_58:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v66);
  return 0LL;
}
