/*
 * XREFs of EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14064DD30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     EtwpCoverageRecord @ 0x1408DC9D4 (EtwpCoverageRecord.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageHighIrqlCPWorkItemCallback(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdi
  _QWORD **v4; // rsi
  KIRQL v5; // al
  _QWORD *v6; // rbx
  KIRQL v7; // dl
  int v8; // r14d
  _QWORD *v9; // rax
  unsigned __int64 v10; // r15
  _BYTE *v11; // rbp
  _OWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v1 = *a1;
  v13 = 0;
  v2 = v1 + 24;
  memset(v12, 0, 24);
  v4 = (_QWORD **)(v2 + 16);
  while ( 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
    v6 = *v4;
    v7 = v5;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v6[1] != v4 || (v9 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v4 = v9;
    v8 = 1;
    v9[1] = v4;
LABEL_8:
    v10 = v6[3];
    v11 = (_BYTE *)v6[4];
    v6[4] = v10;
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
    while ( (unsigned __int64)v11 < v10 )
    {
      *(_QWORD *)((char *)v12 + 12) = 0LL;
      DWORD1(v12[1]) = 0;
      *(_QWORD *)&v12[0] = v11;
      DWORD2(v12[0]) = TelemetryCoverageStringHashInternal(v11, &v13);
      EtwpCoverageRecord(a1, v12);
      v11 += (unsigned int)(v13 + 1);
    }
    if ( v8 )
      ExFreePoolWithTag(v6, 0x56777445u);
  }
  v6 = *(_QWORD **)(v2 + 8);
  if ( v6[4] < v6[3] )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v6[3] = v6 + 5;
  v6[4] = v6 + 5;
  *(_DWORD *)(v2 + 72) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
}
