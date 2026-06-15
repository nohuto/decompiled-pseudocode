/*
 * XREFs of ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400236AC
 * Callers:
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400234C4 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140023838 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

__int64 __fastcall InnerGetAPOProperties(HKEY hKey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  HRESULT Common; // edx
  LSTATUS ValueW; // eax
  __int64 v8; // rcx
  APO_REG_PROPERTIES *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  IID v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  DWORD pcbData[4]; // [rsp+40h] [rbp-878h] BYREF
  APO_REG_PROPERTIES v23; // [rsp+50h] [rbp-868h] BYREF
  OLECHAR sz[512]; // [rsp+4A0h] [rbp-418h] BYREF

  memset_0(&v23, 0, sizeof(v23));
  Common = InnerGetCommon(hKey, a2, &v23);
  if ( Common >= 0 )
  {
    v23.u32NumAPOInterfaces = 1;
    pcbData[0] = 1024;
    ValueW = RegGetValueW(hKey, 0LL, L"APOInterface0", 2u, 0LL, sz, pcbData);
    Common = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        return (unsigned __int16)ValueW | 0x80070000;
    }
    else
    {
      Common = CLSIDFromString(sz, v23.iidAPOInterfaceList);
      if ( Common >= 0 )
      {
        v8 = 8LL;
        v9 = &v23;
        do
        {
          v10 = *(_OWORD *)&v9->Flags;
          a3->clsid = v9->clsid;
          v11 = *(_OWORD *)&v9->szFriendlyName[6];
          *(_OWORD *)&a3->Flags = v10;
          v12 = *(_OWORD *)&v9->szFriendlyName[14];
          *(_OWORD *)&a3->szFriendlyName[6] = v11;
          v13 = *(_OWORD *)&v9->szFriendlyName[22];
          *(_OWORD *)&a3->szFriendlyName[14] = v12;
          v14 = *(_OWORD *)&v9->szFriendlyName[30];
          *(_OWORD *)&a3->szFriendlyName[22] = v13;
          v15 = *(_OWORD *)&v9->szFriendlyName[38];
          *(_OWORD *)&a3->szFriendlyName[30] = v14;
          v16 = *(IID *)&v9->szFriendlyName[46];
          v9 = (APO_REG_PROPERTIES *)((char *)v9 + 128);
          *(_OWORD *)&a3->szFriendlyName[38] = v15;
          a3 = (struct APO_REG_PROPERTIES *)((char *)a3 + 128);
          a3[-1].iidAPOInterfaceList[0] = v16;
          --v8;
        }
        while ( v8 );
        v17 = *(_OWORD *)&v9->Flags;
        a3->clsid = v9->clsid;
        v18 = *(_OWORD *)&v9->szFriendlyName[6];
        *(_OWORD *)&a3->Flags = v17;
        v19 = *(_OWORD *)&v9->szFriendlyName[14];
        v20 = *(_DWORD *)&v9->szFriendlyName[22];
        *(_OWORD *)&a3->szFriendlyName[6] = v18;
        *(_OWORD *)&a3->szFriendlyName[14] = v19;
        *(_DWORD *)&a3->szFriendlyName[22] = v20;
      }
    }
  }
  return (unsigned int)Common;
}
