/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1409FA728
 * Callers:
 *     MiCreateNewSection @ 0x14098D630 (MiCreateNewSection.c)
 *     MiValidateExistingImage @ 0x14098DCCC (MiValidateExistingImage.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x14048B140 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, __int64 a2, char a3, char a4, char *a5)
{
  unsigned int v5; // esi
  PVOID v7; // rbp
  char v8; // di
  _KPROCESS *Process; // rcx
  char v11; // cl
  char v12; // [rsp+30h] [rbp-18h] BYREF
  char v13; // [rsp+31h] [rbp-17h]
  BOOLEAN IsUntrustedObject[22]; // [rsp+32h] [rbp-16h] BYREF

  v5 = 0;
  v7 = Object;
  v12 = 0;
  v13 = 0;
  IsUntrustedObject[0] = 0;
  if ( qword_140F04B90 )
    return (unsigned int)guard_dispatch_icall_no_overrides(Object, a2);
  v8 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v8 = SeILSigningPolicyRuntime;
  if ( v8 == 2 && !a3 )
  {
    *a5 = 2;
    return v5;
  }
  if ( a3 == 2 )
  {
    if ( !v8 )
    {
      *a5 = 0;
      return v5;
    }
  }
  else if ( !a3 )
  {
LABEL_7:
    *a5 = a3;
    return v5;
  }
  if ( (a2 & 0x10) != 0 )
    goto LABEL_7;
  LOBYTE(a2) = a3;
  LOBYTE(Object) = a4;
  if ( (unsigned int)SeCompareSigningLevels(Object, a2) )
    goto LABEL_7;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 || a3 != 6 )
    goto LABEL_7;
  if ( ((__int64)Process[4].ThreadListHead.Flink & 0x800000) != 0 )
    goto LABEL_26;
  if ( !qword_140F04B58 )
    return (unsigned int)-1073741823;
  v5 = guard_dispatch_icall_no_overrides(v7, &v12);
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( !v13 && !v12 )
    {
      v5 = RtlIsUntrustedObject(0LL, v7, IsUntrustedObject);
      if ( (v5 & 0x80000000) != 0 )
        return v5;
      if ( !IsUntrustedObject[0] )
      {
        if ( (unsigned __int8)v8 >= 2u )
        {
          v11 = 9;
          if ( v8 != 2 )
            v11 = 6;
          *a5 = v11;
        }
        else
        {
          *a5 = 0;
        }
        return v5;
      }
    }
LABEL_26:
    *a5 = 6;
  }
  return v5;
}
