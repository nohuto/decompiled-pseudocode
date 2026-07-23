/*
 * XREFs of VerifierIoConnectInterruptEx @ 0x140BA3BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViCtxSetPrivateConnectParameters @ 0x140BA425C (ViCtxSetPrivateConnectParameters.c)
 */

__int64 __fastcall VerifierIoConnectInterruptEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // edi
  int v5; // eax
  PVOID v6; // rcx
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v10[1] = 0;
  memset_0(v10, 0, 0x4CuLL);
  if ( (VfRuleClasses & 0x800) != 0 && ViCtxInitializedIsrStateBlocks && (unsigned int)(*(_DWORD *)a1 - 1) <= 2 )
  {
    v4 = ViCtxSetPrivateConnectParameters(v10, a1, &P);
    if ( v4 >= 0 )
    {
      v5 = guard_dispatch_icall_no_overrides(v10, v3);
      v6 = P;
      v4 = v5;
      if ( P )
      {
        v7 = v10[0];
        *(_DWORD *)a1 = v10[0];
        if ( v4 < 0 )
        {
          ExFreePoolWithTag(v6, 0);
        }
        else
        {
          v8 = v7 - 1;
          if ( !v8 || (unsigned int)(v8 - 1) <= 1 )
            *(_QWORD *)(a1 + 16) = v11;
        }
      }
    }
  }
  else
  {
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, v2);
  }
  return (unsigned int)v4;
}
