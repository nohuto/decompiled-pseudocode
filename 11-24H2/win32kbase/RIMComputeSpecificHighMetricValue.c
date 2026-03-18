/*
 * XREFs of RIMComputeSpecificHighMetricValue @ 0x140150B60
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1401DDEA4 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMComputePower @ 0x140152BCC (RIMComputePower.c)
 */

__int64 __fastcall RIMComputeSpecificHighMetricValue(int a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // r8
  unsigned int v4; // r9d
  unsigned __int16 *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // eax
  int v9; // r11d
  __int16 v10; // cx
  int v11; // r9d
  int v12; // r9d
  __int64 result; // rax

  v2 = -a1;
  v3 = 0LL;
  v4 = 0;
  v5 = word_140265D18;
  if ( a1 >= 0 )
    v2 = a1;
  v6 = (unsigned int)a1 >> 31;
  do
  {
    if ( *(_BYTE *)v5 == (*(_BYTE *)(a2 + 32) & 0xF) )
      break;
    v3 = (unsigned int)(v3 + 1);
    v5 += 2;
  }
  while ( (unsigned int)v3 < 0xB );
  v7 = *(_DWORD *)(a2 + 36) & 0xF;
  if ( (unsigned int)v7 < 5 && (unsigned int)(dword_14026F8B8[v7] - 1) <= 1 && (unsigned int)v3 < 0xB )
  {
    v8 = RIMComputePower(word_140265D18[2 * (unsigned int)v3 + 1], a2, v3, 0LL);
    if ( v10 >= 0 )
    {
      v12 = 2540;
      if ( v9 != 1 )
        v12 = 1000;
      v4 = v8 * v2 * v12;
    }
    else if ( v8 )
    {
      v11 = 2540;
      if ( v9 != 1 )
        v11 = 1000;
      v4 = v2 * v11 / v8;
    }
  }
  result = -v4;
  if ( !(_BYTE)v6 )
    return v4;
  return result;
}
