/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1409350E8
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x140943A54 (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140490B00 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5)
{
  unsigned int IsUntrustedObject; // esi
  char v6; // bl
  __int64 v7; // rbp
  char v8; // di
  __int64 v10; // r9
  _KPROCESS *Process; // rcx
  char v12; // cl
  char v13; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+31h] [rbp-17h] BYREF
  char v15[22]; // [rsp+32h] [rbp-16h] BYREF

  IsUntrustedObject = 0;
  v6 = a3;
  v7 = a1;
  v13 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( qword_140F048F0 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !(_BYTE)a3 )
  {
    *a5 = 2;
    return IsUntrustedObject;
  }
  if ( (_BYTE)a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return IsUntrustedObject;
    }
  }
  else if ( !(_BYTE)a3 )
  {
LABEL_7:
    *a5 = v6;
    return IsUntrustedObject;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_7;
  LOBYTE(a2) = a3;
  LOBYTE(a1) = a4;
  if ( (unsigned int)SeCompareSigningLevels(a1, a2) )
    goto LABEL_7;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 || v6 != 6 )
    goto LABEL_7;
  if ( ((__int64)Process[4].ThreadListHead.Flink & 0x800000) != 0 )
    goto LABEL_26;
  if ( !qword_140F048B8 )
    return (unsigned int)-1073741823;
  IsUntrustedObject = guard_dispatch_icall_no_overrides(v7, &v13, &v14, v10);
  if ( (IsUntrustedObject & 0x80000000) == 0 )
  {
    if ( !v14 && !v13 )
    {
      IsUntrustedObject = RtlIsUntrustedObject(0LL, v7, v15);
      if ( (IsUntrustedObject & 0x80000000) != 0 )
        return IsUntrustedObject;
      if ( !v15[0] )
      {
        if ( (unsigned __int8)v8 >= 2u )
        {
          v12 = 9;
          if ( v8 != 2 )
            v12 = 6;
          *a5 = v12;
        }
        else
        {
          *a5 = 0;
        }
        return IsUntrustedObject;
      }
    }
LABEL_26:
    *a5 = 6;
  }
  return IsUntrustedObject;
}
