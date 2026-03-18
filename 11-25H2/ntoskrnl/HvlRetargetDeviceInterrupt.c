/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x14026C870
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14026D37C (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char *v10; // rbx
  char v11; // si
  struct _KPRCB *CurrentPrcb; // r15
  PSLIST_ENTRY v13; // rax
  _OWORD *HypercallCachedPages; // rdi
  PHYSICAL_ADDRESS Next; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // esi
  PHYSICAL_ADDRESS PhysicalAddress; // r8
  __int64 v24; // rax
  int v25; // ecx
  unsigned __int16 v26; // ax
  unsigned int v27; // edi
  struct _KPRCB *v29; // rdi
  __int64 CurrentIrql; // rcx
  __int64 v31; // rcx
  _OWORD *v32; // [rsp+28h] [rbp-E0h]
  __int128 v33; // [rsp+30h] [rbp-D8h] BYREF
  PSLIST_ENTRY v34; // [rsp+40h] [rbp-C8h]
  PHYSICAL_ADDRESS v35; // [rsp+48h] [rbp-C0h]
  __int128 v36; // [rsp+50h] [rbp-B8h] BYREF
  char *v37; // [rsp+60h] [rbp-A8h]
  PHYSICAL_ADDRESS v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v41[33]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v42[7]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v43[17]; // [rsp+197h] [rbp+8Fh] BYREF
  _BYTE v44[7]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v45[129]; // [rsp+227h] [rbp+11Fh] BYREF

  v32 = a3;
  v39 = a1;
  v34 = 0LL;
  v35.LowPart = 0;
  v37 = 0LL;
  v33 = 0LL;
  v38.LowPart = 0;
  v36 = 0LL;
  memset_0(v41, 0, 0x100uLL);
  v10 = 0LL;
  v11 = 1;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    HypercallCachedPages = v13;
    if ( v13 )
    {
      v34 = v13;
      Next = (PHYSICAL_ADDRESS)v13[1].Next;
      LODWORD(v33) = 1;
      *((_QWORD *)&v33 + 1) = CurrentPrcb;
    }
    else
    {
      HypercallCachedPages = (_OWORD *)((unsigned __int64)v45 & 0xFFFFFFFFFFFFF000uLL);
      v11 = 2;
      LODWORD(v33) = 2;
      if ( (((unsigned __int64)v44 ^ (unsigned __int64)v45) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        HypercallCachedPages = v44;
      BYTE8(v33) = KeGetCurrentIrql();
      if ( BYTE8(v33) < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      }
      Next = MmGetPhysicalAddress(HypercallCachedPages);
    }
  }
  else
  {
    LODWORD(v33) = 4;
    BYTE8(v33) = KeDisableInterrupts(v8, v7, v9);
    HIDWORD(v33) = 1;
    v11 = 4;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (PHYSICAL_ADDRESS)HypercallCachedPages[1];
  }
  v35 = Next;
  *HypercallCachedPages = 0LL;
  HypercallCachedPages[1] = 0LL;
  HypercallCachedPages[2] = 0LL;
  *((_QWORD *)HypercallCachedPages + 6) = 0LL;
  *(_OWORD *)((char *)HypercallCachedPages + 40) = *v32;
  v40 = 2097153LL;
  memset_0(v41, 0, 0x100uLL);
  v16 = *((unsigned __int16 *)a4 + 4);
  v17 = *a4;
  if ( !(_WORD)v16 )
    goto LABEL_5;
  if ( WORD1(v40) > (unsigned __int16)v16 )
  {
    LOWORD(v40) = v16 + 1;
LABEL_5:
    v41[v16] |= v17;
  }
  v18 = HvlpAffinityToHvProcessorSet(&v40, HypercallCachedPages + 3, (v11 & 2) != 0 ? 64 : 4032);
  if ( v18 == -1 )
  {
    HvlpReleaseHypercallPage(&v33);
    HypercallCachedPages = (_OWORD *)HvlpAcquireHypercallPage(&v33, 1LL, 0LL);
    *HypercallCachedPages = 0LL;
    HypercallCachedPages[1] = 0LL;
    HypercallCachedPages[2] = 0LL;
    *((_QWORD *)HypercallCachedPages + 6) = 0LL;
    *(_OWORD *)((char *)HypercallCachedPages + 40) = *v32;
    v18 = HvlpAffinityToHvProcessorSet(&v40, HypercallCachedPages + 3, 4032LL);
  }
  *((_DWORD *)HypercallCachedPages + 11) |= 2u;
  v22 = v18 + 64;
  *(_QWORD *)HypercallCachedPages = -1LL;
  *((_QWORD *)HypercallCachedPages + 1) = v39;
  HypercallCachedPages[1] = *a2;
  if ( !a5 )
  {
    PhysicalAddress.QuadPart = 0LL;
    v24 = 126LL;
    goto LABEL_10;
  }
  if ( (HvlpFlags & 8) != 0 )
  {
    v29 = KeGetCurrentPrcb();
    v10 = (char *)RtlpInterlockedPopEntrySList(&v29->HypercallPageList);
    if ( !v10 )
    {
      LODWORD(v36) = 2;
      v10 = (char *)((unsigned __int64)v43 & 0xFFFFFFFFFFFFF000uLL);
      if ( (((unsigned __int64)v42 ^ (unsigned __int64)v43) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        v10 = v42;
      BYTE8(v36) = KeGetCurrentIrql();
      if ( BYTE8(v36) < 2u )
      {
        v31 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v31);
      }
      PhysicalAddress = MmGetPhysicalAddress(v10);
      v38 = PhysicalAddress;
      goto LABEL_22;
    }
    *((_QWORD *)&v36 + 1) = v29;
    LODWORD(v36) = 1;
    v37 = v10;
  }
  else
  {
    LODWORD(v36) = 4;
    BYTE8(v36) = KeDisableInterrupts(v20, v19, v21);
    HIDWORD(v36) = 2;
    v10 = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
  }
  PhysicalAddress = *(PHYSICAL_ADDRESS *)(v10 + 16);
  v38 = PhysicalAddress;
LABEL_22:
  v24 = 127LL;
LABEL_10:
  v25 = (v22 << 14) - 802816;
  HIDWORD(v32) = HIDWORD(v24);
  if ( v22 <= 0x38 )
    v25 = 114688;
  LODWORD(v32) = v24 & 0xFC01FFFF | v25 & 0x3FE0000;
  v26 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
          v32,
          (PHYSICAL_ADDRESS)v35.QuadPart,
          (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart);
  if ( v26 )
  {
    v27 = HvlpHvToNtStatus(v26);
    if ( a5 )
      goto LABEL_16;
  }
  else
  {
    v27 = 0;
    if ( a5 )
    {
      *a5 = *(_OWORD *)v10;
LABEL_16:
      HvlpReleaseHypercallPage(&v36);
    }
  }
  HvlpReleaseHypercallPage(&v33);
  return v27;
}
