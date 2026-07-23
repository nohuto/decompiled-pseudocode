/*
 * XREFs of AVrfpSnapDllImports @ 0x1800E7724
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800E7520 (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180035250 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E7950 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E79F8 (RtlpGuardGrantSuppressedCallAccess.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

int __fastcall AVrfpSnapDllImports(__int64 a1)
{
  int result; // eax
  __int64 *v3; // rbx
  ULONG_PTR v4; // rax
  __int64 v5; // r13
  __int64 *v6; // rdi
  __int64 *v7; // rax
  int v8; // r12d
  _QWORD *v9; // r14
  __int64 *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // r13
  _QWORD *v14; // rsi
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-128h]
  __int64 *v19; // [rsp+38h] [rbp-120h]
  _BYTE v20[56]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v21; // [rsp+78h] [rbp-E0h]
  PVOID BaseAddress; // [rsp+B0h] [rbp-A8h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+B8h] [rbp-A0h] BYREF
  ULONG NewProtect; // [rsp+D0h] [rbp-88h]
  ULONG OldProtect; // [rsp+168h] [rbp+10h] BYREF
  __int64 v27; // [rsp+170h] [rbp+18h]
  __int64 *v28; // [rsp+178h] [rbp+20h]

  OldProtect = 0;
  if ( !AVrfpEnabled )
    return -1073741790;
  memset_thunk_772440563353939046(v20, 0, 0xD0uLL);
  v21 = a1;
  result = LdrpPrepareImportAddressTableForSnap((__int64)v20);
  if ( result >= 0 )
  {
    v3 = (__int64 *)BaseAddress;
    if ( BaseAddress )
    {
      v4 = RegionSize[0] >> 3;
      if ( (unsigned int)(RegionSize[0] >> 3) )
      {
        v5 = (unsigned int)v4;
        v27 = (unsigned int)v4;
        do
        {
          if ( *v3 )
          {
            v6 = (__int64 *)AVrfpVerifierProvidersList;
            if ( (__int64 *)AVrfpVerifierProvidersList != &AVrfpVerifierProvidersList )
            {
              do
              {
                v7 = v6;
                v8 = 0;
                v6 = (__int64 *)*v6;
                v28 = v7;
                v19 = v6;
                v9 = (_QWORD *)v7[5];
                v18 = v9;
                if ( *v9 )
                {
                  v10 = v28;
                  v11 = (_QWORD *)v7[5];
                  do
                  {
                    v12 = (_QWORD *)v11[3];
                    LODWORD(v13) = 0;
                    if ( *v12 )
                    {
                      v14 = (_QWORD *)v11[3];
                      do
                      {
                        v15 = *v3;
                        if ( *v3 == v14[1] )
                        {
                          LOBYTE(v16) = LdrControlFlowGuardEnforced();
                          if ( v16 && (unsigned __int8)RtlpGuardIsSuppressedAddress(v15) == 1 )
                            RtlpGuardGrantSuppressedCallAccess(v15, 1LL);
                          v17 = v14[2];
                          if ( !v17 )
                          {
                            DbgPrint("AVRF: internal error: New thunk for %s is null. \n", (const char *)*v14);
                            __debugbreak();
                          }
                          *v3 = v17;
                          if ( (AVrfpDebug & 1) != 0 )
                            DbgPrint(
                              "AVRF: Snapped (%ws: %s) with (%ws: %p). \n",
                              *(_QWORD *)(a1 + 96),
                              *v14,
                              v10[3],
                              v14[2]);
                        }
                        v13 = (unsigned int)(v13 + 1);
                        v14 = &v12[3 * v13];
                      }
                      while ( *v14 );
                      v9 = v18;
                    }
                    v11 = &v9[4 * (unsigned int)++v8];
                  }
                  while ( *v11 );
                  v6 = v19;
                }
              }
              while ( v6 != &AVrfpVerifierProvidersList );
              v5 = v27;
            }
          }
          ++v3;
          v27 = --v5;
        }
        while ( v5 );
      }
      return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSize, NewProtect, &OldProtect);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
