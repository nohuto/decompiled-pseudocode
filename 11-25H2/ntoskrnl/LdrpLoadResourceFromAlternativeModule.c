/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x1402F329C
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F2AFC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1409AEF90 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

NTSTATUS __fastcall LdrpLoadResourceFromAlternativeModule(void *a1, __int64 a2, int a3, ULONG Flags, _QWORD *a5)
{
  char v5; // si
  LANGID v7; // di
  NTSTATUS result; // eax
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int *i; // rcx
  PVOID ResourceDllBase; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR ResourceOffset[2]; // [rsp+38h] [rbp-10h] BYREF

  ResourceDllBase = 0LL;
  v5 = Flags;
  if ( (unsigned int)(a3 - 3) > 1 )
    return -1073741583;
  if ( (Flags & 0x1000000) != 0 )
    v7 = -3346;
  else
    v7 = *(_WORD *)(a2 + 16);
  ResourceOffset[0] = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, &ResourceDllBase, ResourceOffset, Flags);
  if ( result < 0 )
  {
    if ( result == -1073741772 || result == -1073741766 )
      return -1073020927;
  }
  else
  {
    v9 = (int)ResourceDllBase;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 33554480, (__int64)a5);
    if ( (v5 & 0x40) != 0 && result >= 0 )
    {
      ResourceOffset[0] = 0LL;
      v10 = *(_DWORD *)(a2 + 24);
      if ( ResourceDllBase && *a5 )
      {
        result = LdrpAccessResourceDataNoMultipleLanguage(ResourceDllBase);
        if ( result >= 0 )
        {
          v11 = *(_DWORD *)ResourceOffset[0];
          for ( i = (unsigned int *)(ResourceOffset[0] + 4); v11--; i += 3 )
          {
            if ( v10 >= *i && v10 <= i[1] )
              return 0;
          }
          result = -1073741559;
        }
      }
      else
      {
        result = -1073741811;
      }
      *a5 = 0LL;
    }
  }
  return result;
}
