/*
 * XREFs of DrvDbGetCompositeMappedPropertyKeys @ 0x14082210C
 * Callers:
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140822180 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14082271C (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140822838 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140822954 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDbGetCompositeMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 i; // r11
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ecx

  result = 0LL;
  v7 = 0LL;
  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
  {
    if ( a4 )
    {
      if ( (unsigned int)v7 < a5 )
      {
        v10 = *(_QWORD *)(a2 + 8 * i);
        v11 = 5 * v7;
        v7 = (unsigned int)(v7 + 1);
        *(_OWORD *)(a4 + 4 * v11) = *(_OWORD *)v10;
        *(_DWORD *)(a4 + 4 * v11 + 16) = *(_DWORD *)(v10 + 16);
      }
    }
    v12 = *a6 + 1;
    if ( v12 < *a6 )
    {
      *a6 = 0;
      return 3221225621LL;
    }
    result = 0LL;
    *a6 = v12;
  }
  return result;
}
