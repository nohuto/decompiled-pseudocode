/*
 * XREFs of ?ndisOidPreNicSwitchCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400EA3A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

char __fastcall ndisOidPreNicSwitchCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v3; // r14
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // r15
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  char v15[4]; // [rsp+40h] [rbp-A8h]
  __int128 v16; // [rsp+50h] [rbp-98h]
  __int128 v17; // [rsp+60h] [rbp-88h]
  __int64 v18; // [rsp+90h] [rbp-58h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = ndisCaptureIovOidContext((__int64)&v18, a1);
  v16 = *(_OWORD *)v6;
  v17 = *(_OWORD *)(v6 + 16);
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v7,
      v3,
      v1);
  v8 = 32;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) >= 0x20u )
  {
    if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
    {
      v5 = 1;
    }
    else
    {
      if ( !(_BYTE)v16 )
        goto LABEL_20;
      v5 = 1;
      if ( *(_DWORD *)(v1 + 32) == 66094 )
        v9 = v17;
      else
        v9 = *((_QWORD *)&v17 + 1);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v1 + 48);
        v11 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v11 = *(_OWORD *)v9;
        *(_OWORD *)(v11 + 16) = *(_OWORD *)(v9 + 16);
        if ( v10 >= 0x74 )
        {
          v8 = 132;
          *(_OWORD *)(v11 + 32) = *(_OWORD *)(v9 + 32);
          *(_OWORD *)(v11 + 48) = *(_OWORD *)(v9 + 48);
          *(_OWORD *)(v11 + 64) = *(_OWORD *)(v9 + 64);
          *(_OWORD *)(v11 + 80) = *(_OWORD *)(v9 + 80);
          *(_OWORD *)(v11 + 96) = *(_OWORD *)(v9 + 96);
          if ( v10 < 0x84 )
          {
            *(_DWORD *)(v11 + 112) = *(_DWORD *)(v9 + 112);
            v13 = *(_QWORD *)(v1 + 40);
            *(_BYTE *)(v13 + 1) = 2;
            *(_WORD *)(v13 + 2) = 116;
            *(_DWORD *)(v1 + 52) = 116;
            goto LABEL_19;
          }
          *(_OWORD *)(v11 + 112) = *(_OWORD *)(v9 + 112);
          *(_DWORD *)(v11 + 128) = *(_DWORD *)(v9 + 128);
        }
        else
        {
          v12 = *(_QWORD *)(v1 + 40);
          *(_BYTE *)(v12 + 1) = 1;
          *(_WORD *)(v12 + 2) = 32;
        }
        *(_DWORD *)(v1 + 52) = v8;
        goto LABEL_19;
      }
    }
    v2 = -1073741637;
  }
  else
  {
    *(_DWORD *)(v1 + 56) = 32;
    v2 = -1073676268;
    v5 = 1;
  }
LABEL_19:
  *((_DWORD *)a1 + 10) = v2;
LABEL_20:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xDu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      v7,
      v3,
      v5,
      *(_DWORD *)v15);
  }
  return v5;
}
