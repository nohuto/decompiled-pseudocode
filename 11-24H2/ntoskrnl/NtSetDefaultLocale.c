/*
 * XREFs of NtSetDefaultLocale @ 0x140A968F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1404CB300 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     ExCheckFullProcessInformationAccess @ 0x14095F62C (ExCheckFullProcessInformationAccess.c)
 */

int __fastcall NtSetDefaultLocale(__int16 a1, __int64 a2)
{
  int v2; // edi
  char v3; // si
  int result; // eax
  ULONG v5; // ebx
  const WCHAR *v6; // r15
  const WCHAR *v7; // rdx
  NTSTATUS v8; // ebx
  int *v9; // rdx
  unsigned int i; // r9d
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // r9d
  _WORD *v14; // r8
  _WORD *v15; // r8
  _WORD *v16; // rdx
  unsigned int v17; // ecx
  __int16 v18; // ax
  _KPROCESS *Process; // rax
  unsigned __int64 CycleTime; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v25; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v28; // [rsp+ACh] [rbp-5Ch]
  unsigned int v29; // [rsp+B0h] [rbp-58h]
  int v30; // [rsp+B4h] [rbp-54h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v2 = a2;
  DestinationString = 0LL;
  v3 = a1;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  v25 = 0LL;
  DestinationString_8 = 0LL;
  if ( (_BYTE)a1 )
  {
    result = OpenGlobalizationUserSettingsKey(a1, a2, &DestinationString);
    if ( result < 0 )
      return result;
    v5 = 1600;
    v6 = L"Control Panel\\International";
    v7 = L"Locale";
  }
  else
  {
    result = ExCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    v5 = 576;
    v6 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language";
    v7 = L"Default";
  }
  RtlInitUnicodeString(&DestinationString_8, v7);
  RtlInitUnicodeString(&v25, v6);
  ObjectAttributes.RootDirectory = DestinationString;
  ObjectAttributes.ObjectName = &v25;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v2 )
  {
    if ( !v3 || RtlIsMultiSessionSku() )
    {
      v8 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v8 < 0 )
        goto LABEL_35;
      v13 = v2;
      v14 = (_WORD *)((char *)KeyValueInformation + (v3 != 0 ? 16LL : 8LL));
      *v14 = 0;
      v15 = v14 - 1;
      if ( v15 >= KeyValueInformation )
      {
        do
        {
          v16 = v15 - 1;
          v17 = v13 & 0xF;
          v18 = 48;
          if ( v17 > 9 )
            v18 = 55;
          v13 >>= 4;
          *v15-- = v17 + v18;
        }
        while ( v16 >= KeyValueInformation );
      }
      v8 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, KeyValueInformation, v3 != 0 ? 18 : 10);
    }
    else
    {
      v8 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
      if ( v8 < 0 )
        goto LABEL_35;
      ZwDeleteValueKey(KeyHandle, &DestinationString_8);
    }
LABEL_34:
    ZwClose(KeyHandle);
    goto LABEL_35;
  }
  v8 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    v8 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString_8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           ResultLength);
    if ( v8 >= 0 )
    {
      if ( v28 == 1 )
      {
        v9 = &v30;
        for ( i = 0; i < v29; v2 = v12 | (16 * v2) )
        {
          v11 = *(unsigned __int16 *)v9;
          v9 = (int *)((char *)v9 + 2);
          if ( (unsigned __int16)(v11 - 48) > 9u )
          {
            if ( (unsigned __int16)(v11 - 65) > 5u )
            {
              if ( (unsigned __int16)(v11 - 97) > 5u )
                goto LABEL_34;
              v12 = v11 - 87;
            }
            else
            {
              v12 = v11 - 55;
            }
          }
          else
          {
            v12 = v11 - 48;
          }
          if ( v12 >= 0x10 )
            break;
          i += 2;
        }
      }
      else if ( v28 == 4 && v29 == 4 )
      {
        v2 = v30;
      }
      else
      {
        v8 = -1073741823;
      }
    }
    goto LABEL_34;
  }
LABEL_35:
  if ( DestinationString )
    ZwClose(DestinationString);
  if ( v8 >= 0 )
  {
    if ( v3 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      CycleTime = Process[1].CycleTime;
      if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        PsDefaultThreadLocaleId = v2;
      else
        *(_DWORD *)(CycleTime + 48) = v2;
    }
    else
    {
      PsDefaultSystemLocaleId = v2;
    }
  }
  return v8;
}
