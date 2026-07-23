/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2FF84
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x1407C6738 (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403B7F5C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403B8688 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     RtlpFcWriteHighLowHigh @ 0x1404BDC88 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14077E250 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     CmFcpUnmapSection @ 0x140A30204 (CmFcpUnmapSection.c)
 *     RtlpFcUpdateUsageTriggers @ 0x140A30228 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140A30428 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A3050C (CmFcpManagerPublishChangeNotifications.c)
 *     CmFcpMapSection @ 0x140AA3A88 (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x140ABC9D8 (CmFcpManagerCreateSection.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureUsageSubscriptions(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // rcx
  int updated; // eax
  int v14; // edi
  __int64 *v15; // rax
  __int64 *v16; // rdi
  void *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rsi
  _BYTE *v21; // rbx
  __int64 v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[48]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int *v33; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v34[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]

  v3 = a3;
  v28 = 0LL;
  v24 = 0LL;
  Object = 0LL;
  v27 = 0LL;
  memset_0(v31, 0, 0x60uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&stru_140EF6B70, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6B70, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6B70, v6, (__int64)&stru_140EF6B70);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)&unk_140EF6BE8, (__int64)&v28, &v24);
  v10 = v24;
  v11 = v28 + 1;
  v29 = 0LL;
  if ( v28 == -1 )
    v11 = 1LL;
  v25 = v11;
  v12 = *(_QWORD *)(v24 + 56);
  v32 = v11;
  updated = RtlpFcUpdateUsageTriggers(v12, v9, a2, v3, 0LL, &v29);
  v14 = updated;
  if ( updated >= 0 )
    goto LABEL_8;
  if ( updated == -2147483643 )
  {
    v14 = CmFcpManagerCreateSection(v29, v11, CmFcSystemManager[0], &v25);
    if ( v14 >= 0 )
    {
      v14 = CmFcpMapSection(&v25, &v32);
      if ( v14 >= 0 )
      {
        v14 = RtlpFcUpdateUsageTriggers(*(_QWORD *)(v10 + 56), v23, a2, v3, v33, v34);
        if ( v14 >= 0 )
        {
          if ( (int)RtlpFcValidateFeatureUsageSubscriptionBuffer(v33, v34[0]) >= 0 )
          {
LABEL_8:
            RtlpFcBufferManagerDereferenceBuffers((__int64)&unk_140EF6BE8, v10);
            v15 = KeAbPreAcquire((__int64)&stru_140EF6B68, 0LL);
            v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6B68, 0LL);
            v16 = v15;
            if ( v7 )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6B68, v15, (__int64)&stru_140EF6B68);
            if ( v16 )
              *((_BYTE *)v16 + 10) = 1;
            v17 = (void *)qword_140EF6BC0;
            qword_140EF6BB8 = v25;
            qword_140EF6BC0 = (__int64)Object;
            Object = v17;
            qword_140EF6BC8 = v27;
            RtlpFcBufferManagerUpdateBuffers(&unk_140EF6BE8, v11, v31);
            RtlpFcWriteHighLowHigh((__int64)&qword_140EF6B78, v11);
            RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v11);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B68, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B68);
            KeAbPostRelease((ULONG_PTR)&stru_140EF6B68);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B70);
            KeAbPostRelease((ULONG_PTR)&stru_140EF6B70);
            CmFcpManagerPublishChangeNotifications(v18, v11);
            v14 = 0;
            goto LABEL_17;
          }
          if ( (unsigned int)dword_140E09DD0 > 5 && tlgKeywordOn((__int64)&dword_140E09DD0, 0x400000000001LL) )
          {
            v30 = 0x1000000LL;
            v36 = &v30;
            v37 = 8LL;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E09DD0,
              (unsigned __int8 *)byte_14005468B,
              0LL,
              0LL,
              3u,
              &v35);
          }
          v14 = -1073741595;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6B70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6B70);
  KeAbPostRelease((ULONG_PTR)&stru_140EF6B70);
  v19 = v24;
  if ( v24 )
    RtlpFcBufferManagerDereferenceBuffers((__int64)&unk_140EF6BE8, v24);
LABEL_17:
  v20 = 4LL;
  v21 = v31;
  do
  {
    CmFcpUnmapSection(v21, v19);
    v21 += 24;
    --v20;
  }
  while ( v20 );
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
