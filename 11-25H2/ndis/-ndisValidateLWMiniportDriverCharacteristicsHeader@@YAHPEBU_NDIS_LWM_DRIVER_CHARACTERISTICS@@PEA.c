/*
 * XREFs of ?ndisValidateLWMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_LWM_DRIVER_CHARACTERISTICS@@PEAE@Z @ 0x140142AA0
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x14009CE60 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1400A2058 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1400A21D0 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateLWMiniportDriverCharacteristicsHeader(
        const struct _NDIS_LWM_DRIVER_CHARACTERISTICS *a1,
        unsigned __int8 *a2)
{
  const struct _GUID *v2; // r8
  int v3; // r11d
  const struct _GUID *v5; // rdx
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-58h]

  v2 = (const struct _GUID *)&unk_1401017A0;
  v3 = *((unsigned __int8 *)a1 + 5);
  while ( 1 )
  {
    v5 = &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids;
    if ( v2 == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      break;
    if ( (v3 | (*((unsigned __int8 *)a1 + 4) << 16)) == v2->Data1 )
    {
      LOBYTE(v5) = v2->Data2;
      if ( HIBYTE(v2->Data2) == 1 )
      {
        v6 = *(unsigned __int8 *)a1;
        if ( (_BYTE)v6 == 0xC7 && *((_WORD *)a1 + 1) >= 0x78u && *((_BYTE *)a1 + 1) )
        {
          *a2 = (unsigned __int8)v5;
          return 0LL;
        }
        else
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)v5, v6, 0xFu, v8);
          return 3221291013LL;
        }
      }
      break;
    }
    v2 = (const struct _GUID *)((char *)v2 + 8);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)v5,
      (__int64)v2,
      0xEu,
      v8,
      *((_BYTE *)a1 + 4),
      v3,
      (unsigned __int16 *)a1 + 8);
  return 3221291012LL;
}
