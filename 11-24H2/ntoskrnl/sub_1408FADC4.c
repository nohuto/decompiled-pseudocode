/*
 * XREFs of sub_1408FADC4 @ 0x1408FADC4
 * Callers:
 *     sub_1408FABDC @ 0x1408FABDC (sub_1408FABDC.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SddlpFree @ 0x140863910 (SddlpFree.c)
 *     BCryptFinishHash @ 0x1408FAB68 (BCryptFinishHash.c)
 *     BCryptHashData @ 0x1408FAC64 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x1408FACDC (BCryptDestroyHash.c)
 *     BCryptCreateHash @ 0x1408FAD30 (BCryptCreateHash.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408FADC4(PUCHAR pbInput, ULONG cbInput, UCHAR **a3, _DWORD *a4)
{
  UCHAR *v4; // rdi
  int Hash; // ebx
  __int64 v10; // r15
  __int64 Pool2; // rax
  ULONG v12; // r9d
  ULONG v13; // r9d
  UCHAR *v15; // [rsp+20h] [rbp-30h]
  ULONG v16; // [rsp+28h] [rbp-28h]
  ULONG v17; // [rsp+30h] [rbp-20h]
  ULONG cbOutput[4]; // [rsp+40h] [rbp-10h] BYREF

  v4 = 0LL;
  memset(cbOutput, 0, sizeof(cbOutput));
  if ( *(__int64 *)((char *)&qword_140E3E974 + 4) )
  {
    Hash = BCryptCreateHash(
             *(BCRYPT_ALG_HANDLE *)((char *)&qword_140E3E974 + 4),
             (BCRYPT_HASH_HANDLE *)&cbOutput[2],
             0LL,
             0,
             v15,
             v16,
             v17);
    if ( Hash >= 0 )
    {
      Hash = -1073741822;
      v10 = *(__int64 *)((char *)&qword_140E3E974 + 4);
      if ( ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost) )
      {
        Hash = guard_dispatch_icall_no_overrides(v10, L"HashDigestLength", cbOutput, 4LL);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
      }
      if ( Hash >= 0 )
      {
        Pool2 = 0LL;
        Hash = 0;
        if ( cbOutput[0] && (Pool2 = ExAllocatePool2(0x100uLL)) == 0 )
          Hash = -1073741801;
        else
          v4 = (UCHAR *)Pool2;
        SddlpFree(0LL);
        if ( Hash >= 0 )
        {
          Hash = BCryptHashData(*(BCRYPT_HASH_HANDLE *)&cbOutput[2], pbInput, cbInput, v12);
          if ( Hash >= 0 )
          {
            Hash = BCryptFinishHash(*(BCRYPT_HASH_HANDLE *)&cbOutput[2], v4, cbOutput[0], v13);
            if ( Hash >= 0 )
            {
              if ( a3 )
              {
                *a3 = v4;
                v4 = 0LL;
              }
              if ( a4 )
                *a4 = cbOutput[0];
            }
          }
        }
      }
    }
  }
  else
  {
    Hash = -1073741811;
  }
  SddlpFree(v4);
  if ( *(_QWORD *)&cbOutput[2] )
    BCryptDestroyHash(*(BCRYPT_HASH_HANDLE *)&cbOutput[2]);
  return (unsigned int)Hash;
}
