/*
 * XREFs of InitCounterGroupAps @ 0x140B4EC38
 * Callers:
 *     DefaultInitializeProfilingEnhanced @ 0x140B4EA88 (DefaultInitializeProfilingEnhanced.c)
 *     DefaultInitializeProfilingOriginal @ 0x140B4EB50 (DefaultInitializeProfilingOriginal.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledDeviceUsageNoInline @ 0x1404F3F38 (Feature_Test52061194__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InitCounterGroupAps(int a1, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(KiProcessorBlock[0] + 88);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v2 += 24LL;
        break;
      case 100:
        v2 += 48LL;
        break;
      case 101:
        v2 += 72LL;
        break;
      default:
        v2 = 0LL;
        break;
    }
  }
  v3 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 99;
      if ( v5 )
      {
        if ( v5 == 1 )
          v3 += 72LL;
        else
          v3 = 0LL;
      }
      else
      {
        v3 += 48LL;
      }
    }
    else
    {
      v3 += 24LL;
    }
  }
  *(_DWORD *)v3 = *(_DWORD *)v2;
  *(_DWORD *)(v3 + 4) = *(_DWORD *)(v2 + 4);
  if ( (unsigned int)Feature_Test52061194__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(v2 + 8);
  result = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
