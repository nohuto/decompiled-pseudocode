/*
 * XREFs of RtlpUnsuppressForwardReferencingCallTarget @ 0x18010E270
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x180144B80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E79F8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x1800F4240 (RtlValidateUserCallTarget.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpUnsuppressForwardReferencingCallTarget(__int64 a1)
{
  char *v1; // r14
  NTSTATUS VirtualMemory; // ebx
  _DWORD *Config; // rax
  char *v5; // rax
  unsigned int *i; // rsi
  _QWORD *j; // rdi
  NTSTATUS result; // eax
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int128 MemoryInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+58h] [rbp-28h]
  __int128 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+B8h] [rbp+38h] BYREF
  ULONG Size; // [rsp+C0h] [rbp+40h] BYREF

  v14 = 0;
  v1 = 0LL;
  v10 = 0LL;
  *(_OWORD *)BaseOfImage = 0LL;
  VirtualMemory = 0;
  MemoryInformation = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( VirtualMemory >= 0 )
  {
    VirtualMemory = ZwQueryVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      v1,
                      MemoryBasicInformation,
                      &MemoryInformation,
                      0x30uLL,
                      0LL);
    if ( VirtualMemory < 0 )
      break;
    if ( DWORD2(v13) == 0x1000000 )
    {
      VirtualMemory = ZwQueryVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        v1,
                        MemoryImageInformation,
                        BaseOfImage,
                        0x18uLL,
                        0LL);
      if ( VirtualMemory >= 0 )
      {
        if ( BaseOfImage[0] )
        {
          if ( (v10 & 2) == 0 && (v10 & 1) == 0 )
          {
            Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage[0]);
            if ( !Config || *Config < 0x94u || (Config[36] & 0x4000) == 0 )
            {
              v5 = (char *)RtlImageDirectoryEntryToData(BaseOfImage[0], 1u, 1u, &Size);
              if ( v5 )
              {
                for ( i = (unsigned int *)(v5 + 16); *(i - 1); i += 5 )
                {
                  for ( j = (char *)BaseOfImage[0] + *i; *j; ++j )
                  {
                    if ( *j == a1 && (unsigned int)RtlValidateUserCallTarget(a1, &v14) != 1 && (v14 & 0x10) != 0 )
                    {
                      result = RtlpGuardGrantSuppressedCallAccess(a1, 4u);
                      VirtualMemory = result;
                      if ( result >= 0 )
                        return result;
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    v1 += *((_QWORD *)&v12 + 1);
  }
  return VirtualMemory;
}
