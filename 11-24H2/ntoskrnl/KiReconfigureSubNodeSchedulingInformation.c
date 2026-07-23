/*
 * XREFs of KiReconfigureSubNodeSchedulingInformation @ 0x1405B473C
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x140B59640 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiRegisterProcessorWithCooperativeIdleSearchContext @ 0x1405C51A4 (KiRegisterProcessorWithCooperativeIdleSearchContext.c)
 */

__int64 __fastcall KiReconfigureSubNodeSchedulingInformation(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8

  *(_QWORD *)(a1 + 160) |= a2[25];
  qword_140FC8870[4 * *(unsigned __int16 *)(a1 + 136)] |= a2[25];
  v3 = *(_QWORD *)(a1 + 168);
  if ( (v3 & a2[4558]) == 0 )
    *(_QWORD *)(a1 + 168) = a2[25] | v3;
  *(_QWORD *)(a1 + 152) |= a2[4552];
  result = a2[25];
  if ( a2[4556] != result )
    *(_BYTE *)(a1 + 184) |= 1u;
  v5 = 0;
  v6 = a2 + 4739;
  do
  {
    v7 = *(v6 - 2);
    if ( !v7 )
      break;
    v8 = v6[2];
    *v6 = v7;
    result = KiRegisterProcessorWithCooperativeIdleSearchContext(v7, a2, v8);
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  return result;
}
