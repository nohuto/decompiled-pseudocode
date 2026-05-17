/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x1800074AC
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800073C0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180007900 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrResolveDelayLoadedAPI @ 0x18001CEA0 (LdrResolveDelayLoadedAPI.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGuardIsExportSuppressedAddress @ 0x180003BFC (RtlGuardIsExportSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180003CAC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x180004930 (RtlValidateUserCallTarget.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180009600 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     bsearch_s @ 0x180123E40 (bsearch_s.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 Config; // rax
  unsigned int v8; // r14d
  unsigned int *v9; // rsi
  rsize_t v10; // rdx
  unsigned int v11; // r14d
  unsigned int v12; // r13d
  __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 Key; // [rsp+50h] [rbp-20h] BYREF

  v22 = a1;
  v21 = 0LL;
  v19 = 0;
  v5 = a1;
  Context = 0LL;
  v6 = 0;
  Key = 0LL;
  RtlImageNtHeaderEx(3LL, a1, 0LL, &v21);
  Config = LdrImageDirectoryEntryToLoadConfig(v5);
  if ( Config )
  {
    if ( *(_DWORD *)Config >= 0xB0u )
    {
      if ( *(_QWORD *)(Config + 168) )
      {
        if ( (*(_WORD *)(v21 + 94) & 0x4000) != 0 )
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
                LODWORD(v14) = 0;
                while ( (unsigned int)v14 < a3 && (unsigned int)v14 < v12 )
                {
                  v15 = v14;
                  v14 = *v9;
                  if ( v15 >= (unsigned int)v14 )
                    return (unsigned int)-1073741701;
                  v16 = *(_QWORD *)(v14 + v5);
                  if ( (unsigned int)RtlValidateUserCallTarget(v16, &v19) != 1 && (v19 & 0x10) != 0 )
                  {
                    if ( (unsigned int)LdrControlFlowGuardEnforced(v18, v17) )
                    {
                      if ( RtlGuardIsExportSuppressedAddress(v16) != 1 )
                        return (unsigned int)-1073741811;
                      v6 = RtlpGuardGrantSuppressedCallAccess(v16, 4u);
                      if ( (v6 & 0x80000000) != 0 )
                        return v6;
                    }
                    else
                    {
                      v6 = 0;
                    }
                  }
                  v5 = v22;
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
