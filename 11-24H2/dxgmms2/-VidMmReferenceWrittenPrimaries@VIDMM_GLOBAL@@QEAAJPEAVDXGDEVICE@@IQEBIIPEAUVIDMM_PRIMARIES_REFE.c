/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x1401136F0
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x140036C00 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004C558 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *const a4,
        unsigned int a5,
        struct VIDMM_PRIMARIES_REFERENCES *a6)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v9; // edi
  struct DXGPROCESS *v10; // rsi
  unsigned int v11; // r12d
  DXGPUSHLOCK *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // r10d
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // ecx
  __int64 v19; // rsi
  struct DXGDEVICE *v20; // rdx
  volatile signed __int32 *v21; // rdx
  __int64 v22; // r9
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct DXGPROCESS *v29; // [rsp+50h] [rbp-48h]

  Current = DXGPROCESS::GetCurrent();
  v9 = 0;
  v29 = Current;
  v10 = Current;
  v11 = 0;
  v12 = (struct DXGPROCESS *)((char *)Current + 248);
  if ( Current != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)Current + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(v13, 262146LL);
  }
  DXGPUSHLOCK::AcquireShared(v12);
  v14 = 0;
  v15 = a3;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
    goto LABEL_33;
  while ( 1 )
  {
    v16 = (*a4 >> 6) & 0xFFFFFF;
    if ( v16 >= *((_DWORD *)v10 + 74) )
      break;
    v17 = 16LL * v16 + *((_QWORD *)v10 + 35);
    if ( ((*a4 >> 25) & 0x60) != (*(_BYTE *)(v17 + 8) & 0x60) )
      break;
    if ( (*(_DWORD *)(v17 + 8) & 0x2000) != 0 )
      break;
    v18 = *(_DWORD *)(v17 + 8) & 0x1F;
    if ( !v18 )
      break;
    if ( v18 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(v27, 0x40000LL);
      break;
    }
    v19 = *(_QWORD *)v17;
    if ( !v19 )
      break;
    v20 = *(struct DXGDEVICE **)(v19 + 8);
    if ( v20 != a2 )
    {
      WdLogSingleEntry2(1LL, v20, a2);
      WdLogGlobalForLineNumber = 21594;
      DxgkLogInternalTriageEvent(v26, 0x40000LL);
      goto LABEL_29;
    }
    v21 = *(volatile signed __int32 **)(v19 + 24);
    v22 = **(_QWORD **)v21;
    v23 = **(_DWORD **)(v22 + 392);
    v24 = (v23 >> 12) | (v23 | ((v23 | (v23 >> 5)) >> 6)) & 0x80000;
    if ( (v23 & 0x200000) != 0 )
    {
      *((_DWORD *)a6 + 34) |= 1u;
      if ( v24 < 0x80000 )
        goto LABEL_23;
LABEL_17:
      if ( *(_BYTE *)(v22 + 41) )
      {
        WdLogSingleEntry1(3LL, v22);
        WdLogGlobalForLineNumber = 21642;
        v11 = -1071775482;
        goto LABEL_30;
      }
      _InterlockedAdd(v21 + 26, a5);
      *((_QWORD *)a6 + *(unsigned int *)a6 + 1) = v21;
      if ( *(_DWORD *)a6 >= 0x10u )
      {
        IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
        v15 = a3;
        if ( IsEnabledDeviceUsageNoInline )
          _InterlockedIncrement((volatile signed __int32 *)this + 1790);
        else
          ++*((_DWORD *)this + 1790);
      }
      ++*(_DWORD *)a6;
      goto LABEL_23;
    }
    if ( v24 >= 0x80000 )
      goto LABEL_17;
    if ( (v23 & 0x100000) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 21618;
      goto LABEL_29;
    }
LABEL_23:
    v10 = v29;
    ++v14;
    ++a4;
    if ( v14 >= v15 )
      goto LABEL_33;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 21586;
LABEL_29:
  v11 = -1073741811;
LABEL_30:
  if ( *(_DWORD *)a6 )
  {
    do
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a6 + ++v9) + 104LL), -a5);
    while ( v9 < *(_DWORD *)a6 );
  }
  v10 = v29;
LABEL_33:
  _InterlockedDecrement((volatile signed __int32 *)v10 + 66);
  ExReleasePushLockSharedEx((char *)v10 + 248, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
