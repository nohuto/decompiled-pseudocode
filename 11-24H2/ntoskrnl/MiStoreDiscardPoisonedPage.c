/*
 * XREFs of MiStoreDiscardPoisonedPage @ 0x14068D0B8
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiDecommitHandleValidPte @ 0x140297D80 (MiDecommitHandleValidPte.c)
 *     MiDecommitInitializePacket @ 0x1402995B0 (MiDecommitInitializePacket.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiAreChargesNeededToLockPage @ 0x140345EF0 (MiAreChargesNeededToLockPage.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiUnlockVad @ 0x1403C870C (MiUnlockVad.c)
 *     MiTryLockVad @ 0x1403DAC68 (MiTryLockVad.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x14068D5F0 (MiStoreLogDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v17; // r9
  char v18; // r15
  struct _LIST_ENTRY *Address; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // r10
  __int64 v29; // rcx
  unsigned __int64 v30; // r10
  char v31; // al
  __int64 v32; // r11
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r15
  unsigned __int8 v38; // [rsp+50h] [rbp-B0h]
  __int64 p_Blink; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  unsigned __int64 v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  _OWORD v45[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+B8h] [rbp-48h]
  _BYTE v47[56]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v49; // [rsp+108h] [rbp+8h]
  unsigned __int64 v50; // [rsp+118h] [rbp+18h]
  int v51; // [rsp+120h] [rbp+20h]
  _OWORD v52[3]; // [rsp+1A0h] [rbp+A0h] BYREF

  v44 = a1;
  v46 = 0LL;
  memset(v52, 0, sizeof(v52));
  memset(v45, 0, sizeof(v45));
  memset_0(v47, 0, 0xE0uLL);
  v5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v38 = 17;
  v6 = (__int64)(v5 << 25) >> 16;
  v40 = v6;
  v42 = 0LL;
  p_Blink = 0LL;
  v43 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
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
        MiStoreLogDiscardPoisonedPage(v44, v43, v6, v11, v10);
        return v10;
      }
      MiUnlockPage(a2, *a3);
      *a3 = 17;
      DemandZeroPte = MiMakeDemandZeroPte(24);
      CurrentThread = KeGetCurrentThread();
      v41 = DemandZeroPte;
      v14 = 3;
      KiStackAttachProcess(PageTablePfnBuddyRaw, 0, (__int64)v52);
      --CurrentThread->SpecialApcDisable;
      v18 = MiLockVadTree(0, v15, v16, v17);
      Address = MiLocateAddress(v6);
      v22 = (__int64)Address;
      if ( !Address )
      {
        v11 = 20;
        v10 = -1073741431;
        goto LABEL_12;
      }
      v23 = MiTryLockVad((__int64)CurrentThread, (__int64)Address);
      v14 = (4 * (v23 & 1)) | 3;
      if ( (v23 & 1) == 0 )
      {
        v11 = 30;
        v10 = -1073740758;
LABEL_12:
        if ( v18 != 17 )
        {
          MiUnlockVadTree(0, v18);
          v24 = v42;
          goto LABEL_46;
        }
LABEL_51:
        if ( (v14 & 4) != 0 )
          MiUnlockVad((__int64)CurrentThread, v22);
        if ( (v14 & 2) != 0
          && CurrentThread->SpecialApcDisable++ == -1
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiUnstackDetachProcess((__int64)v52, 0, v20, v21);
        LODWORD(v6) = v40;
        goto LABEL_59;
      }
      v14 = (4 * (v23 & 1)) | 1;
      MiUnlockVadTree(0, v18);
      if ( (*(_DWORD *)(v22 + 48) & 4) != 0 )
      {
        v11 = 40;
LABEL_16:
        v10 = -1073741431;
        goto LABEL_51;
      }
      if ( (*(unsigned int *)(v22 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 32)) != 0x7FFFFFFFELL )
      {
        v11 = 50;
        goto LABEL_16;
      }
      MiDecommitInitializePacket((__int64)v47, v5, 1LL, 0LL, (__int64)PageTablePfnBuddyRaw, v22, 1, &v41, (__int64)v45);
      p_Blink = (__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink;
      v38 = MiLockWorkingSetShared((__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink, v25, v26, v27);
      MiMakeSystemAddressValid(v5, (*(_DWORD *)(v22 + 48) >> 12) & 0x7F, v38, 0);
      v28 = *(_QWORD *)v5;
      v24 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_QWORD *)v5 & 1) != 0 )
      {
        if ( 48 * ((v28 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL != a2 )
        {
          v11 = 60;
LABEL_45:
          v10 = -1073741431;
LABEL_46:
          if ( v24 )
          {
            v34 = v24;
            v35 = p_Blink;
            MiUnlockPageTableInternal(p_Blink, v34);
          }
          else
          {
            v35 = p_Blink;
          }
          if ( v38 != 17 )
            MiUnlockWorkingSetShared(v35, v38);
          goto LABEL_51;
        }
        if ( (unsigned int)MiAreChargesNeededToLockPage(a2) )
        {
          v31 = *(_BYTE *)(a2 + 34);
          if ( (v31 & 8) == 0 )
          {
            v32 = (__int64)(v5 << 25) >> 16;
            if ( (v30 & 0x42) != 0 || (v31 & 0x10) != 0 || (MiGetWsleContents(v29, v40) & 0xF) == 8 )
            {
              v49 = v5;
              v10 = 0;
              v50 = v5 + 8;
              v51 = 0;
              v48 = v32;
              MiDecommitHandleValidPte((__int64)v47, v30, v20);
              v47[44] = 17;
              MiDecommitPagesTail((__int64)v47);
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
        if ( (v28 & 0x800) == 0 )
        {
          v11 = 150;
          goto LABEL_45;
        }
        v33 = MiLockTransitionLeafPageEx(v5, 0LL, 0);
        if ( !v33 )
        {
          v11 = 100;
          goto LABEL_45;
        }
        if ( v33 != a2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v11 = 110;
          goto LABEL_45;
        }
        if ( !*(_WORD *)(a2 + 32) || (unsigned int)MiAreChargesNeededToLockPage(a2) && (*(_BYTE *)(a2 + 34) & 8) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 34) & 7) != 2 )
          {
            LOBYTE(v20) = 17;
            MiDeleteTransitionPte((__int64 *)v5, a2, v20, 0);
            *(_QWORD *)v5 = v41;
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
