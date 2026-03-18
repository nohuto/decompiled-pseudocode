/*
 * XREFs of MiAllocateDummyPage @ 0x140C4EBD8
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140C4F7E0 (MiInitializeDummyPages.c)
 * Callees:
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiSetPfnContainingFrame @ 0x1402E6800 (MiSetPfnContainingFrame.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 */

__int64 MiAllocateDummyPage()
{
  unsigned __int32 v0; // eax
  __int64 Page; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 v4; // bl
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h]
  int v8; // [rsp+40h] [rbp+8h]
  int v9; // [rsp+40h] [rbp+8h]
  int v10; // [rsp+40h] [rbp+8h]

  v6 = 0LL;
  MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 1u);
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v6);
  v0 = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 1u);
  Page = MiGetPage(
           (__int64)&MiSystemPartition,
           DWORD2(v6) ^ (unsigned int)(unsigned __int8)(BYTE8(v6) ^ (v0
                                                                   % dword_140E2DBC0[(*((_QWORD *)&v6 + 1) >> 16) & 3LL])),
           0x80u);
  v2 = Page;
  if ( Page == -1 )
    MxInstallMoreMemory(2);
  v3 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v3, 0LL, 0);
  *(_QWORD *)(v3 + 8) = 0xFFFFF68000000000uLL;
  v4 = MiLockPageInline(v3);
  *(_QWORD *)(v3 + 16) = MiMakeDemandZeroPte(4);
  HIWORD(v7) = HIWORD(*(_DWORD *)(v3 + 32));
  LOWORD(v7) = 2;
  *(_DWORD *)(v3 + 32) = v7;
  v8 = *(_DWORD *)(v3 + 32);
  BYTE2(v8) |= 7u;
  *(_DWORD *)(v3 + 32) = v8;
  v9 = *(_DWORD *)(v3 + 32);
  BYTE2(v9) |= 0x20u;
  *(_DWORD *)(v3 + 32) = v9;
  v10 = *(_DWORD *)(v3 + 32);
  BYTE2(v10) |= 8u;
  *(_DWORD *)(v3 + 32) = v10;
  *(_QWORD *)(v3 + 40) &= ~0x8000000000000000uLL;
  MiSetPfnContainingFrame(v3, 0LL);
  MiUnlockPage(v3, v4);
  return v2;
}
