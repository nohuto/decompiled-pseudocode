/*
 * XREFs of ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x140168620
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x140098308 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x140098480 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(
        const struct _NDIS_FILTER_DRIVER_CHARACTERISTICS *a1,
        unsigned int *a2)
{
  unsigned __int8 MajorNdisVersion; // r11
  const struct _GUID *v3; // r8
  int MinorNdisVersion; // ebx
  unsigned int Data3_low; // r10d
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const struct _GUID *)&unk_1400F7EE0;
  MinorNdisVersion = a1->MinorNdisVersion;
  *a2 = 0;
  while ( 1 )
  {
    if ( v3 == &WPP_fd3d11e9cca43795654742c76fc3086a_Traceguids )
      goto LABEL_21;
    if ( (MinorNdisVersion | (MajorNdisVersion << 16)) == v3->Data1 )
      break;
    v3 = (const struct _GUID *)((char *)v3 + 8);
  }
  Data3_low = LOBYTE(v3->Data3);
  if ( Data3_low == 1 )
  {
    LODWORD(v6) = a1->Header.Size;
    if ( a1->Header.Size >= 0xE0u )
      LODWORD(v6) = 224;
    goto LABEL_20;
  }
  if ( LOBYTE(v3->Data3) == 2 )
  {
    v6 = 224LL;
  }
  else
  {
    if ( LOBYTE(v3->Data3) != 3 )
    {
LABEL_21:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          (__int64)v3,
          0x10u,
          v8,
          MajorNdisVersion,
          MinorNdisVersion,
          &a1->FriendlyName.Length);
      return 3221291012LL;
    }
    v6 = 240LL;
  }
  if ( a1->Header.Type == 0x8B && a1->Header.Size >= (unsigned int)v6 && a1->Header.Revision >= Data3_low )
  {
LABEL_20:
    *a2 = v6;
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)a2, v6, 0x11u, v8);
  return 3221291013LL;
}
