/*
 * XREFs of sub_14091D6A4 @ 0x14091D6A4
 * Callers:
 *     sub_14091D4BC @ 0x14091D4BC (sub_14091D4BC.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     BCryptFinishHash @ 0x14091D448 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x14091D544 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x14091D5BC (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x14091D610 (BCryptCreateHash.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14091D6A4(PUCHAR pbInput, ULONG cbInput, _QWORD *a3, _DWORD *a4)
{
  int v8; // ebx
  __int64 v9; // r15
  ULONG v10; // r9d
  ULONG v11; // r9d
  UCHAR *v13; // [rsp+20h] [rbp-30h]
  ULONG v14; // [rsp+28h] [rbp-28h]
  ULONG v15; // [rsp+30h] [rbp-20h]
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-8h] BYREF

  phHash = 0LL;
  if ( *(__int64 *)((char *)&qword_140E3EAB4 + 4) )
  {
    v8 = BCryptCreateHash(*(BCRYPT_ALG_HANDLE *)((char *)&qword_140E3EAB4 + 4), &phHash, 0LL, 0, v13, v14, v15);
    if ( v8 >= 0 )
    {
      v8 = -1073741822;
      v9 = *(__int64 *)((char *)&qword_140E3EAB4 + 4);
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
      {
        v8 = guard_dispatch_icall_no_overrides(v9, L"HashDigestLength");
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
      }
      if ( v8 >= 0 )
      {
        SddlpFree(0LL);
        v8 = BCryptHashData(phHash, pbInput, cbInput, v10);
        if ( v8 >= 0 )
        {
          v8 = BCryptFinishHash(phHash, 0LL, 0, v11);
          if ( v8 >= 0 )
          {
            if ( a3 )
              *a3 = 0LL;
            if ( a4 )
              *a4 = 0;
          }
        }
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  SddlpFree(0LL);
  if ( phHash )
    BCryptDestroyHash(phHash);
  return (unsigned int)v8;
}
