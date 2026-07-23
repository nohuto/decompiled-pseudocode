/*
 * XREFs of MiDbgWriteCheck @ 0x140680874
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     MiDbgMarkPfnModified @ 0x14067FEDC (MiDbgMarkPfnModified.c)
 *     MiRealVaToFlushType @ 0x140680E2C (MiRealVaToFlushType.c)
 */

__int64 __fastcall MiDbgWriteCheck(
        unsigned __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 *v6; // r15
  char v7; // r12
  int v8; // ebp
  unsigned int v10; // r14d
  int v11; // eax
  int v12; // r13d
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v17; // r12d
  ULONG_PTR v18; // rbp
  char v19; // dl
  unsigned __int64 *v20; // r15
  unsigned __int64 *v21; // rax
  __int64 v22; // rbx
  int v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v28; // eax
  _QWORD *v29; // [rsp+68h] [rbp+10h] BYREF
  int v30; // [rsp+70h] [rbp+18h]
  int v31; // [rsp+78h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v6 = a5;
  v7 = a4;
  v8 = a3;
  *a5 = -1LL;
  *a2 = 0LL;
  if ( !MmIsAddressValidEx(a1) )
    return 0LL;
  v10 = 1;
  v11 = MI_IS_PHYSICAL_ADDRESS(a1);
  v12 = v11;
  if ( v11 )
  {
    if ( v11 != 1
      || PsNtosImageBase
      && PsHalImageBase
      && (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
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
  *v6 = v15;
  if ( (MiFlags & 0x4000) != 0 || (MiFlags & 0x8000) != 0 )
  {
    v17 = 0;
    v18 = 0LL;
    if ( (MiFlags & 0x800) == 0 )
    {
      v21 = a6;
      if ( a6 )
      {
        a6[1] = 0LL;
        *v21 = a1;
      }
      goto LABEL_33;
    }
    if ( v15 > qword_140E2DD20 || ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
    {
LABEL_37:
      v8 = v30;
      v7 = v31;
      goto LABEL_38;
    }
    v18 = 48 * v15 - 0x220000000000LL;
    if ( (v31 & 3) == 0 )
    {
      if ( (v30 & 0x40000000) != 0 )
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
    v20 = a6;
    if ( !(unsigned int)MiGetPagePrivilege(v18, v19, a6) )
      goto LABEL_34;
    if ( (MiFlags & 0x4000) != 0
      && *(__int64 *)(v18 + 40) < 0
      && (*(_DWORD *)(v18 + 16) & 0x400LL) == 0
      && a1 >= 0xFFFF800000000000uLL
      && v20 )
    {
      *v20 = a1;
    }
LABEL_33:
    v10 = ((unsigned __int8)v30 >> 1) & 2;
LABEL_34:
    if ( v17 )
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !v10 )
      return 0LL;
    goto LABEL_37;
  }
LABEL_38:
  if ( (v14 & 0x800) == 0 || (v14 & 0x42) == 0 )
  {
    if ( v12 || v8 < 0 && (unsigned int)MiDbgMarkPfnModified(v14, v7) )
    {
      *v29 = v14;
      _InterlockedIncrement(&dword_140E30324);
      v22 = v14 | 0x862;
      v29 = (_QWORD *)v22;
      v23 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v13) )
      {
        v27 = MiSanitizeShadowPxe(v24, (__int64)&v29, v25);
        v22 = (__int64)v29;
        v23 = v27;
      }
      if ( _bittest64(&MiFlags, 0x24u) && (v22 & 0x20) == 0 && (unsigned __int64)v13 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v13, v22, 128LL);
      *v13 = v22;
      if ( v23 )
        MiWritePteShadow((__int64)v13, v22, v25, v26);
      _InterlockedDecrement(&dword_140E30324);
      goto LABEL_52;
    }
    return 0LL;
  }
LABEL_52:
  if ( (MiFlags & 0x100) == 0 )
  {
    v28 = MiRealVaToFlushType(a1);
    KeFlushSingleCurrentTb(a1, v28);
  }
  return v10;
}
