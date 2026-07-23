/*
 * XREFs of PopPlInitWString @ 0x1407650DC
 * Callers:
 *     PopPlInitDevice @ 0x140764D64 (PopPlInitDevice.c)
 *     PopPlInitPowerPlane @ 0x140764FE8 (PopPlInitPowerPlane.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCchCopyStringN @ 0x1405DA1C0 (RtlUnicodeStringCchCopyStringN.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitWString(PUNICODE_STRING DestinationString, unsigned int a2, __int64 a3, __int64 a4)
{
  const wchar_t *v5; // rsi
  NTSTATUS v6; // ebx
  size_t v7; // rbx
  ULONG_PTR v8; // rdx
  wchar_t *Pool2; // rax
  size_t cchToCopy; // [rsp+40h] [rbp+18h] BYREF

  v5 = (const wchar_t *)(a3 + a2);
  *DestinationString = 0LL;
  cchToCopy = 0LL;
  v6 = RtlStringCchLengthW(v5, a4 - (_QWORD)v5, &cchToCopy);
  if ( v6 >= 0 )
  {
    v7 = cchToCopy;
    if ( cchToCopy <= 0x7FFF )
    {
      if ( cchToCopy )
      {
        v8 = 2 * cchToCopy;
        DestinationString->MaximumLength = 2 * cchToCopy;
        Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, v8, 0x6C506F50u);
        DestinationString->Buffer = Pool2;
        if ( Pool2 )
        {
          v6 = RtlUnicodeStringCchCopyStringN(DestinationString, v5, v7);
          if ( v6 < 0 )
          {
            ExFreePoolWithTag(DestinationString->Buffer, 0x6C506F50u);
            *DestinationString = 0LL;
          }
        }
        else
        {
          DestinationString->MaximumLength = 0;
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  return (unsigned int)v6;
}
