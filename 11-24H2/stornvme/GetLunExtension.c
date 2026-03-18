/*
 * XREFs of GetLunExtension @ 0x14000D4F0
 * Callers:
 *     NVMeMapError @ 0x1400097F0 (NVMeMapError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLunExtension(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 i; // r8

  if ( a2 != -1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      result = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( result && *(_DWORD *)(result + 16) == a2 )
        return result;
    }
  }
  return 0LL;
}
