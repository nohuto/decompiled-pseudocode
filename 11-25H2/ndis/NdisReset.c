/*
 * XREFs of NdisReset @ 0x1400A4E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisReset(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *a1 = -2147418111;
  result = *(_QWORD *)(a2 + 24);
  if ( *(_BYTE *)(result + 56) < 6u )
  {
    result = *(_QWORD *)(a2 + 176);
    if ( result )
    {
      result = ((__int64 (__fastcall *)(__int64))result)(a2);
      *a1 = result;
    }
  }
  return result;
}
