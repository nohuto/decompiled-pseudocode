/*
 * XREFs of HalpPCIConfig @ 0x1403AA980
 * Callers:
 *     HalpAcpiAccessSecureAddress @ 0x1402931A0 (HalpAcpiAccessSecureAddress.c)
 *     HaliPciInterfaceWriteConfig @ 0x1403AA320 (HaliPciInterfaceWriteConfig.c)
 *     HalpReadPCIConfig @ 0x1403AA68C (HalpReadPCIConfig.c)
 *     HalpWritePCIConfig @ 0x14048963C (HalpWritePCIConfig.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x1403AB24C (HalpPCIAcquireConfigSpaceLock.c)
 *     HalpPCIReleaseConfigSpaceLock @ 0x1403AB2D8 (HalpPCIReleaseConfigSpaceLock.c)
 *     HalpPciMapMmConfigPhysicalAddress @ 0x1403AB340 (HalpPciMapMmConfigPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpPciAccessIoConfigSpace @ 0x14054FE48 (HalpPciAccessIoConfigSpace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpPCIConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned int BugCheckParameter3,
        unsigned int Size,
        int a7)
{
  unsigned int v7; // r14d
  unsigned int v8; // r10d
  ULONG_PTR v9; // rdi
  __int64 result; // rax
  char v11; // bl
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  int v14; // esi
  char *v15; // r14
  unsigned int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // esi
  unsigned __int16 v19; // r10
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  char *v24; // rsi
  unsigned int v25; // eax
  void *v26; // rsi
  signed __int32 v37[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned int v39; // [rsp+28h] [rbp-D8h]
  unsigned int v40; // [rsp+30h] [rbp-D0h]
  void *v41; // [rsp+38h] [rbp-C8h]
  char v42[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v43; // [rsp+52h] [rbp-AEh]
  char v44; // [rsp+54h] [rbp-ACh]
  void *v45; // [rsp+58h] [rbp-A8h]
  __int128 v46; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h]
  int v48; // [rsp+74h] [rbp-8Ch]
  int v49; // [rsp+78h] [rbp-88h]
  unsigned int v50; // [rsp+7Ch] [rbp-84h]
  _OWORD Src[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int128 v53; // [rsp+D0h] [rbp-30h]

  v7 = (unsigned __int8)a2;
  v8 = (unsigned __int16)a1;
  v44 = a2;
  v43 = a1;
  v45 = a4;
  v9 = (unsigned int)a3;
  v42[0] = 0;
  if ( HalpIommuSkipPciConfigDisabled )
    goto LABEL_6;
  result = HalpIommuList;
  v11 = 0;
  if ( (ULONG_PTR *)HalpIommuList == &HalpIommuList )
    goto LABEL_6;
  do
  {
    a2 = result;
    result = *(_QWORD *)result;
    a1 = *(unsigned int *)(a2 + 472);
    if ( (a1 & 8) != 0 && *(_DWORD *)(a2 + 480) == v8 && *(_DWORD *)(a2 + 484) == v7 )
    {
      a3 = *(unsigned int *)(a2 + 488);
      a1 = (unsigned int)v9 ^ *(_DWORD *)(a2 + 488);
      if ( (((unsigned __int8)v9 ^ *(_BYTE *)(a2 + 488)) & 0x1F) == 0 )
      {
        LOBYTE(a3) = v9 ^ a3;
        if ( (a3 & 0xE0) == 0 )
          v11 = 1;
      }
    }
  }
  while ( (ULONG_PTR *)result != &HalpIommuList );
  if ( !v11 )
  {
LABEL_6:
    v12 = Size;
    v13 = BugCheckParameter3;
    if ( qword_140FC11E8 )
    {
      a2 = v8;
      result = (unsigned __int8)v9 >> 5;
      a3 = v7;
      if ( (__int64 (__fastcall *)(char, int, int, int, int, int, size_t, char *))qword_140FC11E8 == VslAccessPciDevice )
      {
        v14 = 0;
        v47 = v7;
        v48 = v9 & 0x1F;
        v15 = a4;
        v49 = (unsigned __int8)v9 >> 5;
        v16 = Size;
        v50 = BugCheckParameter3;
        v52 = 0LL;
        v46 = 0LL;
        BYTE8(v46) = a7 == 1;
        HIDWORD(v46) = v8;
        memset(Src, 0, sizeof(Src));
        if ( Size )
        {
          do
          {
            if ( v14 < 0 )
              break;
            v17 = 64;
            if ( v16 < 0x40 )
              v17 = v16;
            LODWORD(Src[0]) = v17;
            if ( a7 == 1 )
              memmove((char *)Src + 8, v15, v17);
            LOBYTE(a1) = 2;
            result = VslpEnterIumSecureMode(a1, 268LL, 0LL, &v46);
            v14 = result;
            if ( (int)result >= 0 )
            {
              if ( a7 != 1 )
                result = (__int64)memmove(v15, (char *)Src + 8, LODWORD(Src[0]));
              a1 = LODWORD(Src[0]);
              v15 += LODWORD(Src[0]);
              v16 -= LODWORD(Src[0]);
              v50 += LODWORD(Src[0]);
            }
          }
          while ( v16 );
        }
        LOBYTE(v7) = v44;
      }
      else
      {
        v41 = a4;
        v40 = Size;
        v39 = BugCheckParameter3;
        LODWORD(BugCheckParameter4) = (unsigned __int8)v9 >> 5;
        LOBYTE(a1) = a7 == 1;
        result = guard_dispatch_icall_no_overrides(a1, v8);
        v14 = result;
      }
      if ( v14 >= 0 )
        return result;
      if ( v14 != -1073741822 )
        KeBugCheckEx(0xC0u, (unsigned __int8)v7, v9, BugCheckParameter3, v14);
    }
    v18 = 0;
    HalpPCIAcquireConfigSpaceLock(v42, a2, a3);
    if ( Size + BugCheckParameter3 > 0x1000 )
    {
      v19 = v43;
    }
    else
    {
      v53 = 0LL;
      if ( HalpPciAmdK8SpecialLocationHack == -1 )
      {
        _RAX = 0LL;
        __asm { cpuid }
        *(_QWORD *)&v53 = __PAIR64__(_RBX, _RAX);
        *((_QWORD *)&v53 + 1) = __PAIR64__(_RDX, _RCX);
        if ( (_DWORD)_RBX != 1752462657 )
          goto LABEL_62;
        if ( (_DWORD)_RDX != 1769238117 )
          goto LABEL_62;
        if ( (_DWORD)_RCX != 1145913699 )
          goto LABEL_62;
        _RAX = 1LL;
        __asm { cpuid }
        LODWORD(v53) = _RAX;
        *(_QWORD *)((char *)&v53 + 4) = __PAIR64__(_RCX, _RBX);
        HIDWORD(v53) = _RDX;
        if ( (((unsigned int)_RAX >> 8) & 0xF) != 0xF || (_RAX & 0xFF00000) != 0 )
        {
LABEL_62:
          HalpPciAmdK8SpecialLocationHack = 0;
          goto LABEL_26;
        }
        HalpPciAmdK8SpecialLocationHack = 1;
      }
      else if ( HalpPciAmdK8SpecialLocationHack != 1 )
      {
LABEL_26:
        v19 = v43;
        goto LABEL_27;
      }
      v19 = v43;
      if ( v43 || (_BYTE)v7 || (v9 & 0x1F) < 0x18 )
      {
LABEL_27:
        while ( v18 < HalpPciMcfgTableCount )
        {
          v20 = HalpPciMcfgTable + 16LL * v18;
          if ( v19 == *(_WORD *)(v20 + 52)
            && (unsigned __int8)v7 >= *(_BYTE *)(v20 + 54)
            && (unsigned __int8)v7 <= *(_BYTE *)(v20 + 55) )
          {
            v21 = (unsigned __int8)v9 >> 5;
            v22 = *(_QWORD *)(v20 + 44) + ((v21 + 8 * ((v9 & 0x1F) + 32LL * (unsigned __int8)v7)) << 12);
            if ( !v22 )
              break;
            v23 = HalpPciMapMmConfigPhysicalAddress(v22, v21);
            if ( Size )
            {
              v24 = (char *)v45;
              do
              {
                v25 = guard_dispatch_icall_no_overrides(v23, v24);
                v13 += v25;
                v24 += v25;
                v12 -= v25;
              }
              while ( v12 );
            }
            _InterlockedOr(v37, 0);
            return HalpPCIReleaseConfigSpaceLock((unsigned __int8)v42[0]);
          }
          ++v18;
        }
      }
    }
    v26 = v45;
    if ( !(unsigned __int8)HalpPciAccessIoConfigSpace(
                             v19,
                             (unsigned __int8)v7,
                             v9,
                             (_DWORD)v45,
                             BugCheckParameter3,
                             Size,
                             a7)
      && !a7 )
    {
      memset_0(v26, 255, Size);
    }
    return HalpPCIReleaseConfigSpaceLock((unsigned __int8)v42[0]);
  }
  else if ( !a7 )
  {
    return (__int64)memset_0(a4, 255, Size);
  }
  return result;
}
