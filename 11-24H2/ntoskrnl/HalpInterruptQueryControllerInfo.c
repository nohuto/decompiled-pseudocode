/*
 * XREFs of HalpInterruptQueryControllerInfo @ 0x1406FB570
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6CB90 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpInterruptModel @ 0x1403744A8 (HalpInterruptModel.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404A7B00 (HalpInterruptIsRemappingRequired.c)
 */

__int64 __fastcall HalpInterruptQueryControllerInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rdx
  int v5; // r8d
  _DWORD *v6; // r10

  *a3 = 0;
  if ( a1 >= 4 )
  {
    *a2 = 0;
    v5 = HalpInterruptModel();
    if ( (unsigned int)(v5 - 2) <= 1
      || v5 == 1 && ((*v4 = 1, qword_140FC1148 != v3) || HalpInterruptIsRemappingRequired()) )
    {
      *v4 = 3;
    }
    *v6 = 4;
  }
  else
  {
    LODWORD(v3) = -1073741789;
  }
  return (unsigned int)v3;
}
