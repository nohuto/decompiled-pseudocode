/*
 * XREFs of ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1401689A0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x140098308 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x140098480 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(
        const struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a1,
        unsigned int *a2)
{
  unsigned __int8 MajorNdisVersion; // r11
  const struct _GUID *v3; // r8
  int MinorNdisVersion; // ebx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const struct _GUID *)&unk_1400F7EE0;
  MinorNdisVersion = a1->MinorNdisVersion;
  *a2 = 0;
  while ( 1 )
  {
    if ( v3 == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      goto LABEL_16;
    if ( (MinorNdisVersion | (MajorNdisVersion << 16)) == v3->Data1 )
      break;
    v3 = (const struct _GUID *)((char *)v3 + 8);
  }
  if ( HIBYTE(v3->Data3) == 1 )
  {
    v5 = 120LL;
    goto LABEL_11;
  }
  if ( HIBYTE(v3->Data3) == 2 )
  {
    v5 = 128LL;
    if ( a1->Header.Type != 0x95 || a1->Header.Revision < 2u )
    {
LABEL_12:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, v5, 0x13u, v7);
      return 3221291013LL;
    }
LABEL_11:
    if ( a1->Header.Size >= (unsigned int)v5 )
    {
      *a2 = v5;
      return 0LL;
    }
    goto LABEL_12;
  }
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)v3,
      0x12u,
      v7,
      MajorNdisVersion,
      MinorNdisVersion,
      &a1->Name.Length);
  return 3221291012LL;
}
