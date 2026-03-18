/*
 * XREFs of ?ETWAllocationHandle@VIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1400EB8D0
 * Callers:
 *     VidMmETWAllocationHandle @ 0x140038BC0 (VidMmETWAllocationHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ETWAllocationHandle(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // rbx
  struct DXGPROCESS *Current; // rbp
  char *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v11; // rcx

  v3 = 0LL;
  Current = DXGPROCESS::GetCurrent();
  v5 = (char *)Current + 248;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 248, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)Current + 68) != -1 && (byte_140081241 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer();
    ExAcquirePushLockSharedEx(v5, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)Current + 66);
  v6 = (a2 >> 6) & 0xFFFFFF;
  if ( v6 >= *((_DWORD *)Current + 74) )
    goto LABEL_10;
  v7 = *((_QWORD *)Current + 35);
  if ( ((a2 >> 25) & 0x60) != (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x60) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0x2000) != 0 )
    goto LABEL_10;
  v9 = *(_DWORD *)(v7 + 16LL * v6 + 8) & 0x1F;
  if ( !v9 )
    goto LABEL_10;
  if ( v9 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
LABEL_10:
    v8 = 0LL;
    goto LABEL_14;
  }
  v8 = *(_QWORD *)(v7 + 16LL * v6);
LABEL_14:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
    return *(_QWORD *)(v8 + 24);
  return v3;
}
