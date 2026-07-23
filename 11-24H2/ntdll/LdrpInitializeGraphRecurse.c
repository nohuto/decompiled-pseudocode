/*
 * XREFs of LdrpInitializeGraphRecurse @ 0x1800324A0
 * Callers:
 *     LdrpPrepareModuleForExecution @ 0x1800315A4 (LdrpPrepareModuleForExecution.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpInitializeGraphRecurse @ 0x1800324A0 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeShimDllDependencies @ 0x1800ADD0C (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x1800324A0 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 */

__int64 __fastcall LdrpInitializeGraphRecurse(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 **v6; // rsi
  __int64 **v7; // rbx
  __int64 *v8; // rcx
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == -4 )
    return 3221225794LL;
  v6 = (__int64 **)a1[5];
  v13 = 0;
  if ( v6 )
  {
    v7 = v6;
    do
    {
      v7 = (__int64 **)*v7;
      if ( ((_BYTE)v7[3] & 1) == 0 )
      {
        v8 = v7[1];
        v9 = *((_DWORD *)v8 + 14);
        switch ( v9 )
        {
          case 7:
            result = LdrpInitializeGraphRecurse(v8, a2, &v13);
            if ( (int)result < 0 )
              goto LABEL_12;
            break;
          case -4:
            result = 3221225794LL;
            goto LABEL_12;
          case 8:
            v13 = 1;
            break;
        }
      }
    }
    while ( v7 != v6 );
    if ( v13 )
    {
      v11 = *a1;
      *a3 = 1;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( a2 != *(_QWORD *)(v12 + 40) )
          return 0LL;
      }
    }
  }
  result = LdrpInitializeNode(a1);
  if ( (int)result < 0 )
LABEL_12:
    *((_DWORD *)a1 + 14) = -4;
  return result;
}
