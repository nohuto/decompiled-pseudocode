/*
 * XREFs of ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x14007E5A0
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qDL @ 0x140027200 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qDqLLLL @ 0x14007E8D0 (WPP_RECORDER_SF_qDqLLLL.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

char __fastcall ndisMIndicateHwTimestampCapabilitiesChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        unsigned __int16 *Buf2,
        unsigned int a4,
        char a5,
        unsigned __int8 *a6)
{
  int v8; // r13d
  char v10; // r12
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rdi
  size_t v12; // rsi
  _NDIS_TIMESTAMP_CAPABILITIES *Pool2; // rax
  unsigned __int8 v14; // r14
  int v15; // edx
  _NDIS_TIMESTAMP_CAPABILITIES *v16; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v17; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v18; // rax
  __int64 v20; // [rsp+38h] [rbp-50h]

  v8 = a2;
  v10 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v20) = HIDWORD(Buf2);
    WPP_RECORDER_SF_qDqLLLL(*((_QWORD *)WPP_GLOBAL_Control + 8), Buf2[1], (_DWORD)Buf2, a4);
  }
  if ( a6 )
    *a6 = 0;
  if ( a4 >= 0x36 && *(_BYTE *)Buf2 == 0x80 && Buf2[1] >= 0x36u && *((_BYTE *)Buf2 + 1) )
  {
    if ( a5 )
    {
      if ( v8 == 1074073601 )
      {
        TopTimestampConfig = a1->TopTimestampConfig;
        if ( !TopTimestampConfig )
        {
          v12 = 56LL;
          Pool2 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
          a1->TopTimestampConfig = Pool2;
          TopTimestampConfig = Pool2;
          if ( Pool2 )
          {
            v14 = 1;
            goto LABEL_16;
          }
          return 0;
        }
        v12 = 56LL;
        if ( !memcmp(a1->TopTimestampConfig, Buf2, Buf2[1]) )
          goto LABEL_15;
        goto LABEL_37;
      }
      TopTimestampConfig = a1->TopHwTimestampCapabilities;
      v12 = 56LL;
      if ( !TopTimestampConfig )
      {
        v16 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
        a1->TopHwTimestampCapabilities = v16;
        TopTimestampConfig = v16;
        if ( !v16 )
          return 0;
        v14 = 1;
LABEL_16:
        if ( TopTimestampConfig )
        {
          if ( Buf2[1] < 0x38u )
            v12 = Buf2[1];
          memmove(TopTimestampConfig, Buf2, v12);
          v10 = 1;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v20) = v14;
            WPP_RECORDER_SF_qDL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              0x18u,
              0x106u,
              (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
              (char)a1,
              v8,
              v20);
          }
        }
        goto LABEL_39;
      }
    }
    else
    {
      TopTimestampConfig = a1->HwTimestampCapabilities;
      if ( v8 != 1074073601 )
      {
        v12 = 56LL;
        if ( TopTimestampConfig )
        {
          if ( !memcmp(a1->HwTimestampCapabilities, Buf2, Buf2[1]) )
          {
LABEL_15:
            v14 = 0;
            goto LABEL_16;
          }
        }
        else
        {
          v18 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
          a1->HwTimestampCapabilities = v18;
          TopTimestampConfig = v18;
          if ( !v18 )
            return 0;
        }
LABEL_37:
        v14 = 1;
        goto LABEL_16;
      }
      if ( !TopTimestampConfig )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            24,
            261,
            (struct _GUID *)&WPP_43271d933b6d32d160b64a5fa7a4854c_Traceguids,
            (char)a1);
        }
        return 0;
      }
      TopTimestampConfig = a1->HwTimestampCurrentConfig;
      v12 = 56LL;
      if ( !TopTimestampConfig )
      {
        v17 = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
        a1->HwTimestampCurrentConfig = v17;
        TopTimestampConfig = v17;
        if ( !v17 )
          return 0;
        v14 = 1;
        goto LABEL_16;
      }
    }
    if ( !memcmp(TopTimestampConfig, Buf2, Buf2[1]) )
      goto LABEL_15;
    goto LABEL_37;
  }
  v14 = 0;
LABEL_39:
  if ( a6 )
    *a6 = v14;
  return v10;
}
