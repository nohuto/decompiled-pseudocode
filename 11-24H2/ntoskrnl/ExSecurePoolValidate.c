/*
 * XREFs of ExSecurePoolValidate @ 0x140656CB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolFromHandle @ 0x1404F37FC (ExpSecurePoolFromHandle.c)
 */

_BOOL8 __fastcall ExSecurePoolValidate(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned int v4; // r11d
  _BOOL8 result; // rax
  _QWORD *v6; // rdx

  v3 = ExpSecurePoolFromHandle(a1);
  result = 0LL;
  if ( v3 )
  {
    v6 = (_QWORD *)(v1 - 16);
    if ( v1 - 16 >= (unsigned __int64)SecurePoolBase && (unsigned __int64)v6 < SecurePoolEnd )
      return *v6 == (v2 ^ *(_QWORD *)(v3 + 8) ^ v4);
  }
  return result;
}
