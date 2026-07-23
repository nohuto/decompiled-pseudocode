/*
 * XREFs of HalpIommuGetPageTableType @ 0x140551720
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x140550E04 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x140B4FAE0 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x140487890 (HalpGetCpuInfo.c)
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall HalpIommuGetPageTableType(char a1, int *a2)
{
  int v4; // ebx
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v6 = 0;
  if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v6) )
    return 3221225659LL;
  if ( v6 != 2 )
  {
    if ( v6 == 1 )
    {
      v4 = 2;
      if ( !a1 )
        v4 = 3;
      goto LABEL_10;
    }
    return 3221225659LL;
  }
  if ( !(unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a1 )
      goto LABEL_10;
    return 3221225659LL;
  }
  LOBYTE(v4) = a1 != 0;
LABEL_10:
  *a2 = v4;
  return 0LL;
}
