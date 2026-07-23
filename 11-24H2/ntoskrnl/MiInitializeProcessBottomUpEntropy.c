/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x14091B960
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v8; // rdi
  char v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ecx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]

  v4 = *(_DWORD *)(a1 + 1872);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 1040);
  v22 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 2LL;
  if ( (v4 & 0x40) == 0 )
  {
    v11 = ExGenRandom(1, a2, a3, a4);
    v8 = (unsigned __int8)v11;
    if ( (MiFlags & 0x30) == 0 )
      *(_DWORD *)(a1 + 1872) |= 0x20u;
    if ( *(_QWORD *)(a1 + 872) > 0x100000000uLL && (*(_DWORD *)(a1 + 1872) & 0x20) != 0 )
    {
      v12 = *(_QWORD *)&v11 & 0xFFFFFFLL;
      a2 = 0x10000LL;
      v8 = 0x10000LL;
      v9 = 1;
      if ( v12 > 0x10000 )
        v8 = v12;
    }
  }
  if ( !v8 )
    v8 = 1LL;
  v21 = v8;
  if ( v9 )
  {
    v13 = v8 + (ExGenRandom(1, a2, a3, a4) & 0xFFFFFF) + 0x1000000;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1872), 0xFFFFFFDF);
    v13 = v21;
  }
  v20 = v13;
  if ( *(_QWORD *)(a1 + 872) <= 0x100000000uLL )
  {
    v10 = 3LL;
    v22 = (ExGenRandom(1, a2, a3, a4) & 0xFFFFFF) + 0x10000;
  }
  *(_QWORD *)(v6 + 984) = v10;
  v14 = 0LL;
  do
  {
    v15 = 9 * v14;
    v16 = *(&v20 + v14);
    v17 = *(_QWORD *)(a1 + 872) - 1LL;
    if ( v5 == 2 )
      v17 = 0x7FFFFFFEFFFFLL;
    v18 = v16 << 16;
    ++v5;
    *(_QWORD *)(v6 + 8 * v15 + 808) = v17 >> 16;
    result = v18 >> 16;
    *(_QWORD *)(v6 + 8 * v15 + 824) = v18;
    v14 = v5;
    *(_QWORD *)(v6 + 8 * v15 + 832) = result;
  }
  while ( v5 < v10 );
  return result;
}
