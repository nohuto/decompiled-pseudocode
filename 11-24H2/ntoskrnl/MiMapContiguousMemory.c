/*
 * XREFs of MiMapContiguousMemory @ 0x14034B0DC
 * Callers:
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     MiAllocateContiguousMemory @ 0x140395A6C (MiAllocateContiguousMemory.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiMapContiguousMemoryLarge @ 0x14026BE10 (MiMapContiguousMemoryLarge.c)
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 *     MiMappingHasIoReferences @ 0x140292CEC (MiMappingHasIoReferences.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402A0630 (MiFillSystemPtes.c)
 *     KasanTrackAddress @ 0x14044E740 (KasanTrackAddress.c)
 *     MiSanitizePage @ 0x14045F4E4 (MiSanitizePage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x1406924A4 (MiInsertPteTracker.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiMapContiguousMemory(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  unsigned int v5; // r13d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r11
  __int64 *v14; // rsi
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  ULONG_PTR v21; // r15
  unsigned int v22; // r12d
  unsigned __int64 v23; // r14
  int v24; // edx
  char v25; // r14
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // rcx
  _BYTE *v28; // rbx
  size_t v29; // rdi
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  int v32; // [rsp+30h] [rbp-71h] BYREF
  int v33; // [rsp+34h] [rbp-6Dh]
  unsigned int v34; // [rsp+38h] [rbp-69h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-61h]
  unsigned __int64 v36; // [rsp+48h] [rbp-59h]
  unsigned __int64 v37; // [rsp+50h] [rbp-51h]
  unsigned __int64 v38; // [rsp+58h] [rbp-49h]
  unsigned __int64 v39; // [rsp+60h] [rbp-41h]
  __int64 v40; // [rsp+68h] [rbp-39h]
  _QWORD v41[5]; // [rsp+70h] [rbp-31h] BYREF
  int v42; // [rsp+98h] [rbp-9h]
  unsigned int v43; // [rsp+9Ch] [rbp-5h]
  unsigned __int64 v44; // [rsp+A0h] [rbp-1h]

  v5 = a4;
  v40 = a3;
  v33 = a5;
  v34 = a1 & 0xFFF;
  if ( a4 == -1 )
    return 0LL;
  if ( a4 == 24 )
    return 0LL;
  if ( (a4 & 5) == 5 )
    return 0LL;
  if ( (a4 & 0xFFFFFFF8) == 0x10 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v8 = a1 + a2;
  if ( a2 + a1 <= a1 )
  {
    if ( v8 )
      return 0LL;
  }
  v38 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  v9 = ((a1 & 0xFFF) + a3 + 4095) >> 12;
  v39 = a1 >> 12;
  v10 = MiSanitizePage(a1 >> 12);
  v37 = v10;
  if ( (v5 & 2) != 0 && (MiFlags & 0x8000) != 0 )
    v5 &= ~2u;
  v32 = 0;
  v36 = 0LL;
  if ( (a1 & 0x1FFFFF) == 0 && a2 >= 0x200000 && (v11 & 1) == 0 && v9 == v12 )
  {
    v30 = MiMapContiguousMemoryLarge(v10, v12, v5, v11, &v32);
    v36 = v30;
    v19 = v30;
    if ( v30 )
    {
      v18 = v30;
      v21 = v9 << 12;
      v20 = a2;
      BugCheckParameter4 = 0LL;
      goto LABEL_19;
    }
    LOBYTE(v11) = v33;
    v13 = 0xFFFFFFFFLL;
  }
  BugCheckParameter4 = 0LL;
  if ( (v11 & 1) != 0 )
    ++v9;
  if ( v9 > v13 )
    return 0LL;
  v14 = (__int64 *)&unk_140E35EC0;
  if ( (v5 & 0x18) == 0 )
    v14 = &qword_140E376A8;
  v15 = MiReservePtes((__int64)v14, v9);
  v16 = v15;
  if ( !v15 )
    return 0LL;
  if ( (int)MiFillSystemPtes(v15, v38, v37, v5, (v33 & 2) != 0, &v32) < 0 )
  {
    MiReleasePtes((__int64)v14, (_QWORD *)v16, v9);
    return 0LL;
  }
  v18 = (__int64)(v16 << 25) >> 16;
  BugCheckParameter4 = v34 & 0xFFFFFFF8;
  v19 = v34 + v18;
  v20 = a2 + (v34 & 7);
  v36 = v19;
  v21 = (v9 << 12) - BugCheckParameter4;
LABEL_19:
  v22 = v32 & 1;
  if ( (v32 & 1) != 0 )
    MiMappingHasIoReferences(v19);
  if ( (dword_140FC51FC & 1) != 0 )
  {
    v41[0] = 0LL;
    v41[1] = 0LL;
    v42 = 0;
    v41[3] = v36;
    v44 = v39;
    v43 = v34;
    v41[4] = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (v33 & 1) != 0 )
      v22 |= 2u;
    v41[2] = v40;
    v31 = MiProtectionToCacheAttribute(v5);
    MiInsertPteTracker(v41, 1LL, v22, v31);
  }
  v23 = v9 << 12;
  if ( (int)KasanTrackAddress(v18, v23, 0LL) < 0 )
  {
    MiUnmapContiguousMemory(v18, v23, 0);
    return 0LL;
  }
  v25 = byte_140FCECA8;
  if ( byte_140FCECA8 )
  {
    if ( v18 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v18, 0LL);
    if ( (v18 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v18, 8uLL);
    v26 = BugCheckParameter4;
    if ( BugCheckParameter4 + v18 < v18 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v18, BugCheckParameter4);
    if ( BugCheckParameter4 >> 3 )
    {
      LOBYTE(v24) = -118;
      memset_0((void *)(KasaniShadow + ((v18 + 0x800000000000LL) >> 3)), v24, BugCheckParameter4 >> 3);
    }
  }
  else
  {
    v26 = BugCheckParameter4;
  }
  v27 = v26 + v18;
  if ( v25 )
  {
    if ( v27 < 0xFFFF800000000000uLL )
      KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v26 + v18, 0LL);
    if ( (v27 & 7) != 0 )
      KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v26 + v18, 8uLL);
    if ( v20 > v21 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v20, v21);
    if ( v27 + v21 < v27 )
      KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v26 + v18, v21);
    v28 = (_BYTE *)(KasaniShadow + ((v27 + 0x800000000000LL) >> 3));
    if ( v20 >> 3 )
    {
      memset_0((void *)(KasaniShadow + ((v27 + 0x800000000000LL) >> 3)), 0, v20 >> 3);
      v28 += v20 >> 3;
    }
    if ( (v20 & 7) != 0 )
      *v28++ = v20 & 7;
    v29 = (v21 + (((_BYTE)v20 - 1) & 7) - (unsigned __int64)(((_BYTE)v21 - 1) & 7) - v20) >> 3;
    if ( v29 )
    {
      LOBYTE(v24) = -117;
      memset_0(v28, v24, v29);
    }
  }
  return v36;
}
