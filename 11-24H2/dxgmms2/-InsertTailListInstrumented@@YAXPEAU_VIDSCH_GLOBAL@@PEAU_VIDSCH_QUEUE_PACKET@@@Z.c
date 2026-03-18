/*
 * XREFs of ?InsertTailListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140004D68
 * Callers:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000396C (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiAcquireSyncObject @ 0x140004680 (VidSchiAcquireSyncObject.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall InsertTailListInstrumented(KSPIN_LOCK *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // rsi
  LARGE_INTEGER *v5; // r14
  char *v6; // rax
  struct _VIDSCH_GLOBAL **v7; // rcx
  struct _VIDSCH_GLOBAL **v8; // rcx

  if ( KeTestSpinLock(a1 + 248) )
    goto LABEL_19;
  v5 = a2 + 96;
  if ( a2[96].QuadPart || a2[97].QuadPart || (v2 = a2 + 22, a2[22].QuadPart) || a2[23].QuadPart )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v6 = (char *)WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, a2, 0LL);
    WdLogGlobalForLineNumber = 906;
  }
  else
  {
    if ( *((_BYTE *)a1 + 7059) )
    {
      a2[7 * a2[93].LowPart + 37] = KeQueryPerformanceCounter(0LL);
      a2[7 * a2[93].LowPart + 38].LowPart = a2[6].LowPart;
      RtlCaptureStackBackTrace(1u, 5u, (PVOID *)&a2[7 * a2[93].LowPart + 39], 0LL);
      a2[93].LowPart = ((unsigned __int8)a2[93].LowPart + 1) & 7;
    }
    v6 = (char *)(a1 + 110);
    v7 = (struct _VIDSCH_GLOBAL **)a1[111];
    if ( *v7 != (struct _VIDSCH_GLOBAL *)(a1 + 110) )
LABEL_9:
      __fastfail(3u);
  }
  v5->QuadPart = (LONGLONG)v6;
  a2[97].QuadPart = (LONGLONG)v7;
  *v7 = (struct _VIDSCH_GLOBAL *)v5;
  *((_QWORD *)v6 + 1) = v5;
  v8 = (struct _VIDSCH_GLOBAL **)a1[388];
  if ( *v8 != (struct _VIDSCH_GLOBAL *)(a1 + 387) )
    goto LABEL_9;
  v2->QuadPart = (LONGLONG)(a1 + 387);
  v2[1].QuadPart = (LONGLONG)v8;
  *v8 = (struct _VIDSCH_GLOBAL *)v2;
  a1[388] = (KSPIN_LOCK)v2;
  if ( !v5->QuadPart || !a2[97].QuadPart || !v2->QuadPart || !a2[23].QuadPart )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, a2, 0LL);
    WdLogGlobalForLineNumber = 906;
LABEL_19:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, a2, 0LL);
    WdLogGlobalForLineNumber = 906;
    goto LABEL_20;
  }
  if ( a1[111] != a1[388] + 592 )
  {
LABEL_20:
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 61440LL, a1, a2, 0LL);
    WdLogGlobalForLineNumber = 906;
    JUMPOUT(0x140004FE0LL);
  }
}
