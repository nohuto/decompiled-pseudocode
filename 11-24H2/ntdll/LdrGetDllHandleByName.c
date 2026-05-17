/*
 * XREFs of LdrGetDllHandleByName @ 0x1800EDDB0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpFatalExceptionFilter @ 0x18015E390 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int64 a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = 0;
  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, &v7, (__int64)&v8);
  if ( LoadedDllByName >= 0 )
  {
    if ( v8 < 7 )
    {
      LoadedDllByName = -1073741515;
      v5 = v7;
    }
    else
    {
      v5 = v7;
      LoadedDllByName = LdrpIncrementModuleLoadCount(v7);
      if ( LoadedDllByName >= 0 )
        *a3 = *(_QWORD *)(v5 + 48);
    }
    LdrpDereferenceModule(v5);
  }
  return (unsigned int)LoadedDllByName;
}
