/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x1407E7FC8
 * Callers:
 *     MiProtectSystemImage @ 0x140A8D1E8 (MiProtectSystemImage.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140C5B55C (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5D2DC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(char *a1)
{
  PIMAGE_NT_HEADERS v2; // rax
  __int64 *v3; // rbx
  int v4; // r8d
  PIMAGE_NT_HEADERS v5; // r15
  char *v6; // rbp
  int v7; // esi
  char *v8; // r10
  unsigned int v9; // ecx
  char *v10; // rdi
  unsigned int v11; // r14d
  __int64 result; // rax
  __int64 v13; // [rsp+38h] [rbp-70h] BYREF
  unsigned int SizeOfHeaders; // [rsp+40h] [rbp-68h]
  int v15; // [rsp+44h] [rbp-64h]
  unsigned int v16; // [rsp+48h] [rbp-60h]
  __int128 v17; // [rsp+4Ch] [rbp-5Ch]
  int v18; // [rsp+5Ch] [rbp-4Ch]

  v2 = RtlImageNtHeader(a1);
  v13 = 0LL;
  v3 = &v13;
  v15 = 0;
  v4 = 0x40000000;
  v18 = 0x40000000;
  v5 = v2;
  v6 = a1;
  v7 = v2->FileHeader.NumberOfSections + 1;
  SizeOfHeaders = v2->OptionalHeader.SizeOfHeaders;
  v8 = a1;
  v16 = SizeOfHeaders;
  v17 = 0LL;
  while ( v7 )
  {
    v9 = *((_DWORD *)v3 + 4);
    v10 = &a1[*((unsigned int *)v3 + 3)];
    if ( v9 < *((_DWORD *)v3 + 2) )
      v9 = *((_DWORD *)v3 + 2);
    v11 = *((_DWORD *)v3 + 9) & 0xE0000000;
    v6 = &v10[(v9 + 4095LL) & 0xFFFFFFFFFFFFF000uLL];
    if ( v11 != v4 )
    {
      if ( v8 < v10 )
      {
        result = guard_dispatch_icall_no_overrides(v8, &a1[*((unsigned int *)v3 + 3)]);
        if ( (int)result < 0 )
          return result;
      }
      v4 = v11;
      v8 = v10;
    }
    if ( v3 == &v13 )
      v3 = (__int64 *)((char *)&v5->OptionalHeader + v5->FileHeader.SizeOfOptionalHeader);
    else
      v3 += 5;
    --v7;
  }
  return guard_dispatch_icall_no_overrides(v8, (unsigned __int64)(v6 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
}
