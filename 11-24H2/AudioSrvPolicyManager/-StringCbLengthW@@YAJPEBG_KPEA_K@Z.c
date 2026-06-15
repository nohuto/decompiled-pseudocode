/*
 * XREFs of ?StringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x18003EA00
 * Callers:
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18000FE10 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ @ 0x180016BF0 (-LoadPropertyStore@CAudioSessionPropertyStore@@AEAAJXZ.c)
 *     ?GetNotificationDataSize@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEA_K@Z @ 0x18003E3B4 (-GetNotificationDataSize@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@.c)
 *     ?SetNotificationData@@YAJAEBV?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@PEAE_K@Z @ 0x18003E874 (-SetNotificationData@@YAJAEBV-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@st.c)
 *     _lambda_27a4ba88670a0d404d45da27056d59bf_::operator() @ 0x180041F78 (_lambda_27a4ba88670a0d404d45da27056d59bf_--operator().c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x1800465CC (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -2147024809;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
