/*
 * XREFs of ?ndisFDoDirectOidRequestInternal@@YAXPEAX@Z @ 0x1400261B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1400206E0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ndisFInvokeDirectOidRequest @ 0x1400263A0 (ndisFInvokeDirectOidRequest.c)
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 */

void __fastcall ndisFDoDirectOidRequestInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rbx
  __int64 v3; // rbp
  int v4; // edx
  KIRQL v5; // r12
  unsigned int DirectOidRequestCount; // ecx
  bool v7; // al
  KIRQL v8; // dl
  KSPIN_LOCK *p_Lock; // rcx
  int v10; // r15d
  KIRQL v11; // al

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v1,
      v3);
  v5 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
  v1->LockThread = KeGetCurrentThread();
  DirectOidRequestCount = v1->DirectOidRequestCount;
  if ( DirectOidRequestCount >= 0x4E20 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
    v7 = FILTER_TEST_FLAG(v1, 0x10000);
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
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x1Bu,
      (struct _GUID *)&WPP_fdf545dd66dd39d1f17f4251088b9525_Traceguids,
      (char)v1,
      v3);
  *(_DWORD *)Parameter = v10;
}
