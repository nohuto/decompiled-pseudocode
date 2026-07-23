/*
 * XREFs of KiVerifyXcpt11 @ 0x140C2C8D0
 * Callers:
 *     <none>
 * Callees:
 *     KiVerifyXcptFilter @ 0x140C2CD40 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt11(__int64 a1)
{
  __int64 v1; // rdx
  int *v2; // r8
  int v3; // eax
  __int64 result; // rax

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    ++**(_DWORD **)a1;
    v2 = (int *)(a1 + 12);
    v3 = *(_DWORD *)(a1 + 12) + 12;
    *(_DWORD *)(a1 + 12) = v3;
    if ( v3 == 36 )
      KiVerifyXcptFilter(a1);
  }
  else
  {
    v2 = (int *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *v2;
  *(_QWORD *)(v1 + 24) += result;
  return result;
}
