/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400D076C
 * Callers:
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x1400C3880 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 *     ?GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z @ 0x1400D0464 (-GrepRectBlt@@YAHAEAVXDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140014FC0 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x14001E530 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001E9D4 (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F0D0 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x14001F2D8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001F73C (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9014 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9120 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400CE6CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1400D0B70 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D0C0C (--$GreReleaseSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D23D0 (--$GreReleaseSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D243C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14012D7A8 (--$GreReleaseSemaphoreCommon@$0O@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401482F0 (--$GrepIsLockOwnedByCurrentThread@$01USESSION_GLOBALS@Base@Gre@@@@YA_NAEBUSESSION_GLOBALS@Base@G.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016E5C4 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, __int64 **a2)
{
  int v4; // r15d
  __int64 *v5; // rsi
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DC *v13; // r10
  struct _GRETHREAD *v14; // rax
  struct _GRETHREAD *v15; // rbp
  __int64 v16; // rbx
  bool v18; // zf
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v4 = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = **a2;
  if ( !TrapAppContainerRenderingWorker(
          (struct XDCOBJ *)a2,
          (HSURF *)this + 37,
          (HSURF *)this + 36,
          (unsigned int *)this + 29) )
    goto LABEL_33;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v5 = a2[2];
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x80000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  v6 = a2[2];
  *((_QWORD *)this + 2) = *v5 + 624;
  GreAcquireSemaphoreShared<1,>(v6);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount()
    && !(unsigned __int8)GrepIsLockOwnedByCurrentThread<2,Gre::Base::SESSION_GLOBALS>(v5) )
  {
    GreAcquireSemaphoreShared<2,>(v5);
    v4 = 1;
  }
  v7 = *a2;
  v21 = (*a2)[6];
  if ( (*(_DWORD *)v7[122] & 1) != 0 || (*((_DWORD *)v7 + 9) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v21) )
      goto LABEL_9;
    v7 = *a2;
  }
  v19 = v7[8];
  *(_QWORD *)this = v19;
  *((_QWORD *)this + 3) = (*a2)[6];
  if ( v4 && v19 == *v5 + 1144 )
  {
    GreReleaseSemaphoreShared<2,>(v5);
    v4 = 0;
  }
  if ( *(_QWORD *)this == *v5 + 1144 )
  {
    *((_DWORD *)this + 28) |= 0x100000u;
    GreAcquireSemaphore<2,>(v5);
  }
  else
  {
    GreAcquireSemaphore<8,PDEVOBJ>(*((_QWORD *)this + 3));
  }
  v20 = *((_DWORD *)this + 28);
  if ( (v20 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
    *((_DWORD *)this + 28) = v20 | 0x200;
LABEL_9:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    CurrentThread = GreGetCurrentThread(v9, v8);
    if ( CurrentThread )
    {
      *((_QWORD *)CurrentThread + 38) = 0LL;
      *((_QWORD *)CurrentThread + 37) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreShared<3,>(v5);
  }
  if ( (unsigned int)DC::bInFullScreen((DC *)*a2) )
  {
    v18 = (*((_DWORD *)this + 28) & 0x1000) == 0;
    goto LABEL_45;
  }
LABEL_14:
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
LABEL_43:
      v18 = *((_QWORD *)this + 2) == 0LL;
LABEL_45:
      if ( !v18 )
        GreReleaseSemaphoreShared<3,>(v5);
      if ( v4 )
        GreReleaseSemaphoreShared<2,>(v5);
      goto LABEL_33;
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    goto LABEL_17;
  }
  if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !DC::bCompute((DC *)*a2) )
    goto LABEL_43;
LABEL_17:
  if ( !DC::prgnRao((DC *)*a2) && !DC::prgnVisSnap(v13) )
  {
LABEL_33:
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  if ( (*((_DWORD *)v13 + 9) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_26;
    if ( !*((_QWORD *)this + 36) )
      DC::vSetRendering(v13);
    v14 = GreGetCurrentThread(v12, v11);
    v15 = v14;
    if ( v14 )
    {
      *((_QWORD *)v14 + 37) = *a2;
      if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
      {
        *((_DWORD *)v14 + 86) |= 1u;
        (*a2)[247] = 0LL;
        v16 = *v5;
        GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*v5 + 832));
        GrepAcquireLockValidate<14>();
        *((_DWORD *)v15 + 89) = *((_DWORD *)v5 + 1070);
        GreReleaseSemaphoreCommon<14,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v16 + 832);
      }
    }
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
    GreReleaseSemaphoreShared<3,>(v5);
LABEL_26:
  if ( v4 )
    GreReleaseSemaphoreShared<2,>(v5);
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0
    && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 0) )
  {
    goto LABEL_33;
  }
  if ( (*((_DWORD *)this + 28) & 0x81000) != 0 )
    DLODCOBJ::vLockForDPIScaledClipping((DEVLOCKBLTOBJ *)((char *)this + 120), (HDC)**a2);
  return 1LL;
}
