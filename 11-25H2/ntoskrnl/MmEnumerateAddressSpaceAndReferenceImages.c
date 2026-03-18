/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1408C04E0 (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F5420 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     MiUnlockVadShared @ 0x1402A6620 (MiUnlockVadShared.c)
 *     MiLockVadShared @ 0x1402A7C94 (MiLockVadShared.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403D88FC (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiVadDeleted @ 0x140432030 (MiVadDeleted.c)
 *     MiReadVadFlags2 @ 0x140455FA8 (MiReadVadFlags2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x140903B10 (MiFillMapFileInfo.c)
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
  _QWORD **v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rcx
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // r8d
  int v33; // eax
  int v34; // ecx
  unsigned int v35; // [rsp+20h] [rbp-78h]
  int v36; // [rsp+24h] [rbp-74h]
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
  v35 = v7;
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    v36 = 0;
  }
  else
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v36 = 1;
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
            v25 = (_QWORD **)i[1];
            v26 = (__int64)i;
            v13 = i;
            if ( v25 )
            {
              v27 = *v25;
              for ( i = (_QWORD *)i[1]; v27; v27 = (_QWORD *)*v27 )
                i = v27;
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
            MiLockVadShared((__int64)CurrentThread, v26);
            if ( (unsigned int)MiVadDeleted(v26) || v16 == 1 )
              goto LABEL_40;
            if ( (v14 & 0x200000) == 0 )
              break;
            if ( v7 >= 4 )
            {
              *(_QWORD *)v8 = (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) << 12;
              *(_QWORD *)(v8 + 8) = ((*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32))
                                   - (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32))
                                   + 1) << 12;
              if ( (*(unsigned int *)(v26 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 34) << 32)) < 0x7FFFFFFFDLL )
                v31 = (*(unsigned int *)(v26 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 34) << 32)) << 12;
              else
                v31 = 0LL;
              *(_QWORD *)(v8 + 24) = v31;
              *(_DWORD *)(v8 + 16) = PROCESS[1].Header.WaitListHead.Flink;
              *(_DWORD *)(v8 + 20) = 0x2000;
              v32 = v16 - 3;
              if ( v32 )
              {
                if ( v32 == 1 )
                {
                  *(_DWORD *)(v8 + 20) = 8396800;
                  v34 = 8396800;
                }
                else
                {
                  v33 = *(_DWORD *)(v26 + 48);
                  v34 = 0x2000;
                  if ( (v33 & 0x200000) != 0 && ((v33 & 0x800000) != 0 || (v33 & 0x180000u) >= 0x100000) )
                  {
                    *(_DWORD *)(v8 + 20) = 536879104;
                    v34 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v26 + 48) & 0xC200000) == 0x8200000 )
              {
                v34 = 0x2000;
              }
              else
              {
                *(_DWORD *)(v8 + 20) = 4202496;
                v34 = 4202496;
              }
              if ( (*(_DWORD *)(v26 + 48) & 0x600000) == 0x600000 )
                *(_DWORD *)(v8 + 20) = v34 | 0x200000;
              v30 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_47;
            }
LABEL_40:
            MiUnlockVadShared((__int64)CurrentThread, v26);
          }
          if ( v16 != 2 || (v14 & 0xF80) != 0x380 || (v7 & 1) == 0 )
          {
            if ( (v7 & 2) != 0 )
            {
              MiFillMapFileInfo(v15, v8);
              v30 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_47:
              *(_QWORD *)v8 = v30;
              goto LABEL_32;
            }
            goto LABEL_40;
          }
          v17 = **(_QWORD **)(v26 + 72);
          v18 = (*(unsigned int *)(v26 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 32) << 32)) << 12;
          if ( (unsigned int)MiVadMapsLargeImage(v26) )
            v18 += (unsigned __int64)*(unsigned __int8 *)(MiLocateLockedVadEvent(v19, 16) + 8) << 16;
          VadFlags2 = (unsigned int)MiReadVadFlags2(v26);
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
          if ( (v35 & 2) != 0 )
          {
            v29 = VadFlags2 ^ (VadFlags2 ^ v24) & 0xFFFFFFFFFFFFFFFEuLL;
            *(_QWORD *)(v8 + 8) = v29;
            *(_QWORD *)(v8 + 8) = ((unsigned __int64)*(unsigned int *)(v26 + 48) >> 6) ^ (((unsigned __int64)*(unsigned int *)(v26 + 48) >> 6) ^ v29) & 0xFFFFFFFFFFFFFFC1uLL;
            *(_QWORD *)(v8 + 32) = (*(unsigned int *)(v26 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 34) << 32)) << 12;
          }
          v7 = v35;
LABEL_32:
          MiUnlockVadShared((__int64)CurrentThread, v26);
          v8 += 48LL;
        }
      }
    }
  }
LABEL_42:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS);
  if ( v36 )
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  return v8;
}
