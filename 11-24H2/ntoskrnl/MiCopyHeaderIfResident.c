/*
 * XREFs of MiCopyHeaderIfResident @ 0x1404765F4
 * Callers:
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402F6DBC (MiTryLockProtoPoolPageAtDpc.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiStandbyPageContentsIntact @ 0x140314AD4 (MiStandbyPageContentsIntact.c)
 *     MiLockSectionControlArea @ 0x140316190 (MiLockSectionControlArea.c)
 *     MiUpdatePageAttributeStamp @ 0x1404767D4 (MiUpdatePageAttributeStamp.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  int v14; // esi
  ULONG_PTR v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // [rsp+50h] [rbp+30h] BYREF
  __int64 v21; // [rsp+60h] [rbp+40h] BYREF
  ULONG_PTR v22; // [rsp+68h] [rbp+48h] BYREF

  v2 = *(_QWORD **)(a1 + 40);
  v20 = 0;
  v4 = MiLockSectionControlArea(v2, 1, &v20);
  v6 = v4;
  if ( !v4 )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v8 = *(unsigned __int64 **)(v4 + 136)) == 0LL
    || (v21 = 0LL,
        v22 = 0LL,
        (int)MiTryLockProtoPoolPageAtDpc((unsigned __int64)v8, v5, (__int64 *)&v22, (__int64)&v21) < 0) )
  {
    MiReleaseSpinLockExclusive((_DWORD *)(v6 + 72), v20);
    return 0LL;
  }
  if ( (HIWORD(*(_DWORD *)(v21 + 32)) & 0xC0) != 0x40 || (*(_DWORD *)(v21 + 32) & 0x40000000) != 0 )
  {
    v9 = v21;
LABEL_22:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    v17 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_17;
  }
  v9 = v21;
  if ( MiIsPageOnBadList(v21) || !(unsigned int)MiStandbyPageContentsIntact(v9, v10, v11, v12) )
    goto LABEL_22;
  v13 = *v8;
  if ( (*v8 & 1) != 0 )
  {
    v14 = 0;
  }
  else
  {
    if ( qword_140E2DB80 )
    {
      if ( (v13 & 0x10) != 0 )
        v13 &= ~0x10uLL;
      else
        v13 &= ~qword_140E2DB80;
    }
    v14 = 1;
  }
  v15 = (v13 >> 12) & 0xFFFFFFFFFFLL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    v17 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_17:
    LOBYTE(v17) = v20;
    MiUnlockProtoPoolPage(v22, v17, v16);
    return 0LL;
  }
  MiCopyPage(a2, v15, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  if ( v14 )
    MiUpdatePageAttributeStamp(v21);
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v19) = v20;
  MiUnlockProtoPoolPage(v22, v19, v18);
  return 1LL;
}
