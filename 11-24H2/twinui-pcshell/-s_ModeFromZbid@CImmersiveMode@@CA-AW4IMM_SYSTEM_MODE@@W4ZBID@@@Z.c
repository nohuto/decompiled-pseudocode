/*
 * XREFs of ?s_ModeFromZbid@CImmersiveMode@@CA?AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z @ 0x1801BC64C
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180043F60 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveMode::s_ModeFromZbid(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  v1 = -1;
  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 7;
    if ( !v4 )
      return 1;
    v5 = v4 - 2;
    if ( !v5 || v5 == 2 )
      return 1;
  }
  else
  {
    return 0;
  }
  return v1;
}
