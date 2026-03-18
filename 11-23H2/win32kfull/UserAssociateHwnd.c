/*
 * XREFs of UserAssociateHwnd @ 0x1C01BD530
 * Callers:
 *     EngCreateWnd @ 0x1C0287260 (EngCreateWnd.c)
 *     EngDeleteWnd @ 0x1C02876F0 (EngDeleteWnd.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C003C0AC (InternalSetProp.c)
 */

__int64 __fastcall UserAssociateHwnd(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax

  v3 = 0;
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( a2 )
    {
      if ( (unsigned int)InternalSetProp(v4, (unsigned __int16)atomWndObj, a2, 5u) )
      {
        ++WPP_MAIN_CB.AlignmentRequirement;
        return 1;
      }
    }
    else if ( InternalRemoveProp(v4, (unsigned __int16)atomWndObj, 1u) )
    {
      --WPP_MAIN_CB.AlignmentRequirement;
      return 1;
    }
  }
  return v3;
}
