/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x140547380
 * Callers:
 *     HalpTimerInitializeClock @ 0x140546CF4 (HalpTimerInitializeClock.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140547020 (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x140549DCC (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x14054A490 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1403B4C70 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptLineToGsi @ 0x1403BAFE0 (HalpInterruptLineToGsi.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptIsMsiSupported @ 0x1404B778C (HalpInterruptIsMsiSupported.c)
 *     HalpTimerSetProblemEx @ 0x1404F98E4 (HalpTimerSetProblemEx.c)
 *     HalpInterruptRemap @ 0x140540EC4 (HalpInterruptRemap.c)
 *     HalpTimerUnmapInterrupt @ 0x140548A10 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x14055A460 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r8d
  int v20; // r9d
  unsigned int *v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  unsigned int *v24; // r9
  __int64 v25; // rdx
  _QWORD *v26; // r8
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // esi
  int *v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // di
  char v40; // [rsp+38h] [rbp-B1h]
  __int64 v41; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v42[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v43; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v45; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v46; // [rsp+60h] [rbp-89h]
  __int128 v47; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v48[2]; // [rsp+80h] [rbp-69h] BYREF
  char v49; // [rsp+88h] [rbp-61h]
  int v50; // [rsp+8Ch] [rbp-5Dh] BYREF
  int v51; // [rsp+90h] [rbp-59h] BYREF
  __int128 v52; // [rsp+98h] [rbp-51h]
  unsigned int v53; // [rsp+A8h] [rbp-41h]
  int v54; // [rsp+ACh] [rbp-3Dh]
  int v55; // [rsp+B0h] [rbp-39h]
  unsigned int v56; // [rsp+B4h] [rbp-35h]
  _DWORD v57[10]; // [rsp+B8h] [rbp-31h] BYREF

  v45 = 0;
  v41 = 0LL;
  v43 = 6LL;
  v47 = 0LL;
  memset_0(v48, 0, 0x58uLL);
  v11 = *a7;
  v48[1] = a2;
  v49 = a3;
  v53 = a6 & 0x3FFFFFFF | v53 & 0xC0000000 | 0x40000000;
  v52 = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v46 = &v47;
  v14 = -1073741637;
  LODWORD(v47) = a6 & 0x3FFFFFFF;
  v15 = *(_DWORD *)(a1 + 224);
  if ( (v15 & 0x800) != 0 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    guard_dispatch_icall_no_overrides(InternalData, a2, v17, v18);
    LOBYTE(v19) = a3;
    HalpInterruptSetIdtEntry(a2, a8, v19, v20, a5);
    return 0;
  }
  if ( (v15 & 0x400) == 0 || !HalpInterruptIsMsiSupported(1) || (*(_DWORD *)(a1 + 184) & 0x50) == 0x40 )
    goto LABEL_11;
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
    goto LABEL_9;
  v21 = *(unsigned int **)(a1 + 288);
  v50 = 0;
  v48[0] = 3;
  v51 = 1;
  v14 = HalpInterruptRemap(*v21, v21[1], (__int64)(v21 + 2), 0, v48, 1u);
  if ( v14 >= 0 )
  {
    v22 = v54;
    *(_DWORD *)(a1 + 184) |= 0x40u;
    *(_DWORD *)(a1 + 236) = v22;
    *(_DWORD *)(a1 + 232) = v55;
    *(_QWORD *)(a1 + 240) = v56;
LABEL_9:
    v23 = HalpTimerGetInternalData(a1);
    LOBYTE(v25) = 1;
    v27 = guard_dispatch_icall_no_overrides(v23, v25, *v26, *v24);
    v14 = v27;
    if ( v27 >= 0 )
    {
      *(_DWORD *)(a1 + 184) |= 0x10u;
      return 0;
    }
    HalpTimerSetProblemEx(a1, 24, v27, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x8F0u);
    LOBYTE(v28) = 1;
    HalpTimerUnmapInterrupt(v29, a2, a6, v28);
  }
LABEL_11:
  v30 = *(_DWORD *)(a1 + 224);
  if ( (v30 & 0x200) != 0 )
  {
    v31 = HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), &v41);
    v32 = v31;
    if ( v31 < 0 )
    {
      HalpTimerSetProblemEx(a1, 16, v31, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x164u);
      return (unsigned int)v32;
    }
    v33 = (int *)(a1 + 92);
  }
  else
  {
    if ( (v30 & 0x100) == 0 )
    {
      HalpTimerSetProblemEx(a1, 17, v14, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x173u);
      return (unsigned int)-1073741811;
    }
    v34 = *(_DWORD *)(a1 + 84);
    if ( v34 >= 8 )
    {
      LODWORD(v41) = 45057;
      v34 -= 8;
    }
    else
    {
      LODWORD(v41) = 45056;
    }
    v33 = (int *)(a1 + 92);
    HIDWORD(v41) = v34;
    if ( !*(_DWORD *)(a1 + 92) )
    {
      *v33 = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_27;
  v35 = HalpTimerGetInternalData(a1);
  v36 = guard_dispatch_icall_no_overrides(v35, 0LL, 0LL, 0LL);
  v32 = v36;
  if ( v36 < 0 )
  {
    HalpTimerSetProblemEx(a1, 24, v36, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x18Eu);
    return (unsigned int)v32;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_27:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource[0] = v41;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v37 = *(_DWORD *)(a1 + 96);
  v48[0] = 0;
  v51 = v37;
  v50 = *v33;
  HalpInterruptApplyOverrides((__int64)&v41, &v50, &v51);
  v32 = HalpInterruptLineToGsi((int *)&v41, v57);
  if ( v32 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v32 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              *(_QWORD *)(a1 + 288) + 8LL,
              0,
              v48,
              1u);
      if ( v32 < 0 )
        return (unsigned int)v32;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v42[0] = -1;
    v42[1] = 1;
    v38 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v32 = HalpInterruptSetLineState((unsigned __int64 *)&v41, a2, a3, v51, v50, (__int64)&v43, (__int64)v42, v40);
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v38);
    if ( v32 >= 0 )
      return 0;
  }
  return (unsigned int)v32;
}
