/*
 * XREFs of ?RestoreFromPurge@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400BC7A8
 * Callers:
 *     VidMmRestoreFromPurge @ 0x140040F00 (VidMmRestoreFromPurge.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400BCEF0 (-MapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::RestoreFromPurge(VIDMM_GLOBAL *this)
{
  bool v1; // zf
  __int64 i; // rsi
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rcx
  int inited; // eax
  _DWORD v8[24]; // [rsp+50h] [rbp-68h] BYREF

  v1 = *((_DWORD *)this + 10024) == 0;
  *((_BYTE *)this + 7016) = 0;
  if ( v1 )
  {
    VIDMM_GLOBAL::MapAllPagingBuffers(this);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * i);
      if ( (*(_BYTE *)(v4 + 477) & 1) != 0 )
      {
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, i, 0);
        if ( inited < 0 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          v5 = WdLogSingleEntry5(0LL, 270LL, 23LL, inited, this, (unsigned int)i);
          WdLogGlobalForLineNumber = 195;
          goto LABEL_12;
        }
        *(_BYTE *)(v4 + 477) &= ~1u;
      }
    }
    memset(&v8[2], 0, 0x50uLL);
    v8[1] = -1;
    v8[0] = 101;
    v5 = VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v8, 1);
    if ( v5 < 0 )
    {
LABEL_12:
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 23LL, v5, this, 0LL);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400BC92ELL);
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9231;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
  }
}
