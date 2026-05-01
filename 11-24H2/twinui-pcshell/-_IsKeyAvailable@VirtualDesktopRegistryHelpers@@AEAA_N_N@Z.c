/*
 * XREFs of ?_IsKeyAvailable@VirtualDesktopRegistryHelpers@@AEAA_N_N@Z @ 0x18021E508
 * Callers:
 *     ?AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x18054EB90 (-AddKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z.c)
 *     ?EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@@Z @ 0x18054EC20 (-EnumKeys@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBGAEAV-$vector@V-$basic_string@GU-$char_traits.c)
 *     ?RemoveKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z @ 0x18054EEF0 (-RemoveKey@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG@Z.c)
 *     ?RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z @ 0x18054EF40 (-RemoveValue@VirtualDesktopRegistryHelpers@@UEAAJ_NPEBG1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VirtualDesktopRegistryHelpers::_IsKeyAvailable(VirtualDesktopRegistryHelpers *this, char a2)
{
  if ( a2 )
  {
    if ( *((_QWORD *)this + 3) )
      return 1;
  }
  else if ( *((_QWORD *)this + 2) )
  {
    return 1;
  }
  return 0;
}
