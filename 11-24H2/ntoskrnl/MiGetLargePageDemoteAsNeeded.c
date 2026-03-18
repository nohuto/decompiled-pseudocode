/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x1403D4F80
 * Callers:
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiGetFastLargePages @ 0x1403D5E44 (MiGetFastLargePages.c)
 *     MiFindLargeNodePage @ 0x1403D6288 (MiFindLargeNodePage.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiAssignDefaultChannel @ 0x1402F3560 (MiAssignDefaultChannel.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D5278 (MiPerformOnDemandLargePageCoalesce.c)
 *     MiWaitForPageMoveComplete @ 0x1403D59B8 (MiWaitForPageMoveComplete.c)
 *     MiPageIndexToMoveInProgress @ 0x1403D5A38 (MiPageIndexToMoveInProgress.c)
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
  __int64 v12; // rbp
  unsigned int v13; // r9d
  int v14; // eax
  __int64 v15; // rax
  unsigned __int8 v17; // al
  int v18; // r9d
  unsigned int v19; // r8d
  __int64 v20; // rbx
  volatile signed __int32 *v21; // rdi
  unsigned __int8 v22; // bp
  unsigned int v23; // esi
  volatile signed __int32 *v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A8h] [rbp+20h]

  v27 = 0;
  v6 = (a2 >> 9) & 0x3F;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 16) + 57216LL * v6;
  v9 = HIWORD(a2) & 3;
  Page = -1LL;
  v11 = a3 | 0x33400;
  v12 = *(_QWORD *)(v8 + 8LL * (int)MiPageIndexToMoveInProgress(1LL) + 15192);
  while ( (unsigned int)v9 <= v13 )
  {
    if ( a5 )
    {
      v7 ^= (unsigned __int8)(v7 ^ ((unsigned int)(a5 / (MiPageSizes[v9] << 12)) % dword_140E2DBC0[HIWORD(v7) & 3]));
    }
    else
    {
      v25 = 0LL;
      MiInitializePageColorBase(0LL, v9, v6 + 1, (__int64)&v24);
      v17 = MiAssignDefaultChannel(((unsigned __int64)(v7 & 0x8000 | v25 & 0xFFF37FFF | a2 & 0xC0000) >> 9) & 0x3F);
      LODWORD(v25) = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(v17 << 8)) & 0x100;
      v24 = (volatile signed __int32 *)(v8 + 1280 * v9);
      v19 = v25;
      v7 = v19 ^ (unsigned __int8)(v19 ^ (_InterlockedExchangeAdd(v24, 1u)
                                        % (unsigned int)dword_140E2DBC0[HIWORD(v19) & 3]));
    }
    Page = MiGetPage(a1, v7, v11);
    if ( Page != -1 )
      break;
    if ( !v27 )
    {
      v27 = 1;
      v14 = MiPerformOnDemandLargePageCoalesce(a1, v9, v6, (v7 >> 15) & 1, a6);
      v13 = a4;
      if ( v14 )
        continue;
    }
    v15 = MiWaitForPageMoveComplete(v8, 1LL);
    v13 = a4;
    if ( ((v15 ^ v12) & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v12 = v15;
    }
    else
    {
      if ( (_DWORD)v9 == a4 )
        return 0LL;
      v9 = (unsigned int)(v9 + 1);
      v27 = 0;
    }
  }
  v20 = 48 * Page - 0x220000000000LL;
  v21 = (volatile signed __int32 *)(v20 + 24);
  if ( (v11 & 1) != 0 )
  {
    v22 = 17;
    v23 = 0;
    while ( _interlockedbittestandset64(v21, 0x3FuLL) )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v21 < 0 );
    }
  }
  else
  {
    v22 = MiLockPageInline(48 * Page - 0x220000000000LL);
  }
  *(_QWORD *)(v20 + 24) = *(_QWORD *)v21 & 0xC000000000000000uLL | 1;
  HIWORD(v30) = HIWORD(*(_DWORD *)(v20 + 32));
  LOWORD(v30) = 2;
  *(_DWORD *)(v20 + 32) = v30;
  MiUnlockPage(48 * Page - 0x220000000000LL, v22);
  return 48 * Page - 0x220000000000LL;
}
