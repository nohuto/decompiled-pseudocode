/*
 * XREFs of HalpPciAccessMmConfigSpace @ 0x1403AA7E8
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x1403AA360 (HaliPciInterfaceReadConfig.c)
 * Callees:
 *     HalpPciMapMmConfigPhysicalAddress @ 0x1403AB340 (HalpPciMapMmConfigPhysicalAddress.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPciAccessMmConfigSpace(
        __int16 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // esi
  int v8; // edi
  __int64 v10; // r10
  unsigned int i; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned int v16; // eax
  signed __int32 v28[8]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v29; // [rsp+20h] [rbp-48h]

  v6 = a5;
  v8 = a6;
  v10 = a2;
  if ( (unsigned int)(a5 + a6) > 0x1000 )
    return 0;
  v29 = 0LL;
  if ( HalpPciAmdK8SpecialLocationHack != -1 )
  {
    if ( HalpPciAmdK8SpecialLocationHack != 1 )
      goto LABEL_4;
LABEL_14:
    if ( !a1 && !(_BYTE)v10 && (a3 & 0x1Fu) >= 0x18 )
      return 0;
    goto LABEL_4;
  }
  _RAX = 0LL;
  __asm { cpuid }
  *(_QWORD *)&v29 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v29 + 1) = __PAIR64__(_RDX, _RCX);
  if ( (_DWORD)_RBX == 1752462657 && (_DWORD)_RDX == 1769238117 && (_DWORD)_RCX == 1145913699 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    LODWORD(v29) = _RAX;
    *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(_RCX, _RBX);
    HIDWORD(v29) = _RDX;
    if ( (((unsigned int)_RAX >> 8) & 0xF) == 0xF && (_RAX & 0xFF00000) == 0 )
    {
      HalpPciAmdK8SpecialLocationHack = 1;
      goto LABEL_14;
    }
  }
  HalpPciAmdK8SpecialLocationHack = 0;
LABEL_4:
  for ( i = 0; i < HalpPciMcfgTableCount; ++i )
  {
    v12 = 16LL * i;
    if ( a1 == *(_WORD *)(v12 + HalpPciMcfgTable + 52)
      && (unsigned __int8)v10 >= *(_BYTE *)(v12 + HalpPciMcfgTable + 54)
      && (unsigned __int8)v10 <= *(_BYTE *)(v12 + HalpPciMcfgTable + 55) )
    {
      v13 = a3 >> 5;
      v14 = *(_QWORD *)(v12 + HalpPciMcfgTable + 44) + ((v13 + 8 * ((a3 & 0x1F) + 32 * v10)) << 12);
      if ( !v14 )
        return 0;
      v15 = HalpPciMapMmConfigPhysicalAddress(v14, v13);
      if ( a6 )
      {
        do
        {
          v16 = guard_dispatch_icall_no_overrides(v15, a4);
          v6 += v16;
          a4 += v16;
          v8 -= v16;
        }
        while ( v8 );
      }
      _InterlockedOr(v28, 0);
      return 1;
    }
  }
  return 0;
}
