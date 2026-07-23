/*
 * XREFs of PopBcdEstablishResumeObject @ 0x1407538EC
 * Callers:
 *     PoInitHiberServices @ 0x14073CB14 (PoInitHiberServices.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline @ 0x1405CE8F0 (Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopBcdCopyLoaderObjectSettings @ 0x1407537F4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 *     BcdQueryObject @ 0x14080266C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A24DD4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(HANDLE BcdStoreHandle, _QWORD *a2)
{
  HANDLE v3; // rdi
  NTSTATUS ElementData; // ebx
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
  BcdObjectHandle = 0LL;
  Buffer = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  ElementData = BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle);
  if ( ElementData < 0 )
    goto LABEL_19;
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
          ElementData = BcdGetElementData(v3, 0x26000003u, v9, &BufferSize);
          if ( ElementData < 0 || !LOBYTE(v9[0]) )
            ElementData = PopBcdSetDefaultResumeObjectElements(v3, BcdObjectHandle);
          goto LABEL_19;
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
    ElementData = 0;
  else
    v3 = 0LL;
LABEL_19:
  if ( (unsigned int)Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline() && ElementData >= 0 )
    ElementData = PopBcdCopyLoaderObjectSettings(BcdObjectHandle, v3);
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( ElementData < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementData;
LABEL_28:
    BcdCloseObject(v3);
    return (unsigned int)ElementData;
  }
  if ( !a2 )
    goto LABEL_28;
  *a2 = v3;
  return (unsigned int)ElementData;
}
