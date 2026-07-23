/*
 * XREFs of IvtLegacyProcessDeviceExceptions @ 0x140B5455C
 * Callers:
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIommuGetExceptionList @ 0x14054FD78 (HalpIommuGetExceptionList.c)
 *     IvtLegacyAllocateTranslationStructures @ 0x14056CF38 (IvtLegacyAllocateTranslationStructures.c)
 *     IvtLegacyUpdateTranslationStructures @ 0x14056E58C (IvtLegacyUpdateTranslationStructures.c)
 *     IvtAllocateDevice @ 0x140575EC8 (IvtAllocateDevice.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IvtInitializeReservedDomains @ 0x140B55618 (IvtInitializeReservedDomains.c)
 */

__int64 __fastcall IvtLegacyProcessDeviceExceptions(__int64 a1)
{
  int v2; // ebx
  __int64 *ExceptionList; // r15
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-69h]
  int v13; // [rsp+28h] [rbp-61h]
  __int64 v14; // [rsp+38h] [rbp-51h]
  _DWORD v15[2]; // [rsp+50h] [rbp-39h] BYREF
  char v16[136]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v17; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+100h] [rbp+77h] BYREF

  memset_0(v15, 0, 0x70uLL);
  v17 = 0LL;
  v18 = 0LL;
  v2 = IvtInitializeReservedDomains(a1);
  if ( v2 >= 0 )
  {
    ExceptionList = HalpIommuGetExceptionList();
    for ( i = *ExceptionList; (__int64 *)i != ExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 252) )
      {
        memset_0(v16, 0, 0x68uLL);
        v5 = *(unsigned int *)(i + 24);
        v15[1] = 0;
        v15[0] = 1;
        v17 = (unsigned int)v5;
        v2 = IvtAllocateDevice(v5, 0, 0LL, v6, &v18);
        if ( v2 < 0 )
          return (unsigned int)v2;
        v8 = v18;
        v9 = v18;
        *(_QWORD *)(i + 32) = v18;
        result = IvtLegacyAllocateTranslationStructures(a1, v9, 0LL, v7, v12, 0LL);
        v2 = result;
        if ( (int)result < 0 )
          return result;
        IvtLegacyUpdateTranslationStructures(a1, (int *)&v17, v11, *(__int64 **)(v8 + 64), 0, v13, (__int64)v15, v14, 1);
      }
    }
  }
  return (unsigned int)v2;
}
