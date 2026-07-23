/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x1403EF7D8
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1403310D0 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiSafeLockPageAtDpc @ 0x140311180 (MiSafeLockPageAtDpc.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v5; // r14
  __int64 v6; // rbx
  int v7; // r13d
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 result; // rax
  __int64 UltraMapping; // rax
  __int64 v15; // rdx
  __int64 *v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // r8
  __int64 **v19; // rax
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _OWORD v23[3]; // [rsp+20h] [rbp-38h] BYREF
  int UltraThreadContext; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 424);
  v23[0] = 0LL;
  if ( *(_BYTE *)(a2 + 324) )
  {
    v5 = v2 & 0x3FFFFF;
    v6 = 0LL;
    v7 = 1;
    v8 = (__int64 *)(qword_140E30100 + 8 * v5);
    v2 = v5 << 18;
  }
  else
  {
    v6 = 48 * v2 - 0x220000000000LL;
    v7 = 0;
    v8 = 0LL;
  }
  *(_DWORD *)(a2 + 344) = 512;
  *(_QWORD *)(a2 + 352) = a2 + 360;
  ++*(_DWORD *)(a2 + 572);
  *(_QWORD *)(a1 + 584) = a2;
  **(_BYTE **)(a2 + 352) |= 1u;
  MiInitializePageColorBase(0LL, 3, *(_DWORD *)(a2 + 568) + 1, (__int64)v23);
  UltraThreadContext = MiCreateUltraThreadContext(a2 + 432, (__int64)v23, 1, 0xCu);
  if ( v7 )
  {
    MiLockHugePfnInternal(v8, v9, v10, v11);
  }
  else if ( MiSafeLockPageAtDpc(v2) == 17 )
  {
    v6 = 0LL;
  }
  if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
  {
    if ( v7 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v8 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v8 - qword_140E30100) >> 3) & 0x1F)));
    }
    else if ( v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( UltraThreadContext )
      MiDeleteUltraThreadContext(a2 + 432);
    return 1LL;
  }
  else if ( UltraThreadContext )
  {
    UltraMapping = MiGetUltraMapping(a2 + 432, 0LL, 0x40000LL, 5);
    v15 = *(_QWORD *)(a1 + 336);
    v16 = (__int64 *)(a2 + 328);
    v17 = UltraMapping;
    v18 = *(_QWORD *)(v15 + 176) + 32LL;
    v19 = *(__int64 ***)(*(_QWORD *)(v15 + 176) + 40LL);
    if ( *v19 != (__int64 *)v18 )
      __fastfail(3u);
    *v16 = v18;
    *(_QWORD *)(a2 + 336) = v19;
    *v19 = v16;
    *(_QWORD *)(v18 + 8) = v16;
    *(_QWORD *)(a2 + 560) = v17;
    *(_QWORD *)(a2 + 296) = v17;
    if ( v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, v6);
    else
      ProtectionPfnCompatible = 4;
    v21 = MiWriteLargePte(v17, v2, 0, ProtectionPfnCompatible | 0xA4000000);
    v22 = *(_QWORD *)(a2 + 296) + 0x3FFFFFFFLL;
    *(_DWORD *)(a2 + 320) = 0;
    *(_QWORD *)(a2 + 304) = v22;
    *(_QWORD *)(a2 + 288) = v21;
    if ( v6 )
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v8 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v8 - qword_140E30100) >> 3) & 0x1F)));
    *(_DWORD *)(a1 + 320) = 0;
    result = 0LL;
    *(_WORD *)(a1 + 576) = 0;
  }
  else
  {
    if ( v6 )
    {
      MiStopPageAccessor((__int64 *)v6, 0LL, 0LL, v12);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiStopPageAccessor(v8, 0LL, 0LL, v12);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E30108 + 4 * (((((__int64)v8 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v8 - qword_140E30100) >> 3) & 0x1F)));
    }
    MiDeleteUltraThreadContext(a2 + 432);
    return 2LL;
  }
  return result;
}
