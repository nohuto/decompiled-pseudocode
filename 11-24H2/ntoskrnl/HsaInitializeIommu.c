/*
 * XREFs of HsaInitializeIommu @ 0x140B52D00
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     HsaBuildDeviceTableEntry @ 0x140446874 (HsaBuildDeviceTableEntry.c)
 *     HalSocRequestApi @ 0x1404AE160 (HalSocRequestApi.c)
 *     HsaGetBlockedDomain @ 0x1404FA464 (HsaGetBlockedDomain.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     HsaProcessDeviceExceptions @ 0x14057345C (HsaProcessDeviceExceptions.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HsaInitializeInterruptRemapping @ 0x140B52B68 (HsaInitializeInterruptRemapping.c)
 */

__int64 __fastcall HsaInitializeIommu(__int64 a1, int a2, char a3)
{
  int v3; // esi
  int v4; // r12d
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  PVOID v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // rax
  unsigned int v15; // esi
  __int64 v16; // r11
  __int64 v17; // rdx
  SIZE_T v18; // r14
  __int64 v19; // r13
  bool v20; // zf
  __int64 v21; // rax
  PVOID v22; // rax
  unsigned int v23; // r14d
  unsigned int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int16 v29; // r9
  __int16 BlockedDomain; // ax
  int v31; // r8d
  __int64 v32; // rax
  _QWORD *v33; // r9
  __int64 v34; // r8
  unsigned int i; // ecx
  __int16 v36; // r9
  char v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  signed __int32 v46[8]; // [rsp+8h] [rbp-99h] BYREF
  char v47; // [rsp+68h] [rbp-39h]
  unsigned int v48; // [rsp+6Ch] [rbp-35h] BYREF
  __int64 v49; // [rsp+70h] [rbp-31h] BYREF
  int v50; // [rsp+78h] [rbp-29h]
  __int64 v51; // [rsp+80h] [rbp-21h]
  __int128 v52; // [rsp+88h] [rbp-19h]
  __int128 v53; // [rsp+98h] [rbp-9h]
  _QWORD v54[4]; // [rsp+A8h] [rbp+7h]

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v47 = a3;
  v48 = 0;
  v49 = 0LL;
  v50 = v3;
  v52 = 0LL;
  v53 = 0LL;
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HsaPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    if ( !v4 && !v3 )
      goto LABEL_42;
    if ( v4 == 2 && !HsaBlockedPageTable )
    {
      v10 = guard_dispatch_icall_no_overrides(-1LL, 1LL, v8, v9);
      HsaBlockedPageTablePhysical = v10;
      if ( !v10 )
        return 3221225473LL;
      v11 = HalMapIoSpace(
              (LARGE_INTEGER)v10,
              0x1000uLL,
              (MEMORY_CACHING_TYPE)((*(unsigned __int8 *)(a1 + 16) >> 5) & 1));
      HsaBlockedPageTable = (__int64)v11;
      if ( !v11 )
        return 3221225473LL;
      memset_0(v11, 0, 0x1000uLL);
    }
    result = HsaInitializeInterruptRemapping(a1, v7, v8, v9);
    if ( (int)result < 0 )
      return result;
    if ( *(_QWORD *)a1
      || (v14 = HalMapIoSpace(*(LARGE_INTEGER *)(a1 + 8), 0x2040uLL, MmNonCached), (*(_QWORD *)a1 = v14) != 0LL) )
    {
      v15 = 0;
      v16 = 3LL;
      while ( v15 < 4 )
      {
        if ( v15 )
        {
          if ( v15 == 3 )
          {
            v17 = 2LL;
            v18 = 0x2000LL;
          }
          else
          {
            v17 = 1LL;
            v18 = 4096LL;
          }
        }
        else
        {
          v17 = 512LL;
          v18 = 0x200000LL;
        }
        v19 = v15;
        v20 = *(_QWORD *)(a1 + 24LL * v15 + 24) == 0LL;
        *(_QWORD *)(a1 + 24LL * v15 + 40) = v18;
        if ( v20 )
        {
          v21 = guard_dispatch_icall_no_overrides(-1LL, v17, v12, v13);
          *(_QWORD *)(a1 + 24LL * v15 + 32) = v21;
          if ( !v21 )
            return 3221225473LL;
          v22 = HalMapIoSpace((LARGE_INTEGER)v21, v18, MmNonCached);
          *(_QWORD *)(a1 + 24LL * v15 + 24) = v22;
          if ( !v22 )
            return 3221225473LL;
          memset_0(v22, 0, v18);
          v23 = 0;
          if ( v15 )
          {
            v16 = 3LL;
          }
          else
          {
            v51 = *(_QWORD *)(a1 + 24);
            v24 = 0;
            LODWORD(v49) = 0;
            v25 = 0;
            v26 = 0;
            v27 = v51;
            v48 = 0;
            do
            {
              v28 = 0LL;
              v29 = 0;
              v49 = 0LL;
              if ( v4 == 2 )
              {
                BlockedDomain = HsaGetBlockedDomain(a1, &v48, (unsigned __int64 *)&v49);
                v28 = v49;
                v29 = BlockedDomain;
                v31 = 2;
              }
              else
              {
                v31 = 0;
                v23 = v24;
                v25 = v26;
              }
              HsaBuildDeviceTableEntry(
                a1,
                0LL,
                0,
                0,
                0,
                v29,
                v31,
                v28,
                0LL,
                (__int64)&HsaSharedRemappingTable,
                v27 + 32LL * v23);
              v23 = v25 + 1;
              v48 = v23;
              v24 = ++v25;
              v26 = v23;
            }
            while ( v23 < 0x10000 );
            v19 = 0LL;
            v16 = 3LL;
          }
        }
        v32 = *(_QWORD *)(a1 + 24LL * v15++ + 32);
        v54[v19] = v32 / 4096;
      }
      if ( v4 != 2 || v47 )
        goto LABEL_36;
      if ( (int)HsaProcessDeviceExceptions(a1) >= 0 )
      {
        v16 = 3LL;
LABEL_36:
        v33 = (_QWORD *)(a1 + 64);
        v34 = 0LL;
        do
        {
          for ( i = 15; i > 8; --i )
          {
            if ( (unsigned __int64)(1LL << i) <= *v33 >> 4 )
              break;
          }
          v33 += 3;
          *(_QWORD *)((char *)&v52 + v34 * 8 + 8) = ((unsigned __int64)i << 56) ^ (((unsigned __int64)i << 56) ^ (v54[v34 + 1] << 12) ^ (*(_QWORD *)((char *)&v52 + v34 * 8 + 8) ^ (v54[v34 + 1] << 12)) & 0xFFF0000000000FFFuLL) & 0xF0FFFFFFFFFFFFFFuLL;
          ++v34;
          --v16;
        }
        while ( v16 );
        v3 = v50;
LABEL_42:
        **(_QWORD **)a1 = ((v54[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                             + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                             - 1) & 0x1FF;
        _InterlockedOr(v46, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v52 + 1);
        _InterlockedOr(v46, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v53;
        _InterlockedOr(v46, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
        _InterlockedOr(v46, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
        _InterlockedOr(v46, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
        _InterlockedOr(v46, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
        _InterlockedOr(v46, 0);
        v36 = *(_WORD *)(a1 + 18);
        if ( (v36 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v53 + 1);
          _InterlockedOr(v46, 0);
          v36 = *(_WORD *)(a1 + 18);
        }
        v37 = *(_BYTE *)(a1 + 16);
        v38 = v37 & 1;
        v39 = (2 * v38 + 69637) | 0x100;
        if ( (v37 & 2) == 0 )
          v39 = 2 * v38 + 69637;
        v40 = v39 | 0x200;
        if ( (v37 & 4) == 0 )
          v40 = v39;
        v41 = v40 | 0x400;
        if ( (v37 & 0x20) == 0 )
          v41 = v40;
        v42 = v41 | 0x800;
        if ( (v37 & 8) == 0 )
          v42 = v41;
        v43 = v42 | 0xA00000A000LL;
        if ( (v36 & 4) == 0 )
          v43 = v42;
        v44 = v43 | 0x60;
        if ( !*(_QWORD *)(a1 + 128) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
          *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
          *(_QWORD *)(a1 + 136) = (PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFF8uLL ^ (*(_QWORD *)(a1 + 136) ^ PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFF8uLL) & 0xFFF0000000000007uLL) & 0xFFFFFFFFFFFFFFALL | 0x1000000000000005LL;
        }
        if ( v3 )
          v44 |= 0xC000000020000uLL;
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v44;
        _InterlockedOr(v46, 0);
        if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
          _InterlockedOr(v46, 0);
        }
        return 0LL;
      }
    }
    return 3221225473LL;
  }
  return 0LL;
}
