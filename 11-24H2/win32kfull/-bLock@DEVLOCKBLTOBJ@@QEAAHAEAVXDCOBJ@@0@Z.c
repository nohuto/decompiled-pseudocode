/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x14001D230
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x1403050D8 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140014FC0 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x140015140 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001E9D4 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x14001EAF0 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FC80 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14001FD90 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400212B0 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x140021474 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9014 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9120 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D0C0C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D2050 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x140148174 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1401482C8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bValid@DLODCOBJ@@QEAA_NXZ @ 0x140153520 (-bValid@DLODCOBJ@@QEAA_NXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140154FDC (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x140157A24 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016E5C4 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x140178224 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$01@@YAXXZ @ 0x1401862C4 (--$GreReleaseSemaphoreExclusive@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14018AEB4 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1402590D8 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1402680F0 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct _ERESOURCE ***a2, struct XDCOBJ *a3)
{
  int v3; // r12d
  int v7; // ebp
  struct _ERESOURCE **v9; // r13
  struct _ERESOURCE **v10; // rcx
  __int64 v11; // rdx
  struct _ERESOURCE **v12; // r8
  Gre::Base *v13; // rcx
  int v14; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int64 v16; // rdx
  Gre::Base *v17; // rcx
  __int64 v18; // rbx
  int v19; // esi
  int v20; // eax
  int v21; // eax
  struct Gre::Base::SESSION_GLOBALS *v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  struct _ERESOURCE **v25; // rdx
  int v26; // eax
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v28; // rax
  int v29; // eax
  int v30; // ebx
  struct _ERESOURCE **v31; // rdx
  __int64 v32; // rdx
  struct _ERESOURCE **v33; // r8
  __int64 *v34; // rax
  __int64 v35; // rcx
  DC *v36; // rcx
  __int64 v37; // rax
  struct _ERESOURCE *v38; // rbx
  struct _GRETHREAD *v39; // rax
  unsigned __int64 v40; // rdx
  struct _ERESOURCE **v41; // rcx
  unsigned __int64 v42; // rax
  int v43; // ebp
  int v44; // eax
  int v45; // edx
  DC *v46; // rcx
  struct _ERESOURCE **v47; // rdx
  int v48; // ecx
  struct _ERESOURCE *v49; // rbx
  int v50; // eax
  DC *v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  struct _DC_ATTR *UserAttr; // rax
  HDC v57; // rdx
  XDCOBJ *v58; // rdi
  OBJECT *v59; // rax
  struct _DC_ATTR *v60; // rax
  int v61; // ecx
  int v62; // r9d
  int v63; // r10d
  bool v64; // zf
  struct _ERESOURCE *v65; // rbx
  int v66; // eax
  DC *v67; // rcx
  __int64 v68; // rdx
  struct _GRETHREAD *CurrentThread; // rax
  int v70; // ecx
  int v71; // ecx
  int v72; // edx
  int v73; // ecx
  struct _ERESOURCE *v74; // r9
  int v75; // edx
  DC *v76; // rcx
  struct SURFACE **v77; // rbx
  struct SURFACE *v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // r9
  struct _GRETHREAD *v81; // rax
  struct _GRETHREAD *v82; // rsi
  __int64 v83; // rcx
  struct _ERESOURCE *v84; // rdx
  __int64 v85; // rbx
  HSEMAPHORE v86; // rsi
  struct _GRETHREAD *v87; // rax
  __int64 v88; // rax
  signed __int32 v89[8]; // [rsp+0h] [rbp-A8h] BYREF
  char v90[8]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int8 v91; // [rsp+38h] [rbp-70h]
  _BYTE v92[32]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v93; // [rsp+60h] [rbp-48h]
  __int64 v94; // [rsp+B8h] [rbp+10h] BYREF
  struct _ERESOURCE *v95; // [rsp+C0h] [rbp+18h] BYREF

  v3 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v7 = 1;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = **a2;
  *((_QWORD *)this + 41) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(
          (struct XDCOBJ *)a2,
          (HSURF *)this + 37,
          (HSURF *)this + 36,
          (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 40, (HSURF *)this + 39, 0LL) )
  {
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v9 = a2[2];
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 || *a2 && (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
  {
    v10 = a2[2];
    *((_QWORD *)this + 2) = *v9 + 6;
    GreAcquireSemaphoreShared<1,>(v10);
    *((_DWORD *)this + 28) |= 8u;
    if ( !(unsigned int)GreGetLockCount() && !ExIsResourceAcquiredSharedLite(*v9 + 11) )
    {
      GreAcquireSemaphoreShared<2,>(v9);
      v3 = 1;
    }
    v11 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 )
    {
      v12 = *a2;
      if ( *a2 )
      {
        v62 = *((_DWORD *)v12 + 9);
        v63 = *(_DWORD *)(v11 + 36);
        if ( ((v63 ^ v62) & 0x200) != 0 )
          v7 = (**(_BYTE **)(v11 + 976) & 1) != 0 && (v62 & 0x8000) != 0
            || ((__int64)v12[122]->SystemResourcesList.Flink & 1) != 0 && (*(_DWORD *)(v11 + 36) & 0x8000) != 0;
        else
          v7 = ((unsigned __int16)v63 & (unsigned __int16)v62 & 0x8200) == 33280;
      }
      v94 = *(_QWORD *)(v11 + 48);
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v94);
    }
    if ( *a2 )
    {
      v95 = (*a2)[6];
      v7 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v95);
    }
  }
  v13 = *(Gre::Base **)a3;
  v14 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v14 & 0x200) != 0 )
  {
    if ( (v14 & 0x8000) == 0 || !v7 )
    {
      v84 = (struct _ERESOURCE *)*((_QWORD *)v13 + 8);
      *((_QWORD *)this + 1) = v84;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      if ( v3 && v84 == &(*v9)[11] )
      {
        GreReleaseSemaphoreShared<2,>(v9);
        v3 = 0;
      }
      if ( *((struct _ERESOURCE **)this + 1) == &(*v9)[11] )
      {
        *((_DWORD *)this + 28) |= 0x200000u;
        GreAcquireSemaphore<2,>(v9);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 4));
      }
    }
    if ( (!*a2 || (*((_DWORD *)*a2 + 9) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      CurrentThread = GreGetCurrentThread();
      if ( CurrentThread )
      {
        *((_QWORD *)CurrentThread + 38) = 0LL;
        *((_QWORD *)CurrentThread + 37) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreShared<3,>(v9);
    }
    v13 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a3 + 36LL);
    if ( ((unsigned __int16)v13 & 0x1000) != 0 && ((unsigned __int16)v13 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        GreReleaseSemaphoreShared<3,>(v9);
      *((_DWORD *)this + 28) &= ~1u;
      if ( v3 )
      {
        GreReleaseSemaphoreShared<2,>(v9);
        return 0LL;
      }
      return 0LL;
    }
  }
  v15 = Gre::Base::Globals(v13);
  v17 = *(Gre::Base **)a3;
  v18 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  if ( v18 )
  {
    if ( *((_QWORD *)a3 + 3) )
      v18 = *((_QWORD *)a3 + 3);
  }
  else
  {
    v18 = *((_QWORD *)v15 + 533);
  }
  v19 = 0;
  if ( !*(_DWORD *)(v18 + 656) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *(_DWORD *)(v18 + 656) )
  {
    v20 = *(_DWORD *)(v18 + 112);
    if ( (v20 & 0x800) != 0 )
    {
      v21 = UserSurfaceAccessCheck(*(_QWORD *)(v18 + 648));
      goto LABEL_23;
    }
    if ( (v20 & 0x10000000) != 0 )
    {
      v21 = UserScreenAccessCheck(v17, v16);
LABEL_23:
      v19 = v21;
      goto LABEL_24;
    }
    v19 = 1;
  }
LABEL_24:
  *((_DWORD *)this + 28) ^= (*((_DWORD *)this + 28) ^ (v19 << 22)) & 0x400000;
  v22 = Gre::Base::Globals(v17);
  v23 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  if ( v23 )
  {
    if ( *((_QWORD *)a3 + 3) )
      v23 = *((_QWORD *)a3 + 3);
  }
  else
  {
    v23 = *((_QWORD *)v22 + 533);
  }
  v24 = *((_DWORD *)this + 28) & 0xFF7FFFFF | ~(*(_DWORD *)(v23 + 112) >> 5) & 0x800000;
  *((_DWORD *)this + 28) = v24;
  v25 = *a2;
  if ( *a2 )
  {
    v26 = *((_DWORD *)v25 + 9);
    if ( (v26 & 0x200) == 0 )
      goto LABEL_318;
    if ( (v26 & 0x8000) == 0 || !v7 )
    {
      v74 = v25[8];
      *(_QWORD *)this = v74;
      *((_QWORD *)this + 3) = (*a2)[6];
      if ( v3 && v74 == &(*v9)[11] )
      {
        GreReleaseSemaphoreShared<2,>(v9);
        v24 = *((_DWORD *)this + 28);
        v3 = 0;
      }
      if ( *(struct _ERESOURCE **)this == &(*v9)[11] )
      {
        *((_DWORD *)this + 28) = v24 | 0x100000;
        GreAcquireSemaphore<2,>(v9);
      }
      else
      {
        GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 3));
      }
      v75 = *((_DWORD *)this + 28);
      if ( (v75 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
        *((_DWORD *)this + 28) = v75 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
      if ( CurrentThreadNonPaged )
      {
        v28 = *CurrentThreadNonPaged;
        if ( v28 )
        {
          v88 = v28 + 8;
          if ( v88 )
          {
            *(_QWORD *)(v88 + 304) = 0LL;
            *(_QWORD *)(v88 + 296) = 0LL;
          }
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreShared<3,>(v9);
    }
    v25 = *a2;
    v29 = *((_DWORD *)*a2 + 9);
    if ( (v29 & 0x1000) != 0 && (v29 & 0x4000) == 0 )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        GreReleaseSemaphoreShared<3,>(v9);
      v64 = v3 == 0;
LABEL_264:
      if ( !v64 )
      {
LABEL_183:
        GreReleaseSemaphoreShared<2,>(v9);
        *((_DWORD *)this + 28) &= ~1u;
        return 0LL;
      }
LABEL_191:
      *((_DWORD *)this + 28) &= ~1u;
      return 0LL;
    }
    if ( v25 )
    {
LABEL_318:
      v30 = v3;
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*((_DWORD *)v25 + 9) & 0x80000) != 0 )
      {
        if ( !*((_QWORD *)this + 2) )
          goto LABEL_153;
        goto LABEL_152;
      }
    }
  }
  v30 = v3;
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
      GreReleaseSemaphoreShared<3,>(v9);
    if ( v3 )
      GreReleaseSemaphoreShared<2,>(v9);
    goto LABEL_191;
  }
  if ( v25
    && ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*((_DWORD *)v25 + 9) & 0x200) == 0)
    && (*((_DWORD *)v25 + 9) & 0x10) != 0
    && !DC::bCompute((DC *)v25) )
  {
    if ( !*((_QWORD *)this + 2) )
    {
LABEL_153:
      v64 = v30 == 0;
      goto LABEL_264;
    }
LABEL_152:
    GreReleaseSemaphoreShared<3,>(v9);
    goto LABEL_153;
  }
  v31 = *a2;
  if ( (!(*a2)[146] || ((_DWORD)v31[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)*a2))
    && !v31[144]
    && (!v31[145] || ((_DWORD)v31[5] & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v31))
    && !v31[143] )
  {
    goto LABEL_191;
  }
  if ( ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( *((_QWORD *)this + 2) )
      GreReleaseSemaphoreShared<3,>(v9);
    if ( v3 )
      goto LABEL_183;
    goto LABEL_191;
  }
  v32 = *(_QWORD *)a3;
  if ( (!*(_QWORD *)(*(_QWORD *)a3 + 1168LL)
     || (*(_DWORD *)(v32 + 40) & 2) == 0
     || !(unsigned int)DC::bDpiScaledSurface(*(DC **)a3))
    && !*(_QWORD *)(v32 + 1152)
    && (!*(_QWORD *)(v32 + 1160) || (*(_DWORD *)(v32 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v32))
    && !*(_QWORD *)(v32 + 1144) )
  {
    goto LABEL_191;
  }
  v33 = *a2;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 || (*(_DWORD *)(v32 + 36) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_69;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 36) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering((DC *)*a2);
      v34 = (__int64 *)W32GetCurrentThreadNonPaged();
      if ( v34 )
      {
        v35 = *v34;
        if ( *v34 )
        {
          v85 = v35 + 8;
          if ( v35 != -8 )
          {
            *(_QWORD *)(v35 + 304) = *a2;
            if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
            {
              *(_DWORD *)(v35 + 352) |= 1u;
              (*a2)[247] = 0LL;
              v86 = (HSEMAPHORE)&(*v9)[8];
              GreAcquireSemaphoreSharedInternal(v86);
              GrepAcquireLockValidate<14>();
              *(_DWORD *)(v85 + 356) = *((_DWORD *)v9 + 1070);
              EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v86);
              v87 = GreGetCurrentThreadCrossSessionCheck();
              if ( v87 )
              {
                v64 = (*((_BYTE *)v87 + 22))-- == 1;
                if ( v64 )
                  *(_QWORD *)v87 &= ~0x4000uLL;
                if ( !*(_QWORD *)v87 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreSharedInternal(v86);
            }
          }
        }
      }
    }
    v36 = *(DC **)a3;
    if ( **(struct _ERESOURCE ***)a3 != **a2 && (*((_DWORD *)v36 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 39) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v36);
      v37 = W32GetCurrentThreadNonPaged();
      if ( v37 )
      {
        if ( *(_QWORD *)v37 && *(_QWORD *)v37 != -8LL )
          *(_QWORD *)(*(_QWORD *)v37 + 312LL) = *(_QWORD *)a3;
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x80000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    GreReleaseSemaphoreShared<3,>(v9);
LABEL_69:
  if ( v3 )
  {
    v38 = *v9;
    EtwTraceGreLockReleaseSemaphore(L"GreLock", &(*v9)[11]);
    v39 = GreGetCurrentThreadCrossSessionCheck();
    if ( v39 )
    {
      v64 = (*((_BYTE *)v39 + 10))-- == 1;
      if ( v64 )
        *(_QWORD *)v39 &= ~4uLL;
      if ( !*(_QWORD *)v39 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)&v38[11]);
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    goto LABEL_105;
  if ( *(_QWORD *)a3 )
    v40 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v40 = 0LL;
  v41 = *a2;
  if ( *a2 )
    v42 = (unsigned __int64)v41[62];
  else
    v42 = 0LL;
  v43 = 0;
  if ( !v40 || !v42 || v40 == v42 )
  {
    if ( v41 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 1) )
      v43 = 1;
    if ( (!*a2 || **a2 != **(struct _ERESOURCE ***)a3)
      && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, (int)v33, 0) )
    {
      goto LABEL_191;
    }
LABEL_102:
    if ( v43 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0 && (*a2)[62] && *(_QWORD *)this )
      goto LABEL_191;
    if ( ((__int64)(*a2)[6]->ExclusiveWaiters & 0x8000) != 0
      && *(_QWORD *)(*(_QWORD *)a3 + 496LL)
      && *((_QWORD *)this + 1) )
    {
      *((_QWORD *)this + 13) = a3;
      v77 = (struct SURFACE **)((char *)this + 40);
      *((_QWORD *)this + 12) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL);
      if ( !bCopySurface(
              (DEVLOCKBLTOBJ *)((char *)this + 40),
              (struct _SURFOBJ *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 24LL)) )
        goto LABEL_191;
      v78 = *v77;
      if ( *((_QWORD *)a3 + 3) )
        goto LABEL_191;
      SURFREF::SURFREF((SURFREF *)v92, *v77);
      v79 = v93;
      *((_QWORD *)a3 + 3) = v78;
      INC_SHARE_REF_CNT(v79);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v92);
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      LOBYTE(v80) = 5;
      GrepSelectBitmap(v90, a3, *((_QWORD *)*v77 + 4), v80);
      if ( v91 )
      {
        v81 = GreGetCurrentThread();
        v82 = v81;
        if ( !v81 || *((_QWORD *)v81 + 41) )
          goto LABEL_191;
        if ( !*((_DWORD *)this + 22) )
        {
          PushThreadGuardedObject((char *)this + 56, 0LL, DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
          *((_DWORD *)this + 22) = 1;
          v77 = (struct SURFACE **)((char *)this + 40);
        }
        v83 = (__int64)*v77 + 24;
        if ( !*v77 )
          v83 = 0LL;
        *((_QWORD *)v82 + 41) = v83;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x4000) == 0 )
          TraceLoggingWriteUnsupportedGdiUsage(
            16LL,
            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 112LL),
            *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 100LL),
            v91,
            0LL);
      }
      if ( (*((_DWORD *)this + 28) & 0x200000) != 0 )
      {
        GreReleaseSemaphoreExclusive<2>();
        *((_DWORD *)this + 28) &= ~0x200000u;
      }
      else if ( *((_QWORD *)this + 1) )
      {
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*((_QWORD *)this + 4));
      }
      v64 = *((_QWORD *)this + 2) == 0LL;
      *((_QWORD *)this + 1) = 0LL;
      *((_QWORD *)this + 4) = 0LL;
      if ( !v64 )
      {
        GreReleaseSemaphoreShared<1,>(v9);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
LABEL_105:
    v53 = *((_DWORD *)this + 28);
    if ( (v53 & 0x1000) == 0 && (v53 & 0x80000) == 0 )
      return 1LL;
    v54 = *((_QWORD *)this + 15);
    if ( v54 )
      goto LABEL_116;
    XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)**a2);
    v55 = *((_QWORD *)this + 15);
    if ( v55 )
    {
      if ( (*(_DWORD *)(v55 + 44) & 2) == 0 )
      {
        if ( (*((_DWORD *)this + 38) & 2) == 0 )
        {
          UserAttr = XDCOBJ::GetUserAttr((DEVLOCKBLTOBJ *)((char *)this + 120));
          if ( UserAttr )
          {
            if ( !DC::SaveAttributes(*((DC **)this + 15), UserAttr) )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*((OBJECT **)this + 15));
              *((_QWORD *)this + 15) = 0LL;
              goto LABEL_114;
            }
          }
        }
        *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 2u;
        *((_DWORD *)this + 32) = 1;
      }
      v76 = (DC *)*((_QWORD *)this + 15);
      if ( (*((_DWORD *)v76 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v76);
    }
LABEL_114:
    v54 = *((_QWORD *)this + 15);
    if ( !v54 )
      goto LABEL_117;
    *((_BYTE *)this + 193) = 0;
LABEL_116:
    *(_DWORD *)(v54 + 40) |= 2u;
    *((_BYTE *)this + 192) = 1;
LABEL_117:
    v57 = **(HDC **)a3;
    if ( v57 == (HDC)**a2 )
      return 1LL;
    v58 = (DEVLOCKBLTOBJ *)((char *)this + 200);
    v59 = *(OBJECT **)v58;
    if ( *(_QWORD *)v58 )
    {
LABEL_3:
      *((_DWORD *)v59 + 10) |= 2u;
      *((_BYTE *)v58 + 72) = 1;
      return 1LL;
    }
    XDCOBJ::vLockIgnoreAttributes(v58, v57);
    if ( *(_QWORD *)v58 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v58 + 44LL) & 2) == 0 )
      {
        if ( (*((_DWORD *)v58 + 8) & 2) == 0 )
        {
          v60 = XDCOBJ::GetUserAttr(v58);
          if ( v60 )
          {
            if ( !DC::SaveAttributes(*(DC **)v58, v60) )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*(OBJECT **)v58);
              *(_QWORD *)v58 = 0LL;
              goto LABEL_125;
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)v58 + 44LL) |= 2u;
        *((_DWORD *)v58 + 2) = 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v58 + 520LL) & 4) != 0 )
        DC::vMarkTransformDirty(*(DC **)v58);
    }
LABEL_125:
    v59 = *(OBJECT **)v58;
    if ( !*(_QWORD *)v58 )
      return 1LL;
    *((_BYTE *)v58 + 73) = 0;
    goto LABEL_3;
  }
  if ( v40 < v42 )
  {
    *((_DWORD *)this + 28) |= 0x8000u;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
    {
      XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 200), **(HDC **)a3);
      if ( *((_QWORD *)this + 25) )
      {
        v44 = XDCOBJ::SaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 200));
        v46 = (DC *)*((_QWORD *)this + 25);
        if ( v44 )
        {
          if ( (*((_DWORD *)v46 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v46);
        }
        else
        {
          OBJECT::InterlockedDecrementExclusiveLockCount(v46);
          *((_QWORD *)this + 25) = 0LL;
        }
        if ( *((_QWORD *)this + 25) && *((_BYTE *)this + 273) )
        {
          v61 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v61 & 1) != 0 && (v61 & 0x4000) == 0 && *((_QWORD *)this + 35) && !*((_QWORD *)this + 39) )
          {
            *(_DWORD *)(*((_QWORD *)this + 25) + 36LL) |= 0x4000u;
            DC::pSurface(*((DC **)this + 25), *((struct SURFACE **)this + 35));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v45) )
          {
            v43 = 1;
            *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) |= 1u;
          }
          goto LABEL_93;
        }
      }
      v43 = 1;
    }
    *((_QWORD *)this + 25) = 0LL;
LABEL_93:
    _InterlockedOr(v89, 0);
    v47 = *a2;
    v48 = 1;
    if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 )
    {
      v49 = v47[6];
      XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)*v47);
      if ( *((_QWORD *)this + 15) )
      {
        v50 = XDCOBJ::SaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 120));
        v51 = (DC *)*((_QWORD *)this + 15);
        if ( v50 )
        {
          if ( (*((_DWORD *)v51 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(v51);
        }
        else
        {
          OBJECT::InterlockedDecrementExclusiveLockCount(v51);
          *((_QWORD *)this + 15) = 0LL;
        }
      }
      v52 = *(_QWORD *)&v49[13].OwnerEntry.0;
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 193) )
      {
        v70 = *((_DWORD *)*a2 + 9);
        if ( (v70 & 1) != 0 && (v70 & 0x4000) == 0 && v52 && !*((_QWORD *)this + 36) )
        {
          *(_DWORD *)(*((_QWORD *)this + 15) + 36LL) |= 0x4000u;
          DC::pSurface(*((DC **)this + 15), (struct SURFACE *)(v52 - 24));
          *((_DWORD *)this + 28) |= 0x10u;
        }
        if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
        {
          *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 1u;
          goto LABEL_191;
        }
        goto LABEL_102;
      }
      v48 = 0;
    }
    *((_QWORD *)this + 15) = 0LL;
LABEL_101:
    if ( !v48 )
      goto LABEL_191;
    goto LABEL_102;
  }
  if ( (*((_DWORD *)v41 + 9) & 0x200) == 0 )
    goto LABEL_173;
  v65 = v41[6];
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)*v41);
  if ( *((_QWORD *)this + 15) )
  {
    v66 = XDCOBJ::SaveAttributes((DEVLOCKBLTOBJ *)((char *)this + 120));
    v67 = (DC *)*((_QWORD *)this + 15);
    if ( v66 )
    {
      if ( (*((_DWORD *)v67 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v67);
    }
    else
    {
      OBJECT::InterlockedDecrementExclusiveLockCount(v67);
      *((_QWORD *)this + 15) = 0LL;
    }
  }
  v68 = *(_QWORD *)&v65[13].OwnerEntry.0;
  if ( !*((_QWORD *)this + 15) || !*((_BYTE *)this + 193) )
  {
    v43 = 1;
LABEL_173:
    *((_QWORD *)this + 15) = 0LL;
    goto LABEL_206;
  }
  v71 = *((_DWORD *)*a2 + 9);
  if ( (v71 & 1) != 0 && (v71 & 0x4000) == 0 && v68 && !*((_QWORD *)this + 36) )
  {
    *(_DWORD *)(*((_QWORD *)this + 15) + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 15), (struct SURFACE *)(v68 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    v43 = 1;
    *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) |= 1u;
  }
LABEL_206:
  _InterlockedOr(v89, 0);
  v48 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0 )
  {
LABEL_313:
    *((_QWORD *)this + 25) = 0LL;
    goto LABEL_101;
  }
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 200), **(HDC **)a3);
  if ( !DLODCOBJ::bValid((DEVLOCKBLTOBJ *)((char *)this + 200)) )
  {
    v48 = 0;
    goto LABEL_313;
  }
  v73 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v73 & 1) != 0 && (v73 & 0x4000) == 0 && *((_QWORD *)this + 35) && !*((_QWORD *)this + 39) )
  {
    *(_DWORD *)(*((_QWORD *)this + 25) + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 25), *((struct SURFACE **)this + 35));
    *((_DWORD *)this + 28) |= 0x20u;
  }
  if ( (unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v72) )
    goto LABEL_102;
  *(_DWORD *)(*((_QWORD *)this + 25) + 44LL) |= 1u;
  *((_DWORD *)this + 28) &= ~1u;
  return 0LL;
}
