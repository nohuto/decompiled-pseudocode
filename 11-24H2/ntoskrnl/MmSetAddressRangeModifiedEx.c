/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x140240600
 * Callers:
 *     CcFlushCacheOneRange @ 0x140240110 (CcFlushCacheOneRange.c)
 *     CcZeroDataInCache @ 0x140267564 (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1404612E4 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x140482B80 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x140494980 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiGetMultiplexedVm @ 0x140240018 (MiGetMultiplexedVm.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiCompressTbFlushList @ 0x140432A2C (MiCompressTbFlushList.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140436740 (MI_TIGHTER_PERMISSIONS.c)
 *     qsort @ 0x1404FED20 (qsort.c)
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
  __int64 v11; // rcx
  __int64 MultiplexedVm; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rbp
  __int64 v18; // r12
  ULONG_PTR v19; // rdi
  int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 ProcessorFlushList; // rax
  int v24; // eax
  __int64 v25; // rbx
  unsigned __int64 v26; // rdi
  int i; // ebp
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 *v34; // r10
  __int64 v36; // rdx
  int v37; // r9d
  int v38; // ecx
  int v39; // eax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+30h] [rbp-68h]
  __int64 v43; // [rsp+40h] [rbp-58h]
  unsigned __int64 v44; // [rsp+A0h] [rbp+8h]
  int ProtectionMask; // [rsp+A8h] [rbp+10h]
  int v46; // [rsp+B0h] [rbp+18h] BYREF
  int v47; // [rsp+B8h] [rbp+20h]

  v46 = a3;
  LOBYTE(v46) = 0;
  v4 = 0;
  ProtectionMask = MiMakeProtectionMask(4LL);
  v5 = ProtectionMask;
  v6 = 0;
  v7 = 0LL;
  v8 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v41 = (((a1 + v9 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v44 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v10 = 0LL;
  v43 = MiLockWorkingSetOptimal(&unk_140E3D580, v8, &v46);
  MultiplexedVm = MiGetMultiplexedVm(v11, a1 & 0xFFFFFFFFFFFFF000uLL);
  v13 = v41;
  v42 = MultiplexedVm;
  v14 = a1 & 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v15 = *v8;
    if ( (*v8 & 1) != 0 )
    {
      v47 = 0;
      v16 = 0LL;
      v17 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      v18 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v17 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v17 + 34) & 0x10) == 0 || (*(_DWORD *)(v17 + 16) & 0x400LL) == 0 )
        v16 = MiCaptureDirtyBitToPfn(v17);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        MiReleasePageFileInfo(v18, v16, 0LL);
      v5 = ProtectionMask;
      if ( ProtectionMask == 2 && (v15 & 0x800) != 0 )
      {
        v10 = (v15 >> 12 << 12) ^ ((v15 >> 12 << 12) ^ v10) & 0xFFF0000000000FFFuLL;
        MiWriteValidPteNewProtection((ULONG_PTR)v8, v10);
        if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v15, v10) )
          v39 = v47;
        else
          v39 = 1;
        if ( (v15 & 0x42) != 0 )
          v4 = 1;
        v6 = 0;
        if ( v39 )
          goto LABEL_17;
      }
      else
      {
        if ( (v15 & 0x42) != 0 )
        {
          v6 = 0;
          v19 = v15 & 0x80FFFFFFFFFFFFBDuLL | MI_READ_PTE_LOCK_FREE((unsigned __int64)v8) & 0x7F00000000000000LL;
          v20 = 0;
          if ( (unsigned int)MiPteInShadowRange(v8) )
            v20 = MiSanitizeShadowPxe();
          if ( _bittest64(&MiFlags, 0x24u) )
          {
            if ( (v19 & 0x20) == 0 )
            {
              v22 = 0xFFFFF6C000000000uLL;
              if ( (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
                MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, v19, 128);
            }
          }
          *v8 = v19;
          if ( v20 )
            MiWritePteShadow();
          v4 = 1;
LABEL_17:
          if ( v7 )
          {
LABEL_23:
            v25 = 1LL;
            v26 = v44;
            if ( *(_DWORD *)(v7 + 8) != 1 )
            {
              v38 = *(_DWORD *)(v7 + 16);
              if ( (v38 & 4) == 0 && v44 >= 0xFFFFF68000000000uLL && v44 <= 0xFFFFF6FFFFFFFFFFuLL )
                *(_DWORD *)(v7 + 16) = v38 | 4;
            }
LABEL_24:
            for ( i = 0; ; i = 1 )
            {
              v28 = *(unsigned int *)(v7 + 28);
              if ( (_DWORD)v28 )
              {
                if ( (*(_DWORD *)(v7 + 16) & 2) == 0 )
                {
                  v29 = v7 + 8LL * (unsigned int)(v28 - 1);
                  v30 = *(_QWORD *)(v29 + 40);
                  if ( (v30 & 0xC00) == 0 )
                  {
                    v31 = *(_QWORD *)(v29 + 40) & 0x3FFLL;
                    if ( (v30 & 0xFFFFFFFFFFFFF000uLL) + ((v31 + 1) << 12) == v26
                      && v25 + v31 > v31
                      && v25 + v31 <= 0x3FF )
                    {
                      *(_QWORD *)(v7 + 32) += v25;
                      *(_QWORD *)(v29 + 40) = (v30 + v25) ^ ((v30 + v25) ^ v30) & 0xFFFFFFFFFFFFFC00uLL;
                      goto LABEL_43;
                    }
                    v32 = (unsigned int)(v28 - 1) + 5LL;
                    v33 = *(_QWORD *)(v7 + 8 * v32);
                    v34 = (unsigned __int64 *)(v7 + 8 * v32);
                    if ( (v33 & 0xFFFFFFFFFFFFF000uLL) == v26 + (v25 << 12) )
                    {
                      v40 = v33 & 0x3FF;
                      if ( v25 + v40 <= 0x3FF && v25 + v40 > v40 )
                      {
                        *(_QWORD *)(v7 + 32) += v25;
                        *v34 = (v33 - (v25 << 12) + v25) ^ ((v33 - (v25 << 12) + v25) ^ (v33 - (v25 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                        goto LABEL_43;
                      }
                    }
                  }
                }
              }
              if ( (_DWORD)v28 != *(_DWORD *)(v7 + 12) )
                break;
              if ( i )
              {
                if ( !*(_BYTE *)(v7 + 25) )
                  *(_BYTE *)(v7 + 25) = 1;
                goto LABEL_43;
              }
              if ( *(_BYTE *)(v7 + 25) )
                goto LABEL_43;
              qsort((void *)(v7 + 40), *(unsigned int *)(v7 + 28), 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(v7);
            }
            while ( v25 )
            {
              v36 = 1024LL;
              if ( (unsigned __int64)(v25 - 1) <= 0x3FF )
                v36 = v25;
              *(_QWORD *)(v7 + 8 * v28 + 40) = v26 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v36 - 1) & 0x3FF;
              v37 = *(_DWORD *)(v7 + 28);
              *(_QWORD *)(v7 + 32) += v36;
              v28 = (unsigned int)(v37 + 1);
              v26 += v36 << 12;
              *(_DWORD *)(v7 + 28) = v28;
              v25 -= v36;
              if ( v25 && (_DWORD)v28 == *(_DWORD *)(v7 + 12) )
                goto LABEL_24;
            }
LABEL_43:
            v5 = ProtectionMask;
            goto LABEL_44;
          }
          ProcessorFlushList = MiGetProcessorFlushList(v22, v21);
          v7 = ProcessorFlushList;
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 32;
          *(_QWORD *)ProcessorFlushList = v42;
          *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v42 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v42 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v42 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            if ( (*(_DWORD *)(v42 + 184) & 0xF) == 0 )
            {
              v24 = 1;
LABEL_22:
              *(_DWORD *)(v7 + 16) &= 0xFFFFFFDB;
              *(_DWORD *)(v7 + 8) = v24;
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
          v24 = 0;
          goto LABEL_22;
        }
        v6 = 0;
      }
LABEL_44:
      v14 = v44;
      v13 = v41;
      goto LABEL_45;
    }
    if ( v5 == 2 && (v15 & 8) == 0 )
      *v8 = v15 | 8;
LABEL_45:
    v14 += 4096LL;
    ++v8;
    v44 = v14;
  }
  while ( (unsigned __int64)v8 <= v13 );
  if ( v7 )
  {
    MiFlushTbList(v7, 0xFFFFDE0000000000uLL);
    MiReleaseProcessorFlushList();
  }
  MiUnlockWorkingSetOptimal(v42, v43, (unsigned __int8)v46);
  return v4;
}
