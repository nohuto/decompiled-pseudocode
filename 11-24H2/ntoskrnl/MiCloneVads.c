/*
 * XREFs of MiCloneVads @ 0x140268194
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140AB879C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1402676E0 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiUnlockAweVadsExclusive @ 0x14026783C (MiUnlockAweVadsExclusive.c)
 *     MiLockAweVadsExclusive @ 0x14026788C (MiLockAweVadsExclusive.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiIsVadLargePrivate @ 0x1402903A0 (MiIsVadLargePrivate.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiDeleteCloneZombies @ 0x140489754 (MiDeleteCloneZombies.c)
 *     MiInsertClone @ 0x1404C392C (MiInsertClone.c)
 *     MiCloneWriteWatch @ 0x140682328 (MiCloneWriteWatch.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiFreeForkMappingPte @ 0x1406F9B9C (MiFreeForkMappingPte.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x140A4C34C (MiBuildNewCloneDescriptor.c)
 *     MiUpdateForkMaps @ 0x140A5F5F0 (MiUpdateForkMaps.c)
 *     MiFreeCloneDescriptor @ 0x140A6D78C (MiFreeCloneDescriptor.c)
 *     MiFreeForkMaps @ 0x140AAB234 (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x140AB6CF8 (MiInitializeForkMaps.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *BugCheckParameter1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  ULONG_PTR v6; // r12
  _QWORD *v7; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  _QWORD *v11; // r13
  unsigned __int64 v12; // rbx
  int v13; // eax
  __int64 Pool; // rax
  _QWORD *v15; // rsi
  unsigned __int8 v16; // al
  unsigned __int8 v17; // dl
  __int64 v18; // rdi
  _QWORD *v19; // rax
  _QWORD *i; // rbx
  _QWORD **v21; // rax
  _QWORD *v22; // r15
  _QWORD *v23; // rcx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 Address; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r11
  unsigned __int64 updated; // rdi
  unsigned __int64 v33; // r12
  __int64 NextPageTable; // rdi
  unsigned __int64 v35; // rax
  __int64 *v36; // rcx
  _QWORD *v37; // rax
  unsigned __int64 j; // rdi
  __int64 v39; // rbx
  int v40; // edi
  unsigned __int8 v41; // dl
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r12
  _QWORD *v46; // rbx
  _QWORD **v47; // rax
  unsigned __int64 v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rbx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v52; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v55; // [rsp+48h] [rbp-B8h]
  _QWORD v57[3]; // [rsp+60h] [rbp-A0h] BYREF
  int v58; // [rsp+78h] [rbp-88h]
  unsigned __int8 v59; // [rsp+7Ch] [rbp-84h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  _QWORD *v62; // [rsp+90h] [rbp-70h]
  unsigned __int64 v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h]
  __int64 v67; // [rsp+B8h] [rbp-48h] BYREF
  int v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  int v70; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  _QWORD *v73; // [rsp+E8h] [rbp-18h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  _DWORD *v75; // [rsp+F8h] [rbp-8h]
  ULONG_PTR v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  _BYTE v78[40]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v79; // [rsp+138h] [rbp+38h]
  __int64 v80; // [rsp+150h] [rbp+50h]

  v6 = a2;
  v7 = BugCheckParameter1;
  v76 = (ULONG_PTR)BugCheckParameter1;
  v75 = a6;
  memset_0(v78, 0, 0xC8uLL);
  memset_0(v57, 0, 0x70uLL);
  *a6 = 0;
  v9 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v67 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v58 = a5;
  v57[2] = a4;
  v57[0] = v7;
  v57[1] = v6;
  while ( 1 )
  {
    v10 = v7[81];
    if ( !v10 )
      v10 = 1LL;
    v77 = MiBuildNewCloneDescriptor((ULONG_PTR)v7);
    v11 = (_QWORD *)v77;
    if ( !v77 )
      return 3221225626LL;
    v12 = 32 * (v10 + 1);
    v13 = PsChargeProcessNonPagedPoolQuota(v6, v12);
    if ( v13 < 0 )
    {
      v40 = v13;
      goto LABEL_58;
    }
    Pool = MiAllocatePool(0x40uLL, 0x70uLL);
    v73 = (_QWORD *)Pool;
    v15 = (_QWORD *)Pool;
    if ( !Pool )
    {
      PsReturnProcessNonPagedPoolQuota(v6, v12);
      v40 = -1073741670;
      goto LABEL_58;
    }
    *(_QWORD *)(Pool + 64) = v12;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v16 = MiLockWorkingSetExclusive(v7 + 128);
    v59 = v16;
    if ( v7[81] <= v11[5] )
    {
      *v15 = a3;
      MiDeleteCloneZombies(v7, 1LL);
      v17 = v59;
      v7[78] = CurrentThread;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v17);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      if ( (unsigned int)MiInitializeForkMaps(v7, v6, v78) )
      {
        MiLockWorkingSetExclusive(v7 + 128);
        v18 = v11[3];
        v65 = v18;
        v74 = v18;
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
            v22 = i;
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
            v25 = (*((unsigned int *)v22 + 6) | ((unsigned __int64)*((unsigned __int8 *)v22 + 32) << 32)) << 12;
            Address = MiLocateAddress(v25);
            v27 = *((unsigned int *)v22 + 13);
            v28 = (unsigned __int64)*((unsigned __int8 *)v22 + 34) << 32;
            v72 = Address;
            v29 = v27 | v28;
            if ( v29 < 0x7FFFFFFFDLL && !(unsigned int)MiIsVadLargePrivate(v22, v27, v29, Address) )
            {
              v61 = v30;
              v62 = v22;
              updated = v31 + ((v25 >> 9) & 0x7FFFFFFFF8LL);
              v33 = v31
                  + 8
                  * ((*((unsigned int *)v22 + 7) | ((unsigned __int64)*((unsigned __int8 *)v22 + 33) << 32)) & 0xFFFFFFFFFLL);
              v71 = v33;
              do
              {
                if ( v69 )
                {
                  MiFlushTbList(v69);
                  MiReleaseProcessorFlushList();
                  v69 = 0LL;
                }
                NextPageTable = MiGetNextPageTable(updated, v33, v59, 4, &v70);
                MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v59);
                if ( NextPageTable )
                  updated = MiUpdateForkMaps(v78, NextPageTable, &v67, v7);
                else
                  updated = v33 + 8;
                v66 = v80;
                MiLockWorkingSetExclusive(v7 + 128);
                if ( (v22[6] & 0x70) != 0x50 )
                {
                  if ( updated > v33 )
                    break;
                  v63 = updated;
                  v35 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  if ( v35 > v33 )
                    v35 = v33;
                  v55 = v35;
                  v64 = v79;
                  MiMakeSystemAddressValid(updated, 0, v59, 1);
                  do
                  {
                    MiBuildForkPte(v57);
                    updated = v63;
                  }
                  while ( v63 <= v55 );
                  v33 = v71;
                }
              }
              while ( updated <= v33 );
              if ( (v22[6] & 0x600000) == 0x600000 )
                MiCloneWriteWatch(v72, v22);
            }
          }
          while ( i );
          v15 = v73;
          v6 = a2;
          v18 = v74;
        }
        if ( v68 )
          *v75 = 1;
        if ( v69 )
        {
          MiFlushTbList(v69);
          MiReleaseProcessorFlushList();
          v69 = 0LL;
        }
        v36 = (__int64 *)v11[7];
        *(_QWORD *)(v6 + 648) += v67;
        v9 = (v65 - v18) >> 5;
        v67 = *(_QWORD *)(v6 + 648);
        if ( v9 )
        {
          *v36 = v9;
          v11[6] = v9;
          v11[5] = v9;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 80, v11);
        }
        MiDeleteCloneZombies(v7, 1LL);
        v37 = (_QWORD *)v7[80];
        j = 0LL;
        while ( v37 )
        {
          j = (unsigned __int64)v37;
          v37 = (_QWORD *)*v37;
        }
        if ( j )
        {
          v43 = 0LL;
          v44 = 0LL;
          do
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
            v46 = (_QWORD *)*v15;
            v43 += v15[8];
            v44 += *(_QWORD *)(j + 64);
            *(_OWORD *)v15 = *(_OWORD *)j;
            *((_OWORD *)v15 + 1) = *(_OWORD *)(j + 16);
            *((_OWORD *)v15 + 2) = *(_OWORD *)(j + 32);
            *((_OWORD *)v15 + 3) = *(_OWORD *)(j + 48);
            *((_OWORD *)v15 + 4) = *(_OWORD *)(j + 64);
            *((_OWORD *)v15 + 5) = *(_OWORD *)(j + 80);
            *((_OWORD *)v15 + 6) = *(_OWORD *)(j + 96);
            MiInsertClone(v6, v15, 0LL);
            v47 = *(_QWORD ***)(j + 8);
            v15 = v46;
            v48 = j;
            if ( v47 )
            {
              v49 = *v47;
              for ( j = *(_QWORD *)(j + 8); v49; v49 = (_QWORD *)*v49 )
                j = (unsigned __int64)v49;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v48 )
                  break;
                v48 = j;
              }
            }
          }
          while ( j );
          v53 = v44;
          v11 = (_QWORD *)v77;
          v52 = v43;
          v7 = (_QWORD *)v76;
        }
        v39 = (__int64)(v7 + 128);
        v40 = 0;
        MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v59);
        MiFreeForkMaps(v78);
      }
      else
      {
        v40 = -1073741670;
        v39 = (__int64)(v7 + 128);
      }
      MiLockAweVadsExclusive((__int64)CurrentThread);
      MiLockWorkingSetExclusive(v39);
      v41 = v59;
      v7[78] = 0LL;
      MiUnlockWorkingSetExclusive(v39, v41);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      MiFreeForkMappingPte(v78);
      if ( v15 )
      {
        v45 = v52;
        do
        {
          v45 += v15[8];
          v50 = (_QWORD *)*v15;
          ExFreePoolWithTag(v15, 0);
          v15 = v50;
        }
        while ( v50 );
        v52 = v45;
        v6 = a2;
      }
      if ( v52 > v53 )
        PsReturnProcessNonPagedPoolQuota(v6, v52 - v53);
      if ( v60 )
        MiReturnFullProcessCommitment(v6);
      if ( !v9 || v40 < 0 )
LABEL_58:
        MiFreeCloneDescriptor((ULONG_PTR)v7, v11);
      return (unsigned int)v40;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 128), v16);
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    MiFreeCloneDescriptor((ULONG_PTR)v7, v11);
    PsReturnProcessNonPagedPoolQuota(v6, v12);
    ExFreePoolWithTag(v15, 0);
  }
}
