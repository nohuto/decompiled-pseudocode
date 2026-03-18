/*
 * XREFs of bDrvShadowDisconnect @ 0x14026A1E0
 * Callers:
 *     RemoteShadowCleanup @ 0x1401E0124 (RemoteShadowCleanup.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140023090 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140023F40 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400255B0 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002AF14 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14002AFD0 (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002B064 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002B0C8 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140208834 (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14026C118 (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDrvShadowDisconnect(Gre::Base *a1, __int64 a2, unsigned int a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // rbx
  Gre::Base *v6; // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD); // rax
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  void (__fastcall *v11)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  HSEMAPHORE v12; // rbx
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  HSEMAPHORE v15; // rbx
  struct _GRETHREAD *v16; // rax
  HSEMAPHORE v18; // [rsp+30h] [rbp-40h] BYREF
  HSEMAPHORE v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  Gre::Base *v25; // [rsp+90h] [rbp+20h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF

  v25 = a1;
  if ( !a1 || (*((_DWORD *)a1 + 10) & 1) == 0 )
    return 0LL;
  v5 = Gre::Base::Globals(a1);
  SEMOBJ<1>::SEMOBJ<1>(&v24, v5);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v23, v5);
  SEMOBJ<3>::SEMOBJ<3>(&v22, v5);
  SEMOBJ<4>::SEMOBJ<4>((HSEMAPHORE *)&v21, (__int64)&v25);
  SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v20, v5);
  SEMOBJ<10>::SEMOBJ<10>(&v19, v5);
  SEMOBJ<8>::SEMOBJ<8>(&v18, (__int64)&v25);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v25,
    (struct _SURFOBJ *)((*((_QWORD *)v25 + 318) + 24LL) & -(__int64)(*((_QWORD *)v25 + 318) != 0LL)),
    0LL,
    0);
  v6 = v25;
  v7 = (__int64 (__fastcall *)(__int64, _QWORD))*((_QWORD *)v25 + 416);
  if ( v7 )
  {
    v8 = v7(a2, a3);
    v6 = v25;
    v9 = v8;
  }
  else
  {
    v9 = 1;
  }
  v10 = *((_QWORD *)v6 + 224);
  v26 = v10;
  if ( v9 == 1 && (*(_DWORD *)(v10 + 24) & 0x800) != 0 )
  {
    v11 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))*((_QWORD *)v6 + 357);
    if ( v11 )
      v11(*((_QWORD *)v6 + 223), &v26, 0LL, 0LL, *(_DWORD *)(v10 + 28));
    else
      v9 = 0;
  }
  v12 = v18;
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DevLock", v18);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*((_BYTE *)v13 + 16))-- == 1;
      if ( v14 )
        *(_QWORD *)v13 &= ~0x100uLL;
      if ( !*(_QWORD *)v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v12);
  }
  v15 = v19;
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore(L"HT", v19);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v14 = (*((_BYTE *)v16 + 18))-- == 1;
      if ( v14 )
        *(_QWORD *)v16 &= ~0x400uLL;
      if ( !*(_QWORD *)v16 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v15);
  }
  if ( v20 )
    GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v20);
  if ( v21 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v21);
  if ( v22 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v22);
  if ( v23 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v23);
  if ( v24 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v24);
  return v9;
}
