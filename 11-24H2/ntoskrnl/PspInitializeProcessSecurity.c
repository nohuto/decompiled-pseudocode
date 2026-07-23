/*
 * XREFs of PspInitializeProcessSecurity @ 0x140ACAA98
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SeAssignPrimaryToken @ 0x140A4A3CC (SeAssignPrimaryToken.c)
 *     ObInitializeFastReference @ 0x140A4A4A0 (ObInitializeFastReference.c)
 *     PspIdentityBasedJobBreakaway @ 0x140A6D0A4 (PspIdentityBasedJobBreakaway.c)
 *     SeSubProcessToken @ 0x140AD660C (SeSubProcessToken.c)
 */

__int64 __fastcall PspInitializeProcessSecurity(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
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
        __int64 a14,
        _WORD *a15)
{
  _BYTE *v15; // r14
  int v16; // ebx
  int v18; // r12d
  void *v21; // r15
  unsigned int v22; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v24; // rcx
  int SessionId; // eax
  signed __int64 v26; // rax
  void *v28; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v29[4]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v30; // [rsp+80h] [rbp-11h]
  __int64 v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h]
  __int16 v33; // [rsp+C8h] [rbp+37h] BYREF
  char v34; // [rsp+CAh] [rbp+39h]

  v15 = a15;
  v16 = 0;
  v28 = 0LL;
  v33 = 0;
  v34 = 0;
  v18 = (int)a3;
  *a15 = 0;
  v32 = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    v30 = a1;
    v29[0] = a5;
    v22 = a4 != 0 ? 0xFFFFFFFE : 0;
    v29[1] = a12;
    v29[2] = a6;
    v29[3] = a7;
    v31 = a13;
    IsEnabledDeviceUsageNoInline = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline();
    v24 = v32;
    if ( IsEnabledDeviceUsageNoInline )
      v24 = a14;
    v32 = v24;
    SessionId = PsGetSessionId(a2);
    v16 = SeSubProcessToken(
            a2,
            v18,
            (unsigned int)&v28,
            v22 + 3,
            SessionId,
            (__int64)v29,
            a8,
            a9,
            a10,
            a11,
            (__int64)&v33);
    if ( v16 >= 0 )
    {
      ObInitializeFastReference((__int64 *)(a2 + 584), (__int64)v28);
      if ( a4 || (_BYTE)v33 )
        *v15 = 1;
      if ( HIBYTE(v33) )
        v15[1] = 1;
      if ( !v15[1] && v34 )
      {
        v21 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
        v16 = PspIdentityBasedJobBreakaway(v21, v28, v15 + 1);
      }
    }
    if ( *v15 || *(int *)(a1 + 1872) < 0 || (*(_DWORD *)(a2 + 1532) & 0x800000) != 0 && !*(_QWORD *)(a1 + 1888) )
      v26 = _InterlockedIncrement64(&PsNextSecurityDomain);
    else
      v26 = *(_QWORD *)(a1 + 1888);
    *(_QWORD *)(a2 + 1888) = v26;
    *(_QWORD *)(a2 + 1896) = v26;
    if ( v21 )
      ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v21, 0x746C6644u);
  }
  else
  {
    *(_QWORD *)(a2 + 584) = 0LL;
    SeAssignPrimaryToken(a2, a3);
  }
  return (unsigned int)v16;
}
