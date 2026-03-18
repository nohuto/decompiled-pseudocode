/*
 * XREFs of HalpTimerConfigureInterrupt @ 0x140544A90
 * Callers:
 *     HalpTimerInitializeClock @ 0x140544404 (HalpTimerInitializeClock.c)
 *     HalpTimerPrepareClockInterrupt @ 0x140544730 (HalpTimerPrepareClockInterrupt.c)
 *     HalpTimerInitializeProfiling @ 0x1405474DC (HalpTimerInitializeProfiling.c)
 *     HalpTimerTestHypervisorTimer @ 0x140547BA0 (HalpTimerTestHypervisorTimer.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140377510 (KeFindFirstSetRightGroupAffinity.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     HalpInterruptLineToGsi @ 0x140444838 (HalpInterruptLineToGsi.c)
 *     HalpInterruptGsiToLine @ 0x140445508 (HalpInterruptGsiToLine.c)
 *     HalpInterruptApplyOverrides @ 0x140445554 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140445E40 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptIsMsiSupported @ 0x1404B7ECC (HalpInterruptIsMsiSupported.c)
 *     HalpTimerSetProblemEx @ 0x1404F70E4 (HalpTimerSetProblemEx.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpTimerUnmapInterrupt @ 0x140546120 (HalpTimerUnmapInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140557B60 (HalpInterruptSetIdtEntry.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int *v28; // rdi
  unsigned int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  unsigned __int8 v33; // di
  char v35; // [rsp+38h] [rbp-B1h]
  __int64 v36; // [rsp+40h] [rbp-A9h] BYREF
  _DWORD v37[2]; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v38; // [rsp+50h] [rbp-99h] BYREF
  int FirstSetRightGroupAffinity; // [rsp+58h] [rbp-91h]
  int v40; // [rsp+5Ch] [rbp-8Dh]
  __int128 *v41; // [rsp+60h] [rbp-89h]
  __int128 v42; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v43[2]; // [rsp+80h] [rbp-69h] BYREF
  char v44; // [rsp+88h] [rbp-61h]
  int v45; // [rsp+8Ch] [rbp-5Dh] BYREF
  int v46; // [rsp+90h] [rbp-59h] BYREF
  __int128 v47; // [rsp+98h] [rbp-51h]
  unsigned int v48; // [rsp+A8h] [rbp-41h]
  int v49; // [rsp+ACh] [rbp-3Dh]
  int v50; // [rsp+B0h] [rbp-39h]
  unsigned int v51; // [rsp+B4h] [rbp-35h]
  _DWORD v52[10]; // [rsp+B8h] [rbp-31h] BYREF

  v40 = 0;
  v36 = 0LL;
  v38 = 6LL;
  v42 = 0LL;
  memset_0(v43, 0, 0x58uLL);
  v11 = *a7;
  v43[1] = a2;
  v44 = a3;
  v48 = a6 & 0x3FFFFFFF | v48 & 0xC0000000 | 0x40000000;
  v47 = v11;
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)a7);
  v41 = &v42;
  v14 = -1073741637;
  LODWORD(v42) = a6 & 0x3FFFFFFF;
  v15 = *(_DWORD *)(a1 + 224);
  if ( (v15 & 0x800) != 0 )
  {
    InternalData = HalpTimerGetInternalData(a1);
    guard_dispatch_icall_no_overrides(InternalData);
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
  v45 = 0;
  v43[0] = 3;
  v46 = 1;
  v14 = HalpInterruptRemap(*v19, v19[1], (__int64)(v19 + 2), 0, v43, 1u);
  if ( v14 >= 0 )
  {
    v20 = v49;
    *(_DWORD *)(a1 + 184) |= 0x40u;
    *(_DWORD *)(a1 + 236) = v20;
    *(_DWORD *)(a1 + 232) = v50;
    *(_QWORD *)(a1 + 240) = v51;
LABEL_9:
    v21 = HalpTimerGetInternalData(a1);
    v22 = guard_dispatch_icall_no_overrides(v21);
    v14 = v22;
    if ( v22 >= 0 )
    {
      *(_DWORD *)(a1 + 184) |= 0x10u;
      return 0;
    }
    HalpTimerSetProblemEx(a1, 24, v22, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x8EEu);
    LOBYTE(v23) = 1;
    HalpTimerUnmapInterrupt(v24, a2, a6, v23);
  }
LABEL_11:
  v25 = *(_DWORD *)(a1 + 224);
  if ( (v25 & 0x200) != 0 )
  {
    v26 = HalpInterruptGsiToLine(*(unsigned int *)(a1 + 88), &v36);
    v27 = v26;
    if ( v26 < 0 )
    {
      HalpTimerSetProblemEx(a1, 16, v26, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x164u);
      return (unsigned int)v27;
    }
    v28 = (int *)(a1 + 92);
  }
  else
  {
    if ( (v25 & 0x100) == 0 )
    {
      HalpTimerSetProblemEx(a1, 17, v14, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x173u);
      return (unsigned int)-1073741811;
    }
    v29 = *(_DWORD *)(a1 + 84);
    if ( v29 >= 8 )
    {
      LODWORD(v36) = 45057;
      v29 -= 8;
    }
    else
    {
      LODWORD(v36) = 45056;
    }
    v28 = (int *)(a1 + 92);
    HIDWORD(v36) = v29;
    if ( !*(_DWORD *)(a1 + 92) )
    {
      *v28 = 1;
      *(_DWORD *)(a1 + 96) = 1;
    }
  }
  LOBYTE(v12) = a3;
  HalpInterruptSetIdtEntry(a2, a8, v12, v13, a5);
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
    goto LABEL_27;
  v30 = HalpTimerGetInternalData(a1);
  v31 = guard_dispatch_icall_no_overrides(v30);
  v27 = v31;
  if ( v31 < 0 )
  {
    HalpTimerSetProblemEx(a1, 24, v31, (__int64)"minkernel\\hals\\lib\\timers\\common\\timersup.c", 0x18Eu);
    return (unsigned int)v27;
  }
  *(_DWORD *)(a1 + 184) &= ~0x10u;
  if ( (*(_DWORD *)(a1 + 184) & 0x10) == 0 )
  {
LABEL_27:
    if ( a2 == 209 )
    {
      HalpTimerCriticalClockSource[0] = v36;
      HalpTimerCriticalClockSourceCount = 1;
    }
  }
  v32 = *(_DWORD *)(a1 + 96);
  v43[0] = 0;
  v46 = v32;
  v45 = *v28;
  HalpInterruptApplyOverrides((__int64)&v36, &v45, &v46);
  v27 = HalpInterruptLineToGsi((unsigned int *)&v36, v52);
  if ( v27 >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40) == 0 )
    {
      v27 = HalpInterruptRemap(
              **(_DWORD **)(a1 + 288),
              *(_DWORD *)(*(_QWORD *)(a1 + 288) + 4LL),
              *(_QWORD *)(a1 + 288) + 8LL,
              0,
              v43,
              1u);
      if ( v27 < 0 )
        return (unsigned int)v27;
      *(_DWORD *)(a1 + 184) |= 0x40u;
    }
    v37[0] = -1;
    v37[1] = 1;
    v33 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v27 = HalpInterruptSetLineState((unsigned __int64 *)&v36, a2, a3, v46, v45, (__int64)&v38, (__int64)v37, v35);
    HalpReleaseHighLevelLock((__int64)&HalpInterruptLock, v33);
    if ( v27 >= 0 )
      return 0;
  }
  return (unsigned int)v27;
}
