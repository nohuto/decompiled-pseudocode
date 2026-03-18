/*
 * XREFs of PsChargeProcessNonPagedPoolQuota @ 0x1403C5810
 * Callers:
 *     MiFreeVadRange @ 0x1402A45F8 (MiFreeVadRange.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1404B0C38 (MiCreateCloneChain.c)
 *     MiCreateAweInfoBitMap @ 0x1407E9580 (MiCreateAweInfoBitMap.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     MiCreatePlaceholderStorage @ 0x1408F9230 (MiCreatePlaceholderStorage.c)
 *     MiCreateVadEventBitmap @ 0x1408F94AC (MiCreateVadEventBitmap.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiBuildNewCloneDescriptor @ 0x140A50BA0 (MiBuildNewCloneDescriptor.c)
 *     MiCreateRotateView @ 0x140A65608 (MiCreateRotateView.c)
 *     ExEnableHandleTracing @ 0x140AB59E8 (ExEnableHandleTracing.c)
 *     ViIrpAllocateLockedPacket @ 0x140B7E0DC (ViIrpAllocateLockedPacket.c)
 * Callees:
 *     PspExpandQuota @ 0x1403C6748 (PspExpandQuota.c)
 */

__int64 __fastcall PsChargeProcessNonPagedPoolQuota(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v5; // rsi
  char v6; // bp
  unsigned __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 i; // [rsp+50h] [rbp+8h] BYREF

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 0LL;
  v5 = *(unsigned __int64 **)(a1 + 760);
  v6 = PspResourceFlags[0];
  _m_prefetchw(v5);
  v7 = *v5;
  _InterlockedOr(v19, 0);
  v8 = 0;
  while ( 2 )
  {
    v9 = v5[8];
LABEL_5:
    for ( i = v9; ; v9 = i )
    {
      v10 = v7 + a2;
      if ( v7 + a2 < v7 )
        return (unsigned int)dword_140FC6354;
      if ( v10 <= v9 )
        break;
      if ( (v6 & 1) == 0 || !v5[10] )
        return (unsigned int)dword_140FC6354;
      v17 = _InterlockedExchange64((volatile __int64 *)v5 + 9, 0LL);
      if ( v17 )
      {
        v9 = v17 + _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, v17);
        goto LABEL_5;
      }
      if ( !(unsigned __int8)PspExpandQuota(0, (_DWORD)v5, v7, a2, (__int64)&i) )
        return (unsigned int)dword_140FC6354;
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v5, v10, v7);
    v11 = v7 == v12;
    v7 = v12;
    if ( !v11 )
      continue;
    break;
  }
  _m_prefetchw(v5 + 1);
  v13 = v5[1];
  do
  {
    if ( v10 <= v13 )
      break;
    v16 = v13;
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 1, v10, v13);
  }
  while ( v13 != v16 );
  if ( a1 && (v6 & 4) != 0 )
  {
    v14 = a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 512), a2);
    _m_prefetchw((const void *)(a1 + 528));
    v15 = *(_QWORD *)(a1 + 528);
    do
    {
      if ( v14 <= v15 )
        break;
      v18 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 528), v14, v15);
    }
    while ( v15 != v18 );
  }
  return v8;
}
