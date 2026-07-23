/*
 * XREFs of MiAllocateEnclavePages @ 0x1403F85DC
 * Callers:
 *     MiAllocateEnclavePagesForMdl @ 0x1403956D0 (MiAllocateEnclavePagesForMdl.c)
 *     MiReserveEnclavePages @ 0x1403F6D34 (MiReserveEnclavePages.c)
 *     MiGetPageForEnclave @ 0x14046DE64 (MiGetPageForEnclave.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiInsertPageChainHead @ 0x14021CD10 (MiInsertPageChainHead.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiSetPfnBlink @ 0x1403F8930 (MiSetPfnBlink.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 *__fastcall MiAllocateEnclavePages(__int64 a1, int a2, char a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int8 CurrentIrql; // bl
  __int64 *result; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  volatile LONG *v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  unsigned __int8 v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  unsigned int *v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+90h] [rbp+8h]
  int v27; // [rsp+98h] [rbp+10h]

  v26 = a1;
  v5 = (unsigned __int16)KeNumberNodes;
  v6 = (unsigned int)(unsigned __int16)KeNumberNodes * a2;
  v7 = a4;
  *(_OWORD *)a5 = 0LL;
  a5[2] = 0LL;
  v8 = (unsigned int *)(qword_140E2DC10 + 4 * v6);
  v9 = 2LL;
  if ( (a3 & 2) != 0 )
    v10 = 1LL;
  else
    v10 = v5;
  v25 = &v8[v10];
  v11 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v23 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    a1 = v26;
  }
  do
  {
    if ( v11 == v7 )
      break;
    v14 = *(_QWORD *)(a1 + 16);
    v15 = 57216LL * *v8;
    v16 = (volatile LONG *)(v14 + v15 + 57056);
    while ( 1 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v16);
      v17 = *(_QWORD *)(v14 + v15 + 57040);
      if ( v17 == 0x3FFFFFFFFFLL )
        break;
      v18 = 48 * v17 - 0x220000000000LL;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        goto LABEL_17;
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v19);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      ExAcquireSpinLockExclusiveAtDpcLevel(v16);
      if ( *(_QWORD *)(v14 + v15 + 57040) == v17 )
      {
LABEL_17:
        v20 = *(_QWORD *)v18;
        v21 = *(_QWORD *)v18 & 0xFFFFFFFFFFLL;
        v24 = *(_QWORD *)v18;
        v22 = *(_QWORD *)(v18 + 24) & 0xFFFFFFFFFFLL;
        if ( v21 == 0x3FFFFFFFFFLL )
        {
          *(_QWORD *)(v14 + v15 + 57048) = v22;
        }
        else
        {
          MiSetPfnBlink(48 * v21 - 0x220000000000LL, v22, 0LL);
          v20 = v24;
        }
        if ( v22 == 0x3FFFFFFFFFLL )
          *(_QWORD *)(v14 + v15 + 57040) = v21;
        else
          *(_QWORD *)(48 * v22 - 0x220000000000LL) = v20 ^ (*(_QWORD *)(48 * v22 - 0x220000000000LL) ^ v20) & 0xFFFFFF0000000000uLL;
        _InterlockedDecrement64((volatile signed __int64 *)(v14 + v15 + 57024));
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        *(_QWORD *)v18 = 0LL;
        v27 = *(_DWORD *)(v18 + 32);
        HIBYTE(v27) &= ~0x10u;
        *(_DWORD *)(v18 + 32) = v27;
        MiInsertPageChainHead(a5, (__int64 *)v18);
        ++v11;
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = a4;
      if ( v11 == a4 )
        goto LABEL_23;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v16);
LABEL_23:
    a1 = v26;
    ++v8;
  }
  while ( v8 != v25 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = v23;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  }
  result = (__int64 *)v23;
  __writecr8(v23);
  if ( v11 != v7 && (a3 & 1) != 0 )
  {
    for ( result = MiUnlinkPageChainHead((__int64)a5); result; result = MiUnlinkPageChainHead((__int64)a5) )
      MiReturnEnclavePage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(result + 0x44000000000LL) >> 4));
  }
  return result;
}
