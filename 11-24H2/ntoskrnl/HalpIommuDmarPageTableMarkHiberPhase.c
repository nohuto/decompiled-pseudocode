/*
 * XREFs of HalpIommuDmarPageTableMarkHiberPhase @ 0x14056544C
 * Callers:
 *     HalpIommuDomainMarkHiberLogicalRange @ 0x1405515B4 (HalpIommuDomainMarkHiberLogicalRange.c)
 * Callees:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall HalpIommuDmarPageTableMarkHiberPhase(
        PVOID MemoryMap,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned int v8; // r15d
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // rdx
  _OWORD v22[3]; // [rsp+30h] [rbp-88h] BYREF

  v4 = *(_DWORD *)(a2 + 28);
  LODWORD(v6) = 0;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0;
  v22[0] = v7;
  memset(&v22[1], 0, 32);
  if ( a4 )
  {
    do
    {
      v12 = *(_DWORD *)(a2 + 24) - 1;
      while ( 1 )
      {
        v13 = *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 36);
        if ( (unsigned int)v6 >= v12 )
          break;
        v14 = v7 + (1 << v13 << v4);
        if ( v13 < 0x40 )
          v15 = (1LL << v13) - 1;
        else
          LODWORD(v15) = -1;
        v7 = *(_QWORD *)(v14
                       + 8LL * ((unsigned int)v15 & (unsigned int)(a3 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 60))));
        if ( !v7 )
          return;
        v6 = (unsigned int)(v6 + 1);
        *((_QWORD *)v22 + v6) = v7;
      }
      if ( v13 < 0x40 )
        v16 = (1LL << v13) - 1;
      else
        LODWORD(v16) = -1;
      v17 = v16 & (a3 >> *(_DWORD *)(a2 + 4LL * (unsigned int)v6 + 60));
      v18 = (1 << *(_DWORD *)(a2 + 4LL * v12 + 36)) - v17;
      if ( (unsigned int)a4 - v8 <= v18 )
        v18 = a4 - v8;
      v19 = v18;
      PoSetHiberRange(MemoryMap, 2u, (PVOID)(v7 + (unsigned int)(v17 << v4)), v18 << v4, 0x746C6168u);
      v8 += v19;
      if ( (_DWORD)v6 )
      {
        do
        {
          v20 = (unsigned int)(v6 - 1);
          v21 = 1LL << *(_DWORD *)(a2 + 4 * v20 + 60);
          if ( (v21 & (a3 + ((unsigned __int64)v19 << 12))) == (v21 & a3) )
            break;
          LODWORD(v6) = v6 - 1;
        }
        while ( (_DWORD)v20 );
      }
      a3 += (unsigned __int64)v19 << 12;
      v7 = *((_QWORD *)v22 + (unsigned int)v6);
    }
    while ( v8 < a4 );
  }
}
