/*
 * XREFs of LdrpRedirectDelayloadFailure @ 0x1800DC5E0
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DC2A4 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpRedirectDelayloadFailure(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 (__fastcall *a4)(__int64, _DWORD *),
        __int64 (__fastcall *a5)(__int64, __int64),
        __int64 a6,
        NTSTATUS Status)
{
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  const char *v18; // rcx
  __int64 v19; // r15
  char v20; // al
  _DWORD v22[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned int *v23; // [rsp+60h] [rbp-39h]
  __int64 v24; // [rsp+68h] [rbp-31h]
  __int64 v25; // [rsp+70h] [rbp-29h]
  int v26; // [rsp+78h] [rbp-21h]
  __int64 v27; // [rsp+80h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-11h]
  ULONG v29; // [rsp+98h] [rbp-1h]

  v22[1] = 0;
  memset_thunk_772440563353939046(v22, 0, 0x44uLL);
  v10 = *(_QWORD *)(a1 + 48);
  v11 = 0LL;
  v12 = (a6 - a3[3] - v10) >> 3;
  v13 = v10 + a3[4];
  v14 = v10 + a3[1];
  v15 = *(_QWORD *)(v13 + 8 * v12);
  if ( v15 < 0 )
  {
    v16 = *(unsigned __int16 *)(v13 + 8 * v12);
    v17 = 0LL;
  }
  else
  {
    v16 = 0;
    v17 = v15 + v10 + 2;
    v18 = (const char *)v17;
    if ( v17 )
      goto LABEL_3;
  }
  v18 = "Unknown";
LABEL_3:
  LdrpLogInternal(
    "minkernel\\ldr\\ldrdload.c",
    461,
    (__int64)"LdrpRedirectDelayloadFailure",
    0,
    "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
    v14,
    v18,
    v16,
    a1 + 88,
    Status);
  if ( a2 )
  {
    v19 = *(_QWORD *)(a2 + 48);
    if ( (LdrpPolicyBits & 0x10) == 0 && (*(_BYTE *)(a2 + 104) & 1) == 0 )
    {
      v20 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v19 = 0LL;
  }
  v20 = 1;
LABEL_6:
  if ( !a4 || !v20 )
    goto LABEL_7;
  memset_thunk_772440563353939046(v22, 0, 0x48uLL);
  v23 = a3;
  v24 = a6;
  v22[0] = 72;
  v25 = v14;
  v28 = v19;
  v29 = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v17 )
  {
    v26 = 1;
    v27 = v17;
  }
  else
  {
    v26 = 0;
    LODWORD(v27) = v16;
  }
  v11 = a4(4LL, v22);
  if ( !v11 )
  {
LABEL_7:
    if ( a5 )
    {
      if ( !v17 )
        v17 = v16;
      return a5(v14, v17);
    }
  }
  return v11;
}
