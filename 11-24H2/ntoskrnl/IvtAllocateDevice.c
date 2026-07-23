/*
 * XREFs of IvtAllocateDevice @ 0x140575EC8
 * Callers:
 *     IvtCreateDevice @ 0x140575F80 (IvtCreateDevice.c)
 *     IvtLegacyProcessDeviceExceptions @ 0x140B5455C (IvtLegacyProcessDeviceExceptions.c)
 *     IvtProcessDeviceExceptions @ 0x140B54844 (IvtProcessDeviceExceptions.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x14055D660 (ExtEnvAllocateMemory.c)
 *     ExtEnvFreeMemory @ 0x14055D8D0 (ExtEnvFreeMemory.c)
 */

__int64 __fastcall IvtAllocateDevice(__int64 a1, int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v7; // r15d
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  int Memory; // edi
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rdx
  _QWORD *v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0LL;
  v7 = a1;
  v8 = ExtEnvAllocateMemory(a1, 0x58u, &v15);
  v10 = v15;
  Memory = v8;
  if ( v8 < 0 || (v12 = v15 + 7, Memory = ExtEnvAllocateMemory(v9, 8u, v15 + 7), Memory < 0) )
  {
    if ( v10 )
    {
      v13 = v10[7];
      if ( v13 )
        ExtEnvFreeMemory(v9, v13);
      ExtEnvFreeMemory(v9, (unsigned __int64)v10);
    }
  }
  else
  {
    *v10 = a3;
    *(_DWORD *)*v12 = v7;
    *(_DWORD *)(*v12 + 4LL) = a2;
    *a5 = v10;
  }
  return (unsigned int)Memory;
}
