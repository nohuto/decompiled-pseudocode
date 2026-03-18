/*
 * XREFs of ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401E8E94
 * Callers:
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x14010454C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     xxxEmptyClipboard @ 0x1401E8D2C (xxxEmptyClipboard.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B24D8 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2678 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2A00 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?UT_GetFormatType@@YAHPEAUtagCLIP@@@Z @ 0x1401E8F20 (-UT_GetFormatType@@YAHPEAUtagCLIP@@@Z.c)
 *     GreDeleteServerMetaFile @ 0x14025B104 (GreDeleteServerMetaFile.c)
 */

void __fastcall UT_FreeCBFormat(struct tagCLIP *a1)
{
  int FormatType; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax

  if ( *((_QWORD *)a1 + 1) )
  {
    FormatType = UT_GetFormatType(a1);
    if ( !FormatType )
    {
      if ( !*(_DWORD *)(v3 + 16) )
        return;
      goto LABEL_13;
    }
    v5 = FormatType - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
      {
        if ( (unsigned __int64)(v4 - 1) <= 1 )
          return;
LABEL_13:
        LOBYTE(v2) = 6;
        v7 = HMValidateHandleNoSecure(v4, v2);
        if ( v7 )
          HMUnlockDestroyObject(v7);
        return;
      }
      if ( v6 == 1 && (unsigned __int64)(v4 - 3) > 1 )
        GreDeleteServerMetaFile(v4);
    }
    else if ( v4 != 2 )
    {
      GreDeleteObject(v4);
    }
  }
}
