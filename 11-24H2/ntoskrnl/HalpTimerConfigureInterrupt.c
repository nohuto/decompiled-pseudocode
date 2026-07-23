/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x140544C40
 * Callers:
 *     HalpTimerInitializeClock @ 0x1405445B4 (HalpTimerInitializeClock.c)
 *     HalpTimerPrepareClockInterrupt @ 0x1405448E0 (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x14054768C (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547D50 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptLineToGsi @ 0x14049A1F8 (HalpInterruptLineToGsi.c)
 *     HalpInterruptIsMsiSupported @ 0x1404B1F6C (HalpInterruptIsMsiSupported.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpTimerUnmapInterrupt @ 0x1405462D0 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140558090 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpTimerConfigureInterrupt(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int128 *a7,
        __int64 a8)
{
  __int128 v11; // xmm0
  int v12; // r8d
  int v13; // r9d
  int v14; // edi
  int v15; // eax
  __int64 InternalData; // rax
  int v17; // r8d
  int v18; // r9d
  unsigned int *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  unsigned __int8 v34; // di
  char v36; // [rsp+38h] [rbp-B1h]
  __int64 v37; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v38[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v39; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v41; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v42; // [rsp+60h] [rbp-89h]
  __int128 v43; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v44[2]; // [rsp+80h] [rbp-69h] BYREF
  char v45; // [rsp+88h] [rbp-61h]
  int v46; // [rsp+8Ch] [rbp-5Dh] BYREF
  int v47; // [rsp+90h] [rbp-59h] BYREF
  __int128 v48; // [rsp+98h] [rbp-51h]
  unsigned int v49; // [rsp+A8h] [rbp-41h]
  int v50; // [rsp+ACh] [rbp-3Dh]
  int v51; // [rsp+B0h] [rbp-39h]
  unsigned int v52; // [rsp+B4h] [rbp-35h]
  _DWORD v53[10]; // [rsp+B8h] [rbp-31h] BYREF

  v41 = 0;
  v37 = 0LL;
  v39 = 6LL;
  v43 = 0LL;
  memset_0(v44, 0, 0x58uLL);
  v11 = *a7;
  v44[1] = a2;
  v45 = a3;
  v49 = a6 & 0x3FFFFFFF | v49 & 0xC0000000 | 0x40000000;
  v48 = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v42 = &v43;
  v14 = -1073741637;
  LODWORD(v43) = a6 & 0x3FFFFFFF;
  v15 = *(_DWORD *)(a1 + 224);
  if ( (v15 & 0x800) != 0 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    guard_dispatch_icall_no_overrides(InternalData, a2);
    LOBYTE(v17) = a3;
    HalpInterruptSetIdtEntry(a2, a8, v17, v18, a5);
    return 0;
  }
  if ( (v15 & 0x400) == 0 || !HalpInterruptIsMsiSupported(1) || (*(_DWORD *)(a1 + 184) & 0x50) == 0x40 )
    goto LABEL_11;
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    goto LABEL_9;
  v19 = *(unsigned int **)(a1 + 288);
  v46 = 0;
  v44[0] = 3;
  v47 = 1;
  v14 = HalpInterruptRemap(*v19, v19[1], (__int64)(v19 + 2), 0, v44, 1u);
  if ( v14 >= 0 )
  {
    v20 = v50;
    *(_DWORD *)(a1 + 184) |= 0x40u;
    *(_DWORD *)(a1 + 236) = v20;
    *(_DWORD *)(a1 + 232) = v51;
    *(_QWORD *)(a1 + 240) = v52;
LABEL_9:
    v21 = HalpTimerGetInternalData(a1);
    LOBYTE(v22) = 1;
    v23 = guard_dispatch_icall_no_overrides(v21, v22);
    v14 = v23;
    if ( v23 >= 0 )
    {
      *(_DWORD *)(a1 + 184) |= 0x10u;
      return 0;
    }
    HalpTimerSetProblemEx(a1, 24, v23, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x8EEu);
    LOBYTE(v24) = 1;
    HalpTimerUnmapInterrupt(v25, a2, a6, v24);
  }
LABEL_11:
  v26 = *(_DWORD *)(a1 + 224);
  if ( (v26 & 0x200) != 0 )
  {
    v27 = HalpInterruptGsiToLine(*(_DWORD *)(a1 + 88), &v37);
    v28 = v27;
    if ( v27 < 0 )
    {
      HalpTimerSetProblemEx(a1, 16, v27, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x164u);
      return (unsigned int)v28;
    }
    v29 = (int *)(a1 + 92);
  }
  else
  {
    if ( (v26 & 0x100) == 0 )
    {
      HalpTimerSetProblemEx(a1, 17, v14, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x173u);
      return (unsigned int)-1073741811;
    }
    v30 = *(_DWORD *)(a1 + 84);
    if ( v30 >= 8 )
    {
      LODWORD(v37) = 45057;
      v30 -= 8;
    }
    else
    {
      LODWORD(v37) = 45056;
    }
    v29 = (int *)(a1 + 92);
    HIDWORD(v37) = v30;
    if ( !*(_DWORD *)(a1 + 92) )
    {
      *v29 = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_27;
  v31 = HalpTimerGetInternalData(a1);
  v32 = guard_dispatch_icall_no_overrides(v31, 0LL);
  v28 = v32;
  if ( v32 < 0 )
  {
    HalpTimerSetProblemEx(a1, 24, v32, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x18Eu);
    return (unsigned int)v28;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_27:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource[0] = v37;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v33 = *(_DWORD *)(a1 + 96);
  v44[0] = 0;
  v47 = v33;
  v46 = *v29;
  HalpInterruptApplyOverrides((__int64)&v37, &v46, &v47);
  v28 = HalpInterruptLineToGsi((int *)&v37, v53);
  if ( v28 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v28 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              *(_QWORD *)(a1 + 288) + 8LL,
              0,
              v44,
              1u);
      if ( v28 < 0 )
        return (unsigned int)v28;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v38[0] = -1;
    v38[1] = 1;
    v34 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v28 = HalpInterruptSetLineState((unsigned __int64 *)&v37, a2, a3, v47, v46, (__int64)&v39, (__int64)v38, v36);
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v34);
    if ( v28 >= 0 )
      return 0;
  }
  return (unsigned int)v28;
}
