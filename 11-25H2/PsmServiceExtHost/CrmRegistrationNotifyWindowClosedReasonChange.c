/*
 * XREFs of CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FED8
 * Callers:
 *     CrmActivityStart @ 0x18002D920 (CrmActivityStart.c)
 *     CrmActivityUpdate @ 0x18002E120 (CrmActivityUpdate.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030BB0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     CrmLogRegistrationNotifyWindowClosedReasonChange @ 0x180030910 (CrmLogRegistrationNotifyWindowClosedReasonChange.c)
 *     Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline @ 0x18006FF04 (Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CrmRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2)
{
  int *v2; // rbx
  bool v4; // zf
  unsigned int v6; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  int v12; // [rsp+48h] [rbp+18h] BYREF

  v2 = 0LL;
  v4 = *(_DWORD *)(a2 + 64) == 17;
  v12 = 0;
  if ( !v4 )
  {
    v6 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 152), 0LL, 0LL, 0LL, 0LL);
    return CrmLogRegistrationNotifyWindowClosedReasonChange(a1, a2, v2, v6);
  }
  v8 = 511;
  v12 = 511;
  if ( *(_DWORD *)(a2 + 108) )
  {
    v9 = *(_QWORD *)(a2 + 112);
    v10 = *(unsigned int *)(a2 + 108);
    v11 = (_DWORD *)(v9 + 32);
    do
    {
      if ( v11[4] )
      {
        switch ( *v11 )
        {
          case 7:
            v8 &= ~1u;
            break;
          case 9:
            v8 &= ~2u;
            break;
          case 0x10:
            v8 &= ~4u;
            break;
          case 0x13:
            v8 &= ~8u;
            break;
          case 0x14:
            v8 &= ~0x10u;
            break;
          case 0x15:
            v8 &= ~0x20u;
            break;
          case 0x16:
            v8 &= ~0x40u;
            break;
          case 0x1A:
            v8 &= ~0x80u;
            break;
          case 0x2A:
            v8 &= ~0x100u;
            break;
          default:
            goto LABEL_18;
        }
        v12 = v8;
      }
LABEL_18:
      v11 += 14;
      --v10;
    }
    while ( v10 );
  }
  if ( !(unsigned int)Feature_CrmDeveloperQuietMode__private_IsEnabledDeviceUsageNoInline() )
    v12 &= ~0x100u;
  v6 = RtlPublishWnfStateData(*(_QWORD *)(a2 + 152), 0LL, &v12, 4LL, 0LL);
  v2 = &v12;
  return CrmLogRegistrationNotifyWindowClosedReasonChange(a1, a2, v2, v6);
}
