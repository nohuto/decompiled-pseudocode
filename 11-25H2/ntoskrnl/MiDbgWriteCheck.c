/*
 * XREFs of MiDbgWriteCheck @ 0x140673E54
 * Callers:
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 *     MiDbgMarkPfnModified @ 0x1406734BC (MiDbgMarkPfnModified.c)
 *     MiRealVaToFlushType @ 0x14067440C (MiRealVaToFlushType.c)
 */

__int64 __fastcall MiDbgWriteCheck(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        int a3,
        char a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  char v6; // r12
  int v7; // ebp
  unsigned int v9; // r14d
  int v10; // eax
  int v11; // r13d
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v17; // r12d
  ULONG_PTR v18; // rbp
  char v19; // dl
  ULONG_PTR v20; // rbx
  int v21; // ebp
  int v22; // eax

  v6 = a4;
  v7 = a3;
  *a5 = -1LL;
  *a2 = 0LL;
  if ( !MmIsAddressValidEx(a1) )
    return 0LL;
  v9 = 1;
  v10 = MI_IS_PHYSICAL_ADDRESS(a1);
  v11 = v10;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 1LL;
    v12 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    if ( v12
      && PsHalImageBase
      && (a1 < v12 || a1 >= PsNtosImageEnd)
      && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd) )
    {
      return 1LL;
    }
    v13 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v14 = *v13;
    v15 = ((*v13 >> 12) & 0xFFFFFFFFFFLL) + ((a1 >> 12) & 0x1FF);
  }
  else
  {
    v13 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = *v13;
    v15 = (*v13 >> 12) & 0xFFFFFFFFFFLL;
  }
  *a5 = v15;
  if ( (MiFlags & 0x4000) != 0 || (MiFlags & 0x8000) != 0 )
  {
    v17 = 0;
    v18 = 0LL;
    if ( (MiFlags & 0x800) == 0 )
    {
      if ( a6 )
      {
        a6[1] = 0LL;
        *a6 = a1;
      }
      goto LABEL_33;
    }
    if ( v15 > qword_140E2D9A0 || ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
LABEL_37:
      v7 = a3;
      v6 = a4;
      goto LABEL_38;
    }
    v18 = 48 * v15 - 0x220000000000LL;
    if ( (a4 & 3) == 0 )
    {
      if ( (a3 & 0x40000000) != 0 )
      {
        v19 = 4;
        goto LABEL_24;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
        return 0LL;
      v17 = 1;
    }
    v19 = 1;
LABEL_24:
    if ( !(unsigned int)MiGetPagePrivilege(v18, v19, a6) )
      goto LABEL_34;
    if ( (MiFlags & 0x4000) != 0
      && *(__int64 *)(v18 + 40) < 0
      && (*(_DWORD *)(v18 + 16) & 0x400LL) == 0
      && a1 >= 0xFFFF800000000000uLL
      && a6 )
    {
      *a6 = a1;
    }
LABEL_33:
    v9 = ((unsigned __int8)a3 >> 1) & 2;
LABEL_34:
    if ( v17 )
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v9 )
      return 0LL;
    goto LABEL_37;
  }
LABEL_38:
  if ( (v14 & 0x800) == 0 || (v14 & 0x42) == 0 )
  {
    if ( v11 || v7 < 0 && (unsigned int)MiDbgMarkPfnModified(v14, v6) )
    {
      *a2 = v14;
      _InterlockedIncrement(&dword_140E2FF9C);
      v20 = v14 | 0x862;
      v21 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v13) )
        v21 = MiSanitizeShadowPxe();
      if ( _bittest64(&MiFlags, 0x24u) && (v20 & 0x20) == 0 && (unsigned __int64)v13 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v13, v20, 128);
      *v13 = v20;
      if ( v21 )
        MiWritePteShadow();
      _InterlockedDecrement(&dword_140E2FF9C);
      goto LABEL_52;
    }
    return 0LL;
  }
LABEL_52:
  if ( (MiFlags & 0x100) == 0 )
  {
    v22 = MiRealVaToFlushType(a1);
    KeFlushSingleCurrentTb(a1, v22);
  }
  return v9;
}
