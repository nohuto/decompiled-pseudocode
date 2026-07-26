/*
 * XREFs of ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x14000B9E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisFInvokeDirectOidRequest @ 0x14000BBD0 (ndisFInvokeDirectOidRequest.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x140019660 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rbx
  __int64 v3; // rbp
  int v4; // edx
  KIRQL v5; // r12
  unsigned int DirectOidRequestCount; // ecx
  unsigned __int8 v7; // al
  KIRQL v8; // dl
  KSPIN_LOCK *p_Lock; // rcx
  int v10; // r15d
  KIRQL v11; // al

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      25,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v1,
      v3);
  v5 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
  v1->LockThread = KeGetCurrentThread();
  DirectOidRequestCount = v1->DirectOidRequestCount;
  if ( DirectOidRequestCount >= 0x4E20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_qqLd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        11,
        26,
        (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
        (char)v1,
        v3,
        32,
        DirectOidRequestCount);
    }
    v10 = -1073741670;
    v8 = v5;
  }
  else
  {
    v7 = FILTER_TEST_FLAG(v1, 0x10000u);
    v8 = v5;
    v1->LockThread = 0LL;
    p_Lock = &v1->Lock;
    if ( v7 )
    {
      v10 = -1073676286;
      goto LABEL_8;
    }
    ++v1->DirectOidRequestCount;
    KeReleaseSpinLock(p_Lock, v5);
    *(_DWORD *)(v3 + 88) |= 0x20000u;
    v10 = ndisFInvokeDirectOidRequest(&v1->Header, (struct _NDIS_OID_REQUEST *)v3);
    if ( v10 == 259 )
      goto LABEL_9;
    v11 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
    --v1->DirectOidRequestCount;
    v8 = v11;
  }
  v1->LockThread = 0LL;
  p_Lock = &v1->Lock;
LABEL_8:
  KeReleaseSpinLock(p_Lock, v8);
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      27,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v1,
      v3);
  *(_DWORD *)Parameter = v10;
}
