/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x140263DE4
 * Callers:
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiGetFastLargePages @ 0x14026499C (MiGetFastLargePages.c)
 *     MiFindLargeNodePage @ 0x1404CB09C (MiFindLargeNodePage.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140251B50 (MiAssignDefaultChannel.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1402640DC (MiPerformOnDemandLargePageCoalesce.c)
 *     MiWaitForPageMoveComplete @ 0x14026481C (MiWaitForPageMoveComplete.c)
 *     MiPageIndexToMoveInProgress @ 0x14026489C (MiPageIndexToMoveInProgress.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 Page; // r12
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  unsigned __int8 v20; // al
  int v21; // r9d
  unsigned int v22; // r8d
  __int64 v23; // rbx
  volatile signed __int32 *v24; // rdi
  char v25; // bp
  unsigned int v26; // esi
  volatile signed __int32 *v27; // [rsp+30h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A8h] [rbp+20h]

  v30 = 0;
  v6 = (a2 >> 9) & 0x3F;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 16) + 57216LL * v6;
  v9 = HIWORD(a2) & 3;
  Page = -1LL;
  v11 = a3 | 0x33400;
  v14 = *(_QWORD *)(v8 + 8LL * (int)MiPageIndexToMoveInProgress(1LL) + 15192);
LABEL_2:
  v16 = 0x140000000uLL;
  while ( (unsigned int)v9 <= (unsigned int)v15 )
  {
    if ( a5 )
    {
      v7 ^= (unsigned __int8)(v7 ^ ((unsigned int)(a5 / (MiPageSizes[v9] << 12)) % dword_140E2DD00[HIWORD(v7) & 3]));
    }
    else
    {
      v28 = 0LL;
      MiInitializePageColorBase(0LL, (unsigned int)v9, v6 + 1, &v27);
      v20 = MiAssignDefaultChannel(((unsigned __int64)(v7 & 0x8000 | v28 & 0xFFF37FFF | a2 & 0xC0000) >> 9) & 0x3F);
      LODWORD(v28) = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)(v20 << 8)) & 0x100;
      v27 = (volatile signed __int32 *)(v8 + 1280 * v9);
      v22 = v28;
      v15 = 0x140000000uLL;
      v7 = v22 ^ (unsigned __int8)(v22 ^ (_InterlockedExchangeAdd(v27, 1u)
                                        % (unsigned int)dword_140E2DD00[HIWORD(v22) & 3]));
    }
    Page = MiGetPage(a1, v7, v11, v15);
    if ( Page != -1 )
      break;
    if ( !v30 )
    {
      v30 = 1;
      v17 = MiPerformOnDemandLargePageCoalesce(a1, v9, v6, (v7 >> 15) & 1, a6);
      v15 = a4;
      v16 = 0x140000000uLL;
      if ( v17 )
        continue;
    }
    v18 = MiWaitForPageMoveComplete(v8, 1LL, v16, v15);
    v15 = a4;
    v13 = v18 ^ v14;
    if ( ((v18 ^ v14) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v14 = v18;
    }
    else
    {
      if ( (_DWORD)v9 == a4 )
        return 0LL;
      v9 = (unsigned int)(v9 + 1);
      v30 = 0;
    }
    goto LABEL_2;
  }
  v23 = 48 * Page - 0x220000000000LL;
  v24 = (volatile signed __int32 *)(v23 + 24);
  if ( (v11 & 1) != 0 )
  {
    v25 = 17;
    v26 = 0;
    while ( _interlockedbittestandset64(v24, 0x3FuLL) )
    {
      do
      {
        if ( (++v26 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v12, v16, v15) )
        {
          HvlNotifyLongSpinWait(v26);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v24 < 0 );
    }
  }
  else
  {
    v25 = MiLockPageInline(48 * Page - 0x220000000000LL);
  }
  LOBYTE(v12) = v25;
  *(_QWORD *)(v23 + 24) = *(_QWORD *)v24 & 0xC000000000000000uLL | 1;
  HIWORD(v33) = HIWORD(*(_DWORD *)(v23 + 32));
  LOWORD(v33) = 2;
  *(_DWORD *)(v23 + 32) = v33;
  MiUnlockPage(48 * Page - 0x220000000000LL, v12);
  return 48 * Page - 0x220000000000LL;
}
