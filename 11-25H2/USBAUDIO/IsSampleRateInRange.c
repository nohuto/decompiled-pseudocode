/*
 * XREFs of IsSampleRateInRange @ 0x14003B9F4
 * Callers:
 *     PropertyGetSetSampleRate @ 0x140032FE0 (PropertyGetSetSampleRate.c)
 *     PinValidateDataFormat @ 0x14003B868 (PinValidateDataFormat.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsSampleRateInRange(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r11d
  bool result; // al
  __int64 v4; // rbx

  v2 = *(_DWORD *)(a1 + 108);
  result = 0;
  if ( v2 )
  {
    v4 = 0LL;
    do
    {
      if ( result )
        break;
      result = a2 == *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * v4);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v2 );
  }
  else if ( a2 >= *(_DWORD *)(a1 + 76) && a2 <= *(_DWORD *)(a1 + 80) )
  {
    return 1;
  }
  return result;
}
