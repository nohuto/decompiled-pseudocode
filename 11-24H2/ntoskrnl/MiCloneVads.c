/*
 * XREFs of MiCloneVads @ 0x1402C4DAC
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140ABD72C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiIsVadLargePrivate @ 0x14025FD90 (MiIsVadLargePrivate.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1403CDFC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDeleteCloneZombies @ 0x14048F544 (MiDeleteCloneZombies.c)
 *     MiUnlockAweVadsExclusive @ 0x1404B3C74 (MiUnlockAweVadsExclusive.c)
 *     MiLockAweVadsExclusive @ 0x1404B3CC4 (MiLockAweVadsExclusive.c)
 *     MiInsertClone @ 0x1404CA408 (MiInsertClone.c)
 *     MiCloneWriteWatch @ 0x14068342C (MiCloneWriteWatch.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiFreeForkMappingPte @ 0x1406FBF5C (MiFreeForkMappingPte.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x140A54400 (MiBuildNewCloneDescriptor.c)
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 *     MiFreeCloneDescriptor @ 0x140A73E2C (MiFreeCloneDescriptor.c)
 *     MiFreeForkMaps @ 0x140AB02C4 (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x140ABBCD8 (MiInitializeForkMaps.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *BugCheckParameter1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  ULONG_PTR v6; // r12
  _QWORD *v7; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  _QWORD *v11; // r13
  ULONG_PTR v12; // rbx
  int v13; // eax
  __int64 Pool; // rax
  _QWORD *v15; // rsi
  unsigned __int8 v16; // al
  unsigned __int8 v17; // dl
  __int64 v18; // rdi
  _QWORD *v19; // rax
  _QWORD *i; // rbx
  _QWORD **v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 Address; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r11
  unsigned __int64 updated; // rdi
  unsigned __int64 v32; // r12
  __int64 NextPageTable; // rdi
  unsigned __int64 v34; // rax
  __int64 *v35; // rcx
  _QWORD *v36; // rax
  unsigned __int64 j; // rdi
  __int64 v38; // rbx
  int v39; // edi
  unsigned __int8 v40; // dl
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // r12
  _QWORD *v45; // rbx
  _QWORD **v46; // rax
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v51; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v52; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+48h] [rbp-B8h]
  _QWORD v56[3]; // [rsp+60h] [rbp-A0h] BYREF
  int v57; // [rsp+78h] [rbp-88h]
  unsigned __int8 v58; // [rsp+7Ch] [rbp-84h]
  __int64 v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  unsigned __int64 v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h] BYREF
  int v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  _QWORD *v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  _DWORD *v74; // [rsp+F8h] [rbp-8h]
  ULONG_PTR v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  _BYTE v77[40]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v78; // [rsp+138h] [rbp+38h]
  __int64 v79; // [rsp+150h] [rbp+50h]

  v6 = a2;
  v7 = BugCheckParameter1;
  v75 = (ULONG_PTR)BugCheckParameter1;
  v74 = a6;
  memset_0(v77, 0, 0xC8uLL);
  memset_0(v56, 0, 0x70uLL);
  *a6 = 0;
  v9 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v66 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v57 = a5;
  v56[2] = a4;
  v56[0] = v7;
  v56[1] = v6;
  while ( 1 )
  {
    v10 = v7[81];
    if ( !v10 )
      v10 = 1LL;
    v76 = MiBuildNewCloneDescriptor((ULONG_PTR)v7);
    v11 = (_QWORD *)v76;
    if ( !v76 )
      return 3221225626LL;
    v12 = 32 * (v10 + 1);
    v13 = PsChargeProcessNonPagedPoolQuota(v6, v12);
    if ( v13 < 0 )
    {
      v39 = v13;
      goto LABEL_58;
    }
    Pool = MiAllocatePool(0x40uLL, 0x70uLL, 1682140493);
    v72 = (_QWORD *)Pool;
    v15 = (_QWORD *)Pool;
    if ( !Pool )
    {
      PsReturnProcessNonPagedPoolQuota(v6, v12);
      v39 = -1073741670;
      goto LABEL_58;
    }
    *(_QWORD *)(Pool + 64) = v12;
    MiLockAweVadsExclusive(CurrentThread);
    v16 = MiLockWorkingSetExclusive((__int64)(v7 + 128));
    v58 = v16;
    if ( v7[81] <= v11[5] )
    {
      *v15 = a3;
      MiDeleteCloneZombies(v7, 1LL);
      v17 = v58;
      v7[78] = CurrentThread;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v17);
      MiUnlockAweVadsExclusive(CurrentThread);
      if ( (unsigned int)MiInitializeForkMaps(v7, v6, v77) )
      {
        MiLockWorkingSetExclusive((__int64)(v7 + 128));
        v18 = v11[3];
        v64 = v18;
        v73 = v18;
        v11[6] = 1LL;
        MiInsertClone(v7, v11, 1LL);
        v19 = *(_QWORD **)(v6 + 1368);
        i = 0LL;
        while ( v19 )
        {
          i = v19;
          v19 = (_QWORD *)*v19;
        }
        if ( i )
        {
          do
          {
            v21 = (_QWORD **)i[1];
            v22 = (__int64)i;
            v23 = i;
            if ( v21 )
            {
              v24 = *v21;
              for ( i = (_QWORD *)i[1]; v24; v24 = (_QWORD *)*v24 )
                i = v24;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v23 )
                  break;
                v23 = i;
              }
            }
            v25 = (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) << 12;
            Address = MiLocateAddress(v25);
            v27 = *(unsigned int *)(v22 + 52);
            v28 = (unsigned __int64)*(unsigned __int8 *)(v22 + 34) << 32;
            v71 = Address;
            if ( (v27 | v28) < 0x7FFFFFFFDLL && !MiIsVadLargePrivate(v22) )
            {
              v60 = v29;
              v61 = v22;
              updated = v30 + ((v25 >> 9) & 0x7FFFFFFFF8LL);
              v32 = v30
                  + 8
                  * ((*(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) & 0xFFFFFFFFFLL);
              v70 = v32;
              do
              {
                if ( v68 )
                {
                  MiFlushTbList(v68);
                  MiReleaseProcessorFlushList();
                  v68 = 0LL;
                }
                NextPageTable = MiGetNextPageTable(updated, v32, v58, 4, &v69);
                MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v58);
                if ( NextPageTable )
                  updated = MiUpdateForkMaps(v77, NextPageTable, &v66, v7);
                else
                  updated = v32 + 8;
                v65 = v79;
                MiLockWorkingSetExclusive((__int64)(v7 + 128));
                if ( (*(_BYTE *)(v22 + 48) & 0x70) != 0x50 )
                {
                  if ( updated > v32 )
                    break;
                  v62 = updated;
                  v34 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  if ( v34 > v32 )
                    v34 = v32;
                  v54 = v34;
                  v63 = v78;
                  MiMakeSystemAddressValid(updated, 0, v58, 1);
                  do
                  {
                    MiBuildForkPte(v56);
                    updated = v62;
                  }
                  while ( v62 <= v54 );
                  v32 = v70;
                }
              }
              while ( updated <= v32 );
              if ( (*(_DWORD *)(v22 + 48) & 0x600000) == 0x600000 )
                MiCloneWriteWatch(v71, v22);
            }
          }
          while ( i );
          v15 = v72;
          v6 = a2;
          v18 = v73;
        }
        if ( v67 )
          *v74 = 1;
        if ( v68 )
        {
          MiFlushTbList(v68);
          MiReleaseProcessorFlushList();
          v68 = 0LL;
        }
        v35 = (__int64 *)v11[7];
        *(_QWORD *)(v6 + 648) += v66;
        v9 = (v64 - v18) >> 5;
        v66 = *(_QWORD *)(v6 + 648);
        if ( v9 )
        {
          *v35 = v9;
          v11[6] = v9;
          v11[5] = v9;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 80, (__int64)v11);
        }
        MiDeleteCloneZombies(v7, 1LL);
        v36 = (_QWORD *)v7[80];
        j = 0LL;
        while ( v36 )
        {
          j = (unsigned __int64)v36;
          v36 = (_QWORD *)*v36;
        }
        if ( j )
        {
          v42 = 0LL;
          v43 = 0LL;
          do
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
            v45 = (_QWORD *)*v15;
            v42 += v15[8];
            v43 += *(_QWORD *)(j + 64);
            *(_OWORD *)v15 = *(_OWORD *)j;
            *((_OWORD *)v15 + 1) = *(_OWORD *)(j + 16);
            *((_OWORD *)v15 + 2) = *(_OWORD *)(j + 32);
            *((_OWORD *)v15 + 3) = *(_OWORD *)(j + 48);
            *((_OWORD *)v15 + 4) = *(_OWORD *)(j + 64);
            *((_OWORD *)v15 + 5) = *(_OWORD *)(j + 80);
            *((_OWORD *)v15 + 6) = *(_OWORD *)(j + 96);
            MiInsertClone(v6, v15, 0LL);
            v46 = *(_QWORD ***)(j + 8);
            v15 = v45;
            v47 = j;
            if ( v46 )
            {
              v48 = *v46;
              for ( j = *(_QWORD *)(j + 8); v48; v48 = (_QWORD *)*v48 )
                j = (unsigned __int64)v48;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v47 )
                  break;
                v47 = j;
              }
            }
          }
          while ( j );
          v52 = v43;
          v11 = (_QWORD *)v76;
          v51 = v42;
          v7 = (_QWORD *)v75;
        }
        v38 = (__int64)(v7 + 128);
        v39 = 0;
        MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v58);
        MiFreeForkMaps(v77);
      }
      else
      {
        v39 = -1073741670;
        v38 = (__int64)(v7 + 128);
      }
      MiLockAweVadsExclusive(CurrentThread);
      MiLockWorkingSetExclusive(v38);
      v40 = v58;
      v7[78] = 0LL;
      MiUnlockWorkingSetExclusive(v38, v40);
      MiUnlockAweVadsExclusive(CurrentThread);
      MiFreeForkMappingPte(v77);
      if ( v15 )
      {
        v44 = v51;
        do
        {
          v44 += v15[8];
          v49 = (_QWORD *)*v15;
          ExFreePoolWithTag(v15, 0);
          v15 = v49;
        }
        while ( v49 );
        v51 = v44;
        v6 = a2;
      }
      if ( v51 > v52 )
        PsReturnProcessNonPagedPoolQuota(v6, v51 - v52);
      if ( v59 )
        MiReturnFullProcessCommitment(v6, v59);
      if ( !v9 || v39 < 0 )
LABEL_58:
        MiFreeCloneDescriptor((ULONG_PTR)v7, v11);
      return (unsigned int)v39;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v16);
    MiUnlockAweVadsExclusive(CurrentThread);
    MiFreeCloneDescriptor((ULONG_PTR)v7, v11);
    PsReturnProcessNonPagedPoolQuota(v6, v12);
    ExFreePoolWithTag(v15, 0);
  }
}
