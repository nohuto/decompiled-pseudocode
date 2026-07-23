/*
 * XREFs of HalpDmaInsertDeviceObjectByToken @ 0x14053BB8C
 * Callers:
 *     HalpDmaCheckAdapterToken @ 0x14053B920 (HalpDmaCheckAdapterToken.c)
 *     HalpDmaLinkDeviceObjectByToken @ 0x1406FB1D0 (HalpDmaLinkDeviceObjectByToken.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpDmaInsertDeviceObjectByToken(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  KIRQL v7; // bp
  __int64 *i; // rax
  __int64 Pool2; // rax
  __int64 *v10; // rcx

  v4 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&HalpDmaPdoListLock);
  for ( i = (__int64 *)HalpDmaPdoList; i != &HalpDmaPdoList; i = (__int64 *)*i )
  {
    if ( i[2] == a1 )
    {
      if ( !i[3] )
        i[3] = a2;
      goto LABEL_12;
    }
  }
  Pool2 = ExAllocatePool2(0x42uLL, 0x28uLL, 0x446C6148u);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_QWORD *)(Pool2 + 24) = a2;
    *(_BYTE *)(Pool2 + 32) = a3;
    v10 = (__int64 *)qword_140FC3318;
    if ( *(__int64 **)qword_140FC3318 != &HalpDmaPdoList )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &HalpDmaPdoList;
    *(_QWORD *)(Pool2 + 8) = v10;
    *v10 = Pool2;
    qword_140FC3318 = Pool2;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_12:
  KeReleaseSpinLock(&HalpDmaPdoListLock, v7);
  return v4;
}
