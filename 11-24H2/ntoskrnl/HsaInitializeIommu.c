/*
 * XREFs of HsaInitializeIommu @ 0x140B54D50
 * Callers:
 *     <none>
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HsaBuildDeviceTableEntry @ 0x14043EC24 (HsaBuildDeviceTableEntry.c)
 *     HalSocRequestApi @ 0x1404A8A70 (HalSocRequestApi.c)
 *     HsaGetBlockedDomain @ 0x1404F7D44 (HsaGetBlockedDomain.c)
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 *     HsaProcessDeviceExceptions @ 0x1405708EC (HsaProcessDeviceExceptions.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HsaInitializeInterruptRemapping @ 0x140B54BB8 (HsaInitializeInterruptRemapping.c)
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
  __int64 v12; // rdx
  SIZE_T v13; // r14
  __int64 v14; // r13
  bool v15; // zf
  __int64 v16; // rax
  PVOID v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int16 v24; // r9
  __int16 BlockedDomain; // ax
  int v26; // r8d
  __int64 v27; // rax
  _QWORD *v28; // r9
  __int64 v29; // r8
  unsigned int i; // ecx
  __int16 v31; // r9
  char v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  signed __int32 v41[8]; // [rsp+8h] [rbp-99h] BYREF
  char v42; // [rsp+68h] [rbp-39h]
  unsigned int v43; // [rsp+6Ch] [rbp-35h] BYREF
  __int64 v44; // [rsp+70h] [rbp-31h] BYREF
  int v45; // [rsp+78h] [rbp-29h]
  __int64 v46; // [rsp+80h] [rbp-21h]
  __int128 v47; // [rsp+88h] [rbp-19h]
  __int128 v48; // [rsp+98h] [rbp-9h]
  _QWORD v49[4]; // [rsp+A8h] [rbp+7h]

  v3 = *(_DWORD *)(a1 + 176);
  v4 = *(_DWORD *)(a1 + 172);
  v42 = a3;
  v43 = 0;
  v44 = 0LL;
  v45 = v3;
  v47 = 0LL;
  v48 = 0LL;
  if ( !a2 )
  {
    result = HalSocRequestApi(a1, 0LL, 4, 8LL, &HsaPhysicalMemoryApi);
    if ( (int)result < 0 )
      return result;
    if ( !v4 && !v3 )
      goto LABEL_42;
    if ( v4 == 2 && !HsaBlockedPageTable )
    {
      v7 = guard_dispatch_icall_no_overrides(-1LL, 1LL);
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
          {
            v12 = 2LL;
            v13 = 0x2000LL;
          }
          else
          {
            v12 = 1LL;
            v13 = 4096LL;
          }
        }
        else
        {
          v12 = 512LL;
          v13 = 0x200000LL;
        }
        v14 = v10;
        v15 = *(_QWORD *)(a1 + 24LL * v10 + 24) == 0LL;
        *(_QWORD *)(a1 + 24LL * v10 + 40) = v13;
        if ( v15 )
        {
          v16 = guard_dispatch_icall_no_overrides(-1LL, v12);
          *(_QWORD *)(a1 + 24LL * v10 + 32) = v16;
          if ( !v16 )
            return 3221225473LL;
          v17 = HalMapIoSpace((LARGE_INTEGER)v16, v13, MmNonCached);
          *(_QWORD *)(a1 + 24LL * v10 + 24) = v17;
          if ( !v17 )
            return 3221225473LL;
          memset_0(v17, 0, v13);
          v18 = 0;
          if ( v10 )
          {
            v11 = 3LL;
          }
          else
          {
            v46 = *(_QWORD *)(a1 + 24);
            v19 = 0;
            LODWORD(v44) = 0;
            v20 = 0;
            v21 = 0;
            v22 = v46;
            v43 = 0;
            do
            {
              v23 = 0LL;
              v24 = 0;
              v44 = 0LL;
              if ( v4 == 2 )
              {
                BlockedDomain = HsaGetBlockedDomain(a1, &v43, (unsigned __int64 *)&v44);
                v23 = v44;
                v24 = BlockedDomain;
                v26 = 2;
              }
              else
              {
                v26 = 0;
                v18 = v19;
                v20 = v21;
              }
              HsaBuildDeviceTableEntry(
                a1,
                0LL,
                0,
                0,
                0,
                v24,
                v26,
                v23,
                0LL,
                (__int64)&HsaSharedRemappingTable,
                v22 + 32LL * v18);
              v18 = v20 + 1;
              v43 = v18;
              v19 = ++v20;
              v21 = v18;
            }
            while ( v18 < 0x10000 );
            v14 = 0LL;
            v11 = 3LL;
          }
        }
        v27 = *(_QWORD *)(a1 + 24LL * v10++ + 32);
        v49[v14] = v27 / 4096;
      }
      if ( v4 != 2 || v42 )
        goto LABEL_36;
      if ( (int)HsaProcessDeviceExceptions(a1) >= 0 )
      {
        v11 = 3LL;
LABEL_36:
        v28 = (_QWORD *)(a1 + 64);
        v29 = 0LL;
        do
        {
          for ( i = 15; i > 8; --i )
          {
            if ( (unsigned __int64)(1LL << i) <= *v28 >> 4 )
              break;
          }
          v28 += 3;
          *(_QWORD *)((char *)&v47 + v29 * 8 + 8) = ((unsigned __int64)i << 56) ^ (((unsigned __int64)i << 56) ^ (v49[v29 + 1] << 12) ^ (*(_QWORD *)((char *)&v47 + v29 * 8 + 8) ^ (v49[v29 + 1] << 12)) & 0xFFF0000000000FFFuLL) & 0xF0FFFFFFFFFFFFFFuLL;
          ++v29;
          --v11;
        }
        while ( v11 );
        v3 = v45;
LABEL_42:
        **(_QWORD **)a1 = ((v49[0] & 0xFFFFFFFFFFLL) << 12) | ((unsigned __int16)(*(_QWORD *)(a1 + 40) >> 12)
                                                             + ((*(_QWORD *)(a1 + 40) & 0xFFFLL) != 0)
                                                             - 1) & 0x1FF;
        _InterlockedOr(v41, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *((_QWORD *)&v47 + 1);
        _InterlockedOr(v41, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 16LL) = v48;
        _InterlockedOr(v41, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 0x2000LL) = 0LL;
        _InterlockedOr(v41, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8200LL) = 0LL;
        _InterlockedOr(v41, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8208LL) = 0LL;
        _InterlockedOr(v41, 0);
        *(_QWORD *)(*(_QWORD *)a1 + 8216LL) = 0LL;
        _InterlockedOr(v41, 0);
        v31 = *(_WORD *)(a1 + 18);
        if ( (v31 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 56LL) = *((_QWORD *)&v48 + 1);
          _InterlockedOr(v41, 0);
          v31 = *(_WORD *)(a1 + 18);
        }
        v32 = *(_BYTE *)(a1 + 16);
        v33 = v32 & 1;
        v34 = (2 * v33 + 69637) | 0x100;
        if ( (v32 & 2) == 0 )
          v34 = 2 * v33 + 69637;
        v35 = v34 | 0x200;
        if ( (v32 & 4) == 0 )
          v35 = v34;
        v36 = v35 | 0x400;
        if ( (v32 & 0x20) == 0 )
          v36 = v35;
        v37 = v36 | 0x800;
        if ( (v32 & 8) == 0 )
          v37 = v36;
        v38 = v37 | 0xA00000A000LL;
        if ( (v31 & 4) == 0 )
          v38 = v37;
        v39 = v38 | 0x60;
        if ( !*(_QWORD *)(a1 + 128) )
        {
          PhysicalAddress = MmGetPhysicalAddress((PVOID)(a1 + 120));
          *(PHYSICAL_ADDRESS *)(a1 + 128) = PhysicalAddress;
          *(_QWORD *)(a1 + 136) = (PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFF8uLL ^ (*(_QWORD *)(a1 + 136) ^ PhysicalAddress.QuadPart & 0xFFFFFFFFFFFFFFF8uLL) & 0xFFF0000000000007uLL) & 0xFFFFFFFFFFFFFFALL | 0x1000000000000005LL;
        }
        if ( v3 )
          v39 |= 0xC000000020000uLL;
        *(_QWORD *)(*(_QWORD *)a1 + 24LL) = v39;
        _InterlockedOr(v41, 0);
        if ( (*(_BYTE *)(a1 + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)a1 + 364LL) = 0x2000;
          _InterlockedOr(v41, 0);
        }
        return 0LL;
      }
    }
    return 3221225473LL;
  }
  return 0LL;
}
