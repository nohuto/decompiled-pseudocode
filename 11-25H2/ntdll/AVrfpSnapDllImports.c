/*
 * XREFs of AVrfpSnapDllImports @ 0x1800ED2D4
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800ED0D0 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800096CC (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800ED500 (RtlpGuardIsSuppressedAddress.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // r13
  _QWORD *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // rax
  _QWORD *v17; // [rsp+30h] [rbp-128h]
  _BYTE v18[56]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v19; // [rsp+78h] [rbp-E0h]
  __int64 *v20; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v21[3]; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp-88h]
  __int64 v24; // [rsp+170h] [rbp+18h]
  __int64 *v25; // [rsp+178h] [rbp+20h]

  if ( !AVrfpEnabled )
    return 3221225506LL;
  memset_thunk_772440563353939046(v18, 0, 0xD0uLL);
  v19 = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v18, v2);
  if ( (int)result >= 0 )
  {
    v4 = v20;
    if ( v20 )
    {
      v5 = v21[0] >> 3;
      if ( (unsigned int)(v21[0] >> 3) )
      {
        v6 = (unsigned int)v5;
        v24 = (unsigned int)v5;
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
                v25 = v8;
                v10 = (_QWORD *)v8[5];
                v17 = v10;
                if ( *v10 )
                {
                  v11 = (_QWORD *)v8[5];
                  do
                  {
                    v12 = (_QWORD *)v11[3];
                    LODWORD(v13) = 0;
                    if ( *v12 )
                    {
                      v14 = (_QWORD *)v11[3];
                      do
                      {
                        v15 = *v4;
                        if ( *v4 == v14[1] )
                        {
                          if ( LdrControlFlowGuardEnforced() && (unsigned __int8)RtlpGuardIsSuppressedAddress(v15) == 1 )
                            RtlpGuardGrantSuppressedCallAccess(v15, 1u);
                          v16 = v14[2];
                          if ( !v16 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v14);
                            __debugbreak();
                          }
                          *v4 = v16;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v14,
                              v25[3],
                              v14[2]);
                        }
                        v13 = (unsigned int)(v13 + 1);
                        v14 = &v12[3 * v13];
                      }
                      while ( *v14 );
                      v10 = v17;
                    }
                    v11 = &v10[4 * (unsigned int)++v9];
                  }
                  while ( *v11 );
                }
              }
              while ( v7 != &AVrfpVerifierProvidersList );
              v6 = v24;
            }
          }
          ++v4;
          v24 = --v6;
        }
        while ( v6 );
      }
      return ZwProtectVirtualMemory(-1LL, &v20, v21, v22);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
