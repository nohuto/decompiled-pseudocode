/*
 * XREFs of ?IsServerNameEqual@Details@WRL@Microsoft@@YA_NPEBUCreatorMap@123@PEBG@Z @ 0x1800CD9EC
 * Callers:
 *     ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x180008988 (--$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x1800A608C (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??$GetActivationFactory@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800CB448 (--$GetActivationFactory@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800CEB5C (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800CEE1C (-UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Details::IsServerNameEqual(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap *a2,
        const unsigned __int16 *a3)
{
  const struct Microsoft::WRL::Details::CreatorMap *v3; // rax
  char *v4; // rdx
  int v5; // r8d
  int v6; // ecx

  if ( a2 )
  {
    v3 = (const struct Microsoft::WRL::Details::CreatorMap *)*((_QWORD *)this + 4);
    if ( v3 )
    {
      v4 = (char *)(a2 - v3);
      do
      {
        v5 = *(unsigned __int16 *)&v4[(_QWORD)v3];
        v6 = *(unsigned __int16 *)v3 - v5;
        if ( v6 )
          break;
        v3 = (const struct Microsoft::WRL::Details::CreatorMap *)((char *)v3 + 2);
      }
      while ( v5 );
      LOBYTE(v3) = v6 == 0;
    }
  }
  else
  {
    LOBYTE(v3) = 1;
  }
  return (char)v3;
}
