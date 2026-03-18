/*
 * XREFs of KasanDriverUnloadImage @ 0x1405A99B0
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     KasanUnloadInfoCompare @ 0x1405A9DC0 (KasanUnloadInfoCompare.c)
 *     KasaniReportTelemetry @ 0x1405AA1D0 (KasaniReportTelemetry.c)
 *     KcsanReportTelemetry @ 0x1405AE360 (KcsanReportTelemetry.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  __int64 v2; // rbp
  KIRQL v3; // al
  __int64 v4; // r8
  unsigned __int64 v5; // rbx
  KIRQL v6; // si
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  ULONG_PTR *v11; // r14
  ULONG_PTR v12; // rdi
  ULONG_PTR v13; // r9
  _BYTE *v14; // rsi

  if ( !byte_140FCDC28 )
    return;
  if ( KcsaniEnabled )
    KcsanReportTelemetry();
  if ( byte_140FCDC29 )
    KasaniReportTelemetry();
  v2 = *(_QWORD *)(a1 + 48);
  v3 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
  v5 = KasanDriverUnloadInfos;
  v6 = v3;
  if ( (qword_140E66298 & 1) != 0 )
  {
    if ( !KasanDriverUnloadInfos )
      goto LABEL_29;
    v5 = (unsigned __int64)&KasanDriverUnloadInfos ^ KasanDriverUnloadInfos;
  }
  v7 = qword_140E66298 & 1;
  if ( !v5 )
    goto LABEL_29;
  do
  {
    v8 = KasanUnloadInfoCompare(v2, v5, v4);
    if ( v8 < 0 )
    {
      v9 = *(_QWORD *)v5;
      if ( v7 && v9 )
        goto LABEL_33;
      goto LABEL_13;
    }
    if ( v8 <= 0 )
      break;
    v9 = *(_QWORD *)(v5 + 8);
    if ( v7 && v9 )
    {
LABEL_33:
      v5 ^= v9;
      continue;
    }
LABEL_13:
    v5 = v9;
  }
  while ( v5 );
  if ( !v5 )
  {
LABEL_29:
    KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v6);
    return;
  }
  RtlRbRemoveNode((unsigned __int64 *)&KasanDriverUnloadInfos, (unsigned __int64 *)v5);
  KeReleaseSpinLock(&KasanDriverUnloadInfosLock, v6);
  v10 = 0LL;
  if ( *(_QWORD *)(v5 + 32) )
  {
    v11 = (ULONG_PTR *)(v5 + 40);
    do
    {
      v12 = v11[1];
      v13 = *v11;
      if ( byte_140FCDC28 )
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
      ++v10;
      v11 += 2;
    }
    while ( v10 < *(_QWORD *)(v5 + 32) );
  }
  ExFreePoolWithTag((PVOID)v5, 0);
}
