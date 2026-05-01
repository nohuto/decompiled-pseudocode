/*
 * XREFs of ?put_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180039330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IReference@H@Foundation@5@IAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180038958 (-_ValidateAndSetNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_MaxCpuCount(
        __int64 a1,
        __int64 a2)
{
  DWORD ActiveProcessorCount; // eax
  signed int LastError; // eax
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      return (unsigned int)v6;
    v7 = 561LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_ValidateAndSetNumericValue(
         a1,
         a2,
         ActiveProcessorCount - 1,
         (__int64 *)(a1 + 136));
  if ( v6 < 0 )
  {
    v7 = 564LL;
    goto LABEL_6;
  }
  return 0LL;
}
