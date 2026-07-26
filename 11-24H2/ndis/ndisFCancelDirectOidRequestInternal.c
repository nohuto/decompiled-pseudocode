/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1400C7200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140010EE0 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1400482F0 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ndisDoCancelDirectOidRequest @ 0x1400C706C (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *a1)
{
  void *v1; // r14
  struct _NDIS_FILTER_BLOCK *v2; // rdi
  struct _NDIS_FILTER_BLOCK *v3; // rbx
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  bool v5; // r15
  KSPIN_LOCK *NextDirectRequestHandle; // rsi
  KIRQL v7; // dl
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF

  v1 = (void *)a1[3];
  v2 = 0LL;
  v3 = (struct _NDIS_FILTER_BLOCK *)a1[1];
  v4 = 0LL;
  v5 = 0;
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      16,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      (char)v3,
      (char)v1);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(v3, &NewIrql);
  NextDirectRequestHandle = (KSPIN_LOCK *)v3->NextDirectRequestHandle;
  if ( *(_BYTE *)NextDirectRequestHandle == 5 )
  {
    v9 = 0;
    v5 = ndisReferenceRefEx(NextDirectRequestHandle + 39, 2u, (enum _NDIS_REFERENCE_STATUS *)&v9);
    v2 = (struct _NDIS_FILTER_BLOCK *)((unsigned __int64)NextDirectRequestHandle & -(__int64)v5);
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)v3->NextDirectRequestHandle;
  }
  v7 = NewIrql;
  v3->LockThread = 0LL;
  KeReleaseSpinLock(&v3->Lock, v7);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1);
  if ( v5 )
    ndisDereferenceRef(&v2->PnPRef.SpinLock, 2u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      17,
      (struct _GUID *)&WPP_37210d7308e93eba942d1cae1437c40c_Traceguids,
      (char)v3,
      (char)v1);
}
