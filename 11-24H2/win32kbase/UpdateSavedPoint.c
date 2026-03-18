/*
 * XREFs of UpdateSavedPoint @ 0x140213840
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140060F70 (_anonymous_namespace_--GetMouseProcessor.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400951D0 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 */

__int64 __fastcall UpdateSavedPoint(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  result = anonymous_namespace_::GetMouseProcessor(a1);
  v3 = result;
  if ( result )
  {
    *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v2) + 19928) + 4952LL) = 0LL;
    v4 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(v7);
    v5 = (unsigned int)v4[2];
    *(_QWORD *)(v3 + 44) = *(_QWORD *)v4;
    *(_DWORD *)(v3 + 52) = v5;
    result = W32GetUserSessionState(v5);
    v6 = *(_QWORD *)(result + 19240);
    *(_QWORD *)(v3 + 3676) = 0LL;
    *(_QWORD *)(v3 + 3668) = v6;
  }
  return result;
}
