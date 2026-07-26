/*
 * XREFs of ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x1400A5B84
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     WPP_RECORDER_SF_qDqL @ 0x140078DE0 (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_DL @ 0x1400888E0 (WPP_RECORDER_SF_DL_ea_1400888E0.c)
 *     WPP_RECORDER_SF_LLLLLLLL @ 0x1400A8B24 (WPP_RECORDER_SF_LLLLLLLL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B728C (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C7A8C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

unsigned __int8 __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int Type,
        struct _NDIS_QOS_PARAMETERS *a3,
        unsigned int a4)
{
  unsigned int v4; // ebp
  int v6; // esi
  _QWORD *v8; // rcx
  int v9; // r9d
  unsigned int Size; // eax
  int v11; // eax
  _NDIS_OBJECT_HEADER v12; // r14d
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 Pool2; // r13
  void *v16; // rcx
  _WORD *v18; // rcx
  int v19; // [rsp+20h] [rbp-78h]
  char v20[8]; // [rsp+28h] [rbp-70h]
  __int64 v21; // [rsp+30h] [rbp-68h]
  char v22[4]; // [rsp+40h] [rbp-58h]

  v4 = a4;
  v6 = Type;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    *(_DWORD *)v22 = a4;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xABu,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      Type,
      (char)a3);
  }
  if ( !a1->QosHwCapabilities )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      return 0;
    v9 = 172;
    LOBYTE(Type) = 5;
    goto LABEL_45;
  }
  if ( v4 < 0x34 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      *(_DWORD *)v20 = v4;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5u,
        0x18u,
        0xADu,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        *(_QWORD *)v20);
    }
    goto LABEL_43;
  }
  Type = a3->Header.Type;
  if ( (_BYTE)Type != 0xB6
    || (Size = a3->Header.Size, (unsigned __int16)Size < 0x34u)
    || a3->Header.Revision != 1
    || (a4 = a3->Header.Size, v4 < Size) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LLLLLLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        Type,
        a3->Header.Size,
        a4,
        v19,
        Type,
        v21,
        a3->Header.Size,
        *(_DWORD *)v22,
        a3->Header.Revision);
LABEL_43:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      v9 = 175;
      LOBYTE(Type) = 2;
LABEL_45:
      WPP_RECORDER_SF_(v8[8], Type, 24, v9, (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids);
    }
    return 0;
  }
  v11 = ndisValidateQosParameters(a1, v6 == 1073873056, a3, Size, 0LL);
  if ( v11 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v20 = v11;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x18u,
        0xB0u,
        (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
        *(_QWORD *)v20);
    }
    return 0;
  }
  v12 = (_NDIS_OBJECT_HEADER)a3->Header.Size;
  v13 = 4928LL;
  if ( v6 != 1073873056 )
    v13 = 4944LL;
  v14 = 4936LL;
  if ( v6 != 1073873056 )
    v14 = 4952LL;
  if ( *(unsigned int *)&v12 <= *(_DWORD *)((char *)&a1->Header + v14) )
  {
    v18 = *(_WORD **)(&a1->Header.Type + v13);
    if ( v18[1] == *(_WORD *)&v12.Type && !memcmp(v18, a3, a3->Header.Size) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v20 = v6;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0x18u,
          0xB2u,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          *(_QWORD *)v20);
      }
      return 0;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, a3->Header.Size, 1936802894);
    if ( !Pool2 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v21) = v6;
        WPP_RECORDER_SF_DL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0xB1u,
          (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
          v12.Type,
          v21);
      }
      return 0;
    }
    v16 = *(void **)(&a1->Header.Type + v13);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(&a1->Header.Type + v13) = Pool2;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v14) = v12;
  }
  memmove(*(void **)(&a1->Header.Type + v13), a3, a3->Header.Size);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xB3u,
      (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
      (char)a1,
      v6,
      (char)a3,
      v4);
  return 1;
}
