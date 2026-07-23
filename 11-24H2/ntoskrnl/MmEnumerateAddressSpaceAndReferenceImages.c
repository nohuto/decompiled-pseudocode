/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x140951B80 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x140A0C3A0 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MiLockVadShared @ 0x140345480 (MiLockVadShared.c)
 *     MiUnlockVadShared @ 0x1403620A0 (MiUnlockVadShared.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiVadDeleted @ 0x14041C6D0 (MiVadDeleted.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiReadVadFlags2 @ 0x14044307C (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x140919CF4 (MiFillMapFileInfo.c)
 */

__int64 __fastcall MmEnumerateAddressSpaceAndReferenceImages(PRKPROCESS PROCESS, char a2)
{
  int v4; // ecx
  int v5; // edx
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v7; // ebx
  __int64 v8; // rdi
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *i; // rsi
  _QWORD *v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // r12
  unsigned __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 VadFlags2; // rbx
  signed __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rbp
  _QWORD **v26; // rax
  __int64 v27; // r14
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  int v34; // r8d
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+24h] [rbp-74h]
  __int64 Pool; // [rsp+28h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v4 = a2 & 1;
  memset(&ApcState, 0, 32);
  v5 = v4 | 2;
  if ( (a2 & 2) == 0 )
    v5 = v4;
  *(_OWORD *)&ApcState.Process = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = v5 | 4;
  if ( (a2 & 4) == 0 )
    v7 = v5;
  v8 = 0LL;
  v37 = v7;
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    v38 = 0;
  }
  else
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v38 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS);
  Blink = PROCESS[3].Header.WaitListHead.Blink;
  if ( Blink )
  {
    v10 = (unsigned __int64)&Blink->Flink + 1;
    if ( v10 <= 0x555555555555555LL )
    {
      Pool = MiAllocatePool(0x100uLL, 48 * v10, 808546381);
      v8 = Pool;
      if ( Pool )
      {
        v11 = *(_QWORD **)&PROCESS[3].Header.Lock;
        i = 0LL;
        while ( v11 )
        {
          i = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *(_QWORD *)v8 = 0LL;
              v8 = Pool;
              goto LABEL_42;
            }
            v26 = (_QWORD **)i[1];
            v27 = (__int64)i;
            v13 = i;
            if ( v26 )
            {
              v28 = *v26;
              for ( i = (_QWORD *)i[1]; v28; v28 = (_QWORD *)*v28 )
                i = v28;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v13 )
                  break;
                v13 = i;
              }
            }
            MiLockVadShared((__int64)CurrentThread, v27);
            if ( (unsigned int)MiVadDeleted(v27) || v16 == 1 )
              goto LABEL_40;
            if ( (v14 & 0x200000) == 0 )
              break;
            if ( v7 >= 4 )
            {
              *(_QWORD *)v8 = (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32)) << 12;
              *(_QWORD *)(v8 + 8) = ((*(unsigned int *)(v27 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 33) << 32))
                                   - (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32))
                                   + 1) << 12;
              if ( (*(unsigned int *)(v27 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 32)) < 0x7FFFFFFFDLL )
                v33 = (*(unsigned int *)(v27 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 32)) << 12;
              else
                v33 = 0LL;
              *(_QWORD *)(v8 + 24) = v33;
              *(_DWORD *)(v8 + 16) = PROCESS[1].Header.WaitListHead.Flink;
              *(_DWORD *)(v8 + 20) = 0x2000;
              v34 = v16 - 3;
              if ( v34 )
              {
                if ( v34 == 1 )
                {
                  *(_DWORD *)(v8 + 20) = 8396800;
                  v36 = 8396800;
                }
                else
                {
                  v35 = *(_DWORD *)(v27 + 48);
                  v36 = 0x2000;
                  if ( (v35 & 0x200000) != 0 && ((v35 & 0x800000) != 0 || (v35 & 0x180000u) >= 0x100000) )
                  {
                    *(_DWORD *)(v8 + 20) = 536879104;
                    v36 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v27 + 48) & 0xC200000) == 0x8200000 )
              {
                v36 = 0x2000;
              }
              else
              {
                *(_DWORD *)(v8 + 20) = 4202496;
                v36 = 4202496;
              }
              if ( (*(_DWORD *)(v27 + 48) & 0x600000) == 0x600000 )
                *(_DWORD *)(v8 + 20) = v36 | 0x200000;
              v32 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_47;
            }
LABEL_40:
            MiUnlockVadShared((__int64)CurrentThread, v27);
          }
          if ( v16 != 2 || (v14 & 0xF80) != 0x380 || (v7 & 1) == 0 )
          {
            if ( (v7 & 2) != 0 )
            {
              MiFillMapFileInfo(v15, v8);
              v32 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_47:
              *(_QWORD *)v8 = v32;
              goto LABEL_32;
            }
            goto LABEL_40;
          }
          v17 = **(_QWORD **)(v27 + 72);
          v18 = (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32)) << 12;
          if ( (unsigned int)MiVadMapsLargeImage(v27) )
            v18 += (unsigned __int64)*(unsigned __int8 *)(MiLocateLockedVadEvent(v19, 16) + 8) << 16;
          VadFlags2 = (unsigned int)MiReadVadFlags2(v27);
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v17 + 24LL), -1LL, -1LL);
          *(_QWORD *)(v8 + 24) = v22;
          v23 = (v21 + 4095) & 0xFFFFFFFFFFFFF000uLL;
          if ( v22 > v23 )
            *(_QWORD *)(v8 + 24) = v23;
          *(_QWORD *)v8 = MiReferenceControlAreaFile(v17);
          *(_QWORD *)(v8 + 8) = v18;
          *(_QWORD *)(v8 + 16) = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
          *(_DWORD *)(v8 + 40) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 56LL) + 60LL);
          if ( (VadFlags2 & 8) != 0 )
            v24 = v18 & 0xFFFFFFFFFFFFE3FFuLL;
          else
            v24 = ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)v17 + 15LL) << 6) ^ (*(_QWORD *)(v8 + 8) ^ ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)v17 + 15LL) << 6)) & 0xFFFFFFFFFFFFE03FuLL;
          *(_QWORD *)(v8 + 8) = v24;
          if ( (v37 & 2) != 0 )
          {
            v25 = VadFlags2 ^ (VadFlags2 ^ v24) & 0xFFFFFFFFFFFFFFFEuLL;
            *(_QWORD *)(v8 + 8) = v25;
            *(_QWORD *)(v8 + 8) = ((unsigned __int64)*(unsigned int *)(v27 + 48) >> 6) ^ (((unsigned __int64)*(unsigned int *)(v27 + 48) >> 6) ^ v25) & 0xFFFFFFFFFFFFFFC1uLL;
            *(_QWORD *)(v8 + 32) = (*(unsigned int *)(v27 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 34) << 32)) << 12;
          }
          v7 = v37;
LABEL_32:
          MiUnlockVadShared((__int64)CurrentThread, v27);
          v8 += 48LL;
        }
      }
    }
  }
LABEL_42:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS);
  if ( v38 )
    KiUnstackDetachProcess((__int64)&ApcState, 0, v29, v30);
  return v8;
}
