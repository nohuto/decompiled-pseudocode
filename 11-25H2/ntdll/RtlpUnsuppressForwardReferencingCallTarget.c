/*
 * XREFs of RtlpUnsuppressForwardReferencingCallTarget @ 0x180115F40
 * Callers:
 *     RtlpHandleInvalidUserCallTarget @ 0x180147D80 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlValidateUserCallTarget @ 0x180008CD0 (RtlValidateUserCallTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpUnsuppressForwardReferencingCallTarget(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebx
  _DWORD *Config; // rax
  __int64 v5; // rax
  unsigned int *i; // rsi
  _QWORD *j; // rdi
  __int64 result; // rax
  __int128 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  __int128 v11; // [rsp+48h] [rbp-38h] BYREF
  __int128 v12; // [rsp+58h] [rbp-28h]
  __int128 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+B8h] [rbp+38h] BYREF
  int v15; // [rsp+C0h] [rbp+40h] BYREF

  v14 = 0;
  v1 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v2 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( v2 >= 0 )
  {
    v2 = ZwQueryVirtualMemory(-1LL, v1, 0LL, &v11, 48LL, 0LL);
    if ( v2 < 0 )
      break;
    if ( DWORD2(v13) == 0x1000000 )
    {
      v2 = ZwQueryVirtualMemory(-1LL, v1, 6LL, &v9, 24LL, 0LL);
      if ( v2 >= 0 )
      {
        if ( (_QWORD)v9 )
        {
          if ( (v10 & 2) == 0 && (v10 & 1) == 0 )
          {
            Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(v9);
            if ( !Config || *Config < 0x94u || (Config[36] & 0x4000) == 0 )
            {
              v5 = RtlImageDirectoryEntryToData(v9, 1, 1u, &v15);
              if ( v5 )
              {
                for ( i = (unsigned int *)(v5 + 16); *(i - 1); i += 5 )
                {
                  for ( j = (_QWORD *)(v9 + *i); *j; ++j )
                  {
                    if ( *j == a1 && (unsigned int)RtlValidateUserCallTarget(a1, &v14) != 1 && (v14 & 0x10) != 0 )
                    {
                      result = RtlpGuardGrantSuppressedCallAccess(a1, 4u);
                      v2 = result;
                      if ( (int)result >= 0 )
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
  return (unsigned int)v2;
}
