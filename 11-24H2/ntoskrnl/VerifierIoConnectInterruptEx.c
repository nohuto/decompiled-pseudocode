/*
 * XREFs of VerifierIoConnectInterruptEx @ 0x140BA1BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViCtxSetPrivateConnectParameters @ 0x140BA225C (ViCtxSetPrivateConnectParameters.c)
 */

__int64 __fastcall VerifierIoConnectInterruptEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  PVOID v10; // rcx
  int v11; // eax
  int v12; // eax
  _DWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v14[1] = 0;
  memset_0(v14, 0, 0x4CuLL);
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    v6 = ViCtxSetPrivateConnectParameters(v14, a1, &P);
    if ( v6 >= 0 )
    {
      v9 = guard_dispatch_icall_no_overrides(v14, v5, v7, v8);
      v10 = P;
      v6 = v9;
      if ( P )
      {
        v11 = v14[0];
        *(_DWORD *)a1 = v14[0];
        if ( v6 < 0 )
        {
          ExFreePoolWithTag(v10, 0);
        }
        else
        {
          v12 = v11 - 1;
          if ( !v12 || (unsigned int)(v12 - 1) <= 1 )
            *(_QWORD *)(a1 + 16) = v15;
        }
      }
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
  }
  return (unsigned int)v6;
}
