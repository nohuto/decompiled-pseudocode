/*
 * XREFs of ?HasMsAppXUriScheme@Common@ShellMRTHelper@@YA_NPEAUHSTRING__@@@Z @ 0x1802C84A8
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1800661EC (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1802B9438 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellMRTHelper::Common::HasMsAppXUriScheme(ShellMRTHelper::Common *this, HSTRING a2)
{
  const WCHAR *StringRawBuffer; // rax
  char v3; // bl
  UINT32 length; // [rsp+48h] [rbp+10h] BYREF

  length = 0;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)this, &length);
  if ( length < 8 )
    return 0;
  v3 = 1;
  if ( CompareStringOrdinal(StringRawBuffer, 8, L"ms-appx:", 8, 1) != 2 )
    return 0;
  return v3;
}
