/*
 * XREFs of MiInitializeImageProtos @ 0x1403F26E0
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiReferenceControlAreaPfn @ 0x140347F04 (MiReferenceControlAreaPfn.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiEndingOffset @ 0x1403F2438 (MiEndingOffset.c)
 *     MiGetPageForHeader @ 0x1403F2A54 (MiGetPageForHeader.c)
 *     MiInitializeTransitionPfn @ 0x1403F2C1C (MiInitializeTransitionPfn.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 result; // rax
  char v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // r12
  __int64 PageForHeader; // r13
  char *v15; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  unsigned int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  unsigned __int64 v24; // [rsp+40h] [rbp-68h]
  unsigned __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  unsigned __int8 v29; // [rsp+C0h] [rbp+18h] BYREF
  int v30; // [rsp+C8h] [rbp+20h]

  v2 = a1;
  v23 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  v22 = *(unsigned int *)(a2 + 40);
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
  v29 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      result = *(unsigned int *)(v5 + 32);
      v8 = *(_QWORD *)(v5 + 8);
      v26 = v7;
      if ( (result & 0x20000) == 0 )
      {
        v9 = MiStartingOffset((__int64 *)v5, v8, 0xFFFFFFFF);
        v24 = MiEndingOffset((_DWORD *)v5);
        result = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v25 = result;
        while ( 1 )
        {
          if ( v8 >= result )
          {
            v7 = v26;
            goto LABEL_28;
          }
          if ( (v8 & 0xFFF) == 0 || !v6 )
          {
            if ( v6 )
            {
              LOBYTE(v10) = v29;
              MiUnlockProtoPoolPage(v6, v10, v11, v12);
            }
            result = MiLockProtoPoolPageForce(v8, &v29);
            v6 = result;
          }
          v13 = v9 + 4096;
          if ( v9 + 4096 > v22 )
            break;
          if ( (*(_QWORD *)v8 & 1) == 0 && (*(_QWORD *)v8 & 0xC00LL) != 0x800 && (*(_QWORD *)v8 & 0x400LL) != 0 )
          {
            PageForHeader = MiGetPageForHeader(v23, (*(_DWORD *)(v2 + 56) >> 20) & 0x7F, 1LL);
            if ( PageForHeader != -1 )
            {
              if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                v15 = *(char **)(a2 + 24);
              else
                v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
              v16 = MiMapPageInHyperSpaceWorker(PageForHeader, 0LL, 0x80000000);
              KeCopyPage(v16, &v15[v9], 1LL);
              if ( v13 > v24 )
                memset_0((void *)(v16 - (unsigned int)(v9 - v24 + 4096) + 4096), 0, (unsigned int)(v9 - v24 + 4096));
              *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
              *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
              v17 = 48 * PageForHeader - 0x220000000000LL;
              MiReferenceControlAreaPfn(a1, 0LL, 1u);
              v18 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v18 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v18);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v17 + 24) < 0 );
              }
              MiInitializeTransitionPfn(PageForHeader, v8, -1LL);
              v30 = *(_DWORD *)(v17 + 32);
              HIBYTE(v30) ^= (HIBYTE(v30) ^ v4) & 7;
              *(_DWORD *)(v17 + 32) = v30;
              MiRemoveLockedPageChargeAndDecRef(48 * PageForHeader - 0x220000000000LL, v19, v20, v21);
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v2 = a1;
          }
          result = v25;
          v8 += 8LL;
          v9 = v13;
        }
        v7 = 0LL;
LABEL_28:
        if ( v6 )
        {
          LOBYTE(v10) = v29;
          result = MiUnlockProtoPoolPage(v6, v10, v11, v12);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
