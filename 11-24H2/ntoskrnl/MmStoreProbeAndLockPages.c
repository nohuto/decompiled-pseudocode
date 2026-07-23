/*
 * XREFs of MmStoreProbeAndLockPages @ 0x1402E9990
 * Callers:
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x1402E7E38 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 * Callees:
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14020BCC0 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeAndLockPrepare @ 0x1402379F0 (MiProbeAndLockPrepare.c)
 *     MiLockPageLeafPageTable @ 0x140238FF0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402394D0 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x140239B00 (MiSetProbePagesAhead.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402E9CB0 (MiStoreMarkLockedPagesModified.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiUnlockStoreLockedPages @ 0x1402FA670 (MiUnlockStoreLockedPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmStoreIsVirtualAddressPoisoned @ 0x14068D980 (MmStoreIsVirtualAddressPoisoned.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmStoreProbeAndLockPages(ULONG_PTR BugCheckParameter4, int a2)
{
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // r14
  int v6; // eax
  unsigned int v7; // eax
  __int64 *v8; // rcx
  int v9; // edi
  ULONG_PTR v10; // rbx
  unsigned int v11; // esi
  int v12; // eax
  char v14[8]; // [rsp+40h] [rbp-89h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp-81h]
  unsigned __int64 v16; // [rsp+58h] [rbp-71h]
  unsigned __int64 v17; // [rsp+60h] [rbp-69h]
  unsigned __int64 v18; // [rsp+70h] [rbp-59h]
  __int64 *v19; // [rsp+78h] [rbp-51h]
  __int64 v20; // [rsp+C8h] [rbp-1h]
  int v21; // [rsp+130h] [rbp+67h]
  int v22; // [rsp+138h] [rbp+6Fh] BYREF

  memset_0(v14, 0, 0xB0uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( a2 )
    v7 = v6 & 0xFFFFFFF3 | 8;
  else
    v7 = v6 & 0xFFFFFFF3 | 4;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) = v7;
  MiProbeAndLockPrepare(
    (__int64)v14,
    BugCheckParameter4,
    *(_QWORD *)(BugCheckParameter4 + 32) + *(unsigned int *)(BugCheckParameter4 + 44),
    *(unsigned int *)(BugCheckParameter4 + 40),
    1,
    0,
    0);
  v8 = v19;
LABEL_4:
  *v8 = -1LL;
  v22 = 0;
  while ( 1 )
  {
    v9 = MiLockPageLeafPageTable((__int64)v14);
    if ( v18 == CLFS_LSN_NULL_EXT )
      break;
    v9 = MiProbeLeafPteAccess((__int64)v14, &v22);
    if ( v9 < 0 )
      break;
    if ( !v22 )
    {
      v20 = (v18 >> 12) & 0xFFFFFFFFFFLL;
      MiSetProbePagesAhead((__int64)v14);
      v9 = 0;
LABEL_9:
      v10 = 48 * v20 - 0x220000000000LL;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v10 + 34) & 8) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v9 = -1073740749;
        goto LABEL_31;
      }
      v12 = *(_DWORD *)(v10 + 32);
      LOWORD(v12) = v12 + 1;
      *(_DWORD *)(v10 + 32) = v12;
      v21 = *(_DWORD *)(v10 + 32);
      BYTE2(v21) |= 8u;
      *(_DWORD *)(v10 + 32) = v21;
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v10, 1, 0LL) & 0x10) != 0 )
        MiClearPfnImageVerified(v10, 28LL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *v19 = v20;
      v8 = v19 + 1;
      BugCheckParameter3 += 4096LL;
      ++v19;
      v16 += 8LL;
      if ( v16 > v17 )
      {
        MiUnlockProbePacketWorkingSet((__int64)v14);
        MiStoreMarkLockedPagesModified(BugCheckParameter4);
        goto LABEL_16;
      }
      goto LABEL_4;
    }
    if ( v22 != 1 )
    {
      v9 = MiFaultInProbeAddress((__int64)v14);
      if ( v9 < 0 )
      {
        ++dword_140E30244;
        break;
      }
    }
  }
  if ( v9 == -1073741801 )
    goto LABEL_31;
  if ( v9 != -1073741819 )
  {
    if ( v9 < 0 )
      KeBugCheckEx(0x1Au, 0x6001uLL, v9, BugCheckParameter3, BugCheckParameter4);
    goto LABEL_9;
  }
  v5 = BugCheckParameter3;
LABEL_31:
  MiUnlockProbePacketWorkingSet((__int64)v14);
  MiUnlockStoreLockedPages(BugCheckParameter4);
LABEL_16:
  if ( v5 )
  {
    if ( !(unsigned int)MmStoreIsVirtualAddressPoisoned(v5) )
      KeBugCheckEx(0x1Au, 0x6001uLL, v9, v5, BugCheckParameter4);
    v9 = -1073740574;
  }
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= 0xFFFFFFF3;
  return (unsigned int)v9;
}
