/*
 * XREFs of OSReadNextRegValue @ 0x1400A41A8
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall OSReadNextRegValue(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4)
{
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // eax
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v12; // r14
  int MaximumLength; // esi
  PULONG ResultLength; // [rsp+28h] [rbp-28h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-28h]
  struct _STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  ULONG Length; // [rsp+80h] [rbp+30h] BYREF

  Length = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, 0LL, 0, &Length);
    v8 = v9;
    if ( v9 )
    {
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        v10 = Length;
        if ( Length <= 0x10 )
        {
          v10 = 16;
          Length = 16;
        }
        Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v10, 1299211073LL);
        v12 = Pool2;
        if ( Pool2 )
        {
          v8 = ZwEnumerateValueKey(KeyHandle, Index, KeyValueBasicInformation, Pool2, Length, &Length);
          if ( v8 >= 0 )
          {
            SourceString.Buffer = v12 + 6;
            SourceString.Length = v12[4];
            SourceString.MaximumLength = v12[4] + 2;
            v8 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v8 >= 0 )
            {
              if ( a4 )
              {
                MaximumLength = DestinationString.MaximumLength;
                if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                  v8 = -1073741789;
                else
                  memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
                *a4 = MaximumLength;
              }
              RtlFreeAnsiString(&DestinationString);
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(ResultLengtha) = v8;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0x1Bu,
                (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
                ResultLengtha,
                *(_QWORD *)&DestinationString.Length,
                DestinationString.Buffer);
            }
          }
          ExFreePoolWithTag(v12, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = Length;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x1Au,
            (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
            ResultLength,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer,
            *(_QWORD *)&SourceString.Length,
            SourceString.Buffer);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v8;
}
