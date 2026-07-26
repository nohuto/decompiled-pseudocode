/*
 * XREFs of ndisLwmIoctlIrpHandler @ 0x1400294D0
 * Callers:
 *     ndisDriverDispatch @ 0x14002A3D0 (ndisDriverDispatch.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z @ 0x140012AC0 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@EPEAH@Z.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x140029710 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x14006D580 (-ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 */

__int64 __fastcall ndisLwmIoctlIrpHandler(struct _IRP *a1, __int64 a2)
{
  __int64 v2; // rsi
  _DWORD *v3; // rdi
  __int64 v5; // rsi
  int v6; // edx
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  unsigned int v8; // r8d
  char v9; // al
  unsigned int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned __int64 v14; // rdx
  char v15; // r8
  int AdapterRssInfo; // eax
  int v17; // r9d
  unsigned __int8 *MasterIrp; // [rsp+28h] [rbp-40h]
  struct _MDL *MdlAddress; // [rsp+30h] [rbp-38h]
  _QWORD v20[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-18h]
  unsigned int v22; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v3 = (_DWORD *)a2;
  if ( !v2 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = 17;
LABEL_20:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        v17,
        (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids);
    }
    return 3221225659LL;
  }
  v5 = *(_QWORD *)(v2 + 24);
  if ( !v5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v17 = 18;
      goto LABEL_20;
    }
    return 3221225659LL;
  }
  v7 = ndisReferenceMiniportByGuid((const struct _GUID *)v5, MPREF_UM_IOCTL);
  if ( v7 )
  {
    v8 = v3[6];
    if ( v8 == 1507376 )
    {
LABEL_5:
      v9 = *(_BYTE *)(v5 + 16);
      v10 = v3[4];
      v21 = 0LL;
      BYTE8(v21) = v9;
      *(_QWORD *)&v21 = v7->OidList;
      v22 = 0;
      MdlAddress = a1->MdlAddress;
      MasterIrp = (unsigned __int8 *)a1->AssociatedIrp.MasterIrp;
      v11 = v3[2];
      v20[0] = 0LL;
      v20[1] = v7;
      v12 = ndisMiniportOidIoctl(v7, (struct _NDIS_USER_OPEN_CONTEXT *)v20, v8, v10, v11, MasterIrp, MdlAddress, &v22);
      if ( !v12 || v12 == -2147483643 )
        a1->IoStatus.Information = v22;
LABEL_7:
      ndisDereferenceMiniport(v7, 0x57u);
      return v12;
    }
    else
    {
      v14 = 0x140000000uLL;
      switch ( v8 )
      {
        case 0x170002u:
        case 0x170006u:
        case 0x17000Eu:
        case 0x170028u:
        case 0x17002Cu:
        case 0x17003Eu:
        case 0x17009Cu:
          goto LABEL_5;
        case 0x170098u:
          v15 = *(_BYTE *)(v5 + 16);
          v22 = 0;
          AdapterRssInfo = ndisGetAdapterRssInfo((char *)v7, a1, v15, (int *)&v22);
          v12 = ndisConvertNdisStatusToNtStatusForIoctl(AdapterRssInfo, v22, 0);
          goto LABEL_7;
        default:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 2;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v14,
              11,
              20,
              (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids,
              v8);
          }
          ndisDereferenceMiniport(v7, 0x57u);
          result = 3221225659LL;
          break;
      }
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        11,
        19,
        (struct _GUID *)&WPP_9c8fc78aeca7325506c7c0cc4d060098_Traceguids,
        v5);
    }
    return 3223519238LL;
  }
  return result;
}
