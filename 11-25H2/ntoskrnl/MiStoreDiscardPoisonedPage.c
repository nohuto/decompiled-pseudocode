/*
 * XREFs of MiStoreDiscardPoisonedPage @ 0x1406806F8
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiTryLockVad @ 0x1402A30DC (MiTryLockVad.c)
 *     MiUnlockVad @ 0x1402A6928 (MiUnlockVad.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14033E460 (MiAreChargesNeededToLockPage.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiDecommitHandleValidPte @ 0x140381970 (MiDecommitHandleValidPte.c)
 *     MiDecommitInitializePacket @ 0x14038308C (MiDecommitInitializePacket.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MiStoreLogDiscardPoisonedPage @ 0x140680C30 (MiStoreLogDiscardPoisonedPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  char v16; // r15
  struct _LIST_ENTRY *Address; // rax
  __int64 v18; // r12
  char v19; // al
  __int64 v20; // r15
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 *v23; // r10
  char v24; // al
  __int64 v25; // r11
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r15
  unsigned __int8 v32; // [rsp+50h] [rbp-B0h]
  __int64 p_Blink; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  unsigned __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  _OWORD v39[3]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  _BYTE v41[56]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v43; // [rsp+108h] [rbp+8h]
  unsigned __int64 v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+120h] [rbp+20h]
  _OWORD v46[3]; // [rsp+1A0h] [rbp+A0h] BYREF

  v38 = a1;
  v40 = 0LL;
  memset(v46, 0, sizeof(v46));
  memset(v39, 0, sizeof(v39));
  memset_0(v41, 0, 0xE0uLL);
  v5 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v32 = 17;
  v6 = (__int64)(v5 << 25) >> 16;
  v34 = v6;
  v36 = 0LL;
  p_Blink = 0LL;
  v37 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2 + 0x220000000000LL) >> 4);
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
        MiStoreLogDiscardPoisonedPage(v38, v37, v6, v11, v10);
        return v10;
      }
      MiUnlockPage(a2, *a3);
      *a3 = 17;
      DemandZeroPte = MiMakeDemandZeroPte(24);
      CurrentThread = KeGetCurrentThread();
      v35 = DemandZeroPte;
      v14 = 3;
      KiStackAttachProcess(PageTablePfnBuddyRaw, 0, (__int64)v46);
      --CurrentThread->SpecialApcDisable;
      v16 = MiLockVadTree(0, v15);
      Address = MiLocateAddress(v6);
      v18 = (__int64)Address;
      if ( !Address )
      {
        v11 = 20;
        v10 = -1073741431;
        goto LABEL_12;
      }
      v19 = MiTryLockVad((__int64)CurrentThread, (__int64)Address);
      v14 = (4 * (v19 & 1)) | 3;
      if ( (v19 & 1) == 0 )
      {
        v11 = 30;
        v10 = -1073740758;
LABEL_12:
        if ( v16 != 17 )
        {
          MiUnlockVadTree(0, v16);
          v20 = v36;
          goto LABEL_46;
        }
LABEL_51:
        if ( (v14 & 4) != 0 )
          MiUnlockVad((__int64)CurrentThread, v18);
        if ( (v14 & 2) != 0
          && CurrentThread->SpecialApcDisable++ == -1
          && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiUnstackDetachProcess((__int64)v46, 0LL);
        LODWORD(v6) = v34;
        goto LABEL_59;
      }
      v14 = (4 * (v19 & 1)) | 1;
      MiUnlockVadTree(0, v16);
      if ( (*(_DWORD *)(v18 + 48) & 4) != 0 )
      {
        v11 = 40;
LABEL_16:
        v10 = -1073741431;
        goto LABEL_51;
      }
      if ( (*(unsigned int *)(v18 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 32)) != 0x7FFFFFFFELL )
      {
        v11 = 50;
        goto LABEL_16;
      }
      MiDecommitInitializePacket((__int64)v41, v5, 1LL, 0LL, (__int64)PageTablePfnBuddyRaw, v18, 1, &v35, (__int64)v39);
      p_Blink = (__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink;
      v32 = MiLockWorkingSetShared((__int64)&PageTablePfnBuddyRaw[2].ReadyListHead.Blink);
      MiMakeSystemAddressValid(v5, (*(_DWORD *)(v18 + 48) >> 12) & 0x7F, v32, 0);
      v21 = *(_QWORD *)v5;
      v20 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_QWORD *)v5 & 1) != 0 )
      {
        if ( 48 * ((v21 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL != a2 )
        {
          v11 = 60;
LABEL_45:
          v10 = -1073741431;
LABEL_46:
          if ( v20 )
          {
            v28 = v20;
            v29 = p_Blink;
            MiUnlockPageTable(p_Blink, v28);
          }
          else
          {
            v29 = p_Blink;
          }
          if ( v32 != 17 )
            MiUnlockWorkingSetShared(v29, v32);
          goto LABEL_51;
        }
        if ( (unsigned int)MiAreChargesNeededToLockPage(a2) )
        {
          v24 = *(_BYTE *)(a2 + 34);
          if ( (v24 & 8) == 0 )
          {
            v25 = (__int64)(v5 << 25) >> 16;
            if ( ((unsigned __int8)v23 & 0x42) != 0 || (v24 & 0x10) != 0 || (MiGetWsleContents(v22, v34) & 0xF) == 8 )
            {
              v43 = v5;
              v10 = 0;
              v44 = v5 + 8;
              v45 = 0;
              v42 = v25;
              MiDecommitHandleValidPte((__int64)v41, v23);
              v41[44] = 17;
              MiDecommitPagesTail((__int64)v41, v26);
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
        if ( (v21 & 0x800) == 0 )
        {
          v11 = 150;
          goto LABEL_45;
        }
        v27 = MiLockTransitionLeafPageEx(v5, 0LL, 0);
        if ( !v27 )
        {
          v11 = 100;
          goto LABEL_45;
        }
        if ( v27 != a2 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v11 = 110;
          goto LABEL_45;
        }
        if ( !*(_WORD *)(a2 + 32) || (unsigned int)MiAreChargesNeededToLockPage(a2) && (*(_BYTE *)(a2 + 34) & 8) == 0 )
        {
          if ( (*(_BYTE *)(a2 + 34) & 7) != 2 )
          {
            MiDeleteTransitionPte((__int64 *)v5, a2, 0x11u, 0);
            *(_QWORD *)v5 = v35;
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
