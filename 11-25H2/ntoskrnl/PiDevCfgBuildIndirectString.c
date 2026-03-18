/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x1409824B0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047FA74 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14049FEC0 (RtlUnicodeStringPrintfEx.c)
 *     PnpValidateRegistryString @ 0x1404ABB64 (PnpValidateRegistryString.c)
 *     PnpDuplicateUnicodeString @ 0x1404C1CF4 (PnpDuplicateUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int64 v8; // rax
  NTSTATUS v9; // ebx
  wchar_t *Buffer; // rsi
  _WORD *v11; // rcx
  unsigned __int16 v12; // bx
  _WORD *Pool2; // rax
  _WORD *v14; // rdi
  int RegistryValue; // ebx
  _WORD *v16; // rcx
  unsigned __int64 v17; // r8
  unsigned int v18; // edx
  unsigned __int16 Length; // r14
  int v20; // esi
  __int64 v21; // rsi
  UNICODE_STRING v22; // xmm0
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  __int128 v25; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  v8 = *a2;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  Buffer = 0LL;
  RemainingString = 0LL;
  v25 = 0LL;
  if ( (unsigned int)v8 <= 4 || (v11 = (_WORD *)*((_QWORD *)a2 + 1), *v11 != 37) || v11[(v8 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( !a4 )
        goto LABEL_25;
      *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_23;
    }
    goto LABEL_34;
  }
  *(_DWORD *)&RemainingString.Length = 1048590;
  RemainingString.Buffer = L"Strings";
  ObjectAttributes.RootDirectory = *(HANDLE *)(a1 + 16);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &RemainingString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_12;
  v12 = *a2 - 4;
  Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
  v14 = Pool2;
  if ( !Pool2 )
  {
LABEL_34:
    v9 = -1073741670;
    goto LABEL_25;
  }
  memmove(Pool2, (const void *)(*((_QWORD *)a2 + 1) + 2LL), v12);
  v14[(unsigned __int64)v12 >> 1] = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle);
  ExFreePool(v14);
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryString(0LL) )
    {
      v16 = (_WORD *)MEMORY[8];
      v17 = MEMORY[8] + 2 * ((unsigned __int64)MEMORY[0xC] >> 1);
      if ( MEMORY[8] < v17 )
      {
        do
        {
          if ( !*v16 )
            break;
          ++v16;
        }
        while ( (unsigned __int64)v16 < v17 );
      }
      LOWORD(v25) = (_WORD)v16 - MEMORY[8];
      WORD1(v25) = MEMORY[0xC];
      *((_QWORD *)&v25 + 1) = MEMORY[8];
    }
    else
    {
      ExFreePoolWithTag(0LL, 0);
    }
  }
LABEL_12:
  v18 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
  if ( *((_QWORD *)&v25 + 1) )
    v18 += (unsigned __int16)v25 + 2;
  if ( (unsigned __int64)v18 + 2 > 0xFFFE )
  {
    v9 = -1073741562;
    goto LABEL_25;
  }
  DestinationString.Length = v18;
  DestinationString.MaximumLength = v18 + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
  {
    v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
    if ( v9 >= 0 )
    {
      Length = DestinationString.Length;
      v20 = DestinationString.Length >> 1;
      if ( !*((_QWORD *)&v25 + 1) )
      {
        v21 = v20 - (*a2 >> 1);
LABEL_20:
        v22 = DestinationString;
        DestinationString = 0LL;
        *(UNICODE_STRING *)a3 = v22;
        if ( a4 )
          RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v21));
        goto LABEL_22;
      }
      v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v25);
      if ( v9 >= 0 )
      {
        DestinationString.Length = RemainingString.Length + Length;
        v21 = (unsigned int)(v20 + 1);
        goto LABEL_20;
      }
    }
LABEL_22:
    Buffer = DestinationString.Buffer;
    goto LABEL_23;
  }
  v9 = -1073741670;
LABEL_23:
  if ( Buffer )
    ExFreePool(Buffer);
LABEL_25:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
