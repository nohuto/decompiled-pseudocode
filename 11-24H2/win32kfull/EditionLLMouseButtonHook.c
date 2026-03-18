/*
 * XREFs of EditionLLMouseButtonHook @ 0x140095CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14004A50C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     PhkFirstValid @ 0x140080F00 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140092D78 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x140094D88 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v7; // rsi
  struct tagTHREADINFO *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edi
  __int64 Valid; // r15
  unsigned int v15; // ecx
  __int64 v16; // xmm0_8
  int v17; // r12d
  int v18; // r13d
  __int64 v19; // xmm0_8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 *v28; // [rsp+38h] [rbp-60h] BYREF
  __int64 v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int64 v31; // [rsp+50h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 92) == 2 )
    v7 = *(_QWORD *)(a1 + 80);
  else
    v7 = 0LL;
  v8 = PtiCurrent(a1, a2);
  if ( (unsigned __int8)IsInputThread() )
    v11 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18704);
  else
    v11 = (__int64)v8;
  v12 = *(_DWORD *)(a2 + 12) & 1;
  Valid = PhkFirstValid(v11, 14LL);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v28, "LowLevelMouseButtonHook", 0LL);
  v15 = 1;
  v16 = *((_QWORD *)v8 + 193);
  v17 = *((_DWORD *)v8 + 388);
  v18 = *((_DWORD *)v8 + 391);
  v31 = *((_QWORD *)v8 + 196);
  v29 = v16;
  v19 = *(_QWORD *)((char *)v8 + 1556);
  *((_QWORD *)v8 + 196) = a2;
  v30 = v19;
  if ( v7 )
  {
    v20 = *(_QWORD *)(W32GetUserGdiSessionState(1LL) + 40);
    v21 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL);
    if ( *(_QWORD *)v21 == v20 )
    {
      *((_DWORD *)v8 + 390) = 0;
      *((_DWORD *)v8 + 389) = 0x2000;
    }
    else
    {
      *(_QWORD *)((char *)v8 + 1556) = *(_QWORD *)(v21 + 872);
      *((_DWORD *)v8 + 391) = *(_DWORD *)(v21 + 880);
    }
    v15 = 3;
  }
  else
  {
    *((_DWORD *)v8 + 389) = -1;
    *((_DWORD *)v8 + 390) = -1;
  }
  if ( !v12 || *(_DWORD *)(a4 + 12) )
  {
    *((_DWORD *)v8 + 386) = -1;
    *((_DWORD *)v8 + 387) = -1;
  }
  else
  {
    v26 = *((_QWORD *)v8 + 58);
    *((_QWORD *)v8 + 193) = *(_QWORD *)(v26 + 872);
    *((_DWORD *)v8 + 388) = *(_DWORD *)(v26 + 880);
  }
  v22 = xxxCallHook2(Valid, 0LL, a3, a2, v15);
  v24 = v31;
  *((_QWORD *)v8 + 196) = v31;
  *((_QWORD *)v8 + 193) = v29;
  *(_QWORD *)((char *)v8 + 1556) = v30;
  *((_DWORD *)v8 + 391) = v18;
  *((_DWORD *)v8 + 388) = v17;
  if ( !v22 )
  {
    if ( !a5 || (LOBYTE(v24) = v12, IsGpqForegroundAccessibleOnInputThread(v24, (const struct tagUIPI_INFO_INT *)a4)) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v28,
        v23);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND(v25, v23);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v28,
    v23);
  return 1LL;
}
