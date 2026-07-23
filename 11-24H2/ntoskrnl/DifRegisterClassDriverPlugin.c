/*
 * XREFs of DifRegisterClassDriverPlugin @ 0x14060E2B0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetNode @ 0x1403E3D54 (VfTargetDriversGetNode.c)
 *     ViAddVerifierSpecialThunks @ 0x14060E8EC (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14060EA0C (ViAddVerifierThunks.c)
 */

__int64 __fastcall DifRegisterClassDriverPlugin(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 Node; // rax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( !(_DWORD)VfRuleClasses )
    return 3221228660LL;
  if ( !a2 )
    return 3221225485LL;
  Node = VfTargetDriversGetNode(retaddr);
  if ( !Node )
    return 3221228660LL;
  v10 = *(_DWORD *)(Node + 56);
  if ( !v10 )
    return 3221228660LL;
  if ( v10 != a1 )
    return 3221228660LL;
  if ( v10 >= 0x40 )
    return 3221228660LL;
  v11 = v10 & 0x1F;
  v12 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)v10 >> 5));
  if ( !_bittest(&v12, v11) )
    return 3221228660LL;
  if ( a4 )
    return ViAddVerifierSpecialThunks(a4, a2, a3);
  return ViAddVerifierThunks(a2, a3);
}
