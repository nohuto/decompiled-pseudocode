/*
 * XREFs of PspInitializeProcessSecurity @ 0x140A0C7EC
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 *     ObInitializeFastReference @ 0x140A0CFE4 (ObInitializeFastReference.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A0D378 (PspIdentityBasedJobBreakaway.c)
 *     SeAssignPrimaryToken @ 0x140A0E1E4 (SeAssignPrimaryToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        _WORD *a14)
{
  _BYTE *v14; // rsi
  ULONG_PTR v15; // r15
  int SessionId; // eax
  int v20; // r9d
  int v21; // r10d
  int v22; // r14d
  signed __int64 v23; // rax
  __int64 v25; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v26[4]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v27; // [rsp+78h] [rbp-11h]
  __int64 v28; // [rsp+80h] [rbp-9h]
  __int16 v29; // [rsp+C0h] [rbp+37h] BYREF
  char v30; // [rsp+C2h] [rbp+39h]

  v14 = a14;
  v25 = 0LL;
  v15 = 0LL;
  v29 = 0;
  v30 = 0;
  *a14 = 0;
  if ( a1 )
  {
    v26[0] = a5;
    v26[1] = a12;
    v26[2] = a6;
    v26[3] = a7;
    v28 = a13;
    v27 = a1;
    SessionId = PsGetSessionId(a2);
    v22 = SeSubProcessToken(
            a2,
            v21,
            (unsigned int)&v25,
            v20 != 0 ? 1 : 3,
            SessionId,
            (__int64)v26,
            a8,
            a9,
            a10,
            a11,
            (__int64)&v29);
    if ( v22 >= 0 )
    {
      ObInitializeFastReference(a2 + 584, v25);
      if ( a4 || (_BYTE)v29 )
        *v14 = 1;
      if ( HIBYTE(v29) )
        v14[1] = 1;
      if ( !v14[1] && v30 )
      {
        v15 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
        v22 = PspIdentityBasedJobBreakaway(v15, v25, v14 + 1);
      }
    }
    if ( *v14 || *(int *)(a1 + 1872) < 0 || (*(_DWORD *)(a2 + 1532) & 0x800000) != 0 && !*(_QWORD *)(a1 + 1888) )
      v23 = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      v23 = *(_QWORD *)(a1 + 1888);
    *(_QWORD *)(a2 + 1888) = v23;
    *(_QWORD *)(a2 + 1896) = v23;
    if ( v15 )
      ObFastDereferenceObject((__int64 *)(a1 + 584), v15, 1953261124LL);
  }
  else
  {
    *(_QWORD *)(a2 + 584) = 0LL;
    SeAssignPrimaryToken(a2, a3);
    return 0;
  }
  return (unsigned int)v22;
}
