/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x1403A4210
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  char *v7; // rbx
  char v8; // si
  struct _KPRCB *CurrentPrcb; // r15
  PSLIST_ENTRY v10; // rax
  _OWORD *HypercallCachedPages; // rdi
  PHYSICAL_ADDRESS Next; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  int v18; // ecx
  unsigned __int16 v19; // ax
  unsigned int v20; // edi
  struct _KPRCB *v22; // rdi
  __int64 CurrentIrql; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _OWORD *v26; // [rsp+28h] [rbp-E0h]
  __int128 v27; // [rsp+30h] [rbp-D8h] BYREF
  PSLIST_ENTRY v28; // [rsp+40h] [rbp-C8h]
  PHYSICAL_ADDRESS v29; // [rsp+48h] [rbp-C0h]
  __int128 v30; // [rsp+50h] [rbp-B8h] BYREF
  char *v31; // [rsp+60h] [rbp-A8h]
  PHYSICAL_ADDRESS PhysicalAddress; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v35[33]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v36[7]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v37[17]; // [rsp+197h] [rbp+8Fh] BYREF
  _BYTE v38[7]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v39[129]; // [rsp+227h] [rbp+11Fh] BYREF

  v26 = a3;
  v33 = a1;
  v28 = 0LL;
  v29.LowPart = 0;
  v31 = 0LL;
  v27 = 0LL;
  PhysicalAddress.LowPart = 0;
  v30 = 0LL;
  memset_0(v35, 0, 0x100uLL);
  v7 = 0LL;
  v8 = 1;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v10;
    if ( v10 )
    {
      v28 = v10;
      Next = (PHYSICAL_ADDRESS)v10[1].Next;
      LODWORD(v27) = 1;
      *((_QWORD *)&v27 + 1) = CurrentPrcb;
    }
    else
    {
      HypercallCachedPages = (_OWORD *)((unsigned __int64)v39 & 0xFFFFFFFFFFFFF000uLL);
      v8 = 2;
      LODWORD(v27) = 2;
      if ( (((unsigned __int64)v38 ^ (unsigned __int64)v39) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = v38;
      BYTE8(v27) = KeGetCurrentIrql();
      if ( BYTE8(v27) < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      }
      Next = MmGetPhysicalAddress(HypercallCachedPages);
    }
  }
  else
  {
    LODWORD(v27) = 4;
    BYTE8(v27) = KeDisableInterrupts();
    HIDWORD(v27) = 1;
    v8 = 4;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)HypercallCachedPages[1];
  }
  v29 = Next;
  *HypercallCachedPages = 0LL;
  HypercallCachedPages[1] = 0LL;
  HypercallCachedPages[2] = 0LL;
  *((_QWORD *)HypercallCachedPages + 6) = 0LL;
  *(_OWORD *)((char *)HypercallCachedPages + 40) = *v26;
  v34 = 2097153LL;
  memset_0(v35, 0, 0x100uLL);
  v13 = *((unsigned __int16 *)a4 + 4);
  v14 = *a4;
  if ( !(_WORD)v13 )
    goto LABEL_5;
  if ( WORD1(v34) > (unsigned __int16)v13 )
  {
    LOWORD(v34) = v13 + 1;
LABEL_5:
    v35[v13] |= v14;
  }
  v15 = HvlpAffinityToHvProcessorSet(&v34, HypercallCachedPages + 3, (v8 & 2) != 0 ? 64 : 4032);
  if ( v15 == -1 )
  {
    HvlpReleaseHypercallPage((unsigned int *)&v27);
    HypercallCachedPages = (_OWORD *)HvlpAcquireHypercallPage(&v27, 1LL, 0LL);
    *HypercallCachedPages = 0LL;
    HypercallCachedPages[1] = 0LL;
    HypercallCachedPages[2] = 0LL;
    *((_QWORD *)HypercallCachedPages + 6) = 0LL;
    *(_OWORD *)((char *)HypercallCachedPages + 40) = *v26;
    v15 = HvlpAffinityToHvProcessorSet(&v34, HypercallCachedPages + 3, 4032LL);
  }
  *((_DWORD *)HypercallCachedPages + 11) |= 2u;
  v16 = v15 + 64;
  *(_QWORD *)HypercallCachedPages = -1LL;
  *((_QWORD *)HypercallCachedPages + 1) = v33;
  HypercallCachedPages[1] = *a2;
  if ( !a5 )
  {
    v17 = 126;
    goto LABEL_10;
  }
  if ( (HvlpFlags & 8) != 0 )
  {
    v22 = KeGetCurrentPrcb();
    v7 = (char *)RtlpInterlockedPopEntrySList(&v22->HypercallPageList);
    if ( !v7 )
    {
      v24 = -4096LL;
      LODWORD(v30) = 2;
      v7 = (char *)((unsigned __int64)v37 & 0xFFFFFFFFFFFFF000uLL);
      if ( (((unsigned __int64)v36 ^ (unsigned __int64)v37) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        v7 = v36;
      BYTE8(v30) = KeGetCurrentIrql();
      if ( BYTE8(v30) < 2u )
      {
        v25 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v24) = 2;
          KiRaiseIrqlProcessIrqlFlags(v25, v24);
        }
      }
      PhysicalAddress = MmGetPhysicalAddress(v7);
      goto LABEL_22;
    }
    *((_QWORD *)&v30 + 1) = v22;
    LODWORD(v30) = 1;
    v31 = v7;
  }
  else
  {
    LODWORD(v30) = 4;
    BYTE8(v30) = KeDisableInterrupts();
    HIDWORD(v30) = 2;
    v7 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
  }
  PhysicalAddress = *(PHYSICAL_ADDRESS *)(v7 + 16);
LABEL_22:
  v17 = 127;
LABEL_10:
  v18 = (v16 << 14) - 802816;
  if ( v16 <= 0x38 )
    v18 = 114688;
  v19 = HvcallInitiateHypercall(v17 & 0xFC01FFFF | v18 & 0x3FE0000);
  if ( v19 )
  {
    v20 = HvlpHvToNtStatus(v19);
    if ( a5 )
      goto LABEL_16;
  }
  else
  {
    v20 = 0;
    if ( a5 )
    {
      *a5 = *(_OWORD *)v7;
LABEL_16:
      HvlpReleaseHypercallPage((unsigned int *)&v30);
    }
  }
  HvlpReleaseHypercallPage((unsigned int *)&v27);
  return v20;
}
