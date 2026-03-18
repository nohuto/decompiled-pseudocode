/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14022B5E4
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiGetPageProtection @ 0x140245740 (MiGetPageProtection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyHeaderIfResident @ 0x140476ABC (MiCopyHeaderIfResident.c)
 * Callees:
 *     MiTryLockLeafPage @ 0x14022A6FC (MiTryLockLeafPage.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiWriteValidPteVolatile @ 0x14037C940 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v13; // [rsp+48h] [rbp+10h]

  *a3 = 0LL;
  v7 = (unsigned __int64 *)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (*v7 & 1) == 0 )
    return 3221435187LL;
  v8 = (*v7 >> 12) & 0xFFFFFFFFFFLL;
  if ( v8 > qword_140E2D9A0 )
    return 3221225557LL;
  if ( ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    return 3221225557LL;
  v9 = 0;
  v10 = 48 * v8 - 0x220000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0
    || (v11 = *v7, (*v7 & 1) == 0)
    || (v11 & 0x200) != 0
    || v8 != ((v11 >> 12) & 0xFFFFFFFFFFLL)
    || (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
  {
    v9 = -1073741739;
  }
  else
  {
    if ( (v11 & 0x20) == 0 )
      MiWriteValidPteVolatile((ULONG_PTR)v7);
    if ( !a4 || (v9 = MiTryLockLeafPage(a1, 1, a4), v9 >= 0) )
    {
      MiAddLockedPageCharge(v10, 1LL);
      v13 = *(_DWORD *)(v10 + 32);
      *a3 = v10;
      BYTE2(v13) |= 0x20u;
      *(_DWORD *)(v10 + 32) = v13;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v9;
}
