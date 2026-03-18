/*
 * XREFs of MiInitializeImageProtos @ 0x140453928
 * Callers:
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReferenceControlAreaPfn @ 0x14033BC94 (MiReferenceControlAreaPfn.c)
 *     MiEndingOffset @ 0x14034EDF8 (MiEndingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPageForHeader @ 0x140453C9C (MiGetPageForHeader.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     KeCopyPage @ 0x1406A8140 (KeCopyPage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 result; // rax
  char v4; // r14
  __int64 v5; // rbx
  ULONG_PTR v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r12
  __int64 PageForHeader; // r13
  char *v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h]
  unsigned __int64 v23; // [rsp+40h] [rbp-68h]
  unsigned __int64 v24; // [rsp+48h] [rbp-60h]
  __int64 v25; // [rsp+50h] [rbp-58h]
  unsigned __int8 v28; // [rsp+C0h] [rbp+18h] BYREF
  int v29; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  v22 = *((_QWORD *)qword_140E2FD48 + (*(_WORD *)(a1 + 60) & 0x3FF));
  v21 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v4 = result;
  if ( (unsigned int)result > 5 )
  {
    v4 = 5;
  }
  else if ( (_DWORD)result )
  {
    v4 = result - 1;
  }
  v5 = v2 + 128;
  v28 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      result = *(unsigned int *)(v5 + 32);
      v8 = *(_QWORD *)(v5 + 8);
      v25 = v7;
      if ( (result & 0x20000) == 0 )
      {
        v9 = MiStartingOffset(v5, v8, 0xFFFFFFFF);
        v23 = MiEndingOffset((_DWORD *)v5);
        result = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v24 = result;
        while ( 1 )
        {
          if ( v8 >= result )
          {
            v7 = v25;
            goto LABEL_28;
          }
          if ( (v8 & 0xFFF) == 0 || !v6 )
          {
            if ( v6 )
              MiUnlockProtoPoolPage(v6, v28, v10, v11);
            result = MiLockProtoPoolPageForce(v8, &v28);
            v6 = result;
          }
          v12 = v9 + 4096;
          if ( v9 + 4096 > v21 )
            break;
          if ( (*(_QWORD *)v8 & 1) == 0 && (*(_QWORD *)v8 & 0xC00LL) != 0x800 && (*(_QWORD *)v8 & 0x400LL) != 0 )
          {
            PageForHeader = MiGetPageForHeader(v22, (*(_DWORD *)(v2 + 56) >> 20) & 0x7F, 1LL);
            if ( PageForHeader != -1 )
            {
              if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                v14 = *(char **)(a2 + 24);
              else
                v14 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
              v15 = MiMapPageInHyperSpaceWorker(PageForHeader, 0LL, 0x80000000);
              KeCopyPage(v15, &v14[v9], 1LL);
              if ( v12 > v23 )
                memset_0((void *)(v15 - (unsigned int)(v9 - v23 + 4096) + 4096), 0, (unsigned int)(v9 - v23 + 4096));
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
              v16 = 48 * PageForHeader - 0x220000000000LL;
              MiReferenceControlAreaPfn(a1, 0LL, 1u);
              v17 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v17 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait();
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v16 + 24) < 0 );
              }
              MiInitializeTransitionPfn(PageForHeader, v8, -1LL);
              v29 = *(_DWORD *)(v16 + 32);
              HIBYTE(v29) ^= (HIBYTE(v29) ^ v4) & 7;
              *(_DWORD *)(v16 + 32) = v29;
              MiRemoveLockedPageChargeAndDecRef(48 * PageForHeader - 0x220000000000LL, v18, v19, v20);
              _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v2 = a1;
          }
          result = v24;
          v8 += 8LL;
          v9 = v12;
        }
        v7 = 0LL;
LABEL_28:
        if ( v6 )
        {
          result = MiUnlockProtoPoolPage(v6, v28, v10, v11);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
