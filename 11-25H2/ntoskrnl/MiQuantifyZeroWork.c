/*
 * XREFs of MiQuantifyZeroWork @ 0x140418350
 * Callers:
 *     MiInitializeZeroGroup @ 0x1404180BC (MiInitializeZeroGroup.c)
 * Callees:
 *     MiComputeSoloZeroingTime @ 0x1404184A8 (MiComputeSoloZeroingTime.c)
 */

_DWORD *__fastcall MiQuantifyZeroWork(__int64 a1)
{
  _DWORD *result; // rax
  int v3; // edx
  unsigned int i; // ecx

  result = (_DWORD *)MiComputeSoloZeroingTime();
  if ( (unsigned __int64)result <= 0x1388 )
  {
    v3 = 0;
    result = (_DWORD *)(a1 + 96);
    for ( i = 0; i < 3; ++i )
    {
      if ( v3 )
      {
        *result = 0;
      }
      else if ( *result )
      {
        *result = 1;
        v3 = 1;
      }
      ++result;
    }
  }
  return result;
}
