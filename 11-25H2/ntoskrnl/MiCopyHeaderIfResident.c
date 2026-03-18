/*
 * XREFs of MiCopyHeaderIfResident @ 0x140476ABC
 * Callers:
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiStandbyPageContentsIntact @ 0x140225484 (MiStandbyPageContentsIntact.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiLockSectionControlArea @ 0x14034CE80 (MiLockSectionControlArea.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  _QWORD *v2; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // esi
  ULONG_PTR v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int8 v18; // [rsp+50h] [rbp+30h] BYREF
  __int64 v19; // [rsp+60h] [rbp+40h] BYREF
  ULONG_PTR v20; // [rsp+68h] [rbp+48h] BYREF

  v2 = *(_QWORD **)(a1 + 40);
  v18 = 0;
  v4 = MiLockSectionControlArea(v2, 1, &v18);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v8 = *(unsigned __int64 **)(v4 + 136)) == 0LL
    || (v19 = 0LL, v20 = 0LL, (int)MiTryLockProtoPoolPageAtDpc(v8, v5, (__int64 *)&v20, &v19) < 0) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v18);
    return 0LL;
  }
  if ( (HIWORD(*(_DWORD *)(v19 + 32)) & 0xC0) != 0x40 || (*(_DWORD *)(v19 + 32) & 0x40000000) != 0 )
  {
    v9 = v19;
LABEL_25:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_17;
  }
  v9 = v19;
  if ( MiIsPageOnBadList(v19) || !(unsigned int)MiStandbyPageContentsIntact(v9, v10) )
    goto LABEL_25;
  v11 = *v8;
  if ( (*v8 & 1) != 0 )
  {
    v12 = 0;
  }
  else
  {
    if ( qword_140E2D940 )
    {
      if ( (v11 & 0x10) != 0 )
        v11 &= ~0x10uLL;
      else
        v11 &= ~qword_140E2D940;
    }
    v12 = 1;
  }
  v13 = (v11 >> 12) & 0xFFFFFFFFFFLL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
    MiUnlockProtoPoolPage(v20, v18, v14, v15);
    return 0LL;
  }
  MiCopyPage(a2, v13, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( v12 )
    MiUpdatePageAttributeStamp(v19);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v20, v18, v16, v17);
  return 1LL;
}
