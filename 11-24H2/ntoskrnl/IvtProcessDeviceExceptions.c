/*
 * XREFs of IvtProcessDeviceExceptions @ 0x140B54844
 * Callers:
 *     IvtInitializeIommu @ 0x140B53BE0 (IvtInitializeIommu.c)
 * Callees:
 *     IvtUpdateTranslationStructures @ 0x1404F59EC (IvtUpdateTranslationStructures.c)
 *     HalpIommuGetExceptionList @ 0x14054FD78 (HalpIommuGetExceptionList.c)
 *     IvtAllocateTranslationStructures @ 0x14056AD68 (IvtAllocateTranslationStructures.c)
 *     IvtGetScalableModePasidTables @ 0x14056BE6C (IvtGetScalableModePasidTables.c)
 *     IvtAllocateDevice @ 0x140575EC8 (IvtAllocateDevice.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IvtInitializeReservedDomains @ 0x140B55618 (IvtInitializeReservedDomains.c)
 */

__int64 __fastcall IvtProcessDeviceExceptions(__int64 a1)
{
  int TranslationStructures; // ebp
  __int64 *ExceptionList; // r14
  __int64 i; // rbx
  unsigned int v5; // r15d
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 *ScalableModePasidTables; // rax
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-A8h]
  _DWORD v12[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-80h] BYREF
  int v14; // [rsp+70h] [rbp-58h]
  __int64 v15; // [rsp+D8h] [rbp+10h] BYREF

  memset_0(v12, 0, 0x70uLL);
  v15 = 0LL;
  TranslationStructures = IvtInitializeReservedDomains(a1);
  if ( TranslationStructures >= 0 )
  {
    ExceptionList = HalpIommuGetExceptionList();
    for ( i = *ExceptionList; (__int64 *)i != ExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(_DWORD *)(a1 + 252) )
      {
        memset_0(v13, 0, 0x68uLL);
        v5 = *(_DWORD *)(i + 24);
        v12[1] = 0;
        v12[0] = 1;
        TranslationStructures = IvtAllocateDevice(v5, 0, 0LL, v6, &v15);
        if ( TranslationStructures < 0 )
          return (unsigned int)TranslationStructures;
        v7 = v15;
        *(_QWORD *)(i + 32) = v15;
        ScalableModePasidTables = IvtGetScalableModePasidTables(a1, v5);
        if ( ScalableModePasidTables )
        {
          *(_QWORD *)(v7 + 64) = ScalableModePasidTables;
          v14 = *((_DWORD *)ScalableModePasidTables + 11);
        }
        else
        {
          TranslationStructures = IvtAllocateTranslationStructures(a1, v7, v12);
          if ( TranslationStructures < 0 )
            return (unsigned int)TranslationStructures;
          if ( *(_BYTE *)(a1 + 320) )
          {
            *(_QWORD *)(v7 + 64) = *(_QWORD *)(v7 + 72);
            *(_QWORD *)(v7 + 72) = 0LL;
          }
        }
        IvtUpdateTranslationStructures(a1, v7, v9, 0LL, v11, (__int64)v12, 1);
        v15 = 0LL;
      }
    }
  }
  return (unsigned int)TranslationStructures;
}
