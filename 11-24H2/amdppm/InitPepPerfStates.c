/*
 * XREFs of InitPepPerfStates @ 0x14003BB74
 * Callers:
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140003618 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 *     PepNotifyQueryFeedbackCounters @ 0x14003C374 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x14003C464 (PepNotifyQueryPerfCapabilities.c)
 *     ProcLibTracePepPerfCapabilities @ 0x140040108 (ProcLibTracePepPerfCapabilities.c)
 */

__int64 __fastcall InitPepPerfStates(__int64 a1)
{
  __int64 v2; // rdx
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int v4; // edx
  _DWORD *v5; // r15
  _DWORD *v6; // r13
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  PIO_WORKITEM WorkItem; // rax
  int v11; // edx
  __int64 Pool2; // rax
  int FeedbackCounters; // eax
  int v14; // edx
  int v15; // r9d
  unsigned int v16; // ecx
  int v17; // r11d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  int v22; // r9d
  unsigned __int16 v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r13d
  char v36; // r10
  char v37; // r11
  char v38; // bl
  char v39; // di
  __int64 i; // r8
  unsigned int v41; // eax
  unsigned int v42; // r9d
  unsigned int v43; // eax
  int v44; // r9d
  unsigned int v45; // r8d
  _DWORD *v46; // rax
  __int64 v47; // [rsp+28h] [rbp-30h]
  __int64 v48; // [rsp+30h] [rbp-28h]
  _DWORD v49[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v50; // [rsp+48h] [rbp-10h]
  __int64 v51; // [rsp+A0h] [rbp+48h] BYREF
  int v52; // [rsp+A8h] [rbp+50h] BYREF
  int v53; // [rsp+B0h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v52 = 0;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v53 = 0;
  v3(WdfDriverGlobals, v2, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 1137) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_5:
      v8 = -1073741823;
      goto LABEL_71;
    }
    v7 = 10;
LABEL_4:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      1,
      v7,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a1 + 1128);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v7 = 11;
    goto LABEL_4;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1176) = WorkItem;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        4,
        12,
        (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
    }
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(64LL, 8 * v9 + 56, 1919119952LL);
  v5 = (_DWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_12;
  FeedbackCounters = PepNotifyQueryFeedbackCounters(a1, v9, Pool2 + 56);
  v8 = FeedbackCounters;
  if ( FeedbackCounters < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_71;
    v15 = 13;
    goto LABEL_17;
  }
  v16 = 0;
  v17 = -1;
  v18 = -1;
  while ( v16 < v9 )
  {
    if ( !v5[2 * v16 + 15] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 14;
        goto LABEL_45;
      }
      goto LABEL_47;
    }
    v19 = v5[2 * v16 + 14];
    v20 = (v19 >> 1) & 3;
    if ( v20 > 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v23 = 15;
      goto LABEL_41;
    }
    v21 = v5[2 * v16 + 14] & 0x78;
    if ( v21 > 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v23 = 16;
LABEL_41:
      LODWORD(v48) = v20;
      LODWORD(v47) = v16;
LABEL_42:
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v23,
        (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
        v47,
        v48);
      goto LABEL_47;
    }
    if ( (v19 & 0x81) == 0x80 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 17;
        goto LABEL_45;
      }
LABEL_47:
      v8 = -1073741811;
      goto LABEL_71;
    }
    if ( v19 >= 0x100 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 18;
LABEL_45:
        LODWORD(v47) = v16;
LABEL_46:
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          1,
          v22,
          (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
          v47);
      }
      goto LABEL_47;
    }
    if ( (v19 & 0x78) != 0 )
    {
      if ( v21 == 8 && v17 == -1 )
        v17 = v16;
    }
    else if ( v18 == -1 )
    {
      v18 = v16;
    }
    ++v16;
  }
  if ( v18 == -1 )
  {
    v8 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        1,
        19,
        (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
    }
    goto LABEL_71;
  }
  v24 = v5[2 * v18 + 15];
  v5[12] = v18;
  v5[5] = v24;
  v5[13] = v17;
  FeedbackCounters = PepNotifyQueryPerfCapabilities(
                       a1,
                       (int)v5 + 4,
                       (int)v5 + 8,
                       (int)v5 + 12,
                       (__int64)(v5 + 4),
                       (__int64)&v52,
                       (__int64)&v53);
  v8 = FeedbackCounters;
  if ( FeedbackCounters >= 0 )
  {
    v25 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v51) = 0;
    if ( (int)PoFxProcessorNotification(v25, 44LL, &v51) >= 0 )
      *((_BYTE *)v5 + 36) = v51;
    v26 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v51) = 0;
    if ( (int)PoFxProcessorNotification(v26, 47LL, &v51) >= 0 )
      *(_BYTE *)v5 = v51;
    v27 = v5[2];
    if ( v5[1] < v27 || (v28 = v5[3], v27 < v28) || (v29 = v5[4], v28 < v29) || !v29 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_47;
      v44 = 21;
      goto LABEL_102;
    }
    v30 = *(unsigned __int8 *)(a1 + 1136);
    if ( !(_BYTE)v30 )
    {
LABEL_113:
      v45 = v5[2];
      v5[6] = 100 * v5[1] / v45;
      v5[7] = 100 * v5[3] / v45;
      v5[8] = 100 * v5[4] / v45;
      v46 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1919119952LL);
      if ( v46 )
      {
        v46[2] = 0;
        v6 = 0LL;
        *v46 = 1;
        v8 = 0;
        v46[1] = 5;
        v46[3] = v52;
        v46[5] = v53;
        v46[4] = 1;
        *(_QWORD *)(a1 + 1200) = v46;
        *(_QWORD *)(a1 + 1184) = v5;
        v5 = 0LL;
        ProcLibTracePepPerfCapabilities(a1, 0LL);
      }
      else
      {
        v8 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 30;
          LODWORD(v47) = -1073741670;
          LOBYTE(v14) = 2;
          goto LABEL_18;
        }
      }
      goto LABEL_71;
    }
    v51 = ExAllocatePool2(64LL, 24 * v30, 1919119952LL);
    v6 = (_DWORD *)v51;
    if ( v51 )
    {
      v31 = *(unsigned __int8 *)(a1 + 1136);
      v32 = *(_QWORD *)(a1 + 1120);
      v49[1] = 0;
      v49[0] = v31;
      v50 = v51;
      v33 = PoFxProcessorNotification(v32, 41LL, v49);
      v34 = v33;
      v8 = v33;
      if ( v33 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v47) = v33;
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v18,
          2,
          34,
          (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
          v47);
LABEL_68:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v47) = v34;
          LOBYTE(v18) = 3;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            3,
            22,
            (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
            v47);
        }
        v6 = (_DWORD *)v51;
        goto LABEL_71;
      }
      if ( v33 < 0 )
        goto LABEL_68;
      v6 = (_DWORD *)v51;
      v36 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v41 = *(unsigned __int8 *)(a1 + 1136);
        if ( (unsigned int)i >= v41 )
          break;
        v42 = v6[6 * i];
        v18 = 100 * v42 % v5[2];
        v6[6 * i + 2] = 100 * v42 / v5[2];
        v43 = v5[4];
        LODWORD(v51) = v43;
        if ( v42 < v43 || (v18 = v5[1], v42 > v18) )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v22 = 23;
          goto LABEL_98;
        }
        if ( (_DWORD)i )
        {
          if ( v42 >= v6[6 * (unsigned int)(i - 1)] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v23 = 24;
            LODWORD(v48) = i - 1;
            LODWORD(v47) = i;
            goto LABEL_42;
          }
          v43 = v51;
        }
        if ( v42 == v18 )
          v36 = 1;
        if ( v42 == v43 )
          v37 = 1;
        if ( v42 == v5[3] )
          v38 = 1;
        if ( v42 == v5[2] )
        {
          v39 = 1;
          if ( v6[6 * i + 1] != v5[5] )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v22 = 25;
LABEL_98:
            LODWORD(v47) = i;
            goto LABEL_46;
          }
        }
      }
      if ( v36 )
      {
        if ( v37 )
        {
          if ( v38 )
          {
            if ( v39 )
            {
              *((_BYTE *)v5 + 37) = v41;
              *((_QWORD *)v5 + 5) = v6;
              goto LABEL_113;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v44 = 29;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_47;
            v44 = 28;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_47;
          v44 = 27;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_47;
        v44 = 26;
      }
LABEL_102:
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        1,
        v44,
        (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids);
      goto LABEL_47;
    }
LABEL_12:
    v8 = -1073741670;
    goto LABEL_71;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 20;
LABEL_17:
    LODWORD(v47) = FeedbackCounters;
    LOBYTE(v14) = 3;
LABEL_18:
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      3,
      v15,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
      v47);
  }
LABEL_71:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  return v8;
}
