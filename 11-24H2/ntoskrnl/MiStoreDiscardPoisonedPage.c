/*
 * XREFs of MiStoreDiscardPoisonedPage @ 0x14068BF88
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 *     MiAreChargesNeededToLockPage @ 0x14023C190 (MiAreChargesNeededToLockPage.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     MiDecommitHandleValidPte @ 0x140288180 (MiDecommitHandleValidPte.c)
 *     MiDecommitInitializePacket @ 0x1402899B0 (MiDecommitInitializePacket.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiDecommitPagesTail @ 0x1402DBE74 (MiDecommitPagesTail.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MiTryLockVad @ 0x1403FD34C (MiTryLockVad.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14068C4C0 (MiStoreLogDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiStoreDiscardPoisonedPage(__int64 a1, ULONG_PTR a2, unsigned __int8 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r12
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // r13
  __int64 v9; // r8
  unsigned int v10; // edi
  int v11; // esi
  __int64 DemandZeroPte; // rax
  struct _KTHREAD *CurrentThread; // r14
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // r8
  char v17; // r15
  struct _LIST_ENTRY *Address; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // r15
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  char v26; // al
  __int64 v27; // r11
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  unsigned __int8 v33; // [rsp+50h] [rbp-B0h]
  __int64 p_Blink; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h]
  unsigned __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  _OWORD v40[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-48h]
  _BYTE v42[56]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v44; // [rsp+108h] [rbp+8h]
  unsigned __int64 v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+120h] [rbp+20h]
  _OWORD v47[3]; // [rsp+1A0h] [rbp+A0h] BYREF

  v39 = a1;
  v41 = 0LL;
  memset(v47, 0, sizeof(v47));
  memset(v40, 0, sizeof(v40));
  memset_0(v42, 0, 0xE0uLL);
  v5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v33 = 17;
  v6 = (__int64)(v5 << 25) >> 16;
  v35 = v6;
  v37 = 0LL;
  p_Blink = 0LL;
  v38 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
  TopLevelPfn = MiGetTopLevelPfn(a2);
  if ( TopLevelPfn != a2 )
  {
    PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( MiIsStoreProcess((__int64)PageTablePfnBuddyRaw) )
    {
      if ( *(_WORD *)(a2 + 32) && (!(unsigned int)MiAreChargesNeededToLockPage(a2) || (*(_BYTE *)(a2 + 34) & 8) != 0) )
      {
        v11 = 10;
        v10 = -1073740024;
LABEL_59:
        MiStoreLogDiscardPoisonedPage(v39, v38, v6, v11, v10);
        return v10;
      }
      MiUnlockPage(a2, *a3);
      *a3 = 17;
      DemandZeroPte = MiMakeDemandZeroPte(24);
      CurrentThread = KeGetCurrentThread();
      v36 = DemandZeroPte;
      v14 = 3;
      KiStackAttachProcess(PageTablePfnBuddyRaw, 0, (__int64)v47);
      --CurrentThread->SpecialApcDisable;
      v17 = MiLockVadTree(0, v15, v16);
      Address = MiLocateAddress(v6);
      v20 = (__int64)Address;
      if ( !Address )
      {
        v11 = 20;
        v10 = -1073741431;
        goto LABEL_12;
      }
      v21 = MiTryLockVad((__int64)CurrentThread, (__int64)Address);
      v14 = (4 * (v21 & 1)) | 3;
      if ( (v21 & 1) == 0 )
      {
        v11 = 30;
        v10 = -1073740758;
LABEL_12:
        if ( v17 != 17 )
        {
          MiUnlockVadTree(0, v17);
          v22 = v37;
          goto LABEL_46;
        }
LABEL_51:
        if ( (v14 & 4) != 0 )
          MiUnlockVad((__int64)CurrentThread, v20);
        if ( (v14 & 2) != 0
          && CurrentThread->SpecialApcDisable++ == -1
          && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(1LL, v19);
        }
        KiUnstackDetachProcess((__int64)v47, 0);
        LODWORD(v6) = v35;
        goto LABEL_59;
      }
      v14 = (4 * (v21 & 1)) | 1;
      MiUnlockVadTree(0, v17);
      if ( (*(_DWORD *)(v20 + 48) & 4) != 0 )
      {
        v11 = 40;
LABEL_16:
        v10 = -1073741431;
        goto LABEL_51;
      }
      v19 = *(unsigned int *)(v20 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 34) << 32);
      if ( v19 != 0x7FFFFFFFELL )
      {
        v11 = 50;
        goto LABEL_16;
      }
      MiDecommitInitializePacket((__int64)v42, v5, 1LL, 0LL, (__int64)PageTablePfnBuddyRaw, v20, 1, &v36, (__int64)v40);
      p_Blink = (__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink;
      v33 = MiLockWorkingSetShared((__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink);
      MiMakeSystemAddressValid(v5, (*(_DWORD *)(v20 + 48) >> 12) & 0x7F, v33, 0);
      v23 = *(_QWORD *)v5;
      v22 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_QWORD *)v5 & 1) != 0 )
      {
        if ( 48 * ((v23 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL != a2 )
        {
          v11 = 60;
LABEL_45:
          v10 = -1073741431;
LABEL_46:
          if ( v22 )
          {
            v29 = v22;
            v30 = p_Blink;
            MiUnlockPageTableInternal(p_Blink, v29);
          }
          else
          {
            v30 = p_Blink;
          }
          if ( v33 != 17 )
            MiUnlockWorkingSetShared(v30, v33);
          goto LABEL_51;
        }
        if ( (unsigned int)MiAreChargesNeededToLockPage(a2) )
        {
          v26 = *(_BYTE *)(a2 + 34);
          if ( (v26 & 8) == 0 )
          {
            v27 = (__int64)(v5 << 25) >> 16;
            if ( (v25 & 0x42) != 0 || (v26 & 0x10) != 0 || (MiGetWsleContents(v24, v35) & 0xF) == 8 )
            {
              v44 = v5;
              v10 = 0;
              v45 = v5 + 8;
              v46 = 0;
              v43 = v27;
              MiDecommitHandleValidPte((__int64)v42, v25);
              v42[44] = 17;
              MiDecommitPagesTail((__int64)v42);
              v11 = 90;
              goto LABEL_46;
            }
            v11 = 80;
            goto LABEL_28;
          }
        }
        v11 = 70;
      }
      else
      {
        if ( (v23 & 0x800) == 0 )
        {
          v11 = 150;
          goto LABEL_45;
        }
        v28 = MiLockTransitionLeafPageEx(v5, 0LL, 0);
        if ( !v28 )
        {
          v11 = 100;
          goto LABEL_45;
        }
        if ( v28 != a2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v11 = 110;
          goto LABEL_45;
        }
        if ( !*(_WORD *)(a2 + 32) || (unsigned int)MiAreChargesNeededToLockPage(a2) && (*(_BYTE *)(a2 + 34) & 8) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 34) & 7) != 2 )
          {
            MiDeleteTransitionPte((__int64 *)v5, a2, 0x11u, 0);
            *(_QWORD *)v5 = v36;
            v11 = 140;
            _InterlockedDecrement64((volatile signed __int64 *)PageTablePfnBuddyRaw[1].Padding);
            v10 = 0;
            goto LABEL_46;
          }
          _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v11 = 130;
LABEL_28:
          v10 = 1075380276;
          goto LABEL_46;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v11 = 120;
      }
      v10 = -1073740024;
      goto LABEL_46;
    }
  }
  return (unsigned int)-1073741198;
}
