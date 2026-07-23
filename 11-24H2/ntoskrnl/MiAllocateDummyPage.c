/*
 * XREFs of MiAllocateDummyPage @ 0x140C50D68
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 *     MiInitializeDummyPages @ 0x140C51970 (MiInitializeDummyPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 */

__int64 MiAllocateDummyPage()
{
  unsigned __int32 v0; // eax
  __int64 Page; // rax
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 v7; // bl
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h]
  int v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+40h] [rbp+8h]
  int v13; // [rsp+40h] [rbp+8h]

  v9 = 0LL;
  MiAcquireNonPagedResources(&MiSystemPartition, 1uLL, 0LL, 1LL);
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v9);
  v0 = _InterlockedExchangeAdd((volatile signed __int32 *)v9, 1u);
  Page = MiGetPage(
           (__int64)&MiSystemPartition,
           DWORD2(v9) ^ (unsigned int)(unsigned __int8)(BYTE8(v9) ^ (v0
                                                                   % dword_140E2DD00[(*((_QWORD *)&v9 + 1) >> 16) & 3LL])),
           0x80u);
  v2 = Page;
  if ( Page == -1 )
    MxInstallMoreMemory(2);
  v3 = 48 * Page - 0x220000000000LL;
  MiSetPfnTbFlushStamp(v3, 0LL, 0);
  *(_QWORD *)(v3 + 8) = 0xFFFFF68000000000uLL;
  v7 = MiLockPageInline(v3, v4, v5, v6);
  *(_QWORD *)(v3 + 16) = MiMakeDemandZeroPte(4);
  HIWORD(v10) = HIWORD(*(_DWORD *)(v3 + 32));
  LOWORD(v10) = 2;
  *(_DWORD *)(v3 + 32) = v10;
  v11 = *(_DWORD *)(v3 + 32);
  BYTE2(v11) |= 7u;
  *(_DWORD *)(v3 + 32) = v11;
  v12 = *(_DWORD *)(v3 + 32);
  BYTE2(v12) |= 0x20u;
  *(_DWORD *)(v3 + 32) = v12;
  v13 = *(_DWORD *)(v3 + 32);
  BYTE2(v13) |= 8u;
  *(_DWORD *)(v3 + 32) = v13;
  *(_QWORD *)(v3 + 40) &= ~0x8000000000000000uLL;
  MiSetPfnContainingFrame(v3, 0LL);
  MiUnlockPage(v3, v7);
  return v2;
}
