/*
 * XREFs of MiCopyHeaderIfResident @ 0x1403F0510
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x1402BED40 (MiLockSectionControlArea.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033EECC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 *     MiStandbyPageContentsIntact @ 0x1403F1E24 (MiStandbyPageContentsIntact.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  int v11; // esi
  ULONG_PTR v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp+40h] BYREF
  __int64 v21; // [rsp+68h] [rbp+48h] BYREF

  v2 = *(_QWORD **)(a1 + 40);
  v19 = 0;
  v4 = MiLockSectionControlArea(v2, 1, &v19);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v8 = *(unsigned __int64 **)(v4 + 136)) == 0LL
    || (v20 = 0LL, v21 = 0LL, (int)MiTryLockProtoPoolPageAtDpc((unsigned __int64)v8, v5, &v21, (__int64)&v20) < 0) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v19);
    return 0LL;
  }
  if ( (HIWORD(*(_DWORD *)(v20 + 32)) & 0xC0) != 0x40 || (*(_DWORD *)(v20 + 32) & 0x40000000) != 0 )
  {
    v9 = v20;
LABEL_22:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_17;
  }
  v9 = v20;
  if ( MiIsPageOnBadList(v20) || !(unsigned int)MiStandbyPageContentsIntact(v9) )
    goto LABEL_22;
  v10 = *v8;
  if ( (*v8 & 1) != 0 )
  {
    v11 = 0;
  }
  else
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v10 & 0x10) != 0 )
        v10 &= ~0x10uLL;
      else
        v10 &= ~qword_140E2DCC0;
    }
    v11 = 1;
  }
  v12 = (v10 >> 12) & 0xFFFFFFFFFFLL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    v15 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
    LOBYTE(v15) = v19;
    MiUnlockProtoPoolPage(v21, v15, v13, v14);
    return 0LL;
  }
  MiCopyPage(a2, v12, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( v11 )
    MiUpdatePageAttributeStamp(v20);
  v18 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v18) = v19;
  MiUnlockProtoPoolPage(v21, v18, v16, v17);
  return 1LL;
}
