/*
 * XREFs of ndisIfQueryFilterObject @ 0x14015AA30
 * Callers:
 *     ndisIfQueryObject @ 0x14015A900 (ndisIfQueryObject.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x14004CC60 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_LqL @ 0x14005E5D0 (WPP_RECORDER_SF_LqL.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ndisIfGetMiniportStatistics @ 0x14015BA20 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x14015C020 (ndisIfQuerySetMiniport.c)
 */

__int64 __fastcall ndisIfQueryFilterObject(struct _NDIS_FILTER_BLOCK *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int SetMiniport; // r15d
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // r8
  _NDIS_MINIPORT_BLOCK *Miniport; // r12
  _NDIS_IF_BLOCK *IfBlock; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  unsigned __int8 MajorNdisVersion; // r9
  unsigned int MiniportStatistics; // eax
  unsigned __int32 ifMtu; // eax
  int v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _NDIS_IF_BLOCK *v22; // [rsp+48h] [rbp-B8h]
  _BYTE v23[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  SetMiniport = 0;
  memset(&v23[1], 0, 0xF7uLL);
  v21 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 0xDu, v20);
  memset(&v23[112], 0, 136);
  *(_QWORD *)&v23[104] = &ndisIntReqNsi;
  memset(v23, 0, 104);
  *(_DWORD *)&v23[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v23[168]);
  Miniport = a1->Miniport;
  IfBlock = a1->IfBlock;
  *(_DWORD *)v23 = 15466902;
  *(_DWORD *)&v23[32] = 0;
  *(_QWORD *)&v23[4] = 2LL;
  *(_QWORD *)&v23[40] = 0LL;
  *(_DWORD *)&v23[48] = 0;
  DriverHandle = Miniport->DriverHandle;
  v22 = IfBlock;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  switch ( a2 )
  {
    case 0x10106u:
      if ( *a3 >= 4u )
      {
        *a3 = 4;
        ifMtu = IfBlock->ifMtu;
LABEL_12:
        *(_DWORD *)a4 = ifMtu;
        goto LABEL_13;
      }
      return 3221291030LL;
    case 0x10288u:
      if ( *a3 >= 4u )
      {
        *a3 = 4;
        *(_DWORD *)a4 = Miniport->IfBlock->ifAdminStatus;
        goto LABEL_13;
      }
      return 3221291030LL;
    case 0x10283u:
      if ( *a3 >= 4u )
      {
        *a3 = 4;
        *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
        goto LABEL_13;
      }
      return 3221291030LL;
  }
  if ( a2 != 66183 )
  {
    if ( a2 != 131334 )
    {
      if ( a2 <= 0x20106 )
      {
        v12 = 0x140000000uLL;
        switch ( a2 )
        {
          case 0x10280u:
            if ( !*a3 )
              return 3221291030LL;
            *a3 = 1;
            *(_BYTE *)a4 = Miniport->IfBlock->ifPromiscuousMode;
            goto LABEL_13;
          case 0x10281u:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->ifLastChange;
            goto LABEL_13;
          case 0x10282u:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->ifCounterDiscontinuityTime;
            goto LABEL_13;
          case 0x10284u:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->XmitLinkSpeed;
            goto LABEL_13;
          case 0x10285u:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = IfBlock->RcvLinkSpeed;
            goto LABEL_13;
          case 0x10286u:
            if ( *a3 < 8u )
              return 3221291030LL;
            *a3 = 8;
            *(_QWORD *)a4 = 0LL;
            goto LABEL_13;
          case 0x1028Au:
            if ( *a3 < 4u )
              return 3221291030LL;
            *a3 = 4;
            ifMtu = IfBlock->MediaConnectState;
            goto LABEL_12;
          case 0x1028Cu:
            if ( *a3 < 4u )
              return 3221291030LL;
            *a3 = 4;
            ifMtu = IfBlock->MediaDuplexState;
            goto LABEL_12;
          default:
            goto LABEL_41;
        }
      }
      v12 = 0x140000000uLL;
      switch ( a2 )
      {
        case 0x20202u:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)&v23[40] = &v21;
          v21 = 0LL;
          *(_DWORD *)&v23[32] = 131586;
          *(_DWORD *)&v23[48] = 8;
          SetMiniport = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
          if ( !SetMiniport )
            v7 = v21;
          *(_QWORD *)a4 = v7;
          break;
        case 0x20208u:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)&v23[40] = &v21;
          v21 = 0LL;
          *(_DWORD *)&v23[32] = 131592;
          *(_DWORD *)&v23[48] = 8;
          SetMiniport = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
          if ( !SetMiniport )
            v7 = v21;
          *(_QWORD *)a4 = v7;
          break;
        case 0x20219u:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)&v23[40] = &v21;
          v21 = 0LL;
          *(_DWORD *)&v23[48] = 8;
          if ( MajorNdisVersion >= 6u )
          {
            *(_DWORD *)&v23[32] = 131609;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
          }
          else
          {
            *(_DWORD *)&v23[32] = 131591;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
            v21 = 0LL;
            *(_QWORD *)&v23[40] = &v21;
            *(_DWORD *)&v23[32] = 131593;
            *(_DWORD *)&v23[48] = 8;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 += v21;
            v21 = 0LL;
            *(_QWORD *)&v23[40] = &v21;
            *(_DWORD *)&v23[32] = 131595;
            *(_DWORD *)&v23[48] = 8;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 += v21;
          }
          break;
        case 0x2021Au:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)&v23[40] = &v21;
          v21 = 0LL;
          *(_DWORD *)&v23[48] = 8;
          if ( MajorNdisVersion >= 6u )
          {
            *(_DWORD *)&v23[32] = 131610;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
          }
          else
          {
            *(_DWORD *)&v23[32] = 131585;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
            v21 = 0LL;
            *(_QWORD *)&v23[40] = &v21;
            *(_DWORD *)&v23[32] = 131587;
            *(_DWORD *)&v23[48] = 8;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 += v21;
            v21 = 0LL;
            *(_QWORD *)&v23[40] = &v21;
            *(_DWORD *)&v23[32] = 131589;
            *(_DWORD *)&v23[48] = 8;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 += v21;
          }
          break;
        case 0x2021Bu:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)&v23[40] = &v21;
          v21 = 0LL;
          *(_DWORD *)&v23[48] = 8;
          if ( MajorNdisVersion >= 6u )
          {
            *(_DWORD *)&v23[32] = 131611;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
          }
          else
          {
            *(_DWORD *)&v23[32] = 131332;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
            v21 = 0LL;
            *(_QWORD *)&v23[40] = &v21;
            *(_DWORD *)&v23[32] = 131333;
            *(_DWORD *)&v23[48] = 8;
            ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 += v21;
          }
          break;
        case 0x2021Cu:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          if ( MajorNdisVersion >= 6u )
          {
            v21 = 0LL;
            *(_QWORD *)&v23[40] = &v21;
            *(_DWORD *)&v23[32] = 131612;
            *(_DWORD *)&v23[48] = 8;
            SetMiniport = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
            *(_QWORD *)a4 = v21;
          }
          else
          {
            *(_QWORD *)a4 = 0LL;
          }
          break;
        default:
LABEL_41:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          *(_QWORD *)a4 = 0LL;
          *(_DWORD *)&v23[32] = a2;
          *(_QWORD *)&v23[40] = a4;
          *(_DWORD *)&v23[48] = 8;
          SetMiniport = ndisIfQuerySetMiniport(Miniport, (struct _NDIS_OID_REQUEST *)v23, a1);
          break;
      }
      goto LABEL_13;
    }
    if ( *a3 >= 0x90u )
    {
      *a3 = 144;
      SetMiniport = ndisIfGetMiniportStatistics(Miniport, a4, a1);
      goto LABEL_13;
    }
    return 3221291030LL;
  }
  if ( *a3 < 0xD8u )
    return 3221291030LL;
  *a3 = 216;
  *(_DWORD *)a4 = Miniport->IfBlock->ifOperStatus;
  *(_DWORD *)(a4 + 4) = Miniport->IfBlock->ifOperStatusFlags;
  *(_DWORD *)(a4 + 8) = IfBlock->MediaConnectState;
  *(_DWORD *)(a4 + 12) = IfBlock->MediaDuplexState;
  *(_QWORD *)(a4 + 24) = IfBlock->XmitLinkSpeed;
  *(_QWORD *)(a4 + 32) = IfBlock->RcvLinkSpeed;
  MiniportStatistics = ndisIfGetMiniportStatistics(Miniport, (unsigned __int8)a4 + 64, a1);
  IfBlock = v22;
  SetMiniport = MiniportStatistics;
  *(_DWORD *)(a4 + 16) = v22->ifMtu;
  *(_BYTE *)(a4 + 20) = Miniport->IfBlock->ifPromiscuousMode;
  *(_BYTE *)(a4 + 21) = IfBlock->ifDeviceWakeUpEnable;
  *(_QWORD *)(a4 + 40) = IfBlock->ifLastChange;
  *(_QWORD *)(a4 + 48) = IfBlock->ifCounterDiscontinuityTime;
  *(_QWORD *)(a4 + 56) = 0LL;
  *(_DWORD *)(a4 + 208) = IfBlock->CompartmentId;
  *(_DWORD *)(a4 + 212) = Miniport->IfBlock->SupportedStatistics;
LABEL_13:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)IfBlock,
      v12,
      0xEu,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      a2,
      a4,
      *a3);
  return SetMiniport;
}
