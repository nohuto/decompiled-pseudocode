/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x1403F98CC
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x140209AF0 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiSafeLockPageAtDpc @ 0x1403072A0 (MiSafeLockPageAtDpc.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiLockHugePfnInternal @ 0x1403F9BD8 (MiLockHugePfnInternal.c)
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
  __int64 result; // rax
  __int64 UltraMapping; // rax
  __int64 v14; // rdx
  __int64 *v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // r8
  __int64 **v18; // rax
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _OWORD v22[3]; // [rsp+20h] [rbp-38h] BYREF
  int UltraThreadContext; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 424);
  v22[0] = 0LL;
  if ( *(_BYTE *)(a2 + 324) )
  {
    v5 = v2 & 0x3FFFFF;
    v6 = 0LL;
    v7 = 1;
    v8 = (__int64 *)(qword_140E2FFC0 + 8 * v5);
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
  MiInitializePageColorBase(0LL, 3, *(_DWORD *)(a2 + 568) + 1, (__int64)v22);
  UltraThreadContext = MiCreateUltraThreadContext(a2 + 432, (__int64)v22, 1, 0xCu);
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
        (volatile signed __int32 *)(qword_140E2FFC8 + 4 * (((((__int64)v8 - qword_140E2FFC0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v8 - qword_140E2FFC0) >> 3) & 0x1F)));
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
    v14 = *(_QWORD *)(a1 + 336);
    v15 = (__int64 *)(a2 + 328);
    v16 = UltraMapping;
    v17 = *(_QWORD *)(v14 + 176) + 32LL;
    v18 = *(__int64 ***)(*(_QWORD *)(v14 + 176) + 40LL);
    if ( *v18 != (__int64 *)v17 )
      __fastfail(3u);
    *v15 = v17;
    *(_QWORD *)(a2 + 336) = v18;
    *v18 = v15;
    *(_QWORD *)(v17 + 8) = v15;
    *(_QWORD *)(a2 + 560) = v16;
    *(_QWORD *)(a2 + 296) = v16;
    if ( v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v6);
    else
      ProtectionPfnCompatible = 4;
    v20 = MiWriteLargePte(v16, v2, 0, ProtectionPfnCompatible | 0xA4000000);
    v21 = *(_QWORD *)(a2 + 296) + 0x3FFFFFFFLL;
    *(_DWORD *)(a2 + 320) = 0;
    *(_QWORD *)(a2 + 304) = v21;
    *(_QWORD *)(a2 + 288) = v20;
    if ( v6 )
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E2FFC8 + 4 * (((((__int64)v8 - qword_140E2FFC0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v8 - qword_140E2FFC0) >> 3) & 0x1F)));
    *(_DWORD *)(a1 + 320) = 0;
    result = 0LL;
    *(_WORD *)(a1 + 576) = 0;
  }
  else
  {
    if ( v6 )
    {
      MiStopPageAccessor((__int64 *)v6, 0LL, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiStopPageAccessor(v8, 0LL, 0LL);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E2FFC8 + 4 * (((((__int64)v8 - qword_140E2FFC0) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((((__int64)v8 - qword_140E2FFC0) >> 3) & 0x1F)));
    }
    MiDeleteUltraThreadContext(a2 + 432);
    return 2LL;
  }
  return result;
}
