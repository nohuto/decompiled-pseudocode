/*
 * XREFs of ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009CDA4
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     WPP_RECORDER_SF_qDqL @ 0x14005D980 (WPP_RECORDER_SF_qDqL.c)
 *     WPP_RECORDER_SF_DL @ 0x14006C7B0 (WPP_RECORDER_SF_DL_ea_14006C7B0.c)
 *     WPP_RECORDER_SF_LLLLLLLL @ 0x1400A05D0 (WPP_RECORDER_SF_LLLLLLLL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AF2FC (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C085C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memcmp @ 0x1400E7A20 (memcmp.c)
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
  int v12; // edx
  _NDIS_OBJECT_HEADER v13; // r14d
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 Pool2; // r13
  void *v17; // rcx
  _WORD *v19; // rcx
  int v20; // edx
  int v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  char v23[4]; // [rsp+40h] [rbp-58h]

  v4 = a4;
  v6 = Type;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    *(_DWORD *)v23 = a4;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xABu,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      Type,
      (char)a3);
  }
  if ( !a1->QosHwCapabilities )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LOBYTE(Type) = 5;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        Type,
        24,
        173,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        v4);
    }
    goto LABEL_43;
  }
  Type = a3->Header.Type;
  if ( (_BYTE)Type != 0xB6
    || (Size = a3->Header.Size, (unsigned __int16)Size < 0x34u)
    || a3->Header.Revision != 1
    || (a4 = a3->Header.Size, v4 < Size) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LLLLLLLL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        Type,
        a3->Header.Size,
        a4,
        v21,
        Type,
        v22,
        a3->Header.Size,
        *(_DWORD *)v23,
        a3->Header.Revision);
LABEL_43:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      v9 = 175;
      LOBYTE(Type) = 2;
LABEL_45:
      WPP_RECORDER_SF_(v8[8], Type, 24, v9, (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids);
    }
    return 0;
  }
  v11 = ndisValidateQosParameters(a1, v6 == 1073873056, a3, Size, 0LL);
  if ( v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        24,
        176,
        (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
        v11);
    }
    return 0;
  }
  v13 = (_NDIS_OBJECT_HEADER)a3->Header.Size;
  v14 = 4928LL;
  if ( v6 != 1073873056 )
    v14 = 4944LL;
  v15 = 4936LL;
  if ( v6 != 1073873056 )
    v15 = 4952LL;
  if ( *(unsigned int *)&v13 <= *(_DWORD *)((char *)&a1->Header + v15) )
  {
    v19 = *(_WORD **)(&a1->Header.Type + v14);
    if ( v19[1] == *(_WORD *)&v13.Type && !memcmp(v19, a3, a3->Header.Size) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 4;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v20,
          24,
          178,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          v6);
      }
      return 0;
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, a3->Header.Size, 1936802894LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v22) = v6;
        WPP_RECORDER_SF_DL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0xB1u,
          (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
          v13.Type,
          v22);
      }
      return 0;
    }
    v17 = *(void **)(&a1->Header.Type + v14);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(&a1->Header.Type + v14) = Pool2;
    *(_NDIS_OBJECT_HEADER *)((char *)&a1->Header + v15) = v13;
  }
  memmove(*(void **)(&a1->Header.Type + v14), a3, a3->Header.Size);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xB3u,
      (struct _GUID *)&WPP_af651eb67934303d7b17b39d6bfcb024_Traceguids,
      (char)a1,
      v6,
      (char)a3,
      v4);
  return 1;
}
