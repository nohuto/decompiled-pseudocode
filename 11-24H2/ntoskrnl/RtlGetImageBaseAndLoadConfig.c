/*
 * XREFs of RtlGetImageBaseAndLoadConfig @ 0x14045A364
 * Callers:
 *     KiVerifyContextIpForUserCet @ 0x1403D5CD8 (KiVerifyContextIpForUserCet.c)
 *     RtlVerifyUserUnwindTarget @ 0x140A0B69C (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x140236FB0 (RtlpLookupUserFunctionTableInverted.c)
 *     MmGetImageInformation @ 0x1409F9444 (MmGetImageInformation.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGetImageBaseAndLoadConfig(unsigned __int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 Config; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  Config = 0LL;
  v8[0] = 0LL;
  if ( !RtlpLookupUserFunctionTableInverted(a1, (__int64)&v9) )
  {
    if ( (int)MmGetImageInformation(a1, (char *)&v9 + 8, v8, &v11) < 0 )
    {
      *((_QWORD *)&v9 + 1) = 0LL;
    }
    else if ( v8[0] >= 0xFFFFFFFFuLL )
    {
      return 3221225621LL;
    }
  }
  if ( *((_QWORD *)&v9 + 1) )
  {
    Config = LdrImageDirectoryEntryToLoadConfig(*((_QWORD *)&v9 + 1));
    v8[1] = Config;
  }
  *a2 = *((_QWORD *)&v9 + 1);
  *a3 = Config;
  return 0LL;
}
