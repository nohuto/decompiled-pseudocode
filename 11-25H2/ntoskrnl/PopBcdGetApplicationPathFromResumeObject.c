/*
 * XREFs of PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0
 * Callers:
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14080266C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     PopBcdReadElement @ 0x140A25794 (PopBcdReadElement.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdGetApplicationPathFromResumeObject(HANDLE BcdStoreHandle, PUNICODE_STRING Destination)
{
  HANDLE v4; // rdi
  NTSTATUS ElementData; // ebx
  NTSTATUS v6; // eax
  wchar_t *Pool2; // rax
  HANDLE BcdObjectHandle; // [rsp+28h] [rbp-48h] BYREF
  ULONG BufferSize[4]; // [rsp+30h] [rbp-40h] BYREF
  HANDLE v11; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h]
  BCD_OBJECT_DESCRIPTION Description; // [rsp+50h] [rbp-20h] BYREF
  GUID Buffer; // [rsp+58h] [rbp-18h] BYREF

  Description = 0LL;
  P = 0LL;
  BufferSize[1] = 0;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  BufferSize[2] = 0;
  v11 = 0LL;
  Buffer = 0LL;
  if ( Destination )
  {
    ElementData = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
    if ( ElementData >= 0 )
    {
      BufferSize[0] = 16;
      ElementData = BcdGetElementData(BcdObjectHandle, 0x23000003u, &Buffer, BufferSize);
      if ( ElementData >= 0 )
      {
        v6 = BcdOpenObject(BcdStoreHandle, &Buffer, &v11);
        v4 = v11;
        ElementData = v6;
        if ( v6 >= 0 )
        {
          ElementData = BcdQueryObject(v11, 1u, (BCD_OBJECT_DESCRIPTION)&Description, 0LL);
          if ( ElementData >= 0 )
          {
            if ( (Description.Type & 0xF0000000) == 0x10000000
              && (Description.Type & 0xF00000) == 0x200000
              && (Description.Type & 0xFFFFF) == 4 )
            {
              ElementData = PopBcdReadElement(v4, 0x11000001u);
              if ( ElementData >= 0 )
              {
                ElementData = PopBcdReadElement(v4, 0x12000002u);
                if ( ElementData >= 0 )
                {
                  *(_DWORD *)&Destination->Length = 34078720;
                  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
                  Destination->Buffer = Pool2;
                  if ( Pool2 )
                  {
                    RtlAppendUnicodeToString(Destination, (PCWSTR)P + 10);
                    RtlAppendUnicodeToString(Destination, 0LL);
                  }
                  else
                  {
                    ElementData = -1073741670;
                  }
                }
              }
            }
            else
            {
              ElementData = -1073741275;
            }
          }
        }
      }
    }
    if ( BcdObjectHandle )
      BcdCloseObject(BcdObjectHandle);
    if ( v4 )
      BcdCloseObject(v4);
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)ElementData;
}
