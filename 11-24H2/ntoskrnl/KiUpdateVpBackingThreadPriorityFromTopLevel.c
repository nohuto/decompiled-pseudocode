/*
 * XREFs of KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1404993FC
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x140483038 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1404992B0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x1404AF630 (KiUpdateVpBackingThreadPriorityOnPriorityQuery.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402D8644 (KiReadGuestSchedulerAssistPriority.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x1404C1AE8 (EtwTraceXSchedulerPriorityUpdate.c)
 *     KiCheckAssistDataForBamQosLevelOverride @ 0x1404DD3DC (KiCheckAssistDataForBamQosLevelOverride.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KiUpdateVpBackingThreadPriorityFromTopLevel(ULONG_PTR BugCheckParameter1, __int64 a2, char a3)
{
  bool v4; // zf
  int v7; // eax
  int v8; // r8d
  int v9; // r12d
  char v10; // dl
  char v11; // al
  char v12; // al
  int v13; // r14d
  unsigned int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // edi
  char v17; // si
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 *v24; // r15
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 *v31; // r15
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned int v35; // [rsp+30h] [rbp-39h] BYREF
  __int64 v36; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-21h] BYREF
  volatile __int64 *v39; // [rsp+50h] [rbp-19h] BYREF
  __int64 v40; // [rsp+58h] [rbp-11h] BYREF
  __int64 v41; // [rsp+60h] [rbp-9h] BYREF
  __int64 v42; // [rsp+68h] [rbp-1h] BYREF
  __int64 v43; // [rsp+70h] [rbp+7h] BYREF
  _OWORD v44[4]; // [rsp+78h] [rbp+Fh] BYREF
  int v45; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v46; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) == 0;
  v41 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  if ( !v4 )
    _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  v7 = KiReadGuestSchedulerAssistPriority(BugCheckParameter1, &v41);
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
  v14 = KiComputeThreadPriority(BugCheckParameter1, 0, 0);
  v16 = v14;
  if ( v14 != v13 )
    KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, a2, v14, v15);
  v45 = *(unsigned __int8 *)(BugCheckParameter1 + 1122);
  KiCheckAssistDataForBamQosLevelOverride(BugCheckParameter1, &v45);
  v17 = v45;
  if ( v45 != *(unsigned __int8 *)(BugCheckParameter1 + 516) )
  {
    v40 = 0LL;
    v44[0] = 0LL;
    v18 = KiAcquireThreadStateLockForWrite(BugCheckParameter1, &v36, &v40, &v39, (volatile signed __int64 **)v44);
    *(_BYTE *)(BugCheckParameter1 + 516) = v17;
    v19 = v36;
    v20 = (unsigned int)v18 - 2;
    if ( v18 == 2 )
    {
      if ( !*(_QWORD *)(v36 + 16) )
      {
        v28 = (*(_DWORD *)(BugCheckParameter1 + 120) >> 1) & 1;
        v43 = v36;
        v38 = 0LL;
        v35 = 0;
        KiPrcbArrayForIsolationWidth((__int64)&v43, v28, &v38, &v35);
        v30 = v35;
        if ( v35 )
        {
          v31 = v38;
          v32 = v35;
          do
          {
            v33 = *v31;
            v34 = *(_QWORD *)(*v31 + 56);
            LOBYTE(v29) = (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(v34 + 64)) & 7;
            *(_BYTE *)(v34 + 64) ^= v29;
            KiUpdateThreadQosGroupingSummaries(v33, v30, v29, v34);
            ++v31;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else if ( v18 == 3 )
    {
      v21 = (*(_DWORD *)(BugCheckParameter1 + 120) >> 1) & 1;
      v42 = v36;
      v37 = 0LL;
      v46 = 0;
      KiPrcbArrayForIsolationWidth((__int64)&v42, v21, &v37, &v46);
      v23 = v46;
      if ( v46 )
      {
        v24 = v37;
        v25 = v46;
        do
        {
          v26 = *v24;
          v27 = *(_QWORD *)(*v24 + 56);
          LOBYTE(v23) = (*(_BYTE *)(BugCheckParameter1 + 516) ^ *(_BYTE *)(v27 + 64)) & 7;
          *(_BYTE *)(v27 + 64) ^= v23;
          KiUpdateThreadQosGroupingSummaries(v26, v23, v27, v22);
          ++v24;
          --v25;
        }
        while ( v25 );
      }
    }
    KiReleaseThreadStateLock(v20, v19, &v40, v39, (volatile signed __int64 **)v44);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0xFFEFFFFF);
  if ( v13 != v16 && (BYTE4(xmmword_140FC6B50) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(BugCheckParameter1, v13, v9, v16, (__int64)&v41);
}
