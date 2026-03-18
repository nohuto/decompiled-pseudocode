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

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int ElementData; // ebx
  int v6; // eax
  int v7; // eax
  _WORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF

  v9[0] = 0;
  v13 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &v11);
  if ( ElementData < 0 )
    goto LABEL_19;
  v10 = 16;
  ElementData = BcdGetElementData(v11, 587202563LL, &v14, &v10);
  if ( ElementData >= 0 )
  {
    v6 = BcdOpenObject(a1, &v14, &v12);
    v3 = v12;
    ElementData = v6;
    if ( v6 >= 0 )
    {
      ElementData = BcdQueryObject(v12, 1LL, &v13, 0LL);
      if ( ElementData >= 0 )
      {
        if ( (HIDWORD(v13) & 0xF0000000) == 0x10000000
          && (HIDWORD(v13) & 0xF00000) == 0x200000
          && (HIDWORD(v13) & 0xFFFFF) == 4 )
        {
          v10 = 2;
          ElementData = BcdGetElementData(v3, 637534211LL, v9, &v10);
          if ( ElementData < 0 || !LOBYTE(v9[0]) )
            ElementData = PopBcdSetDefaultResumeObjectElements(v3, v11);
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
    v7 = PopBcdRegenerateResumeObject(a1, v11, &v12);
    v3 = v12;
    ElementData = v7;
  }
  if ( ElementData >= 0 )
    ElementData = 0;
  else
    v3 = 0LL;
LABEL_19:
  if ( (unsigned int)Feature_Servicing_BCDHibernateSync__private_IsEnabledDeviceUsageNoInline() && ElementData >= 0 )
    ElementData = PopBcdCopyLoaderObjectSettings(v11, v3);
  if ( v11 )
    BcdCloseObject(v11);
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
