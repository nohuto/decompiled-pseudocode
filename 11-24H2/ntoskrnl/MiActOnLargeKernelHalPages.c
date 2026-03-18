/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x1407E79F8
 * Callers:
 *     MiProtectSystemImage @ 0x140A90AEC (MiProtectSystemImage.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140C593CC (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5B14C (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbp
  int v9; // esi
  unsigned __int64 v10; // r10
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned int v13; // r14d
  __int64 result; // rax
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  int v17; // [rsp+40h] [rbp-68h]
  int v18; // [rsp+44h] [rbp-64h]
  int v19; // [rsp+48h] [rbp-60h]
  __int128 v20; // [rsp+4Ch] [rbp-5Ch]
  int v21; // [rsp+5Ch] [rbp-4Ch]

  v4 = RtlImageNtHeader(a1);
  v16 = 0LL;
  v5 = &v16;
  v18 = 0;
  v6 = 0x40000000LL;
  v21 = 0x40000000;
  v7 = v4;
  v8 = a1;
  v9 = *(unsigned __int16 *)(v4 + 6) + 1;
  v17 = *(_DWORD *)(v4 + 84);
  v10 = a1;
  v19 = v17;
  v20 = 0LL;
  while ( v9 )
  {
    v11 = *((_DWORD *)v5 + 4);
    v12 = a1 + *((unsigned int *)v5 + 3);
    if ( v11 < *((_DWORD *)v5 + 2) )
      v11 = *((_DWORD *)v5 + 2);
    v13 = *((_DWORD *)v5 + 9) & 0xE0000000;
    v8 = v12 + ((v11 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    if ( v13 != (_DWORD)v6 )
    {
      if ( v10 < v12 )
      {
        result = guard_dispatch_icall_no_overrides(v10, a1 + *((unsigned int *)v5 + 3), v6, a3);
        if ( (int)result < 0 )
          return result;
      }
      v6 = v13;
      v10 = v12;
    }
    if ( v5 == &v16 )
      v5 = (__int64 *)(v7 + *(unsigned __int16 *)(v7 + 20) + 24LL);
    else
      v5 += 5;
    --v9;
  }
  return guard_dispatch_icall_no_overrides(v10, (v8 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL, v6, a3);
}
