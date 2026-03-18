/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1409C0C60
 * Callers:
 *     KiInitializeNormalPriorityAntiStarvationPolicies @ 0x1405B3238 (KiInitializeNormalPriorityAntiStarvationPolicies.c)
 *     PspReadDfssConfigurationValues @ 0x1405D8C1C (PspReadDfssConfigurationValues.c)
 *     PspIsDfssEnabled @ 0x1407623D4 (PspIsDfssEnabled.c)
 *     PspReadIFEOPerfOptions @ 0x14076741C (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14076E710 (RtlQueryImageFileExecutionOptions.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409BB8F4 (SepCheckAndSetAuditModeForProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 *     PspReadOptionsMapFromIFEO @ 0x1409C0BC4 (PspReadOptionsMapFromIFEO.c)
 *     PspReadIFEONodeOptions @ 0x1409C1F1C (PspReadIFEONodeOptions.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140A9EF00 (PspQueryComPlusRunUnderWoW.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlUnicodeStringToInteger @ 0x140953030 (RtlUnicodeStringToInteger.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        const WCHAR *a2,
        ULONG a3,
        _DWORD *a4,
        unsigned int a5,
        ULONG *a6)
{
  NTSTATUS result; // eax
  unsigned int v10; // esi
  ULONG *p_KeyValueInformation; // rdi
  NTSTATUS v12; // ebx
  ULONG Length; // ebx
  void *Pool2; // rax
  void *v15; // r12
  NTSTATUS v16; // eax
  ULONG *v17; // rdx
  ULONG v18; // ecx
  size_t v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  ULONG *v22; // [rsp+48h] [rbp-28h]
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+60h] [rbp-10h]

  v22 = a6;
  ResultLength = 0;
  v24 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result < 0 )
    return result;
  v10 = a5;
  if ( a5 >= 8 )
  {
    Length = a5 + 12;
    goto LABEL_7;
  }
  p_KeyValueInformation = (ULONG *)&KeyValueInformation;
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  v12 = result;
  if ( result < 0 )
  {
    if ( result == -2147483643 )
    {
      while ( 1 )
      {
        Length = ResultLength;
LABEL_7:
        Pool2 = (void *)ExAllocatePool2(0x41uLL);
        v15 = Pool2;
        if ( !Pool2 )
          return -1073741801;
        p_KeyValueInformation = (ULONG *)Pool2;
        v16 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, Length, &ResultLength);
        v12 = v16;
        if ( v16 >= 0 )
          goto LABEL_13;
        if ( v16 != -2147483643 )
          goto LABEL_28;
        ExFreePoolWithTag(p_KeyValueInformation, 0);
      }
    }
    return result;
  }
  v15 = 0LL;
LABEL_13:
  v17 = p_KeyValueInformation + 2;
  if ( !a3 )
  {
    if ( *v17 > a5 )
    {
      ResultLength = *v17;
      goto LABEL_34;
    }
    a3 = p_KeyValueInformation[1];
    v10 = *v17;
  }
  v18 = p_KeyValueInformation[1];
  if ( ((v18 - 3) & 0xFFFFFFFB) == 0 )
  {
    if ( a3 == v18 )
    {
      ResultLength = *v17;
      if ( !a4 )
        goto LABEL_34;
      v19 = *v17;
LABEL_54:
      if ( (unsigned int)v19 <= v10 )
      {
        memmove(a4, p_KeyValueInformation + 3, v19);
        goto LABEL_24;
      }
      goto LABEL_34;
    }
LABEL_36:
    v12 = -1073741788;
    goto LABEL_27;
  }
  if ( v18 == 4 )
  {
    if ( a3 == 4 )
    {
      if ( v10 == 4 && p_KeyValueInformation[2] == 4 )
      {
        ResultLength = 4;
        if ( a4 )
        {
          *a4 = p_KeyValueInformation[3];
          goto LABEL_24;
        }
        goto LABEL_34;
      }
      goto LABEL_42;
    }
    goto LABEL_36;
  }
  if ( v18 == 11 )
  {
    if ( a3 == 11 )
    {
      if ( v10 == 8 && p_KeyValueInformation[2] == 8 )
      {
        ResultLength = 8;
        if ( a4 )
        {
          *(_QWORD *)a4 = *(_QWORD *)(p_KeyValueInformation + 3);
LABEL_24:
          if ( v22 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
            *v22 = ResultLength;
          goto LABEL_27;
        }
LABEL_34:
        v12 = -2147483643;
        goto LABEL_24;
      }
      goto LABEL_42;
    }
    goto LABEL_36;
  }
  if ( v18 != 1 )
  {
    v12 = -1073741788;
    goto LABEL_24;
  }
  if ( a3 != 4 )
  {
    v19 = p_KeyValueInformation[2];
    ResultLength = p_KeyValueInformation[2];
    goto LABEL_54;
  }
  if ( v10 != 4 )
  {
LABEL_42:
    v12 = -1073741820;
    goto LABEL_27;
  }
  if ( ((unsigned __int8)a4 & 3) == 0 )
  {
    ResultLength = 4;
    if ( a4 )
    {
      DestinationString.Buffer = (wchar_t *)(p_KeyValueInformation + 3);
      DestinationString.Length = *((_WORD *)p_KeyValueInformation + 4);
      DestinationString.MaximumLength = *((_WORD *)p_KeyValueInformation + 4);
      v12 = RtlUnicodeStringToInteger(&DestinationString, 0, a4);
      goto LABEL_24;
    }
    goto LABEL_34;
  }
  v12 = -2147483646;
LABEL_27:
  if ( v15 )
LABEL_28:
    ExFreePoolWithTag(v15, 0);
  return v12;
}
