/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400B4A74
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1400426B0 (VidMmPurgeAllSegments.c)
 * Callees:
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4BE4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1400B4EC8 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x14010DCF8 (-AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::PurgeAllSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  char v6; // r14
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  int v10; // ebx
  ULONG TimeIncrement; // eax
  _QWORD v12[12]; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v13[2]; // [rsp+90h] [rbp+7h] BYREF

  if ( *(_DWORD *)(a1 + 40096) )
  {
    v6 = 0;
    v7 = 0;
    if ( (a2 & 0x26) != 0 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v6 = 1;
    }
    *(_OWORD *)v13 = 0LL;
    memset(v12, 0, 0x58uLL);
    v12[7] = v13;
    v12[0] = -4294967194LL;
    LODWORD(v12[5]) = a2;
    v12[6] = a3;
    v8 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v12, 1);
    if ( v8 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, v8, a1, 0LL);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400B4BDELL);
    }
    if ( v6 )
    {
      v9 = v13[0];
      if ( v13[0] )
      {
        v10 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        VIDMM_PURGE_TELEMETRY::AddData((VIDMM_PURGE_TELEMETRY *)(a1 + 41256), v13[0], (v10 - v7) * TimeIncrement);
        v9 = v13[0];
      }
      *(_QWORD *)(a1 + 44944) = v9;
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, a2, a3);
    WdLogGlobalForLineNumber = 9045;
  }
}
