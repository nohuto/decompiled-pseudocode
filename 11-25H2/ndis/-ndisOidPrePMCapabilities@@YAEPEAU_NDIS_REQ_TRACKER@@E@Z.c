/*
 * XREFs of ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x140083330
 * Callers:
 *     ?ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14009AEA0 (-ndisOidPrePMHardwareCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB1D0 (-ndisOidPrePMCurrentCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 */

__int64 __fastcall ndisOidPrePMCapabilities(struct _NDIS_REQ_TRACKER *a1, char a2)
{
  __int64 v2; // rbp
  __int64 v4; // rsi
  unsigned __int8 v6; // di
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax

  v2 = *(_QWORD *)a1;
  v4 = *((_QWORD *)a1 + 4);
  v6 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      v2,
      v4);
  v7 = *((_QWORD *)a1 + 3);
  if ( !v7
    || (v8 = *(_QWORD *)(v7 + 24), *(_BYTE *)(v8 + 56) > 6u)
    || *(_BYTE *)(v8 + 56) == 6 && *(_BYTE *)(v8 + 57) >= 0x14u )
  {
    if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFFD) != 0 )
    {
      v9 = -1073741637;
    }
    else
    {
      v9 = 0;
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v4 + 48) >= 0x34u )
      {
        if ( !*(_QWORD *)a1 )
        {
          v6 = 0;
          goto LABEL_23;
        }
        v10 = *(_QWORD *)(v4 + 40);
        if ( *(_DWORD *)(v4 + 48) >= 0x3Cu )
        {
          v13 = v2 + 1000;
          if ( !a2 )
            v13 = v2 + 1060;
          *(_OWORD *)v10 = *(_OWORD *)v13;
          *(_OWORD *)(v10 + 16) = *(_OWORD *)(v13 + 16);
          *(_OWORD *)(v10 + 32) = *(_OWORD *)(v13 + 32);
          *(_QWORD *)(v10 + 48) = *(_QWORD *)(v13 + 48);
          *(_DWORD *)(v10 + 56) = *(_DWORD *)(v13 + 56);
          v12 = 60;
        }
        else
        {
          v11 = 1000LL;
          if ( !a2 )
            v11 = 1060LL;
          *(_OWORD *)v10 = *(_OWORD *)(v11 + v2);
          *(_OWORD *)(v10 + 16) = *(_OWORD *)(v11 + v2 + 16);
          *(_OWORD *)(v10 + 32) = *(_OWORD *)(v11 + v2 + 32);
          *(_DWORD *)(v10 + 48) = *(_DWORD *)(v11 + v2 + 48);
          v12 = 52;
          *(_WORD *)(v10 + 2) = 52;
          *(_BYTE *)(v10 + 1) = 1;
        }
        *(_DWORD *)(v4 + 52) = v12;
        *(_DWORD *)(v4 + 56) = 0;
      }
      else
      {
        *(_DWORD *)(v4 + 56) = 52;
        v9 = -1073676268;
      }
    }
  }
  else
  {
    v9 = -1073741637;
  }
  *((_DWORD *)a1 + 10) = v9;
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids,
      v2,
      v9,
      v6);
  return v6;
}
