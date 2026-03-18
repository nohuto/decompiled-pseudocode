/*
 * XREFs of HsaInitializeIommu @ 0x140B42D00
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HsaBuildDeviceTableEntry @ 0x1404496F4 (HsaBuildDeviceTableEntry.c)
 *     HalSocRequestApi @ 0x1404AD34C (HalSocRequestApi.c)
 *     HsaGetBlockedDomain @ 0x1404F7F9C (HsaGetBlockedDomain.c)
 *     HalMapIoSpace @ 0x14055D580 (HalMapIoSpace.c)
 *     HsaProcessDeviceExceptions @ 0x14057015C (HsaProcessDeviceExceptions.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HsaInitializeInterruptRemapping @ 0x140B42B68 (HsaInitializeInterruptRemapping.c)
 */

__int64 __fastcall HsaInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // esi
  int v4; // r12d
  __int64 result; // rax
  __int64 v7; // rax
  PVOID v8; // rax
  PVOID v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r11
  SIZE_T v12; // r14
  __int64 v13; // r13
  bool v14; // zf
  __int64 v15; // rax
  PVOID v16; // rax
  unsigned int v17; // r14d
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int16 v23; // r9
  __int16 BlockedDomain; // ax
  int v25; // r8d
  __int64 v26; // rax
  _QWORD *v27; // r9
  __int64 v28; // r8
  unsigned int i; // ecx
  __int16 v30; // r9
  char v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  signed __int32 v40[8]; // [rsp+8h] [rbp-99h] BYREF
  char v41; // [rsp+68h] [rbp-39h]
  unsigned int v42; // [rsp+6Ch] [rbp-35h] BYREF
  __int64 v43; // [rsp+70h] [rbp-31h] BYREF
  int v44; // [rsp+78h] [rbp-29h]
  __int64 v45; // [rsp+80h] [rbp-21h]
  __int128 v46; // [rsp+88h] [rbp-19h]
  __int128 v47; // [rsp+98h] [rbp-9h]
  _QWORD v48[4]; // [rsp+A8h] [rbp+7h]

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v41 = a3;
  v42 = 0;
  v43 = 0LL;
  v44 = v3;
  v46 = 0LL;
  v47 = 0LL;
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HsaPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    if ( !v4 && !v3 )
      goto LABEL_42;
    if ( v4 == 2 && !HsaBlockedPageTable )
    {
      v7 = guard_dispatch_icall_no_overrides(-1LL);
      HsaBlockedPageTablePhysical = v7;
      if ( !v7 )
        return 3221225473LL;
      v8 = HalMapIoSpace((LARGE_INTEGER)v7, 0x1000uLL, (MEMORY_CACHING_TYPE)((*(unsigned __int8 *)(a1 + 16) >> 5) & 1));
      HsaBlockedPageTable = (__int64)v8;
      if ( !v8 )
        return 3221225473LL;
      memset_0(v8, 0, 0x1000uLL);
    }
    result = HsaInitializeInterruptRemapping(a1);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)a1
      || (v9 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 8), 0x2040uLL, MmNonCached), (*(_QWORD *)a1 = v9) != 0LL) )
    {
      v10 = 0;
      v11 = 3LL;
      while ( v10 < 4 )
      {
        if ( v10 )
        {
          if ( v10 == 3 )
            v12 = 0x2000LL;
          else
            v12 = 4096LL;
        }
        else
        {
          v12 = 0x200000LL;
        }
        v13 = v10;
        v14 = *(_QWORD *)(a1 + 24LL * v10 + 24) == 0LL;
        *(_QWORD *)(a1 + 24LL * v10 + 40) = v12;
        if ( v14 )
        {
          v15 = guard_dispatch_icall_no_overrides(-1LL);
          *(_QWORD *)(a1 + 24LL * v10 + 32) = v15;
          if ( !v15 )
            return 3221225473LL;
          v16 = HalMapIoSpace((LARGE_INTEGER)v15, v12, MmNonCached);
          *(_QWORD *)(a1 + 24LL * v10 + 24) = v16;
          if ( !v16 )
            return 3221225473LL;
          memset_0(v16, 0, v12);
          v17 = 0;
          if ( v10 )
          {
            v11 = 3LL;
          }
          else
          {
            v45 = *(_QWORD *)(a1 + 24);
            v18 = 0;
            LODWORD(v43) = 0;
            v19 = 0;
            v20 = 0;
            v21 = v45;
            v42 = 0;
            do
            {
              v22 = 0LL;
              v23 = 0;
              v43 = 0LL;
              if ( v4 == 2 )
              {
                BlockedDomain = HsaGetBlockedDomain(a1, &v42, (unsigned __int64 *)&v43);
                v22 = v43;
                v23 = BlockedDomain;
                v25 = 2;
              }
              else
              {
                v25 = 0;
                v17 = v18;
                v19 = v20;
              }
              HsaBuildDeviceTableEntry(
                a1,
                0LL,
                0,
                0,
                0,
                v23,
                v25,
                v22,
                0LL,
                (__int64)&HsaSharedRemappingTable,
                v21 + 32LL * v17);
              v17 = v19 + 1;
              v42 = v17;
              v18 = ++v19;
              v20 = v17;
            }
            while ( v17 < 0x10000 );
            v13 = 0LL;
            v11 = 3LL;
          }
        }
        v26 = *(_QWORD *)(a1 + 24LL * v10++ + 32);
        v48[v13] = v26 / 4096;
      }
      if ( v4 != 2 || v41 )
        goto LABEL_36;
      if ( (int)HsaProcessDeviceExceptions(a1) >= 0 )
      {
        v11 = 3LL;
LABEL_36:
        v27 = (_QWORD *)(a1 + 64);
        v28 = 0LL;
        do
        {
          for ( i = 15; i > 8; --i )
          {
            if ( (unsigned __int64)(1LL << i) <= *v27 >> 4 )
              break;
          }
          v27 += 3;
          *(_QWORD *)((char *)&v46 + v28 * 8 + 8) = ((unsigned __int64)i << 56) ^ (((unsigned __int64)i << 56) ^ (v48[v28 + 1] << 12) ^ (*(_QWORD *)((char *)&v46 + v28 * 8 + 8) ^ (v48[v28 + 1] << 12)) & 0xFFF0000000000FFFuLL) & 0xF0FFFFFFFFFFFFFFuLL;
          ++v28;
          --v11;
        }
        while ( v11 );
        v3 = v44;
LABEL_42:
        **(_QWORD **)a1 = ((v48[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                             + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                             - 1) & 0x1FF;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v46 + 1);
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v47;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
        _InterlockedOr(v40, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
        _InterlockedOr(v40, 0);
        v30 = *(_WORD *)(a1 + 18);
        if ( (v30 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v47 + 1);
          _InterlockedOr(v40, 0);
          v30 = *(_WORD *)(a1 + 18);
        }
        v31 = *(_BYTE *)(a1 + 16);
        v32 = v31 & 1;
        v33 = (2 * v32 + 69637) | 0x100;
        if ( (v31 & 2) == 0 )
          v33 = 2 * v32 + 69637;
        v34 = v33 | 0x200;
        if ( (v31 & 4) == 0 )
          v34 = v33;
        v35 = v34 | 0x400;
        if ( (v31 & 0x20) == 0 )
          v35 = v34;
        v36 = v35 | 0x800;
        if ( (v31 & 8) == 0 )
          v36 = v35;
        v37 = v36 | 0xA00000A000LL;
        if ( (v30 & 4) == 0 )
          v37 = v36;
        v38 = v37 | 0x60;
        if ( !*(_QWORD *)(a1 + 128) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
          *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
          *(_QWORD *)(a1 + 136) = (PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFF8uLL ^ (*(_QWORD *)(a1 + 136) ^ PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFF8uLL) & 0xFFF0000000000007uLL) & 0xFFFFFFFFFFFFFFALL | 0x1000000000000005LL;
        }
        if ( v3 )
          v38 |= 0xC000000020000uLL;
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v38;
        _InterlockedOr(v40, 0);
        if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
          _InterlockedOr(v40, 0);
        }
        return 0LL;
      }
    }
    return 3221225473LL;
  }
  return 0LL;
}
