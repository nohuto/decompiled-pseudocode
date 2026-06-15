/*
 * XREFs of ?Attach@?$CCrossProcessClientMemory@UControlData_V0@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015CC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18006E470 (-Attach@CCrossProcessBaseMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 */

__int64 __fastcall CCrossProcessClientMemory<ControlData_V0>::Attach(CCrossProcessBaseMemory *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 != 1 )
  {
    v2 = -2147024809;
    v3 = 26LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = CCrossProcessBaseMemory::Attach(a1, (struct STANDARD_CROSSPROCESS_MEMORY *)(a2 + 8));
  if ( v2 < 0 )
  {
    v3 = 27LL;
    goto LABEL_3;
  }
  return 0LL;
}
