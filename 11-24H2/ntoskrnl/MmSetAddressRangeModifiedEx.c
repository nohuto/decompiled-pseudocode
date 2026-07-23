/*
 * XREFs of MmSetAddressRangeModifiedEx @ 0x140208750
 * Callers:
 *     CcFlushCacheOneRange @ 0x140208260 (CcFlushCacheOneRange.c)
 *     CcZeroDataInCache @ 0x14025EB44 (CcZeroDataInCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1404568F4 (CcPurgeAndClearCacheSection.c)
 *     MmSetAddressRangeModified @ 0x14047DD70 (MmSetAddressRangeModified.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetMultiplexedVm @ 0x140208168 (MiGetMultiplexedVm.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiCompressTbFlushList @ 0x140215218 (MiCompressTbFlushList.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1404291C0 (MI_TIGHTER_PERMISSIONS.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
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
  __int64 v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r12
  unsigned __int64 v22; // rdi
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 ProcessorFlushList; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  int i; // ebp
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
  unsigned __int64 v47; // [rsp+28h] [rbp-70h] BYREF
  __int64 v48; // [rsp+30h] [rbp-68h]
  unsigned __int64 v49; // [rsp+38h] [rbp-60h]
  __int64 v50; // [rsp+40h] [rbp-58h]
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
  v50 = MiLockWorkingSetOptimal(&unk_140E3D6C0, v8, &v53);
  MultiplexedVm = MiGetMultiplexedVm(v11, a1 & 0xFFFFFFFFFFFFF000uLL);
  v14 = v46;
  v15 = 0xFFFFFFFFFFLL;
  v48 = MultiplexedVm;
  v16 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v17 = 0xFFFFDE0000000000uLL;
  do
  {
    v18 = *v8;
    if ( (*v8 & 1) != 0 )
    {
      v54 = 0;
      v19 = 0LL;
      v49 = v18 >> 12;
      v20 = 48 * ((v18 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v17, v15, v13) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      v21 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v20 + 40) >> 43) & 0x3FFLL));
      if ( (*(_BYTE *)(v20 + 34) & 0x10) == 0 || (*(_DWORD *)(v20 + 16) & 0x400LL) == 0 )
        v19 = MiCaptureDirtyBitToPfn(v20);
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v19 )
        MiReleasePageFileInfo(v21, v19, 0LL);
      v5 = ProtectionMask;
      if ( ProtectionMask == 2 && (v18 & 0x800) != 0 )
      {
        v10 = (v49 << 12) ^ ((v49 << 12) ^ v10) & 0xFFF0000000000FFFuLL;
        MiWriteValidPteNewProtection((ULONG_PTR)v8);
        if ( ((MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0) && !(unsigned int)MI_TIGHTER_PERMISSIONS(v18, v10) )
          v43 = v54;
        else
          v43 = 1;
        if ( (v18 & 0x42) != 0 )
          v4 = 1;
        v6 = 0;
        if ( v43 )
          goto LABEL_17;
      }
      else
      {
        if ( (v18 & 0x42) != 0 )
        {
          v6 = 0;
          v22 = v18 & 0x80FFFFFFFFFFFFBDuLL | MI_READ_PTE_LOCK_FREE(v8, v17, v15) & 0x7F00000000000000LL;
          v23 = 0;
          v47 = v22;
          if ( MiPteInShadowRange((unsigned __int64)v8) )
          {
            v45 = MiSanitizeShadowPxe(v24, (__int64)&v47, v25);
            v22 = v47;
            v23 = v45;
          }
          if ( _bittest64(&MiFlags, 0x24u) && (v22 & 0x20) == 0 && (unsigned __int64)v8 >= 0xFFFFF6C000000000uLL )
            MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v8, v22, 128LL);
          *v8 = v22;
          if ( v23 )
            MiWritePteShadow((__int64)v8, v22, v25, v26);
          v4 = 1;
LABEL_17:
          if ( v7 )
          {
LABEL_23:
            v30 = 1LL;
            v31 = v51;
            if ( *(_DWORD *)(v7 + 8) != 1 )
            {
              v42 = *(_DWORD *)(v7 + 16);
              if ( (v42 & 4) == 0 && v51 >= 0xFFFFF68000000000uLL && v51 <= 0xFFFFF6FFFFFFFFFFuLL )
                *(_DWORD *)(v7 + 16) = v42 | 4;
            }
LABEL_24:
            for ( i = 0; ; i = 1 )
            {
              v13 = *(unsigned int *)(v7 + 28);
              if ( (_DWORD)v13 )
              {
                if ( (*(_DWORD *)(v7 + 16) & 2) == 0 )
                {
                  v33 = v7 + 8LL * (unsigned int)(v13 - 1);
                  v34 = *(_QWORD *)(v33 + 40);
                  if ( (v34 & 0xC00) == 0 )
                  {
                    v35 = *(_QWORD *)(v33 + 40) & 0x3FFLL;
                    if ( (v34 & 0xFFFFFFFFFFFFF000uLL) + ((v35 + 1) << 12) == v31
                      && v30 + v35 > v35
                      && v30 + v35 <= 0x3FF )
                    {
                      *(_QWORD *)(v7 + 32) += v30;
                      *(_QWORD *)(v33 + 40) = (v34 + v30) ^ ((v34 + v30) ^ v34) & 0xFFFFFFFFFFFFFC00uLL;
                      goto LABEL_43;
                    }
                    v36 = (unsigned int)(v13 - 1) + 5LL;
                    v37 = *(_QWORD *)(v7 + 8 * v36);
                    v38 = (unsigned __int64 *)(v7 + 8 * v36);
                    if ( (v37 & 0xFFFFFFFFFFFFF000uLL) == v31 + (v30 << 12) )
                    {
                      v44 = v37 & 0x3FF;
                      if ( v30 + v44 <= 0x3FF && v30 + v44 > v44 )
                      {
                        *(_QWORD *)(v7 + 32) += v30;
                        *v38 = (v37 - (v30 << 12) + v30) ^ ((v37 - (v30 << 12) + v30) ^ (v37 - (v30 << 12))) & 0xFFFFFFFFFFFFFC00uLL;
                        goto LABEL_43;
                      }
                    }
                  }
                }
              }
              if ( (_DWORD)v13 != *(_DWORD *)(v7 + 12) )
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
            while ( v30 )
            {
              v40 = 1024LL;
              if ( (unsigned __int64)(v30 - 1) <= 0x3FF )
                v40 = v30;
              *(_QWORD *)(v7 + 8 * v13 + 40) = v31 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v40 - 1) & 0x3FF;
              v41 = *(_DWORD *)(v7 + 28);
              *(_QWORD *)(v7 + 32) += v40;
              v13 = (unsigned int)(v41 + 1);
              v31 += v40 << 12;
              *(_DWORD *)(v7 + 28) = v13;
              v30 -= v40;
              if ( v30 && (_DWORD)v13 == *(_DWORD *)(v7 + 12) )
                goto LABEL_24;
            }
LABEL_43:
            v5 = ProtectionMask;
            goto LABEL_44;
          }
          ProcessorFlushList = MiGetProcessorFlushList();
          v28 = v48;
          v7 = ProcessorFlushList;
          *(_DWORD *)(ProcessorFlushList + 16) = 0;
          *(_DWORD *)(ProcessorFlushList + 20) = 32;
          *(_QWORD *)ProcessorFlushList = v28;
          *(_BYTE *)(ProcessorFlushList + 24) = (*(_DWORD *)(v28 + 184) & 0x800) != 0;
          if ( (*(_DWORD *)(v28 + 184) & 0xF) != 0
            || (struct _LIST_ENTRY **)v28 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            if ( (*(_DWORD *)(v28 + 184) & 0xF) == 0 )
            {
              v29 = 1;
LABEL_22:
              *(_DWORD *)(v7 + 16) &= 0xFFFFFFDB;
              *(_DWORD *)(v7 + 8) = v29;
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
          v29 = 0;
          goto LABEL_22;
        }
        v6 = 0;
      }
LABEL_44:
      v16 = v51;
      v15 = 0xFFFFFFFFFFLL;
      v14 = v46;
      v17 = 0xFFFFDE0000000000uLL;
      goto LABEL_45;
    }
    if ( v5 == 2 && (v18 & 8) == 0 )
      *v8 = v18 | 8;
LABEL_45:
    v16 += 4096LL;
    ++v8;
    v51 = v16;
  }
  while ( (unsigned __int64)v8 <= v14 );
  if ( v7 )
  {
    MiFlushTbList(v7);
    MiReleaseProcessorFlushList();
  }
  MiUnlockWorkingSetOptimal(v48, v50, (unsigned __int8)v53);
  return v4;
}
