/*
 * XREFs of LdrpUnsuppressAddressTakenIat @ 0x18002422C
 * Callers:
 *     LdrpDoPostSnapWork @ 0x180020D90 (LdrpDoPostSnapWork.c)
 *     LdrResolveDelayLoadedAPI @ 0x180021000 (LdrResolveDelayLoadedAPI.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180023540 (LdrpWriteBackProtectedDelayLoad.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlValidateUserCallTarget @ 0x180008CD0 (RtlValidateUserCallTarget.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC (RtlpGuardGrantSuppressedCallAccess.c)
 *     RtlGuardIsExportSuppressedAddress @ 0x180009774 (RtlGuardIsExportSuppressedAddress.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     bsearch_s @ 0x180125920 (bsearch_s.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpUnsuppressAddressTakenIat(unsigned __int64 a1, unsigned int a2, unsigned int a3)
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
  __int64 v16; // r12
  int v17; // [rsp+30h] [rbp-40h] BYREF
  unsigned int *Context; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-28h]
  __int128 Key; // [rsp+50h] [rbp-20h] BYREF

  v20 = a1;
  v19 = 0LL;
  v17 = 0;
  v5 = a1;
  Context = 0LL;
  v6 = 0;
  Key = 0LL;
  RtlImageNtHeaderEx(3, a1, 0LL, &v19);
  Config = LdrImageDirectoryEntryToLoadConfig(v5);
  if ( Config )
  {
    if ( *(_DWORD *)Config >= 0xB0u )
    {
      if ( *(_QWORD *)(Config + 168) )
      {
        if ( (*(_WORD *)(v19 + 94) & 0x4000) != 0 )
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
                  if ( (unsigned int)RtlValidateUserCallTarget(v16, &v17) != 1 && (v17 & 0x10) != 0 )
                  {
                    if ( LdrControlFlowGuardEnforced() )
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
                  v5 = v20;
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
