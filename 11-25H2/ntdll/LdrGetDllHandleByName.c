/*
 * XREFs of LdrGetDllHandleByName @ 0x1800711A0
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 * Callees:
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpFatalExceptionFilter @ 0x18015F850 (LdrpFatalExceptionFilter.c)
 */

__int64 __fastcall LdrGetDllHandleByName(int a1, int a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = 0;
  LoadedDllByName = LdrpFindLoadedDllByName(a1, a2, 0, (unsigned int)&v7, (__int64)&v8);
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
