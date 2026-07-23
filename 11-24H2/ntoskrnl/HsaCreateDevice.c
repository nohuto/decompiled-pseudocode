/*
 * XREFs of HsaCreateDevice @ 0x14056FC60
 * Callers:
 *     <none>
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14055D8D0 (ExtEnvFreeMemory.c)
 *     HsaQueryAcpiDeviceMapping @ 0x140570BB0 (HsaQueryAcpiDeviceMapping.c)
 */

__int64 __fastcall HsaCreateDevice(__int64 a1, unsigned __int16 *a2, char a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int16 *v6; // rsi
  __int64 v7; // r14
  int Memory; // edi
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( *(_DWORD *)a2 != 1 )
  {
    if ( *(_DWORD *)a2 != 2 )
      return (unsigned int)-1073741275;
    Memory = HsaQueryAcpiDeviceMapping(a1, a2, &v15);
    if ( Memory < 0 )
      return (unsigned int)Memory;
    v6 = (unsigned __int16 *)&v15;
  }
  if ( *(_DWORD *)(v7 + 160) != v6[4] )
    return (unsigned int)-1073741275;
  if ( (a3 & 8) == 0 )
  {
    a1 = v6[6];
    LOBYTE(a1) = a1 & 7;
    if ( ((*(char *)(((unsigned __int64)v6[6] >> 3) + *(_QWORD *)(v7 + 192)) >> a1) & 1) == 0 )
      return (unsigned int)-1073741275;
  }
  v9 = ExtEnvAllocateMemory(a1, 0x38u, &v17);
  v11 = v17;
  Memory = v9;
  if ( v9 < 0 || (v12 = v17 + 40, Memory = ExtEnvAllocateMemory(v10, 8u, (_QWORD *)(v17 + 40)), Memory < 0) )
  {
    if ( v11 )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( v13 )
        ExtEnvFreeMemory(v10, v13);
      ExtEnvFreeMemory(v10, v11);
    }
  }
  else
  {
    **(_DWORD **)v12 = v6[6];
    Memory = 0;
    *(_DWORD *)(*(_QWORD *)v12 + 4LL) = v6[5] & 3;
    *a5 = v11;
  }
  return (unsigned int)Memory;
}
