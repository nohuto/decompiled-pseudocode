/*
 * XREFs of PopBcdEstablishResumeObject @ 0x140762D7C
 * Callers:
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x140762C84 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 *     BcdQueryObject @ 0x140812924 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(HANDLE BcdStoreHandle, _QWORD *a2)
{
  HANDLE v3; // rbx
  NTSTATUS ElementData; // edi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  _WORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  ULONG BufferSize; // [rsp+24h] [rbp-3Ch] BYREF
  HANDLE BcdObjectHandle; // [rsp+28h] [rbp-38h] BYREF
  HANDLE v12; // [rsp+30h] [rbp-30h] BYREF
  BCD_OBJECT_DESCRIPTION Description; // [rsp+38h] [rbp-28h] BYREF
  GUID Buffer; // [rsp+40h] [rbp-20h] BYREF

  v9[0] = 0;
  Description = 0LL;
  v3 = 0LL;
  BcdObjectHandle = 0LL;
  v12 = 0LL;
  Buffer = 0LL;
  ElementData = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
  if ( ElementData >= 0 )
  {
    BufferSize = 16;
    ElementData = BcdGetElementData(BcdObjectHandle, 0x23000003u, &Buffer, &BufferSize);
    if ( ElementData >= 0 )
    {
      v6 = BcdOpenObject(BcdStoreHandle, &Buffer, &v12);
      v3 = v12;
      ElementData = v6;
      if ( v6 >= 0 )
      {
        ElementData = BcdQueryObject(v12, 1u, (BCD_OBJECT_DESCRIPTION)&Description, 0LL);
        if ( ElementData >= 0 )
        {
          if ( (Description.Type & 0xF0000000) == 0x10000000
            && (Description.Type & 0xF00000) == 0x200000
            && (Description.Type & 0xFFFFF) == 4 )
          {
            BufferSize = 2;
            if ( BcdGetElementData(v3, 0x26000003u, v9, &BufferSize) < 0 || !LOBYTE(v9[0]) )
            {
              ElementData = PopBcdSetDefaultResumeObjectElements(v3, BcdObjectHandle);
              if ( ElementData < 0 )
                goto LABEL_12;
            }
            goto LABEL_11;
          }
          ElementData = -1073741275;
        }
      }
      if ( v3 )
      {
        BcdCloseObject(v3);
        v3 = 0LL;
        v12 = 0LL;
      }
    }
    if ( !InitIsWinPEMode )
    {
      v7 = PopBcdRegenerateResumeObject(BcdStoreHandle, BcdObjectHandle, &v12);
      v3 = v12;
      ElementData = v7;
    }
    if ( ElementData >= 0 )
    {
LABEL_11:
      ElementData = PopBcdCopyLoaderObjectSettings(BcdObjectHandle, v3);
      goto LABEL_12;
    }
    v3 = 0LL;
  }
LABEL_12:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( ElementData < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementData;
LABEL_25:
    BcdCloseObject(v3);
    return (unsigned int)ElementData;
  }
  if ( !a2 )
    goto LABEL_25;
  *a2 = v3;
  return (unsigned int)ElementData;
}
