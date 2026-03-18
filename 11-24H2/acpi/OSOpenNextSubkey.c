/*
 * XREFs of OSOpenNextSubkey @ 0x1400A3F64
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 */

__int64 __fastcall OSOpenNextSubkey(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4, __int64 a5)
{
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v13; // rsi
  int MaximumLength; // r14d
  PULONG ResultLength; // [rsp+28h] [rbp-38h]
  PULONG ResultLengtha; // [rsp+28h] [rbp-38h]
  struct _STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-18h] BYREF
  ULONG Length; // [rsp+90h] [rbp+30h] BYREF

  Length = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, 0LL, 0, &Length);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 == -2147483643 || v10 == -1073741789 )
      {
        v11 = Length;
        if ( Length <= 0x18 )
        {
          v11 = 24;
          Length = 24;
        }
        Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v11, 1299211073LL);
        v13 = Pool2;
        if ( Pool2 )
        {
          v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, Pool2, Length, &Length);
          if ( v9 >= 0 )
          {
            SourceString.Buffer = v13 + 8;
            SourceString.Length = v13[6];
            SourceString.MaximumLength = v13[6] + 2;
            v9 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v9 >= 0 )
            {
              if ( !a4 )
                goto LABEL_24;
              MaximumLength = DestinationString.MaximumLength;
              if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                v9 = -1073741789;
              else
                memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
              *a4 = MaximumLength;
              if ( v9 >= 0 )
              {
LABEL_24:
                if ( a5 )
                  v9 = OSOpenHandle(DestinationString.Buffer);
              }
              RtlFreeAnsiString(&DestinationString);
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(ResultLengtha) = v9;
              WPP_RECORDER_SF_D(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0xFu,
                (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
                ResultLengtha);
            }
          }
          ExFreePoolWithTag(v13, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(ResultLength) = Length;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0xEu,
            (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
            ResultLength);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v9;
}
