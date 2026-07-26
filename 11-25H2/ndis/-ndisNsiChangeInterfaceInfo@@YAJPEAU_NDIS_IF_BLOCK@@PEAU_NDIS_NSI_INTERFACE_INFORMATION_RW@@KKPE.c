/*
 * XREFs of ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14004B680
 * Callers:
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140049CF0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14004B4A0 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14004B900 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x140099D10 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

__int64 __fastcall ndisNsiChangeInterfaceInfo(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_NSI_INTERFACE_INFORMATION_RW *a2,
        int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v9; // edi
  char v10; // al
  int v11; // r14d
  int v12; // r12d
  int v13; // r9d
  __int64 v14; // rcx
  int updated; // eax
  unsigned int v16; // ebx
  __int128 *v18; // r8
  _IF_COUNTED_STRING_LH *ifL2NetworkInfo; // rdx
  _IF_COUNTED_STRING_LH *Pool2; // rax
  __int128 *v21; // r8
  _IF_COUNTED_STRING_LH *p_ifAlias; // rdx
  __int64 v23; // rax
  _NDIS_NSI_INTERFACE_PURPOSE v24; // eax
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  char v28; // [rsp+90h] [rbp+18h]

  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Cu,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1,
      a2);
  v10 = 0;
  v28 = 0;
  v11 = a3;
  v12 = a4;
  v13 = -1073741811;
  *a5 = 0;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      if ( v10 )
        goto LABEL_14;
      LODWORD(v14) = 0;
      if ( !a4 )
        break;
      switch ( a4 )
      {
        case 16:
          LODWORD(v14) = 4;
          a1->ifAdminStatus = *((_DWORD *)a2 + 4);
          v12 = 20;
LABEL_8:
          v10 = v28;
          break;
        case 20:
          if ( !ndisIsValidIfStringParts((const wchar_t *)0x204, *((unsigned __int16 *)a2 + 10)) || a1->IsNdisFilter )
          {
LABEL_24:
            v9 = v13;
LABEL_25:
            v10 = 1;
            v28 = 1;
            goto LABEL_13;
          }
          p_ifAlias = &a1->ifAlias;
          v23 = 4LL;
          do
          {
            p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + 128);
            v27 = *v21;
            v21 += 8;
            *(_OWORD *)&p_ifAlias[-1].String[193] = v27;
            *(_OWORD *)&p_ifAlias[-1].String[201] = *(v21 - 7);
            *(_OWORD *)&p_ifAlias[-1].String[209] = *(v21 - 6);
            *(_OWORD *)&p_ifAlias[-1].String[217] = *(v21 - 5);
            *(_OWORD *)&p_ifAlias[-1].String[225] = *(v21 - 4);
            *(_OWORD *)&p_ifAlias[-1].String[233] = *(v21 - 3);
            *(_OWORD *)&p_ifAlias[-1].String[241] = *(v21 - 2);
            *(_OWORD *)&p_ifAlias[-1].String[249] = *(v21 - 1);
            --v23;
          }
          while ( v23 );
          v12 = 536;
          *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)v21;
          goto LABEL_8;
        case 536:
          goto LABEL_24;
        case 570:
          if ( !ndisIsValidIfStringParts((const wchar_t *)0x204, *((unsigned __int16 *)a2 + 285)) )
            goto LABEL_24;
          ifL2NetworkInfo = a1->ifL2NetworkInfo;
          if ( !ifL2NetworkInfo )
          {
            Pool2 = (_IF_COUNTED_STRING_LH *)ExAllocatePool2(66LL, v14, 1718174798);
            a1->ifL2NetworkInfo = Pool2;
            ifL2NetworkInfo = Pool2;
            v13 = -1073741811;
            if ( !Pool2 )
            {
              v9 = -1073741670;
              goto LABEL_25;
            }
            LODWORD(v14) = 516;
            v18 = (__int128 *)((char *)a2 + 570);
          }
          v25 = 4LL;
          do
          {
            ifL2NetworkInfo = (_IF_COUNTED_STRING_LH *)((char *)ifL2NetworkInfo + 128);
            v26 = *v18;
            v18 += 8;
            *(_OWORD *)&ifL2NetworkInfo[-1].String[193] = v26;
            *(_OWORD *)&ifL2NetworkInfo[-1].String[201] = *(v18 - 7);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[209] = *(v18 - 6);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[217] = *(v18 - 5);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[225] = *(v18 - 4);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[233] = *(v18 - 3);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[241] = *(v18 - 2);
            *(_OWORD *)&ifL2NetworkInfo[-1].String[249] = *(v18 - 1);
            --v25;
          }
          while ( v25 );
          v12 = 1088;
          *(_DWORD *)&ifL2NetworkInfo->Length = *(_DWORD *)v18;
          goto LABEL_8;
        case 1088:
          v24 = *((_DWORD *)a2 + 272);
          if ( (unsigned int)v24 > NDIS_NSI_INTERFACE_PURPOSE_IN_FAILOVER )
            goto LABEL_24;
          a1->ifPurpose = v24;
          LODWORD(v14) = 4;
          v10 = 1;
          v12 = 1092;
          v28 = 1;
          break;
        default:
          v10 = 1;
          v28 = 1;
          break;
      }
      if ( v9 || !(_DWORD)v14 || v11 < (unsigned int)v14 )
        goto LABEL_25;
      v11 += a4 - v12;
      a4 = v12;
LABEL_13:
      if ( v11 <= 0 )
        goto LABEL_14;
    }
    updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, (const struct _GUID *)a2, 0);
    v13 = -1073741811;
    if ( updated < 0 )
    {
      v9 = updated;
      goto LABEL_25;
    }
    v12 = 16;
    LODWORD(v14) = 16;
    goto LABEL_8;
  }
LABEL_14:
  v16 = a3 - v11;
  *a5 = v16;
  if ( !v16 )
    v9 = v13;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x1Du,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1,
      (char)a2,
      v9);
  return v9;
}
