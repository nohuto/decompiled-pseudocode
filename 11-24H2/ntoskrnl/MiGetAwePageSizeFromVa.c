/*
 * XREFs of MiGetAwePageSizeFromVa @ 0x140682524
 * Callers:
 *     MmSetGraphicsPtes @ 0x1407EB910 (MmSetGraphicsPtes.c)
 * Callees:
 *     MiGetAweViewPageSize @ 0x1404BA0FC (MiGetAweViewPageSize.c)
 *     MiGetAweNode @ 0x1404F51EC (MiGetAweNode.c)
 */

__int64 __fastcall MiGetAwePageSizeFromVa(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r11
  __int64 v3; // rdx

  result = (__int64)MiGetAweNode(a1);
  if ( result )
  {
    result = MiGetAweViewPageSize(result);
    if ( !result )
    {
      v3 = *(_QWORD *)(v2 + 32);
      if ( (*(_DWORD *)(v3 + 8) & 1) == 0 )
        return *(_QWORD *)(v3 + 16);
    }
  }
  return result;
}
