/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x140017A7C
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x140018740 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x140064D84 (RaidAdapterTargetedRescan.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1400A1600 (RaidUpdateUnitIdentityWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14001A9E0 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x14002E230 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidRemoveTrailingBlanks @ 0x14003310C (RaidRemoveTrailingBlanks.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x140041298 (RaidBusEnumeratorProcessBusUnit.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 Pool; // rax
  int v14; // r8d
  unsigned int v15; // r8d
  char v16; // cl
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // eax
  char v28; // [rsp+28h] [rbp-D8h]
  char v29; // [rsp+28h] [rbp-D8h]
  char v30; // [rsp+28h] [rbp-D8h]
  _BYTE v31[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-C8h]
  _BYTE *v33; // [rsp+50h] [rbp-B0h]
  __int16 v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+98h] [rbp-68h]
  _OWORD v38[6]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  _QWORD *v41; // [rsp+120h] [rbp+20h]

  memset_0(v31, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v31);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids,
      v31[4],
      v31[5],
      v31[6]);
  }
  v5 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumInquiryCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v31,
         36,
         v28);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 < 0 )
    goto LABEL_58;
  v6 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumSupportedPagesCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v31,
         255,
         v29);
  v5 = v6;
  if ( v6 != -1073741801 && v6 != -1073741670 )
  {
    if ( (v31[0] & 1) == 0
      || (v7 = RaidBusEnumeratorGenericInquiry(
                 (unsigned int)&RaidEnumDeviceIdCallback,
                 (_DWORD)a1,
                 a2,
                 (unsigned int)v31,
                 255,
                 v30),
          v5 = v7,
          v7 != -1073741801)
      && v7 != -1073741670 )
    {
      if ( (v31[0] & 2) == 0
        || (v8 = RaidBusEnumeratorGenericInquiry(
                   (unsigned int)&RaidEnumSerialNumber,
                   (_DWORD)a1,
                   a2,
                   (unsigned int)v31,
                   255,
                   v30),
            v5 = v8,
            v8 != -1073741801)
        && v8 != -1073741670 )
      {
        if ( !DisableIEEE1667 && ((*v33 & 0x1F) == 0 || (*v33 & 0x1F) == 0x14) )
        {
          v9 = (unsigned __int8)v33[4];
          if ( (unsigned __int8)v9 >= 0x37u )
          {
            v10 = v9 + 5;
            if ( (unsigned __int64)(v9 + 5) > 0xFF )
              v10 = 255;
            RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumInquiry1667Callback,
              (_DWORD)a1,
              a2,
              (unsigned int)v31,
              v10,
              v30);
          }
        }
        if ( (v31[0] & 4) != 0 )
        {
          RaidBusEnumeratorGenericInquiry(
            (unsigned int)&RaidEnumAtaInformation,
            (_DWORD)a1,
            a2,
            (unsigned int)v31,
            572,
            v30);
LABEL_36:
          v16 = *v33 & 0x1F;
          if ( v16 == 20 )
          {
            v34 |= 2u;
          }
          else if ( !v16 && (v31[0] & 0x18) == 0x18 )
          {
            RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumBlockDeviceCharacteristics,
              (_DWORD)a1,
              a2,
              (unsigned int)v31,
              64,
              v30);
          }
          if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( v32 )
            {
              if ( NvmeIceList != &NvmeIceList )
              {
                if ( (unsigned __int8)RaidIsUnitControlSupported(v32, 16LL) )
                {
                  v17 = *a1;
                  v36 = 24LL;
                  v37 = (unsigned __int64)(v32 + 12);
                  v5 = RaCallMiniportUnitControl(v17 + 376, 16LL, &v36);
                  if ( v5 >= 0 )
                  {
                    v18 = *((_QWORD *)&v37 + 1);
                    v32[450] = *((_QWORD *)&v37 + 1);
                    if ( v18 )
                    {
                      v19 = *(_QWORD *)(v18 + 104);
                      if ( v19 )
                      {
                        v20 = v32[1];
                        if ( v20 )
                        {
                          v21 = *(unsigned __int8 *)(v19 + 5);
                          if ( v21 > *(_DWORD *)(v20 + 152) )
                            *(_DWORD *)(v20 + 152) = v21;
                          v22 = *(unsigned __int8 *)(*(_QWORD *)(v18 + 104) + 5LL);
                          v23 = v32[3];
                          if ( v22 > *(_DWORD *)(v23 + 432) )
                            *(_DWORD *)(v23 + 432) = v22;
                        }
                      }
                      v24 = *(_QWORD *)(v18 + 104);
                      if ( v24 )
                      {
                        v25 = *(_DWORD *)(v24 + 8);
                        if ( v25 )
                        {
                          v26 = v32[3];
                          v27 = *(_DWORD *)(v26 + 408);
                          if ( v27 >= v25 )
                            v27 = v25;
                          *(_DWORD *)(v26 + 408) = v27;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_58:
          RaidBusEnumeratorProcessBusUnit(a1, v31);
          goto LABEL_59;
        }
        if ( !v32 || !(unsigned __int8)RaidIsUnitControlSupported(v32, 11LL) )
          goto LABEL_36;
        memset_0((char *)v38 + 8, 0, 0x68uLL);
        v11 = *a1 + 376;
        v41 = v32 + 12;
        *(_QWORD *)&v38[0] = 0x7800000002LL;
        v5 = RaCallMiniportUnitControl(v11, 11LL, v38);
        if ( v5 < 0 )
        {
          v12 = *a1 + 376;
          *(_QWORD *)&v38[0] = 0x6C00000001LL;
          v5 = RaCallMiniportUnitControl(v12, 11LL, v38);
          if ( v5 < 0 )
          {
            v5 = 0;
            goto LABEL_36;
          }
        }
        Pool = RaidAllocatePool(64LL, 108LL, 842096978LL, *(_QWORD *)(*a1 + 8));
        v35 = Pool;
        if ( Pool )
        {
          *(_OWORD *)Pool = v38[0];
          *(_OWORD *)(Pool + 16) = v38[1];
          *(_OWORD *)(Pool + 32) = v38[2];
          *(_OWORD *)(Pool + 48) = v38[3];
          *(_OWORD *)(Pool + 64) = v38[4];
          *(_OWORD *)(Pool + 80) = v38[5];
          *(_QWORD *)(Pool + 96) = v39;
          *(_DWORD *)(Pool + 104) = v40;
          RaidRemoveTrailingBlanks(v35 + 8, 17LL);
          RaidRemoveTrailingBlanks(v35 + 25, (unsigned int)(v14 + 48));
          RaidRemoveTrailingBlanks(v35 + 90, v15);
          goto LABEL_36;
        }
        v5 = -1073741801;
      }
    }
  }
LABEL_59:
  RaidBusEnumeratorReleaseUnit(a1, v31);
  if ( v5 != -1073741801 && v5 != -1073741670 )
    return 0;
  return (unsigned int)v5;
}
