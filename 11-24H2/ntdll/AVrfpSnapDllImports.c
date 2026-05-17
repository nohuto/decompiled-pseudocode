/*
 * XREFs of AVrfpSnapDllImports @ 0x1800ECAF4
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800EC8F0 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180003CAC (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180008850 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800ECD20 (RtlpGuardIsSuppressedAddress.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall AVrfpSnapDllImports(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v7; // rdi
  __int64 *v8; // rax
  int v9; // r12d
  _QWORD *v10; // r14
  __int64 *v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // r13
  _QWORD *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-128h]
  __int64 *v19; // [rsp+38h] [rbp-120h]
  _BYTE v20[56]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v21; // [rsp+78h] [rbp-E0h]
  __int64 *v22; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v23[3]; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned int v24; // [rsp+D0h] [rbp-88h]
  int v26; // [rsp+168h] [rbp+10h] BYREF
  __int64 v27; // [rsp+170h] [rbp+18h]
  __int64 *v28; // [rsp+178h] [rbp+20h]

  v26 = 0;
  if ( !AVrfpEnabled )
    return 3221225506LL;
  memset_thunk_772440563353939046(v20, 0, 0xD0uLL);
  v21 = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v20, v2);
  if ( (int)result >= 0 )
  {
    v4 = v22;
    if ( v22 )
    {
      v5 = v23[0] >> 3;
      if ( (unsigned int)(v23[0] >> 3) )
      {
        v6 = (unsigned int)v5;
        v27 = (unsigned int)v5;
        do
        {
          if ( *v4 )
          {
            v7 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v8 = v7;
                v9 = 0;
                v7 = (__int64 *)*v7;
                v28 = v8;
                v19 = v7;
                v10 = (_QWORD *)v8[5];
                v18 = v10;
                if ( *v10 )
                {
                  v11 = v28;
                  v12 = (_QWORD *)v8[5];
                  do
                  {
                    v13 = (_QWORD *)v12[3];
                    LODWORD(v14) = 0;
                    if ( *v13 )
                    {
                      v15 = (_QWORD *)v12[3];
                      do
                      {
                        v16 = *v4;
                        if ( *v4 == v15[1] )
                        {
                          if ( LdrControlFlowGuardEnforced() && (unsigned __int8)RtlpGuardIsSuppressedAddress(v16) == 1 )
                            RtlpGuardGrantSuppressedCallAccess(v16, 1u);
                          v17 = v15[2];
                          if ( !v17 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v15);
                            __debugbreak();
                          }
                          *v4 = v17;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v15,
                              v11[3],
                              v15[2]);
                        }
                        v14 = (unsigned int)(v14 + 1);
                        v15 = &v13[3 * v14];
                      }
                      while ( *v15 );
                      v10 = v18;
                    }
                    v12 = &v10[4 * (unsigned int)++v9];
                  }
                  while ( *v12 );
                  v7 = v19;
                }
              }
              while ( v7 != &AVrfpVerifierProvidersList );
              v6 = v27;
            }
          }
          ++v4;
          v27 = --v6;
        }
        while ( v6 );
      }
      return ZwProtectVirtualMemory(-1LL, &v22, v23, v24, &v26);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
