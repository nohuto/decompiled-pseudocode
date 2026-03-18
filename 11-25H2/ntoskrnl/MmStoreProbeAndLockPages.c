/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1402CB0A0
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14020DC08 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiUnlockStoreLockedPages @ 0x14020D220 (MiUnlockStoreLockedPages.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiLockPageLeafPageTable @ 0x1402ADA90 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402AE4D0 (MiSetProbePagesAhead.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402BB270 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1402CB3C0 (MiProbeAndLockPrepare.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402CB6C0 (MiStoreMarkLockedPagesModified.c)
 *     MiClearPfnImageVerified @ 0x1402CC5F0 (MiClearPfnImageVerified.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x140680FC0 (MmStoreIsVirtualAddressPoisoned.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(_DWORD *BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // r14
  int v6; // eax
  unsigned int v7; // eax
  __int64 *v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  ULONG_PTR v11; // rbx
  unsigned int v12; // esi
  int v13; // eax
  char v15[8]; // [rsp+40h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-81h]
  unsigned __int64 v17; // [rsp+58h] [rbp-71h]
  unsigned __int64 v18; // [rsp+60h] [rbp-69h]
  unsigned __int64 v19; // [rsp+70h] [rbp-59h]
  __int64 *v20; // [rsp+78h] [rbp-51h]
  __int64 v21; // [rsp+C8h] [rbp-1h]
  int v22; // [rsp+130h] [rbp+67h]
  int v23; // [rsp+138h] [rbp+6Fh] BYREF

  memset_0(v15, 0, 0xB0uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v7 = v6 & 0xFFFFFFF3 | 8;
  else
    v7 = v6 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v7;
  MiProbeAndLockPrepare(
    (unsigned int)v15,
    (_DWORD)BugCheckParameter4,
    BugCheckParameter4[8] + BugCheckParameter4[11],
    BugCheckParameter4[10],
    1,
    0,
    0);
  v8 = v20;
LABEL_4:
  *v8 = -1LL;
  v23 = 0;
  while ( 1 )
  {
    v10 = MiLockPageLeafPageTable((__int64)v15);
    if ( v19 == CLFS_LSN_NULL_EXT )
      break;
    v10 = MiProbeLeafPteAccess((__int64)v15, &v23);
    if ( v10 < 0 )
      break;
    if ( !v23 )
    {
      v21 = (v19 >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead((__int64)v15);
      v10 = 0;
LABEL_9:
      v11 = 48 * v21 - 0x220000000000LL;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v11 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v11 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 = -1073740749;
        goto LABEL_36;
      }
      v13 = *(_DWORD *)(v11 + 32);
      LOWORD(v13) = v13 + 1;
      *(_DWORD *)(v11 + 32) = v13;
      v22 = *(_DWORD *)(v11 + 32);
      BYTE2(v22) |= 8u;
      *(_DWORD *)(v11 + 32) = v22;
      if ( (*(_DWORD *)(v11 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v11, 1, 0LL) & 0x10) != 0 )
        MiClearPfnImageVerified(v11, 28LL);
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *v20 = v21;
      v8 = v20 + 1;
      BugCheckParameter3 += 4096LL;
      ++v20;
      v17 += 8LL;
      if ( v17 > v18 )
      {
        MiUnlockProbePacketWorkingSet((__int64)v15);
        MiStoreMarkLockedPagesModified(BugCheckParameter4);
        goto LABEL_17;
      }
      goto LABEL_4;
    }
    if ( v23 != 1 )
    {
      v10 = MiFaultInProbeAddress(v15);
      if ( v10 < 0 )
      {
        ++dword_140E2FEBC;
        break;
      }
    }
  }
  if ( v10 == -1073741801 )
    goto LABEL_36;
  if ( v10 != -1073741819 )
  {
    if ( v10 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v10, BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    goto LABEL_9;
  }
  v5 = BugCheckParameter3;
LABEL_36:
  MiUnlockProbePacketWorkingSet((__int64)v15);
  MiUnlockStoreLockedPages((__int64)BugCheckParameter4);
LABEL_17:
  if ( v5 )
  {
    if ( !(unsigned int)MmStoreIsVirtualAddressPoisoned(v5) )
      KeBugCheckEx(0x1Au, 0x6001uLL, v10, v5, (ULONG_PTR)BugCheckParameter4);
    v10 = -1073740574;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v10;
}
