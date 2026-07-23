/*
 * XREFs of RtlCopyKernelScpUnwindInfo @ 0x1405EE2FC
 * Callers:
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C573F4 (MiApplyDynamicFixupsToKernelAndHal.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForKernelScp @ 0x1405EE2B8 (RtlCalculateUnwindInfoSizeForKernelScp.c)
 *     RtlpGetKernelScpFunctionTable @ 0x1405EE4D4 (RtlpGetKernelScpFunctionTable.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlCopyKernelScpUnwindInfo(__int64 a1, int a2, unsigned int *a3, int a4)
{
  __int64 KernelScpFunctionTable; // rsi
  unsigned int v10; // ebp
  char *v11; // rbx
  unsigned int i; // edi
  unsigned int v13; // eax
  __int64 v14; // r14
  unsigned int v15[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF

  v15[0] = 0;
  v16 = 0;
  KernelScpFunctionTable = RtlpGetKernelScpFunctionTable(a1, a2, a4, *a3, (__int64)&v16);
  if ( !KernelScpFunctionTable )
    return 3221226021LL;
  v10 = 0;
  v11 = (char *)a3 + *a3;
  for ( i = 0; i < v16; ++i )
  {
    v13 = RtlCalculateUnwindInfoSizeForKernelScp(a1, KernelScpFunctionTable, v15);
    v10 += v13;
    if ( v10 > 0x1F4 )
      return 2147483653LL;
    v14 = v13;
    memmove(v11, (const void *)(a1 + *(unsigned int *)(KernelScpFunctionTable + 8)), v13);
    if ( v15[0] )
      *(_DWORD *)&v11[v15[0]] += a2 - a4;
    v11 += v14;
    KernelScpFunctionTable += 12LL;
  }
  return 0LL;
}
