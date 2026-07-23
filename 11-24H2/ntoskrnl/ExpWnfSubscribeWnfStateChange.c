/*
 * XREFs of ExpWnfSubscribeWnfStateChange @ 0x140A125DC
 * Callers:
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     NtSubscribeWnfStateChange @ 0x140A124F0 (NtSubscribeWnfStateChange.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExpWnfLookupPermanentName @ 0x140833714 (ExpWnfLookupPermanentName.c)
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140900CF0 (ExpWnfLookupNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x1409013E0 (ExpCaptureWnfStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1409C32E4 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1409E0090 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfNotifySubscription @ 0x1409E8AE0 (ExpWnfNotifySubscription.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfSubscribeWnfStateChange(
        signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  ACCESS_MASK v8; // r14d
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r15
  int v12; // r13d
  _KPROCESS *Process; // rax
  int v14; // eax
  __int64 v15; // r13
  struct _EX_RUNDOWN_REF *v16; // rbx
  BOOL v17; // edx
  int v18; // r8d
  unsigned int v19; // r8d
  struct _EX_RUNDOWN_REF *v21; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+78h] [rbp-50h] BYREF
  _KPROCESS *v24; // [rsp+80h] [rbp-48h]
  int v25[2]; // [rsp+88h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+90h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v27; // [rsp+98h] [rbp-30h] BYREF

  v26 = 0LL;
  v22 = 0;
  P = 0LL;
  *(_QWORD *)v25 = 0LL;
  v21 = 0LL;
  v27 = 0LL;
  v8 = 0;
  v9 = ExpCaptureWnfStateName(a3, &v26, a8);
  if ( v9 >= 0 )
  {
    if ( (a7 & 0xFFFFFFE0) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_34;
    }
    v10 = v26;
    v11 = (v26 >> 4) & 3;
    if ( a8 )
    {
      v12 = 0;
      v8 = (a7 & 0x11) != 0;
      if ( (a7 & 0xFFFFFFEE) != 0 )
        v8 |= 2u;
    }
    else
    {
      v12 = 1;
    }
    if ( a8 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v10 = v26;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v24 = Process;
    v9 = ExpWnfResolveScopeInstance(v25, (__int64)Process, 0LL, (v26 >> 6) & 0xF, 0LL);
    if ( v9 >= 0 )
    {
      v14 = ExpWnfLookupNameInstance(*(__int64 *)v25, v10, &v21);
      v9 = v14;
      if ( v14 != -1073741772 || (_DWORD)v11 == 3 )
      {
        if ( v14 < 0 )
          goto LABEL_34;
        if ( !v12 )
        {
          v9 = ExpWnfCheckCallerAccess(v21[9].Ptr, v8);
          if ( v9 < 0 )
            goto LABEL_34;
        }
        v15 = (__int64)v24;
      }
      else
      {
        v9 = ExpWnfLookupPermanentName(v10, (PSECURITY_DESCRIPTOR **)&P);
        if ( v9 < 0 )
          goto LABEL_34;
        if ( !v12 )
        {
          v9 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), v8);
          if ( v9 < 0 )
            goto LABEL_34;
        }
        v15 = (__int64)v24;
        v9 = ExpWnfCreateNameInstance(*(__int64 *)v25, v10, (__int64)P, (unsigned __int64)v24, &v21);
        ExFreePoolWithTag(P, 0x20666E57u);
        P = 0LL;
        if ( v9 < 0 )
          goto LABEL_34;
      }
      v16 = v21;
      v9 = ExpWnfSubscribeNameInstance((__int64)v21, v15, a5, a6, a4, a7, a8, a1, a2, &v27, &v22);
      if ( v9 >= 0 )
      {
        v17 = 0;
        if ( a4 != LODWORD(v16[12].Count) )
          v17 = v16[11].Count != 0;
        v18 = v17 | 8;
        if ( HIDWORD(v21[20].Ptr) )
          v18 = v17;
        if ( !v22 )
        {
          if ( LODWORD(v21[20].Count) )
            v18 |= 2u;
          else
            v18 |= 4u;
        }
        v19 = a7 & ~v22 & v18;
        if ( v19 )
          ExpWnfNotifySubscription((__int64)v21, (__int64)v27, v19, a8 != 0);
      }
    }
  }
LABEL_34:
  if ( v27 )
    ExReleaseRundownProtection_0(v27 + 1);
  if ( v21 )
    ExReleaseRundownProtection_0(v21 + 1);
  if ( *(_QWORD *)v25 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v25 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)v9;
}
