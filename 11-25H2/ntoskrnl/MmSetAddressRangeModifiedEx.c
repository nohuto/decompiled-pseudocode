/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x1402C18C0
 * Callers:
 *     CcFlushCacheOneRange @ 0x1402C13D0 (CcFlushCacheOneRange.c)
 *     CcZeroDataInCache @ 0x1402D5AD0 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     CcPurgeAndClearCacheSection @ 0x140462560 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x140481E80 (MmSetAddressRangeModified.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiGetMultiplexedVm @ 0x1402C2444 (MiGetMultiplexedVm.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1403F3C10 (MI_TIGHTER_PERMISSIONS.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiCompressTbFlushList @ 0x1404C7DF8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1404FC5A0 (qsort.c)
 */

__int64 __fastcall MmSetAddressRangeModifiedEx(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // r13
  int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // r15
  unsigned __int64 *v8; // r14
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 MultiplexedVm; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 v19; // r12
  ULONG_PTR v20; // rdi
  int v21; // ebx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 ProcessorFlushList; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  int i; // ebp
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 *v38; // r10
  __int64 v40; // rdx
  int v41; // r9d
  int v42; // ecx
  int v43; // eax
  unsigned __int64 v44; // rcx
  int v45; // eax
  unsigned __int64 v46; // [rsp+20h] [rbp-78h]
  ULONG_PTR v47; // [rsp+28h] [rbp-70h] BYREF
  __int64 v48; // [rsp+30h] [rbp-68h]
  unsigned __int64 v49; // [rsp+38h] [rbp-60h]
  unsigned __int64 v50; // [rsp+40h] [rbp-58h]
  unsigned __int64 v51; // [rsp+A0h] [rbp+8h]
  int ProtectionMask; // [rsp+A8h] [rbp+10h]
  int v53; // [rsp+B0h] [rbp+18h] BYREF
  int v54; // [rsp+B8h] [rbp+20h]

  v53 = a3;
  LOBYTE(v53) = 0;
  v4 = 0;
  ProtectionMask = MiMakeProtectionMask(4LL, a2, a2);
  v5 = ProtectionMask;
  v6 = 0;
  v7 = 0LL;
  v8 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v46 = (((a1 + v9 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v10 = 0LL;
  v50 = MiLockWorkingSetOptimal((__int64)&unk_140E3D340, (unsigned __int64)v8, (unsigned __int8 *)&v53, v11);
  MultiplexedVm = MiGetMultiplexedVm(v12, a1 & 0xFFFFFFFFFFFFF000uLL);
  v14 = v46;
  v48 = MultiplexedVm;
  v15 = a1 & 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v16 = *v8;
    if ( (*v8 & 1) != 0 )
    {
      v54 = 0;
      v17 = 0LL;
      v49 = v16 >> 12;
      v18 = 48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v19 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v18 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v18 + 34) & 0x10) == 0 || (*(_DWORD *)(v18 + 16) & 0x400LL) == 0 )
        v17 = MiCaptureDirtyBitToPfn(v18);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo(v19, v17, 0);
      v5 = ProtectionMask;
      if ( ProtectionMask == 2 && (v16 & 0x800) != 0 )
      {
        v10 = (v49 << 12) ^ ((v49 << 12) ^ v10) & 0xFFF0000000000FFFuLL;
        MiWriteValidPteNewProtection((ULONG_PTR)v8, v10);
        if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v16, v10) )
          v43 = v54;
        else
          v43 = 1;
        if ( (v16 & 0x42) != 0 )
          v4 = 1;
        v6 = 0;
        if ( v43 )
          goto LABEL_17;
      }
      else
      {
        if ( (v16 & 0x42) != 0 )
        {
          v6 = 0;
          v20 = v16 & 0x80FFFFFFFFFFFFBDuLL | MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0x7F00000000000000LL;
          v21 = 0;
          v47 = v20;
          if ( MiPteInShadowRange((unsigned __int64)v8) )
          {
            v45 = MiSanitizeShadowPxe(v23, &v47);
            v20 = v47;
            v21 = v45;
          }
          if ( _bittest64(&MiFlags, 0x24u) )
          {
            if ( (v20 & 0x20) == 0 )
            {
              v23 = 0xFFFFF6C000000000uLL;
              if ( (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, v20);
            }
          }
          *v8 = v20;
          if ( v21 )
            MiWritePteShadow(v8, v20);
          v4 = 1;
LABEL_17:
          if ( v7 )
          {
LABEL_23:
            v29 = 1LL;
            v30 = v51;
            if ( *(_DWORD *)(v7 + 8) != 1 )
            {
              v42 = *(_DWORD *)(v7 + 16);
              if ( (v42 & 4) == 0 && v51 >= 0xFFFFF68000000000uLL && v51 <= 0xFFFFF6FFFFFFFFFFuLL )
                *(_DWORD *)(v7 + 16) = v42 | 4;
            }
LABEL_24:
            for ( i = 0; ; i = 1 )
            {
              v32 = *(unsigned int *)(v7 + 28);
              if ( (_DWORD)v32 )
              {
                if ( (*(_DWORD *)(v7 + 16) & 2) == 0 )
                {
                  v33 = v7 + 8LL * (unsigned int)(v32 - 1);
                  v34 = *(_QWORD *)(v33 + 40);
                  if ( (v34 & 0xC00) == 0 )
                  {
                    v35 = *(_QWORD *)(v33 + 40) & 0x3FFLL;
                    if ( (v34 & 0xFFFFFFFFFFFFF000uLL) + ((v35 + 1) << 12) == v30
                      && v29 + v35 > v35
                      && v29 + v35 <= 0x3FF )
                    {
                      *(_QWORD *)(v7 + 32) += v29;
                      *(_QWORD *)(v33 + 40) = (v34 + v29) ^ ((v34 + v29) ^ v34) & 0xFFFFFFFFFFFFFC00uLL;
                      goto LABEL_40;
                    }
                    v36 = (unsigned int)(v32 - 1) + 5LL;
                    v37 = *(_QWORD *)(v7 + 8 * v36);
                    v38 = (unsigned __int64 *)(v7 + 8 * v36);
                    if ( (v37 & 0xFFFFFFFFFFFFF000uLL) == v30 + (v29 << 12) )
                    {
                      v44 = v37 & 0x3FF;
                      if ( v29 + v44 <= 0x3FF && v29 + v44 > v44 )
                      {
                        *(_QWORD *)(v7 + 32) += v29;
                        *v38 = (v37 - (v29 << 12) + v29) ^ ((v37 - (v29 << 12) + v29) ^ (v37 - (v29 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                        goto LABEL_40;
                      }
                    }
                  }
                }
              }
              if ( (_DWORD)v32 != *(_DWORD *)(v7 + 12) )
                break;
              if ( i )
              {
                if ( !*(_BYTE *)(v7 + 25) )
                  *(_BYTE *)(v7 + 25) = 1;
                goto LABEL_40;
              }
              if ( *(_BYTE *)(v7 + 25) )
                goto LABEL_40;
              qsort((void *)(v7 + 40), *(unsigned int *)(v7 + 28), 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(v7);
            }
            while ( v29 )
            {
              v40 = 1024LL;
              if ( (unsigned __int64)(v29 - 1) <= 0x3FF )
                v40 = v29;
              *(_QWORD *)(v7 + 8 * v32 + 40) = v30 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v40 - 1) & 0x3FF;
              v41 = *(_DWORD *)(v7 + 28);
              *(_QWORD *)(v7 + 32) += v40;
              v32 = (unsigned int)(v41 + 1);
              v30 += v40 << 12;
              *(_DWORD *)(v7 + 28) = v32;
              v29 -= v40;
              if ( v29 && (_DWORD)v32 == *(_DWORD *)(v7 + 12) )
                goto LABEL_24;
            }
LABEL_40:
            v5 = ProtectionMask;
            goto LABEL_41;
          }
          ProcessorFlushList = MiGetProcessorFlushList(v23, v22, v24, v25);
          v27 = v48;
          v7 = ProcessorFlushList;
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 32;
          *(_QWORD *)ProcessorFlushList = v27;
          *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v27 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v27 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v27 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            if ( (*(_DWORD *)(v27 + 184) & 0xF) == 0 )
            {
              v28 = 1;
LABEL_22:
              *(_DWORD *)(v7 + 16) &= 0xFFFFFFDB;
              *(_DWORD *)(v7 + 8) = v28;
              *(_WORD *)(v7 + 25) = 0;
              *(_DWORD *)(v7 + 28) = 0;
              *(_QWORD *)(v7 + 32) = 0LL;
              *(_QWORD *)(v7 + 40) = 0LL;
              goto LABEL_23;
            }
          }
          else
          {
            *(_DWORD *)(ProcessorFlushList + 16) |= 9u;
          }
          v28 = 0;
          goto LABEL_22;
        }
        v6 = 0;
      }
LABEL_41:
      v15 = v51;
      v14 = v46;
      goto LABEL_42;
    }
    if ( v5 == 2 && (v16 & 8) == 0 )
      *v8 = v16 | 8;
LABEL_42:
    v15 += 4096LL;
    ++v8;
    v51 = v15;
  }
  while ( (unsigned __int64)v8 <= v14 );
  if ( v7 )
  {
    MiFlushTbList(v7, 0xFFFFDE0000000000uLL, 0xFFFFFFFFFFLL);
    MiReleaseProcessorFlushList();
  }
  MiUnlockWorkingSetOptimal(v48, v50, v53);
  return v4;
}
