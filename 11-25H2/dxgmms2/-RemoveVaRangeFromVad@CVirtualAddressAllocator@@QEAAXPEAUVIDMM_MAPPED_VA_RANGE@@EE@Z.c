/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z @ 0x1400B575C
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1400B723C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RAN.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400F4748 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x140037A68 (--_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        unsigned int *P,
        char a3,
        char a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rsi
  __int64 *v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r8
  char *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdx
  char **v18; // rax
  int v19; // eax

  v4 = P[18];
  v6 = *(_QWORD *)P;
  if ( (v4 & 0x4000) != 0 )
  {
    RtlAvlRemoveNode(v6 + 8 * (((v4 >> 4) & 0x3F) + 12), P + 2);
    P[18] &= ~0x4000u;
    LODWORD(v4) = P[18];
  }
  v10 = (__int64 *)*((_QWORD *)P + 8);
  v11 = (v4 & 0xF) - 1;
  if ( !v11 )
  {
LABEL_4:
    if ( !v10 )
      goto LABEL_13;
    v12 = P + 8;
    v13 = *((_QWORD *)P + 4);
    if ( v13 )
    {
      if ( *(_QWORD **)(v13 + 8) != v12 )
        goto LABEL_25;
      v14 = (_QWORD *)*((_QWORD *)P + 5);
      if ( (_QWORD *)*v14 != v12 )
        goto LABEL_25;
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v12 = 0LL;
    }
    v15 = (char *)(P + 12);
    if ( !*((_QWORD *)P + 6) )
      goto LABEL_13;
    v16 = *(_QWORD *)*v10;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16 + 192, 0LL);
    v17 = *(_QWORD *)v15;
    if ( *(char **)(*(_QWORD *)v15 + 8LL) == v15 )
    {
      v18 = (char **)*((_QWORD *)P + 7);
      if ( *v18 == v15 )
      {
        *v18 = (char *)v17;
        *(_QWORD *)(v17 + 8) = v18;
        *(_QWORD *)v15 = 0LL;
        ExReleasePushLockExclusiveEx(v16 + 192, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_13;
      }
    }
LABEL_25:
    __fastfail(3u);
  }
  v19 = v11 - 3;
  if ( !v19 )
  {
    v10 = (__int64 *)v10[7];
    goto LABEL_4;
  }
  if ( v19 == 1 )
  {
    v10 = (__int64 *)v10[3];
    goto LABEL_4;
  }
LABEL_13:
  --*(_DWORD *)(v6 + 76);
  if ( a4 )
    *(_QWORD *)P = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 34, 0xFFFFFFFF) == 1 )
    VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'((VIDMM_MAPPED_VA_RANGE *)P);
  if ( a3 && (*(_BYTE *)(v6 + 72) & 0xF) == 3 && !*(_DWORD *)(v6 + 76) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)v6);
}
