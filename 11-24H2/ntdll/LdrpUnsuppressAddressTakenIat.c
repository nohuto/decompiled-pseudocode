/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x180033EAC
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180033DC0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180034300 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrResolveDelayLoadedAPI @ 0x1800498A0 (LdrResolveDelayLoadedAPI.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180036000 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E79F8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x1800E7AA0 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlValidateUserCallTarget @ 0x1800F4240 (RtlValidateUserCallTarget.c)
 *     bsearch_s @ 0x180122070 (bsearch_s.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(char *BaseOfImage, unsigned int a2, unsigned int a3)
{
  char *v5; // r12
  unsigned int v6; // ebx
  __int64 Config; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rsi
  rsize_t v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // r12
  int v18; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-30h] BYREF
  char *v21; // [rsp+48h] [rbp-28h]
  __int128 Key; // [rsp+50h] [rbp-20h] BYREF

  v21 = BaseOfImage;
  OutHeaders = 0LL;
  v18 = 0;
  v5 = BaseOfImage;
  Context = 0LL;
  v6 = 0;
  Key = 0LL;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(v5);
  if ( Config )
  {
    if ( *(_DWORD *)Config >= 0xB0u )
    {
      if ( *(_QWORD *)(Config + 168) )
      {
        if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 )
        {
          v8 = *(_DWORD *)(Config + 144);
          if ( (v8 & 0x4000) != 0 )
          {
            v9 = *(unsigned int **)(Config + 160);
            v10 = *(unsigned int *)(Config + 168);
            v11 = (v8 >> 28) + 4;
            if ( !a2 )
              a2 = *v9;
            v12 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( !a3 )
              a3 = *(unsigned int *)((char *)v9 + v11 * ((_DWORD)v10 - 1));
            if ( *v9 <= a3 && a2 <= v12 && a3 >= a2 )
            {
              if ( *v9 >= a2 )
                goto LABEL_20;
              LODWORD(Key) = a2;
              Context = v9;
              if ( bsearch_s(&Key, v9, v10, v11, LdrpTargetCompare, &Context) || a2 != a3 )
              {
                v9 = Context;
LABEL_20:
                LODWORD(v15) = 0;
                while ( (unsigned int)v15 < a3 && (unsigned int)v15 < v12 )
                {
                  v16 = v15;
                  v15 = *v9;
                  if ( v16 >= (unsigned int)v15 )
                    return (unsigned int)-1073741701;
                  v17 = *(_QWORD *)&v5[v15];
                  if ( (unsigned int)RtlValidateUserCallTarget(v17, &v18) != 1 && (v18 & 0x10) != 0 )
                  {
                    LOBYTE(v14) = LdrControlFlowGuardEnforced();
                    if ( v14 )
                    {
                      if ( (unsigned __int8)RtlGuardIsExportSuppressedAddress(v17) != 1 )
                        return (unsigned int)-1073741811;
                      v6 = RtlpGuardGrantSuppressedCallAccess(v17, 4LL);
                      if ( (v6 & 0x80000000) != 0 )
                        return v6;
                    }
                    else
                    {
                      v6 = 0;
                    }
                  }
                  v5 = v21;
                  v9 = (unsigned int *)((char *)v9 + v11);
                }
                return v6;
              }
            }
            return 0LL;
          }
        }
      }
    }
  }
  return v6;
}
