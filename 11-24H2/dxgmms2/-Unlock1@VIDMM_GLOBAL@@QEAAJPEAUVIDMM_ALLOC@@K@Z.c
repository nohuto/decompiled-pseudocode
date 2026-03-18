/*
 * XREFs of ?Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z @ 0x1400E9214
 * Callers:
 *     VidMmEndCPUAccess @ 0x14003F560 (VidMmEndCPUAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003E084 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E9320 (-UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Unlock1(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // [rsp+28h] [rbp-30h]

  v3 = 0LL;
  v4 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = v4;
    WdLogGlobalForLineNumber = 22581;
  }
  if ( (v4 & 0xFFFFFFFE) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 22589;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    return 3221225712LL;
  }
  else
  {
    v8 = VIDMM_GLOBAL::UnlockInternal(this, a2, 0);
    if ( v8 >= 0 && (byte_140081241 & 1) != 0 )
    {
      v12 = *((_QWORD *)a2 + 1);
      if ( v12 )
        v3 = *(_QWORD *)(v12 + 24);
      v13 = v4;
      McTemplateK0ppq_EtwWriteTransfer(v12, (const EVENT_DESCRIPTOR *)"*", v9, v3, a2, v13);
    }
    return (unsigned int)v8;
  }
}
