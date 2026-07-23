/*
 * XREFs of HalpIommuUnmapLogicalRange @ 0x14039AF08
 * Callers:
 *     HalpIommuDomainUnmapIdentityRange @ 0x14039A828 (HalpIommuDomainUnmapIdentityRange.c)
 *     HalpIommuDomainMapIdentityRange @ 0x14039AB14 (HalpIommuDomainMapIdentityRange.c)
 *     HalpIommuMapLogical @ 0x14039B1A4 (HalpIommuMapLogical.c)
 *     IommuUnmapLogicalRange @ 0x14039BCD0 (IommuUnmapLogicalRange.c)
 *     HalpIommuDomainUnmapLogicalRange @ 0x14039C068 (HalpIommuDomainUnmapLogicalRange.c)
 *     HalpIommuMapLogicalRange @ 0x140565818 (HalpIommuMapLogicalRange.c)
 * Callees:
 *     HalpIommuFlushPhysicalPtesFromCacheSize @ 0x14039AEE8 (HalpIommuFlushPhysicalPtesFromCacheSize.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpIommuUnmapLogicalRange(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  int v3; // r12d
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r9
  size_t v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  size_t v14; // r15
  void *v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  _OWORD v21[3]; // [rsp+20h] [rbp-78h] BYREF

  v3 = *(_DWORD *)(a1 + 28);
  v5 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((a3 & 0xFFF) + *a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  *a2 = v6;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (unsigned int)(1 << v3) * (v6 >> 12);
  memset(&v21[1], 0, 32);
  LODWORD(v9) = 0;
  v21[0] = v7;
  while ( v8 )
  {
    v10 = *(_DWORD *)(a1 + 24) - 1;
    while ( 1 )
    {
      v11 = *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 36);
      if ( (unsigned int)v9 >= v10 )
        break;
      if ( v11 >= 0x40 )
        LODWORD(v12) = -1;
      else
        v12 = (1LL << v11) - 1;
      v7 = *(_QWORD *)(v7
                     + (1 << v11 << v3)
                     + 8LL * ((unsigned int)v12 & (unsigned int)(v5 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 60))));
      if ( !v7 )
        return 3221225485LL;
      v9 = (unsigned int)(v9 + 1);
      *((_QWORD *)v21 + v9) = v7;
    }
    if ( v11 >= 0x40 )
      LODWORD(v13) = -1;
    else
      v13 = (1LL << v11) - 1;
    v14 = v8;
    v15 = (void *)(v7 + (((unsigned int)v13 & (unsigned int)(v5 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 60))) << v3));
    v16 = (1 << v11 << v3)
        - (unsigned __int64)(((unsigned int)v13 & (unsigned int)(v5 >> *(_DWORD *)(a1 + 4LL * (unsigned int)v9 + 60))) << v3);
    if ( v16 <= v8 )
      v14 = v16;
    memset_0(v15, 0, v14);
    HalpIommuFlushPhysicalPtesFromCacheSize((__int64)v15, (unsigned int)v14);
    v8 -= v14;
    v17 = 0;
    v18 = v5 + (v14 >> v3 << 12);
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      do
      {
        v19 = 1LL << *(_DWORD *)(a1 + 4LL * (unsigned int)(v9 - 1) + 60);
        if ( (v19 & v18) == (v19 & v5) && v8 )
          break;
        ++v17;
        LODWORD(v9) = v9 - 1;
      }
      while ( v17 < *(_DWORD *)(a1 + 24) - 1 );
    }
    v5 = v18;
    v7 = *((_QWORD *)v21 + (unsigned int)v9);
  }
  return 0LL;
}
