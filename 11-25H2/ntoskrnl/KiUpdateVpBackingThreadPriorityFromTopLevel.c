/*
 * XREFs of KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1403E8170
 * Callers:
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1403E7D90 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeSetThreadSchedulerAssist @ 0x1403E7EF8 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404B5390 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x1403E9B44 (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403F0F60 (KiPrcbArrayForIsolationWidth.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1404303E4 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1404C7758 (EtwTraceXSchedulerPriorityUpdate.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityFromTopLevel(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  bool v4; // zf
  int v7; // eax
  int v8; // r8d
  int v9; // r15d
  char v10; // dl
  char v11; // al
  char v12; // al
  int v13; // esi
  int v14; // eax
  int v15; // edi
  char v16; // r14
  unsigned __int8 v17; // al
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // r12
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+30h] [rbp-39h] BYREF
  __int64 v31; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-21h] BYREF
  volatile __int64 *v34; // [rsp+50h] [rbp-19h] BYREF
  __int64 v35; // [rsp+58h] [rbp-11h] BYREF
  __int64 v36; // [rsp+60h] [rbp-9h] BYREF
  __int64 v37; // [rsp+68h] [rbp-1h] BYREF
  __int64 v38; // [rsp+70h] [rbp+7h] BYREF
  _OWORD v39[4]; // [rsp+78h] [rbp+Fh] BYREF
  int v40; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v41; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v36 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  if ( !v4 )
    _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v7 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v36);
  v8 = *(_DWORD *)(BugCheckParameter1 + 1024);
  v9 = v7;
  if ( v7 != v8 )
  {
    v10 = *(_BYTE *)((char)v7 + BugCheckParameter1 + 824);
    if ( v10 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v7, 1uLL, 0LL);
    *(_BYTE *)((char)v7 + BugCheckParameter1 + 824) = v10 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << v7;
    if ( v8 != 32 )
    {
      v11 = *(_BYTE *)((char)v8 + BugCheckParameter1 + 824);
      if ( !v11 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v8, 2uLL, 0LL);
      v12 = v11 - 1;
      *(_BYTE *)((char)v8 + BugCheckParameter1 + 824) = v12;
      if ( !v12 )
        *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v8;
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v9;
  }
  v13 = *(char *)(BugCheckParameter1 + 195);
  if ( !a3 )
  {
    *(_BYTE *)(BugCheckParameter1 + 870) = 0;
    *(_WORD *)(BugCheckParameter1 + 518) &= 0xF00Fu;
  }
  v14 = KiComputeThreadPriority(BugCheckParameter1, 0);
  v15 = v14;
  if ( v14 != v13 )
    KiSetPriorityThread((_BYTE *)BugCheckParameter1, a2, v14);
  v40 = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
  KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v40);
  v16 = v40;
  if ( v40 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
  {
    v35 = 0LL;
    v39[0] = 0LL;
    v17 = KiAcquireThreadStateLockForWrite(BugCheckParameter1, &v31, &v35, &v34, (volatile signed __int64 **)v39);
    *(_BYTE *)(BugCheckParameter1 + 516) = v16;
    v18 = v31;
    v19 = (unsigned int)v17 - 2;
    if ( v17 == 2 )
    {
      if ( !*(_QWORD *)(v31 + 16) )
      {
        v25 = (*(_DWORD *)(BugCheckParameter1 + 120) >> 1) & 1;
        v38 = v31;
        v33 = 0LL;
        v30 = 0;
        KiPrcbArrayForIsolationWidth(&v38, v25, &v33, &v30);
        if ( v30 )
        {
          v26 = v33;
          v27 = v30;
          do
          {
            v28 = *v26;
            *(_BYTE *)(*(_QWORD *)(*v26 + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v26 + 56) + 64LL)) & 7;
            KiUpdateThreadQosGroupingSummaries(v28);
            Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v29);
            ++v26;
            --v27;
          }
          while ( v27 );
        }
      }
    }
    else if ( v17 == 3 )
    {
      v20 = (*(_DWORD *)(BugCheckParameter1 + 120) >> 1) & 1;
      v37 = v31;
      v32 = 0LL;
      v41 = 0;
      KiPrcbArrayForIsolationWidth(&v37, v20, &v32, &v41);
      if ( v41 )
      {
        v21 = v32;
        v22 = v41;
        do
        {
          v23 = *v21;
          *(_BYTE *)(*(_QWORD *)(*v21 + 56) + 64LL) ^= (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v21 + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries(v23);
          Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v24);
          ++v21;
          --v22;
        }
        while ( v22 );
      }
    }
    KiReleaseThreadStateLock(v19, v18, &v35, v34, (volatile signed __int64 **)v39);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  if ( v13 != v15 && (BYTE4(xmmword_140FC5B10) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v13, v9, v15, (__int64)&v36);
}
