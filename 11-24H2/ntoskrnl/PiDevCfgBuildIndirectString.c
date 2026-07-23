/*
 * XREFs of PiDevCfgBuildIndirectString @ 0x140A5E534
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x140499DB0 (RtlUnicodeStringPrintfEx.c)
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     PnpDuplicateUnicodeString @ 0x1404BBB34 (PnpDuplicateUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgBuildIndirectString(__int64 a1, unsigned __int16 *a2, __int64 a3, UNICODE_STRING *a4)
{
  unsigned __int64 v8; // rax
  NTSTATUS v9; // ebx
  unsigned int *v10; // rdi
  wchar_t *Buffer; // rsi
  _WORD *v12; // rcx
  unsigned __int16 v13; // bx
  WCHAR *Pool2; // rax
  WCHAR *v15; // rdi
  NTSTATUS RegistryValue; // ebx
  _WORD *v17; // rdx
  _WORD *v18; // rcx
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  unsigned __int16 Length; // r14
  int v22; // esi
  __int64 v23; // rsi
  UNICODE_STRING v24; // xmm0
  PVOID P; // [rsp+38h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-31h] BYREF
  __int128 v28; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  P = 0LL;
  v8 = *a2;
  v9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v10 = 0LL;
  Buffer = 0LL;
  RemainingString = 0LL;
  v28 = 0LL;
  if ( (unsigned int)v8 <= 4 || (v12 = (_WORD *)*((_QWORD *)a2 + 1), *v12 != 37) || v12[(v8 >> 1) - 1] != 37 )
  {
    if ( PnpDuplicateUnicodeString(a3, (__int64)a2) )
    {
      if ( !a4 )
        goto LABEL_27;
      *a4 = *(UNICODE_STRING *)a3;
      goto LABEL_23;
    }
    goto LABEL_37;
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
  v13 = *a2 - 4;
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v13 + 2), 0x67727453u);
  v15 = Pool2;
  if ( !Pool2 )
  {
LABEL_37:
    v9 = -1073741670;
    goto LABEL_27;
  }
  memmove(Pool2, (const void *)(*((_QWORD *)a2 + 1) + 2LL), v13);
  v15[(unsigned __int64)v13 >> 1] = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, v15, 0, &P);
  ExFreePool(v15);
  if ( RegistryValue < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (unsigned int *)P;
    if ( PnpValidateRegistryString(P) )
    {
      v17 = (_WORD *)((char *)v10 + v10[2]);
      v18 = v17;
      v19 = (unsigned __int64)&v17[(unsigned __int64)v10[3] >> 1];
      if ( (unsigned __int64)v17 < v19 )
      {
        do
        {
          if ( !*v18 )
            break;
          ++v18;
        }
        while ( (unsigned __int64)v18 < v19 );
      }
      LOWORD(v28) = (_WORD)v18 - (_WORD)v17;
      WORD1(v28) = *((_WORD *)v10 + 6);
      *((_QWORD *)&v28 + 1) = (char *)v10 + v10[2];
    }
    else
    {
      ExFreePoolWithTag(v10, 0);
      v10 = 0LL;
    }
  }
LABEL_12:
  v20 = *a2 + 4 + *(unsigned __int16 *)(a1 + 40);
  if ( *((_QWORD *)&v28 + 1) )
    v20 += (unsigned __int16)v28 + 2;
  if ( (unsigned __int64)v20 + 2 <= 0xFFFE )
  {
    DestinationString.Length = v20;
    DestinationString.MaximumLength = v20 + 2;
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v20 + 2), 0x67727453u);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
    {
      v9 = -1073741670;
LABEL_23:
      if ( Buffer )
        ExFreePool(Buffer);
      goto LABEL_25;
    }
    v9 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"@%wZ,%wZ", a1 + 40, a2);
    if ( v9 >= 0 )
    {
      Length = DestinationString.Length;
      v22 = DestinationString.Length >> 1;
      if ( !*((_QWORD *)&v28 + 1) )
      {
        v23 = v22 - (*a2 >> 1);
LABEL_20:
        v24 = DestinationString;
        DestinationString = 0LL;
        *(UNICODE_STRING *)a3 = v24;
        if ( a4 )
          RtlInitUnicodeString(a4, (PCWSTR)(*(_QWORD *)(a3 + 8) + 2 * v23));
        goto LABEL_22;
      }
      v9 = RtlUnicodeStringPrintf(&RemainingString, L";%wZ", &v28);
      if ( v9 >= 0 )
      {
        DestinationString.Length = RemainingString.Length + Length;
        v23 = (unsigned int)(v22 + 1);
        goto LABEL_20;
      }
    }
LABEL_22:
    Buffer = DestinationString.Buffer;
    goto LABEL_23;
  }
  v9 = -1073741562;
LABEL_25:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_27:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}
