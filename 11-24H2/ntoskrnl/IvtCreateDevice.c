/*
 * XREFs of IvtCreateDevice @ 0x140575F80
 * Callers:
 *     <none>
 * Callees:
 *     IvtpGetNextInternalDeviceScope @ 0x1404F60D0 (IvtpGetNextInternalDeviceScope.c)
 *     HalpIvtCheckIdPathMatch @ 0x1404F722C (HalpIvtCheckIdPathMatch.c)
 *     ExtEnvFreeMemory @ 0x14055D8D0 (ExtEnvFreeMemory.c)
 *     IvtAllocateDevice @ 0x140575EC8 (IvtAllocateDevice.c)
 */

__int64 __fastcall IvtCreateDevice(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int64 *a5)
{
  __int64 v8; // rdi
  int v9; // edi
  __int64 v10; // rdx
  char *NextInternalDeviceScope; // rax
  char *v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0LL;
  v8 = a1;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 252) != *(unsigned __int16 *)(a2 + 8) )
    return (unsigned int)-1073741275;
  if ( ((a3 & 1) == 0 || !*(_BYTE *)(a1 + 268)) && (a3 & 8) == 0 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      NextInternalDeviceScope = (char *)IvtpGetNextInternalDeviceScope(a1, v10);
      v12 = NextInternalDeviceScope;
      if ( !NextInternalDeviceScope )
        return (unsigned int)-1073741275;
      if ( HalpIvtCheckIdPathMatch(a2, NextInternalDeviceScope) )
        break;
      v10 = (__int64)v12;
      a1 = v8;
    }
  }
  v9 = IvtAllocateDevice(*(unsigned __int16 *)(a2 + 12), *(_WORD *)(a2 + 10) & 3, a4, a4, &v19);
  if ( v9 < 0 )
  {
    v16 = v19;
    if ( v19 )
    {
      v17 = *(_QWORD *)(v19 + 56);
      if ( v17 )
        ExtEnvFreeMemory(v13, v17);
      ExtEnvFreeMemory(v13, v16);
    }
  }
  else
  {
    v14 = v19;
    v15 = a5;
    *(_BYTE *)(v19 + 35) = (a3 & 8) != 0;
    *v15 = v14;
  }
  return (unsigned int)v9;
}
