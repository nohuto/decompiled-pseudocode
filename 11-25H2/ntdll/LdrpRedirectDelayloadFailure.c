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
        unsigned int a7)
{
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r15
  char v19; // al
  _DWORD v21[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned int *v22; // [rsp+60h] [rbp-39h]
  __int64 v23; // [rsp+68h] [rbp-31h]
  __int64 v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  __int64 v26; // [rsp+80h] [rbp-19h]
  __int64 v27; // [rsp+88h] [rbp-11h]
  int v28; // [rsp+98h] [rbp-1h]

  v21[1] = 0;
  memset_thunk_772440563353939046(v21, 0, 0x44uLL);
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
  }
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrdload.c",
    461,
    (__int64)"LdrpRedirectDelayloadFailure",
    0,
    "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
    v14);
  if ( a2 )
  {
    v18 = *(_QWORD *)(a2 + 48);
    if ( (LdrpPolicyBits & 0x10) == 0 && (*(_BYTE *)(a2 + 104) & 1) == 0 )
    {
      v19 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v18 = 0LL;
  }
  v19 = 1;
LABEL_6:
  if ( !a4 || !v19 )
    goto LABEL_7;
  memset_thunk_772440563353939046(v21, 0, 0x48uLL);
  v22 = a3;
  v23 = a6;
  v21[0] = 72;
  v24 = v14;
  v27 = v18;
  v28 = RtlNtStatusToDosErrorNoTeb(a7);
  if ( v17 )
  {
    v25 = 1;
    v26 = v17;
  }
  else
  {
    v25 = 0;
    LODWORD(v26) = v16;
  }
  v11 = a4(4LL, v21);
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
