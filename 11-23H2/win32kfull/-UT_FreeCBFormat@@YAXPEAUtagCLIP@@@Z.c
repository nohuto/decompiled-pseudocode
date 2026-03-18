/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01FBE64
 * Callers:
 *     xxxEmptyClipboard @ 0x1C009AC2C (xxxEmptyClipboard.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01FB874 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FC5DC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FC768 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FC900 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FCAB0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     GreDeleteServerMetaFile @ 0x1C02D2218 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    return;
  switch ( *(_DWORD *)a1 )
  {
    case 2:
      goto LABEL_17;
    case 3:
      goto LABEL_15;
    case 9:
      goto LABEL_17;
    case 0xE:
LABEL_15:
      if ( (unsigned __int64)(v2 - 3) > 1 )
        GreDeleteServerMetaFile(v2);
      return;
    case 0x80:
      if ( !*((_DWORD *)a1 + 4) )
        return;
      goto LABEL_11;
  }
  if ( *(_DWORD *)a1 != 130 )
  {
    if ( *(_DWORD *)a1 != 131 && *(_DWORD *)a1 != 142 )
    {
      if ( (unsigned __int64)(v2 - 1) <= 1 )
        return;
LABEL_11:
      v3 = HMValidateHandleNoSecure(v2, 6);
      if ( v3 )
        HMUnlockDestroyObject(v3);
      return;
    }
    goto LABEL_15;
  }
LABEL_17:
  if ( v2 != 2 )
    GreDeleteObject(v2);
}
