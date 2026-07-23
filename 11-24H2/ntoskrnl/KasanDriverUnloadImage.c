/*
 * XREFs of KasanDriverUnloadImage @ 0x1405A6920
 * Callers:
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KasanUnloadInfoCompare @ 0x1405A6D30 (KasanUnloadInfoCompare.c)
 *     KasaniReportTelemetry @ 0x1405A7140 (KasaniReportTelemetry.c)
 *     KcsanReportTelemetry @ 0x1405AB2D0 (KcsanReportTelemetry.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  __int64 v4; // r8
  unsigned __int64 Root; // rbx
  KIRQL v6; // si
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  _RTL_BALANCED_NODE *v10; // rbp
  ULONG_PTR *v11; // r14
  ULONG_PTR v12; // rdi
  ULONG_PTR v13; // r9
  _BYTE *v14; // rsi

  if ( !byte_140FCECA8 )
    return;
  if ( KcsaniEnabled )
    KcsanReportTelemetry();
  if ( byte_140FCECA9 )
    KasaniReportTelemetry();
  v2 = *(_QWORD *)(a1 + 48);
  v3 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
  Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
  v6 = v3;
  if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) != 0 )
  {
    if ( !KasanDriverUnloadInfos.Root )
      goto LABEL_29;
    Root = (unsigned __int64)&KasanDriverUnloadInfos ^ (unsigned __int64)KasanDriverUnloadInfos.Root;
  }
  v7 = *(_BYTE *)&KasanDriverUnloadInfos.0 & 1;
  if ( !Root )
    goto LABEL_29;
  do
  {
    v8 = KasanUnloadInfoCompare(v2, Root, v4);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)Root;
      if ( v7 && v9 )
        goto LABEL_33;
      goto LABEL_13;
    }
    if ( v8 <= 0 )
      break;
    v9 = *(_QWORD *)(Root + 8);
    if ( v7 && v9 )
    {
LABEL_33:
      Root ^= v9;
      continue;
    }
LABEL_13:
    Root = v9;
  }
  while ( Root );
  if ( !Root )
  {
LABEL_29:
    KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v6);
    return;
  }
  RtlRbRemoveNode(&KasanDriverUnloadInfos, (PRTL_BALANCED_NODE)Root);
  KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v6);
  v10 = 0LL;
  if ( *(_QWORD *)(Root + 32) )
  {
    v11 = (ULONG_PTR *)(Root + 40);
    do
    {
      v12 = v11[1];
      v13 = *v11;
      if ( byte_140FCECA8 )
      {
        if ( v13 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v13, 0LL);
        if ( (v13 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v13, 8uLL);
        if ( v13 + v12 < v13 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v13, v11[1]);
        v14 = (_BYTE *)(KasaniShadow + ((v13 + 0x800000000000LL) >> 3));
        if ( v12 >> 3 )
        {
          memset_0((void *)(KasaniShadow + ((v13 + 0x800000000000LL) >> 3)), 0, v12 >> 3);
          v14 += v12 >> 3;
        }
        if ( (v12 & 7) != 0 )
          *v14 = v12 & 7;
      }
      v10 = (_RTL_BALANCED_NODE *)((char *)v10 + 1);
      v11 += 2;
    }
    while ( (unsigned __int64)v10 < *(_QWORD *)(Root + 32) );
  }
  ExFreePoolWithTag((PVOID)Root, 0);
}
