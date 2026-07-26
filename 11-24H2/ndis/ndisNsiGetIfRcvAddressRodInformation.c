/*
 * XREFs of ndisNsiGetIfRcvAddressRodInformation @ 0x140148424
 * Callers:
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1400CC9E0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400CCCD0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisNsiGetIfRcvAddressRodInformation(char a1, char *a2, __int64 a3)
{
  char *v4; // r15
  char v5; // bp
  unsigned int v6; // ebx
  char *v7; // r13
  int v8; // edi
  int v9; // r14d
  int v10; // edi
  char v11; // bp
  unsigned int v12; // eax
  int v13; // r12d
  unsigned int v14; // ecx

  v4 = a2;
  v5 = a1;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      a1,
      (char)a2,
      a3);
  v7 = *(char **)(a3 + 40);
  v8 = *(_DWORD *)(a3 + 52);
  v9 = *(_DWORD *)(a3 + 48);
  if ( !v7 )
  {
    v10 = 0;
    goto LABEL_17;
  }
  v11 = 0;
  while ( v9 > 0 )
  {
    if ( v11 )
      break;
    if ( v8 )
    {
      if ( v8 != 4 )
        goto LABEL_14;
      v12 = 2;
      v11 = 1;
      a2 = v4 + 4;
      v13 = 6;
    }
    else
    {
      v12 = 4;
      a2 = v4;
      v13 = 4;
    }
    if ( v9 < v12 || !a2 )
    {
LABEL_14:
      v11 = 1;
      continue;
    }
    memmove(v7, a2, v12);
    v14 = v13 - v8;
    v8 = v13;
    v7 += v14;
    v9 -= v14;
  }
  v10 = v8 - *(_DWORD *)(a3 + 52);
  v5 = a1;
  v6 = v10 == 0 ? 0xC000000D : 0;
LABEL_17:
  *(_DWORD *)(a3 + 48) = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x16u,
      0xBu,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      v5,
      (char)v4,
      a3,
      v6);
  return v6;
}
