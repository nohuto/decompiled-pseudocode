/*
 * XREFs of EditionLLMouseWheelHook @ 0x140094C70
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

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, const struct tagUIPI_INFO_INT *a3, int a4)
{
  bool v5; // bp
  __int64 v6; // r13
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 Valid; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_BYTE *)(a1 + 12) & 1;
  v6 = (unsigned int)a2;
  v9 = PtiCurrent(a1, a2);
  if ( (unsigned __int8)IsInputThread() )
    v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18704);
  else
    v12 = (__int64)v9;
  Valid = PhkFirstValid(v12, 14LL);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v19, "LowLevelMouseWheelHook", 0LL);
  v15 = *((_QWORD *)v9 + 196);
  *((_QWORD *)v9 + 196) = a1;
  v16 = xxxCallHook2(Valid, 0LL, v6, a1, 1u);
  *((_QWORD *)v9 + 196) = v15;
  if ( !v16 )
  {
    if ( !a4 || IsGpqForegroundAccessibleOnInputThread(v5, a3) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v19,
        v17);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND(v18, v17);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v19,
    v17);
  return 1LL;
}
