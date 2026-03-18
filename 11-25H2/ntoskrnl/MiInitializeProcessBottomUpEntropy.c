/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x1409055B0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v5; // rdi
  char v6; // r15
  unsigned __int64 v7; // r14
  int v8; // ecx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]

  v1 = *(_DWORD *)(a1 + 1872);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 1040);
  v19 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 2LL;
  if ( (v1 & 0x40) == 0 )
  {
    v8 = ExGenRandom(1);
    v5 = (unsigned __int8)v8;
    if ( (MiFlags & 0x30) == 0 )
      *(_DWORD *)(a1 + 1872) |= 0x20u;
    if ( *(_QWORD *)(a1 + 872) > 0x100000000uLL && (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
    {
      v9 = *(_QWORD *)&v8 & 0xFFFFFFLL;
      v5 = 0x10000LL;
      v6 = 1;
      if ( v9 > 0x10000 )
        v5 = v9;
    }
  }
  if ( !v5 )
    v5 = 1LL;
  v18 = v5;
  if ( v6 )
  {
    v10 = v5 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1872), 0xFFFFFFDF);
    v10 = v18;
  }
  v17 = v10;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
  {
    v7 = 3LL;
    v19 = (ExGenRandom(1) & 0xFFFFFF) + 0x10000;
  }
  *(_QWORD *)(v3 + 984) = v7;
  v11 = 0LL;
  do
  {
    v12 = 9 * v11;
    v13 = *(&v17 + v11);
    v14 = *(_QWORD *)(a1 + 872) - 1LL;
    if ( v2 == 2 )
      v14 = 0x7FFFFFFEFFFFLL;
    v15 = v13 << 16;
    ++v2;
    *(_QWORD *)(v3 + 8 * v12 + 808) = v14 >> 16;
    result = v15 >> 16;
    *(_QWORD *)(v3 + 8 * v12 + 824) = v15;
    v11 = v2;
    *(_QWORD *)(v3 + 8 * v12 + 832) = result;
  }
  while ( v2 < v7 );
  return result;
}
