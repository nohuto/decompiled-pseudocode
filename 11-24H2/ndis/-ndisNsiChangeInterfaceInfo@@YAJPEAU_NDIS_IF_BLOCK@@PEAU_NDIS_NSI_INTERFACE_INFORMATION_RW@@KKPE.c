/*
 * XREFs of ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x14002B430
 * Callers:
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x140029E70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14002B250 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14002B6B0 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x14008E4B0 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 */

__int64 __fastcall ndisNsiChangeInterfaceInfo(
        struct _NDIS_IF_BLOCK *a1,
        _IF_COUNTED_STRING_LH *p_ifAlias,
        int a3,
        int a4,
        unsigned int *a5)
{
  _IF_COUNTED_STRING_LH *v7; // r15
  unsigned int v9; // edi
  char v10; // al
  int v11; // r14d
  int v12; // r12d
  int v13; // r9d
  __int64 v14; // rcx
  int updated; // eax
  unsigned int v16; // ebx
  wchar_t *v18; // r8
  _IF_COUNTED_STRING_LH *Pool2; // rax
  __int128 *v20; // r8
  __int64 v21; // rax
  _NDIS_NSI_INTERFACE_PURPOSE v22; // eax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  char v26; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+90h] [rbp+18h]

  v7 = p_ifAlias;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = (char)p_ifAlias;
    LOBYTE(p_ifAlias) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifAlias,
      22,
      28,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1,
      v26);
  }
  v10 = 0;
  v27 = 0;
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
          a1->ifAdminStatus = *(_DWORD *)&v7->String[7];
          v12 = 20;
LABEL_8:
          v10 = v27;
          break;
        case 20:
          if ( !ndisIsValidIfStringParts((const wchar_t *)0x204, v7->String[9]) || a1->IsNdisFilter )
          {
LABEL_24:
            v9 = v13;
LABEL_25:
            v10 = 1;
            v27 = 1;
            goto LABEL_13;
          }
          p_ifAlias = &a1->ifAlias;
          v21 = 4LL;
          do
          {
            p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + 128);
            v25 = *v20;
            v20 += 8;
            *(_OWORD *)&p_ifAlias[-1].String[193] = v25;
            *(_OWORD *)&p_ifAlias[-1].String[201] = *(v20 - 7);
            *(_OWORD *)&p_ifAlias[-1].String[209] = *(v20 - 6);
            *(_OWORD *)&p_ifAlias[-1].String[217] = *(v20 - 5);
            *(_OWORD *)&p_ifAlias[-1].String[225] = *(v20 - 4);
            *(_OWORD *)&p_ifAlias[-1].String[233] = *(v20 - 3);
            *(_OWORD *)&p_ifAlias[-1].String[241] = *(v20 - 2);
            *(_OWORD *)&p_ifAlias[-1].String[249] = *(v20 - 1);
            --v21;
          }
          while ( v21 );
          v12 = 536;
          *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)v20;
          goto LABEL_8;
        case 536:
          goto LABEL_24;
        case 570:
          if ( !ndisIsValidIfStringParts((const wchar_t *)0x204, v7[1].String[26]) )
            goto LABEL_24;
          p_ifAlias = a1->ifL2NetworkInfo;
          if ( !p_ifAlias )
          {
            Pool2 = (_IF_COUNTED_STRING_LH *)ExAllocatePool2(66LL, v14, 1718174798LL);
            a1->ifL2NetworkInfo = Pool2;
            p_ifAlias = Pool2;
            v13 = -1073741811;
            if ( !Pool2 )
            {
              v9 = -1073741670;
              goto LABEL_25;
            }
            LODWORD(v14) = 516;
            v18 = &v7[1].String[26];
          }
          v23 = 4LL;
          do
          {
            p_ifAlias = (_IF_COUNTED_STRING_LH *)((char *)p_ifAlias + 128);
            v24 = *(_OWORD *)v18;
            v18 += 64;
            *(_OWORD *)&p_ifAlias[-1].String[193] = v24;
            *(_OWORD *)&p_ifAlias[-1].String[201] = *((_OWORD *)v18 - 7);
            *(_OWORD *)&p_ifAlias[-1].String[209] = *((_OWORD *)v18 - 6);
            *(_OWORD *)&p_ifAlias[-1].String[217] = *((_OWORD *)v18 - 5);
            *(_OWORD *)&p_ifAlias[-1].String[225] = *((_OWORD *)v18 - 4);
            *(_OWORD *)&p_ifAlias[-1].String[233] = *((_OWORD *)v18 - 3);
            *(_OWORD *)&p_ifAlias[-1].String[241] = *((_OWORD *)v18 - 2);
            *(_OWORD *)&p_ifAlias[-1].String[249] = *((_OWORD *)v18 - 1);
            --v23;
          }
          while ( v23 );
          v12 = 1088;
          *(_DWORD *)&p_ifAlias->Length = *(_DWORD *)v18;
          goto LABEL_8;
        case 1088:
          v22 = *(_DWORD *)&v7[2].String[27];
          if ( (unsigned int)v22 > NDIS_NSI_INTERFACE_PURPOSE_IN_FAILOVER )
            goto LABEL_24;
          a1->ifPurpose = v22;
          LODWORD(v14) = 4;
          v10 = 1;
          v12 = 1092;
          v27 = 1;
          break;
        default:
          v10 = 1;
          v27 = 1;
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
    updated = ndisIfUpdateInterfaceIsolationNetworkIdLocked(a1, (const struct _GUID *)v7, 0);
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(p_ifAlias) = 4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)p_ifAlias,
      22,
      29,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      (char)a1,
      (char)v7,
      v9);
  }
  return v9;
}
