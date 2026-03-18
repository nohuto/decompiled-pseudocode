/*
 * XREFs of MiDbgWriteCheck @ 0x14067F674
 * Callers:
 *     MiDbgCopyMemory @ 0x14067E4A8 (MiDbgCopyMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     KeFlushSingleCurrentTb @ 0x1405BC8EC (KeFlushSingleCurrentTb.c)
 *     MiDbgMarkPfnModified @ 0x14067ECDC (MiDbgMarkPfnModified.c)
 *     MiRealVaToFlushType @ 0x14067FC2C (MiRealVaToFlushType.c)
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
  unsigned __int64 *v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  int v16; // r12d
  ULONG_PTR v17; // rbp
  char v18; // dl
  ULONG_PTR v19; // rbx
  int v20; // ebp
  int v21; // eax

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
    if ( v10 != 1
      || PsNtosImageBase
      && PsHalImageBase
      && (a1 < PsNtosImageBase || a1 >= PsNtosImageEnd)
      && (a1 < PsHalImageBase || a1 >= PsHalImageEnd) )
    {
      return 1LL;
    }
    v12 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v13 = *v12;
    v14 = ((*v12 >> 12) & 0xFFFFFFFFFFLL) + ((a1 >> 12) & 0x1FF);
  }
  else
  {
    v12 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v13 = *v12;
    v14 = (*v12 >> 12) & 0xFFFFFFFFFFLL;
  }
  *a5 = v14;
  if ( (MiFlags & 0x4000) != 0 || (MiFlags & 0x8000) != 0 )
  {
    v16 = 0;
    v17 = 0LL;
    if ( (MiFlags & 0x800) == 0 )
    {
      if ( a6 )
      {
        a6[1] = 0LL;
        *a6 = a1;
      }
      goto LABEL_33;
    }
    if ( v14 > qword_140E2DBE0 || ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
LABEL_37:
      v7 = a3;
      v6 = a4;
      goto LABEL_38;
    }
    v17 = 48 * v14 - 0x220000000000LL;
    if ( (a4 & 3) == 0 )
    {
      if ( (a3 & 0x40000000) != 0 )
      {
        v18 = 4;
        goto LABEL_24;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        return 0LL;
      v16 = 1;
    }
    v18 = 1;
LABEL_24:
    if ( !(unsigned int)MiGetPagePrivilege(v17, v18, a6) )
      goto LABEL_34;
    if ( (MiFlags & 0x4000) != 0
      && *(__int64 *)(v17 + 40) < 0
      && (*(_DWORD *)(v17 + 16) & 0x400LL) == 0
      && a1 >= 0xFFFF800000000000uLL
      && a6 )
    {
      *a6 = a1;
    }
LABEL_33:
    v9 = ((unsigned __int8)a3 >> 1) & 2;
LABEL_34:
    if ( v16 )
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v9 )
      return 0LL;
    goto LABEL_37;
  }
LABEL_38:
  if ( (v13 & 0x800) == 0 || (v13 & 0x42) == 0 )
  {
    if ( v11 || v7 < 0 && (unsigned int)MiDbgMarkPfnModified(v13, v6) )
    {
      *a2 = v13;
      _InterlockedIncrement(&dword_140E301E4);
      v19 = v13 | 0x862;
      v20 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v12) )
        v20 = MiSanitizeShadowPxe();
      if ( _bittest64(&MiFlags, 0x24u) && (v19 & 0x20) == 0 && (unsigned __int64)v12 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v12, v19, 128);
      *v12 = v19;
      if ( v20 )
        MiWritePteShadow();
      _InterlockedDecrement(&dword_140E301E4);
      goto LABEL_52;
    }
    return 0LL;
  }
LABEL_52:
  if ( (MiFlags & 0x100) == 0 )
  {
    v21 = MiRealVaToFlushType(a1);
    KeFlushSingleCurrentTb(a1, v21);
  }
  return v9;
}
