/*
 * XREFs of MiActOnLargeKernelHalPages @ 0x1407D7B40
 * Callers:
 *     MiProtectSystemImage @ 0x140A8B9E8 (MiProtectSystemImage.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140C49DC0 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiActOnLargeKernelHalPages(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // rbx
  int v4; // r8d
  unsigned __int64 v5; // r15
  int v6; // esi
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 result; // rax
  __int64 v11; // [rsp+38h] [rbp-70h] BYREF
  int v12; // [rsp+40h] [rbp-68h]
  int v13; // [rsp+44h] [rbp-64h]
  int v14; // [rsp+48h] [rbp-60h]
  __int128 v15; // [rsp+4Ch] [rbp-5Ch]
  int v16; // [rsp+5Ch] [rbp-4Ch]

  v2 = RtlImageNtHeader(a1);
  v11 = 0LL;
  v3 = &v11;
  v13 = 0;
  v4 = 0x40000000;
  v16 = 0x40000000;
  v5 = v2;
  v6 = *(unsigned __int16 *)(v2 + 6) + 1;
  v12 = *(_DWORD *)(v2 + 84);
  v7 = a1;
  v14 = v12;
  v15 = 0LL;
  while ( v6 )
  {
    v8 = a1 + *((unsigned int *)v3 + 3);
    v9 = *((_DWORD *)v3 + 9) & 0xE0000000;
    if ( v9 != v4 )
    {
      if ( v7 < v8 )
      {
        result = guard_dispatch_icall_no_overrides(v7);
        if ( (int)result < 0 )
          return result;
      }
      v4 = v9;
      v7 = v8;
    }
    if ( v3 == &v11 )
      v3 = (__int64 *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
    else
      v3 += 5;
    --v6;
  }
  return guard_dispatch_icall_no_overrides(v7);
}
