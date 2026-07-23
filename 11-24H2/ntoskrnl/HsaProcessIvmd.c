/*
 * XREFs of HsaProcessIvmd @ 0x140570A10
 * Callers:
 *     HalpIommuProcessIvhdEntry @ 0x14056F048 (HalpIommuProcessIvhdEntry.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     IvmdFindDeviceEntry @ 0x14057140C (IvmdFindDeviceEntry.c)
 *     IvmdProcessRange @ 0x1405714AC (IvmdProcessRange.c)
 */

__int64 __fastcall HsaProcessIvmd(__int64 a1, unsigned __int64 a2, _BYTE *a3, _QWORD *a4)
{
  unsigned __int64 v5; // rdi
  __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 i; // rbx
  char v11; // al
  char v12; // al
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int16 v15; // di
  __int64 v16; // r12
  unsigned __int16 v17; // bp
  __int64 DeviceEntry; // rax
  int v19; // eax
  __int64 v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v21[0] = 0LL;
  v5 = a2;
  if ( (int)ExtEnvAllocateMemory(a1, 0x18u, v21) < 0 )
    return 3221225626LL;
  v8 = v21[0];
  v9 = 0LL;
  *a4 = v21[0];
  *a3 = 0;
  *(_QWORD *)(v8 + 16) = v8 + 8;
  *(_QWORD *)(v8 + 8) = v8 + 8;
  *(_DWORD *)v8 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); i < v5; i += *(unsigned __int16 *)(i + 2) )
  {
    v11 = *(_BYTE *)i;
    if ( *(_BYTE *)i == *(_BYTE *)a1 )
      return 0LL;
    if ( v11 == 32 )
    {
      *a3 = 1;
    }
    else if ( v11 == 33 || v11 == 34 )
    {
      if ( *(_WORD *)(i + 2) != 32 )
        return 3221225485LL;
      v12 = *(_BYTE *)(i + 1);
      if ( (v12 & 8) != 0 || (v12 & 1) != 0 && (v12 & 6) != 0 )
      {
        v13 = *(_QWORD *)(i + 24);
        if ( !v13 )
          return 3221225485LL;
        v14 = *(_QWORD *)(i + 16);
        if ( v14 + v13 < v14 )
          return 3221225485LL;
        v15 = *(_WORD *)(i + 4);
        v16 = v14 + v13 - 1;
        v17 = v15;
        if ( *(_BYTE *)i == 34 )
          v17 = *(_WORD *)(i + 6);
        while ( v15 <= v17 )
        {
          DeviceEntry = IvmdFindDeviceEntry(v8, v15, v9);
          if ( !DeviceEntry )
            return 3221225626LL;
          v19 = IvmdProcessRange(DeviceEntry, v14, v16);
          v9 = (unsigned int)v19;
          if ( v19 < 0 )
            return 3221225626LL;
          ++v15;
        }
        v5 = a2;
      }
    }
  }
  return (unsigned int)v9;
}
