/*
 * XREFs of LdrpResolveDelayloadAddress @ 0x1800DC3E0
 * Callers:
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DC2A4 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpResolveProcedureAddress @ 0x180013B70 (LdrpResolveProcedureAddress.c)
 *     AVrfCallAPILookupCallback @ 0x1800DC4EC (AVrfCallAPILookupCallback.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpResolveDelayloadAddress(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64 *, _QWORD *, __int64, __int64, _QWORD),
        int *a6)
{
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // rax
  ULONG v12; // r9d
  const char *v13; // r8
  int v14; // eax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  v8 = *(unsigned int *)(a3 + 16);
  v9 = a4 - *(unsigned int *)(a3 + 12) - v6;
  v18 = 0LL;
  v11 = *(_QWORD *)(v6 + v8 + 8 * (v9 >> 3));
  if ( v11 < 0 )
  {
    v13 = 0LL;
    v12 = (unsigned __int16)v11;
  }
  else
  {
    v12 = 0;
    v13 = (const char *)(v11 + v6 + 2);
  }
  v14 = LdrpResolveProcedureAddress(a1, a2, v13, v12, 0, &v18);
  *a6 = v14;
  if ( v14 < 0 )
    return v18;
  if ( AvrfpAPILookupCallbacksEnabled )
    AVrfCallAPILookupCallback(*(_QWORD *)(a1 + 48), a2[6], v18, 1, (__int64)&v18);
  if ( !a5 )
    return v18;
  v16 = *(_QWORD *)(a1 + 48);
  v17 = v18;
  v19 = 0LL;
  a5(&v19, a2, v18, v16, 0LL);
  if ( v19 )
    return v19;
  return v17;
}
