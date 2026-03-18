/*
 * XREFs of ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAUVIDMM_PRIMARIES_REFERENCES@@@Z @ 0x140113980
 * Callers:
 *     VidMmReferenceWrittenPrimaries @ 0x1400382B0 (VidMmReferenceWrittenPrimaries.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140033DC0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *const a4,
        unsigned int a5,
        struct VIDMM_PRIMARIES_REFERENCES *a6)
{
  unsigned int v8; // edi
  struct DXGPROCESS *v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // r10d
  unsigned int v13; // eax
  __int64 v14; // rsi
  int v15; // ecx
  __int64 v16; // rsi
  struct DXGDEVICE *v17; // rdx
  volatile signed __int32 *v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-58h]
  _BYTE v27[8]; // [rsp+58h] [rbp-50h] BYREF
  DXGPUSHLOCK *v28; // [rsp+60h] [rbp-48h]
  int v29; // [rsp+68h] [rbp-40h]

  v8 = 0;
  Current = DXGPROCESS::GetCurrent();
  v9 = Current;
  v10 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)Current + 31, 0);
  DXGPUSHLOCK::AcquireShared(v28);
  v11 = 0;
  v12 = a3;
  v29 = 1;
  *(_DWORD *)a6 = 0;
  if ( !a3 )
    goto LABEL_29;
  while ( 1 )
  {
    v13 = (*a4 >> 6) & 0xFFFFFF;
    if ( v13 >= *((_DWORD *)v9 + 74) )
      break;
    v14 = 16LL * v13 + *((_QWORD *)v9 + 35);
    if ( ((*a4 >> 25) & 0x60) != (*(_BYTE *)(v14 + 8) & 0x60) )
      break;
    if ( (*(_DWORD *)(v14 + 8) & 0x2000) != 0 )
      break;
    v15 = *(_DWORD *)(v14 + 8) & 0x1F;
    if ( !v15 )
      break;
    if ( v15 != 5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(v24, 0x40000LL);
      break;
    }
    v16 = *(_QWORD *)v14;
    if ( !v16 )
      break;
    v17 = *(struct DXGDEVICE **)(v16 + 8);
    if ( v17 != a2 )
    {
      WdLogSingleEntry2(1LL, v17, a2);
      WdLogGlobalForLineNumber = 21210;
      DxgkLogInternalTriageEvent(v23, 0x40000LL);
      goto LABEL_26;
    }
    v18 = *(volatile signed __int32 **)(v16 + 24);
    v19 = **(_QWORD **)v18;
    v20 = **(_DWORD **)(v19 + 376);
    v21 = (v20 >> 12) | (v20 | ((v20 | (v20 >> 5)) >> 6)) & 0x80000;
    if ( (v20 & 0x200000) != 0 )
    {
      *((_DWORD *)a6 + 34) |= 1u;
      if ( v21 < 0x80000 )
        goto LABEL_20;
LABEL_14:
      if ( *(_BYTE *)(v19 + 41) )
      {
        WdLogSingleEntry1(3LL, v19);
        WdLogGlobalForLineNumber = 21258;
        v10 = -1071775482;
        goto LABEL_27;
      }
      _InterlockedAdd(v18 + 26, a5);
      *((_QWORD *)a6 + *(unsigned int *)a6 + 1) = v18;
      if ( *(_DWORD *)a6 >= 0x10u )
      {
        IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
        v12 = a3;
        if ( IsEnabledDeviceUsageNoInline )
          _InterlockedIncrement((volatile signed __int32 *)this + 1790);
        else
          ++*((_DWORD *)this + 1790);
      }
      ++*(_DWORD *)a6;
      goto LABEL_20;
    }
    if ( v21 >= 0x80000 )
      goto LABEL_14;
    if ( (v20 & 0x100000) == 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 21234;
      goto LABEL_26;
    }
LABEL_20:
    ++v11;
    ++a4;
    if ( v11 >= v12 )
      goto LABEL_29;
    v9 = Current;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 21202;
LABEL_26:
  v10 = -1073741811;
LABEL_27:
  if ( *(_DWORD *)a6 )
  {
    do
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)a6 + ++v8) + 104LL), -a5);
    while ( v8 < *(_DWORD *)a6 );
  }
LABEL_29:
  _InterlockedDecrement((volatile signed __int32 *)v28 + 4);
  ExReleasePushLockSharedEx(v28, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
