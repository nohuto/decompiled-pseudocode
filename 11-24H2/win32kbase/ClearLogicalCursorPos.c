/*
 * XREFs of ClearLogicalCursorPos @ 0x1402125E0
 * Callers:
 *     InitLoadResources @ 0x14005548C (InitLoadResources.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400951D0 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 */

__int64 __fastcall ClearLogicalCursorPos(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  int v3; // ecx
  _DWORD v4[6]; // [rsp+20h] [rbp-18h] BYREF

  result = anonymous_namespace_::GetMouseProcessor(a1);
  v2 = result;
  if ( result )
  {
    result = (__int64)anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v4);
    v3 = *(_DWORD *)(result + 8);
    *(_QWORD *)(v2 + 44) = *(_QWORD *)result;
    *(_DWORD *)(v2 + 52) = v3;
  }
  return result;
}
