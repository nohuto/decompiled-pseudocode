/*
 * XREFs of ?ShouldPowershellReplaceCmd@@YA_NXZ @ 0x1800686C8
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x180067CFC (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char ShouldPowershellReplaceCmd(void)
{
  char v0; // bl
  HANDLE CurrentProcess; // rax
  __int16 v3; // [rsp+30h] [rbp+8h] BYREF
  __int16 v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v4 = 0;
  v3 = 0;
  CurrentProcess = GetCurrentProcess();
  if ( (unsigned int)IsWow64Process2(CurrentProcess, &v4, &v3) && (v3 == 332 || v3 == -31132) )
    return 1;
  return v0;
}
