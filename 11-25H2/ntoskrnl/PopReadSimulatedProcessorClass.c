/*
 * XREFs of PopReadSimulatedProcessorClass @ 0x140C20458
 * Callers:
 *     PopReadSimulatedArchitecturalClasses @ 0x140C1FD64 (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140C1FF50 (PopReadSimulatedHGSClasses.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x14069B3A0 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 */

char __fastcall PopReadSimulatedProcessorClass(__int64 a1, unsigned __int16 a2, void *a3, ULONG a4)
{
  char v5; // di
  ULONG v6; // esi
  ULONG i; // edx
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  unsigned __int16 *v13; // rdx
  __int64 v14; // r10
  int v15; // r9d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v17; // rbx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-35h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-31h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-21h] BYREF
  _OWORD v23[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+80h] [rbp+17h]

  v24 = 0LL;
  v25 = 0;
  KeyValueInformation = 0LL;
  ResultLength = 0;
  v5 = 0;
  memset(v23, 0, sizeof(v23));
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v6 = 0;
  ProcNumber = 0;
  for ( i = 0; ZwEnumerateValueKey(a3, i, KeyValueBasicInformation, v23, 0x2Cu, &ResultLength) >= 0; i = v6 )
  {
    ++v6;
    ValueName.Buffer = (wchar_t *)v23 + 6;
    v11 = 0;
    ValueName.Length = WORD4(v23[0]);
    ValueName.MaximumLength = 32;
    v12 = 64;
    if ( DWORD2(v23[0]) >> 1 )
    {
      v13 = (unsigned __int16 *)v23 + 6;
      v14 = DWORD2(v23[0]) >> 1;
      do
      {
        v15 = *v13;
        if ( (unsigned __int16)(v15 - 48) <= 9u )
        {
          v11 = v15 + 2 * (v11 + 4 * (v11 - 6));
          v12 = v11;
        }
        ++v13;
        --v14;
      }
      while ( v14 );
      if ( v12 < 0x40 )
      {
        ProcNumber.Number = v12;
        ProcNumber.Group = a2;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
        v17 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber < a4
          && ZwQueryValueKey(a3, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x10u, &ResultLength) >= 0
          && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
        {
          v5 = 1;
          if ( !a1 )
            return v5;
          *(_BYTE *)(v17 + a1) = BYTE12(KeyValueInformation);
        }
      }
    }
  }
  return v5;
}
