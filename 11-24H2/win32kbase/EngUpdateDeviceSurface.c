/*
 * XREFs of EngUpdateDeviceSurface @ 0x140174F70
 * Callers:
 *     <none>
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140022378 (--0-$SEMOBJSHARED@$0O@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140026690 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14002686C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z @ 0x14002D8C0 (-bOffset@RGNOBJ@@QEAAHPEBU_POINTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x140039500 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bEqual@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140066300 (-bEqual@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1400673D0 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1400B8540 (--0XDCOBJ@@QEAA@XZ.c)
 *     ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z @ 0x1400B9DA0 (-vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEBVERECTL@@H@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400C2210 (--$GreAcquireSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400CFEF8 (--$GreReleaseSemaphoreCommon@$0L@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D1F48 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1401C3128 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

BOOL __stdcall EngUpdateDeviceSurface(SURFOBJ *pso, CLIPOBJ **ppco)
{
  BOOL v3; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  struct _GRETHREAD *v7; // rdi
  __int64 v8; // rsi
  int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  struct _GRETHREAD *v13; // rax
  __int64 v15; // rsi
  int v16; // r8d
  DC *v17; // rdi
  CLIPOBJ *v19; // r12
  struct RGNOBJ *v20; // r15
  HSEMAPHORE v21; // rax
  int v22; // r8d
  __int64 v23; // r10
  HSEMAPHORE v24; // rax
  const struct REGION_CORE *v25; // r9
  HDEV hdev; // rax
  const struct REGION_CORE *v27; // rdx
  struct REGION *v28; // rdx
  _QWORD *v29; // rdi
  struct _POINTL v30; // [rsp+20h] [rbp-40h] BYREF
  __int64 v31; // [rsp+28h] [rbp-38h]
  char v32; // [rsp+30h] [rbp-30h]
  _BYTE v33[40]; // [rsp+38h] [rbp-28h] BYREF
  HSEMAPHORE v34; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 1;
  CurrentThread = GreGetCurrentThread((__int64)pso);
  v7 = CurrentThread;
  if ( !CurrentThread || (*((_DWORD *)CurrentThread + 86) & 1) == 0 || pso->iType != 1 )
    return 1;
  v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
  SEMOBJSHARED<14>::SEMOBJSHARED<14>(&v34, (_QWORD *)v8);
  v10 = *((_DWORD *)v7 + 89);
  v11 = *(_DWORD *)(v8 + 4284);
  if ( v10 != v11 )
  {
    v12 = *(_DWORD *)(v8 + 4280);
    if ( v11 > v12 )
    {
      if ( v10 <= v12 || v10 >= v11 )
        goto LABEL_12;
LABEL_11:
      v3 = 0;
      goto LABEL_12;
    }
    if ( v10 < v11 || v10 > v12 )
      goto LABEL_11;
  }
LABEL_12:
  EtwTraceGreLockReleaseSemaphore((__int64)L"VisRgnUniqueness", (int)v34, v9);
  v13 = GreGetCurrentThreadCrossSessionCheck();
  if ( v13 )
  {
    if ( (*((_BYTE *)v13 + 22))-- == 1 )
      *(_QWORD *)v13 &= ~0x4000uLL;
  }
  GreReleaseSemaphoreSharedInternal((struct _ERESOURCE *)v34);
  if ( v3 || !ppco || !*ppco )
    return v3;
  v15 = *(_QWORD *)v8 + 1248LL;
  GreAcquireSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))EngAcquireSemaphoreShared, v15);
  XDCOBJ::XDCOBJ((XDCOBJ *)v33);
  v17 = (DC *)*((_QWORD *)v7 + 37);
  if ( !v17 )
  {
    GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15,
      v16);
    return 1;
  }
  v19 = *ppco;
  v20 = (struct RGNOBJ *)((unsigned __int64)&(*ppco)[2].rclBounds.top & -(__int64)(*ppco != 0LL));
  DC::AcquireDcVisRgnShared(v17);
  v35 = *((_QWORD *)v17 + 142);
  v21 = (HSEMAPHORE)DC::prgnVisSnap(v17);
  v34 = v21;
  if ( v23 && v21 )
  {
    if ( (unsigned int)RGNOBJ::bEqual((RGNOBJ *)&v34, (struct RGNOBJ *)&v35) )
      goto LABEL_29;
    if ( !*((_QWORD *)v17 + 147) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
      if ( v34 )
        *((_QWORD *)v17 + 147) = v34;
    }
    v24 = (HSEMAPHORE)*((_QWORD *)v17 + 147);
    v34 = v24;
    if ( !v24 )
      goto LABEL_39;
    if ( v24 == *(HSEMAPHORE *)v20 )
    {
LABEL_29:
      v3 = 1;
    }
    else if ( RGNOBJ::bCopy((RGNOBJ *)&v34, (struct RGNOBJ *)&v35) )
    {
      *((_QWORD *)v17 + 147) = v34;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
      if ( v35 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v17 + 6) + 40LL) & 0x20000) != 0 )
        {
          hdev = pso->hdev;
          v30.x = -*((_DWORD *)hdev + 644);
          v30.y = -*((_DWORD *)hdev + 645);
          RGNOBJ::bOffset((int **)&v34, &v30);
        }
        LOBYTE(v25) = 8;
        if ( (unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v35, v20, (struct RGNOBJ *)&v34, v25) )
        {
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v35, v27) != 1 )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v35, (struct RGNOBJ *)&v34);
            v28 = (struct REGION *)v34;
            *((_QWORD *)v17 + 147) = v34;
            v29 = (_QWORD *)((char *)v17 + 1920);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v29, v28, (const struct ERECTL *)&v19->rclBounds, 1);
            if ( !ERECTL::bEmpty((ERECTL *)((char *)v29 + 4)) )
            {
              *ppco = (CLIPOBJ *)v29;
              v3 = 1;
            }
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
    }
  }
LABEL_39:
  if ( v32 )
    CPushLock::ReleaseLock((CPushLock *)(v31 + 1112));
  GreReleaseSemaphoreCommon<11,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v15,
    v22);
  return v3;
}
