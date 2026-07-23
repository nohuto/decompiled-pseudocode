/*
 * XREFs of SecureDump_ValidateAmeCertChain @ 0x14059F7F0
 * Callers:
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059ED44 (SecureDump_LoadCertAndProvisionKey.c)
 * Callees:
 *     SecureDump_ConvertToRsaBlob @ 0x14059E620 (SecureDump_ConvertToRsaBlob.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     MinCrypK_HashMemory @ 0x140824F84 (MinCrypK_HashMemory.c)
 *     MincrypK_ParseCertificateChainWithPolicy @ 0x140825FD0 (MincrypK_ParseCertificateChainWithPolicy.c)
 *     MincryptFreePolicyInfo @ 0x1408280CC (MincryptFreePolicyInfo.c)
 *     MincryptGetLeafKeyFromPolicy @ 0x140828104 (MincryptGetLeafKeyFromPolicy.c)
 *     MincryptGetRootKeyFromPolicy @ 0x140828134 (MincryptGetRootKeyFromPolicy.c)
 */

__int64 __fastcall SecureDump_ValidateAmeCertChain(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // ebx
  __int64 RootKeyFromPolicy; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 LeafKeyFromPolicy; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  _DWORD v19[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int128 v21; // [rsp+40h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-20h]
  __int128 v23; // [rsp+60h] [rbp-10h]
  int v24; // [rsp+90h] [rbp+20h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a1 )
  {
    if ( (_DWORD)a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v6 = MincrypK_ParseCertificateChainWithPolicy(a1, a2, &v21);
          if ( v6 >= 0 )
          {
            if ( !(_DWORD)v21 )
              goto LABEL_26;
            if ( !(_QWORD)v22 )
              goto LABEL_26;
            if ( (DWORD2(v21) & 0xFFFF0000) != 0 )
              goto LABEL_26;
            RootKeyFromPolicy = MincryptGetRootKeyFromPolicy(&v21);
            LeafKeyFromPolicy = MincryptGetLeafKeyFromPolicy(&v21, v8, v9, RootKeyFromPolicy);
            v13 = LeafKeyFromPolicy;
            if ( !v12 || !LeafKeyFromPolicy || *(_DWORD *)(v11 + 48) != 3 || *(_DWORD *)(v11 + 16) != 3 )
              goto LABEL_26;
            if ( MEMORY[0xFFFFF78000000014] < (__int64)v23 || MEMORY[0xFFFFF78000000014] > *((__int64 *)&v23 + 1) )
            {
              v6 = -1073740283;
              goto LABEL_27;
            }
            if ( *(_DWORD *)v12 != 8
              || RtlCompareMemory(*(const void **)(v12 + 8), "deadbeef", 8uLL) != 8
              || (v14 = v22, v15 = *(_QWORD *)(v22 + 40), *(_WORD *)(v15 + 80) != 8)
              || RtlCompareMemory(*(const void **)(v15 + 72), "deadbeef", 8uLL) != 8 )
            {
LABEL_26:
              v6 = -1073740760;
              goto LABEL_27;
            }
            v17 = *(_QWORD *)(v14 + 40);
            v24 = 0;
            v19[1] = 0;
            v20 = *(_QWORD *)(v17 + 112);
            v19[0] = *(_DWORD *)(v17 + 104);
            v6 = MinCrypK_HashMemory(v17, v16, (unsigned int)v19, (int)a4 + 5, (__int64)&v24);
            if ( v6 >= 0 )
            {
              *(_BYTE *)(a4 + 4) = v24;
              *(_DWORD *)a4 = 32772;
              v6 = SecureDump_ConvertToRsaBlob(v13, a3);
            }
          }
        }
        else
        {
          v6 = -1073741582;
        }
      }
      else
      {
        v6 = -1073741583;
      }
    }
    else
    {
      v6 = -1073741584;
    }
  }
  else
  {
    v6 = -1073741585;
  }
LABEL_27:
  MincryptFreePolicyInfo(&v21);
  return (unsigned int)v6;
}
