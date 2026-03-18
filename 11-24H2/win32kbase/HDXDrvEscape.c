/*
 * XREFs of HDXDrvEscape @ 0x1401CE760
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1401539E0 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140012DEC (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001397C (--0-$SEMOBJ@$09@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x140013B80 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140013DBC (--0-$SEMOBJ@$07@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F2CC (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140021264 (--$GreReleaseSemaphoreCommon@$02P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140088F80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014273C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140143918 (--0-$SEMOBJ@$03@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014DB74 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  int v10; // r8d
  __int64 (__fastcall *v11)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v12; // rbx
  struct _GRETHREAD *v13; // rax
  bool v14; // zf
  struct _ERESOURCE *v15; // rbx
  struct _GRETHREAD *v16; // rax
  struct _ERESOURCE *v17; // rbx
  struct _GRETHREAD *v18; // rax
  HSEMAPHORE v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  HSEMAPHORE v22; // [rsp+50h] [rbp-30h] BYREF
  HSEMAPHORE v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+30h] BYREF

  v27 = a1;
  if ( !a1 )
    return 0LL;
  v8 = 1;
  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 0LL;
  v9 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  SEMOBJ<1>::SEMOBJ<1>(&v26, v9);
  SEMOBJ<2>::SEMOBJ<2>(&v25, v9);
  SEMOBJ<3>::SEMOBJ<3>(&v24, v9);
  SEMOBJ<4>::SEMOBJ<4>((struct _ERESOURCE **)&v23, (__int64)&v27);
  SEMOBJ<6>::SEMOBJ<6>(&v22, v9);
  SEMOBJ<8>::SEMOBJ<8>(&v21, (__int64)&v27);
  SEMOBJ<10>::SEMOBJ<10>(&v20, v9);
  PDEVOBJ::vSync(
    (PDEVOBJ *)&v27,
    (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2544) >> 64)),
    0LL,
    0);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2872);
  if ( v11 )
    v8 = v11(*(_QWORD *)(a1 + 2544) + 24LL, a2, a4, a3, 0, 0LL);
  v12 = (struct _ERESOURCE *)v20;
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"HT", (int)v20, v10);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      v14 = (*((_BYTE *)v13 + 18))-- == 1;
      if ( v14 )
        *(_QWORD *)v13 &= ~0x400uLL;
    }
    GreReleaseSemaphoreSharedInternal(v12);
  }
  if ( v21 )
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v21);
  v15 = (struct _ERESOURCE *)v22;
  if ( v22 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Sprite", (int)v22, v10);
    v16 = GreGetCurrentThreadCrossSessionCheck();
    if ( v16 )
    {
      v14 = (*((_BYTE *)v16 + 14))-- == 1;
      if ( v14 )
        *(_QWORD *)v16 &= ~0x40uLL;
    }
    GreReleaseSemaphoreSharedInternal(v15);
  }
  v17 = (struct _ERESOURCE *)v23;
  if ( v23 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v23, v10);
    v18 = GreGetCurrentThreadCrossSessionCheck();
    if ( v18 )
    {
      v14 = (*((_BYTE *)v18 + 12))-- == 1;
      if ( v14 )
        *(_QWORD *)v18 &= ~0x10uLL;
    }
    GreReleaseSemaphoreSharedInternal(v17);
  }
  if ( v24 )
    GreReleaseSemaphoreCommon<3,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v24,
      v10);
  if ( v25 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v25);
  if ( v26 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v26);
  return v8;
}
