/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x1406841C4
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x14041C6E0 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiSafeLockPageAtDpc @ 0x140220D38 (MiSafeLockPageAtDpc.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     MiWriteLargePte @ 0x1402C3820 (MiWriteLargePte.c)
 *     MiStopPageAccessor @ 0x140347A84 (MiStopPageAccessor.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v5; // r14
  __int64 v6; // rbx
  int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 UltraMapping; // rax
  __int64 v13; // rdx
  __int64 *v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // r8
  __int64 **v17; // rax
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  _OWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  int UltraThreadContext; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 424);
  v21[0] = 0LL;
  if ( *(_BYTE *)(a2 + 324) )
  {
    v5 = v2 & 0x3FFFFF;
    v6 = 0LL;
    v7 = 1;
    v8 = qword_140E2FD80 + 8 * v5;
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
  MiInitializePageColorBase(0LL, 3, *(_DWORD *)(a2 + 568) + 1, (__int64)v21);
  UltraThreadContext = MiCreateUltraThreadContext(a2 + 432, (__int64)v21, 1, 12LL);
  if ( v7 )
  {
    MiLockHugePfnInternal(v8);
  }
  else if ( MiSafeLockPageAtDpc(v2, v9, v10) == 17 )
  {
    v6 = 0LL;
  }
  if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
  {
    if ( v7 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((((v8 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v8 - qword_140E2FD80) >> 3) & 0x1F)));
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
    v13 = *(_QWORD *)(a1 + 336);
    v14 = (__int64 *)(a2 + 328);
    v15 = UltraMapping;
    v16 = *(_QWORD *)(v13 + 176) + 32LL;
    v17 = *(__int64 ***)(*(_QWORD *)(v13 + 176) + 40LL);
    if ( *v17 != (__int64 *)v16 )
      __fastfail(3u);
    *v14 = v16;
    *(_QWORD *)(a2 + 336) = v17;
    *v17 = v14;
    *(_QWORD *)(v16 + 8) = v14;
    *(_QWORD *)(a2 + 560) = v15;
    *(_QWORD *)(a2 + 296) = v15;
    if ( v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v6);
    else
      ProtectionPfnCompatible = 4;
    v19 = MiWriteLargePte(v15, v2, 0, ProtectionPfnCompatible | 0xA4000000);
    v20 = *(_QWORD *)(a2 + 296) + 0x3FFFFFFFLL;
    *(_DWORD *)(a2 + 320) = 0;
    *(_QWORD *)(a2 + 304) = v20;
    *(_QWORD *)(a2 + 288) = v19;
    if ( v6 )
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((((v8 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v8 - qword_140E2FD80) >> 3) & 0x1F)));
    *(_DWORD *)(a1 + 320) = 0;
    result = 0LL;
    *(_WORD *)(a1 + 576) = 0;
  }
  else
  {
    if ( v6 )
    {
      MiStopPageAccessor(v6, 0LL, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiStopPageAccessor(v8, 0LL, 0LL);
      _InterlockedAnd(
        (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((((v8 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << (((v8 - qword_140E2FD80) >> 3) & 0x1F)));
    }
    MiDeleteUltraThreadContext(a2 + 432);
    return 2LL;
  }
  return result;
}
