/*
 * XREFs of FilterConvertToString @ 0x140824AB0
 * Callers:
 *     PiDqTraceQueryCreate @ 0x1409F2944 (PiDqTraceQueryCreate.c)
 * Callees:
 *     Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline @ 0x14069D49C (Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline.c)
 *     ExpressionConvertToString @ 0x140AB9C18 (ExpressionConvertToString.c)
 */

__int64 __fastcall FilterConvertToString(unsigned int a1, __int64 a2, unsigned int a3, _WORD *a4, unsigned int *a5)
{
  _WORD *v5; // rsi
  unsigned int v6; // edi
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  int IsEnabledDeviceUsageNoInline; // eax
  _WORD *v13; // r8
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v16 = 0;
  v10 = 2;
  if ( a3 >= 2 )
    *a4 = 0;
  v11 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      IsEnabledDeviceUsageNoInline = Feature_DeviceFilter_FilterConvertToString__private_IsEnabledDeviceUsageNoInline();
      v13 = v5;
      if ( IsEnabledDeviceUsageNoInline && !v6 )
        v13 = 0LL;
      v14 = ExpressionConvertToString(a2 + 56LL * v11, v6, v13, &v16);
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
        break;
      if ( v10 + v16 - 2 < v10 )
        return (unsigned int)-1073741675;
      v10 += v16 - 2;
      if ( v6 >= (unsigned __int64)v16 - 2 )
      {
        v6 += 2 - v16;
        v5 += ((unsigned __int64)v16 - 2) >> 1;
      }
      if ( ++v11 >= a1 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v14 = 0;
    if ( a5 )
      *a5 = v10;
    if ( v10 > a3 )
      return (unsigned int)-1073741789;
  }
  return v14;
}
