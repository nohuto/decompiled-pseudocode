/*
 * XREFs of sub_14004A99C @ 0x14004A99C
 * Callers:
 *     sub_1400495E4 @ 0x1400495E4 (sub_1400495E4.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_140004BDC @ 0x140004BDC (sub_140004BDC.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140006350 @ 0x140006350 (sub_140006350.c)
 *     sub_1400100B8 @ 0x1400100B8 (sub_1400100B8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_140028658 @ 0x140028658 (sub_140028658.c)
 *     sub_14002BFD8 @ 0x14002BFD8 (sub_14002BFD8.c)
 *     sub_14002C058 @ 0x14002C058 (sub_14002C058.c)
 *     sub_14002C2AC @ 0x14002C2AC (sub_14002C2AC.c)
 *     sub_14002C2D8 @ 0x14002C2D8 (sub_14002C2D8.c)
 *     sub_14002C304 @ 0x14002C304 (sub_14002C304.c)
 *     sub_14002C3B4 @ 0x14002C3B4 (sub_14002C3B4.c)
 *     sub_14003009C @ 0x14003009C (sub_14003009C.c)
 *     sub_1400301C4 @ 0x1400301C4 (sub_1400301C4.c)
 *     sub_140047614 @ 0x140047614 (sub_140047614.c)
 *     sub_14004903C @ 0x14004903C (sub_14004903C.c)
 *     sub_140049940 @ 0x140049940 (sub_140049940.c)
 *     sub_140049A7C @ 0x140049A7C (sub_140049A7C.c)
 *     sub_140049BE4 @ 0x140049BE4 (sub_140049BE4.c)
 *     sub_14004B714 @ 0x14004B714 (sub_14004B714.c)
 */

__int64 __fastcall sub_14004A99C(PDEVICE_OBJECT DeviceObject)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned __int16 v4; // r9
  int v5; // eax
  unsigned __int16 v6; // r9
  unsigned int v7; // r8d
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // si
  char v14; // r15
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  int *v21; // rdi
  unsigned __int8 i; // bl
  int v23; // eax
  __int64 v24; // rax
  const char *v25; // rax
  int v26; // edx
  int v27; // edx
  int v29; // [rsp+30h] [rbp-51h]
  int v30; // [rsp+38h] [rbp-49h]
  bool v31; // [rsp+48h] [rbp-39h] BYREF
  bool v32[3]; // [rsp+49h] [rbp-38h] BYREF
  int v33; // [rsp+4Ch] [rbp-35h] BYREF
  int v34; // [rsp+50h] [rbp-31h] BYREF
  int v35; // [rsp+54h] [rbp-2Dh] BYREF
  int v36; // [rsp+58h] [rbp-29h] BYREF
  int v37; // [rsp+5Ch] [rbp-25h] BYREF
  __int128 v38; // [rsp+60h] [rbp-21h] BYREF
  __int128 v39; // [rsp+70h] [rbp-11h]
  __int64 v40; // [rsp+80h] [rbp-1h]
  __int128 InputBuffer; // [rsp+88h] [rbp+7h] BYREF
  __int128 v42; // [rsp+98h] [rbp+17h] BYREF

  v37 = 0;
  v35 = 0;
  v36 = 0;
  v32[0] = 0;
  v31 = 0;
  LODWORD(v40) = 0;
  InputBuffer = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v2 = ZwPowerInformation(ProcessorStateHandler, 0LL, 0, &dword_140019468, 0x118u);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v4 = 10;
LABEL_125:
      v7 = 3;
      goto LABEL_126;
    }
    return v3;
  }
  v5 = dword_140019468;
  if ( dword_140019468 != 82 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return (unsigned int)-1073741735;
    v6 = 11;
    v30 = 82;
LABEL_7:
    sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 3u, v6, (__int64)&unk_140012AE0, v5, v30);
    return (unsigned int)-1073741735;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2496))(
         qword_140019128,
         0LL,
         &qword_140019158);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 12;
LABEL_12:
    v7 = 4;
LABEL_126:
    v29 = v2;
    goto LABEL_127;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2496))(
         qword_140019128,
         0LL,
         &qword_140019168);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 13;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2496))(
         qword_140019128,
         0LL,
         &qword_140019160);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 14;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2496))(
         qword_140019128,
         0LL,
         &qword_140019798);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 15;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2496))(
         qword_140019128,
         0LL,
         &qword_140019170);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 16;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2520))(
         qword_140019128,
         0LL,
         &qword_1400197B8);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 17;
    goto LABEL_12;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(qword_140019120 + 2520))(
         qword_140019128,
         0LL,
         &qword_140019790);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v3;
    v4 = 18;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 1u);
  WorkItem = IoAllocateWorkItem(DeviceObject);
  word_1400197CC = 0;
  v9 = 2LL;
  qword_1400197C0 = WorkItem;
  qword_1400191A0 = (__int64)&qword_140019198;
  qword_140019198 = (__int64)&qword_140019198;
  qword_1400191B0 = (__int64)&qword_1400191A8;
  qword_1400191A8 = (__int64)&qword_1400191A8;
  qword_1400191C0 = (__int64)&qword_1400191B8;
  qword_1400191B8 = (__int64)&qword_1400191B8;
  qword_1400191D0 = (__int64)&qword_1400191C8;
  qword_1400191C8 = (__int64)&qword_1400191C8;
  qword_1400191E0 = (__int64)&qword_1400191D8;
  qword_1400191D8 = (__int64)&qword_1400191D8;
  qword_1400197A8 = (__int64)&qword_1400197A0;
  qword_1400197A0 = (__int64)&qword_1400197A0;
  qword_140019AA0 = (__int64)&qword_140019A98;
  qword_140019A98 = (__int64)&qword_140019A98;
  v10 = &unk_140019178;
  qword_140019A90 = 0LL;
  do
  {
    v10[1] = v10;
    *v10 = v10;
    v10 += 2;
    --v9;
  }
  while ( v9 );
  sub_140028658(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"AllowPepPerfStates",
    &v37);
  sub_140028658(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"Overrides",
    &dword_140019150);
  sub_14002C3B4(v12, v11, &qword_140019148);
  sub_140028658(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
    (__int64)L"DisableAsserts",
    &v35);
  if ( v35 )
    byte_1400197E8 = 1;
  sub_140028658(
    (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Throttle",
    (__int64)L"PerfEnablePackageIdle",
    &v36);
  qword_140019688 = (__int64)sub_14003D4B0;
  word_140019A69 = 0;
  qword_1400196D0 = (__int64)sub_140037AD0;
  byte_1400196D8 = v36 == 0;
  dword_1400196DC = 0;
  qword_140019690 = (__int64)sub_140038B50;
  qword_1400196A0 = (__int64)sub_140038B30;
  qword_1400196A8 = (__int64)sub_14000DF50;
  qword_140019698 = (__int64)sub_1400457E0;
  qword_1400196B0 = (__int64)sub_140038130;
  qword_1400196B8 = (__int64)sub_1400385B0;
  qword_1400196C0 = (__int64)sub_140035700;
  qword_1400196C8 = (__int64)sub_1400383C0;
  v34 = 0;
  sub_140006350();
  v13 = 0;
  byte_1400196E0 = 0;
  v14 = 0;
  if ( sub_140004BDC() )
  {
    v13 = (BYTE8(InputBuffer) & 0x20) != 0;
    LOBYTE(word_140019A69) = 1;
    sub_1400100B8();
    InputBuffer = 0LL;
    sub_140006350();
    if ( (InputBuffer & 0x100000000000LL) != 0 && (v42 & 0x1000) == 0 )
    {
      sub_1400301C4(&v31, 0LL, v32);
      if ( v31 )
      {
        v3 = sub_140049940();
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        dword_1400196DC = 1;
        qword_140019690 = (__int64)sub_140030F50;
        qword_1400196D0 = (__int64)sub_140030B50;
        qword_1400196A0 = (__int64)sub_140030F30;
        qword_1400196A8 = (__int64)sub_140030C70;
        qword_1400196B0 = (__int64)sub_140030710;
        if ( v32[0] )
          word_140019A69 = 256;
        else
          qword_140019688 = (__int64)sub_140030B50;
        byte_140019AA8 = 1;
        qword_1400196C0 = (__int64)sub_140030280;
        qword_1400196C8 = (__int64)sub_140029000;
      }
      dword_140019A60 = sub_14003009C();
      goto LABEL_58;
    }
    v14 = 1;
    qword_140019688 = (__int64)sub_140030450;
    if ( (v42 & 0x1000) != 0 )
    {
      sub_1400301C4(&v31, 0LL, v32);
      if ( v31 )
        qword_1400196A0 = (__int64)sub_140030F30;
    }
    sub_140028658(
      (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
      (__int64)L"AllowGuestPerfStates",
      &v34);
    if ( !v34 )
    {
      qword_140019690 = (__int64)sub_140030F70;
      qword_1400196A8 = (__int64)sub_140030F70;
      qword_140019698 = (__int64)sub_140030F70;
      qword_1400196B0 = (__int64)sub_140030F70;
      qword_1400196B8 = (__int64)sub_140030F70;
      if ( v13 )
      {
        byte_1400196E0 = 1;
      }
      else
      {
        qword_1400196A0 = (__int64)sub_140030F70;
        qword_1400196C8 = (__int64)sub_140030F70;
      }
    }
  }
  if ( (int)HalPrivateDispatchTable[143]((__int64)&v38) >= 0 )
  {
    v5 = v38;
    if ( (_DWORD)v38 != 1 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)-1073741735;
      v6 = 19;
      v30 = 1;
      goto LABEL_7;
    }
    qword_140019520 = *((_QWORD *)&v38 + 1);
    xmmword_140019528 = v39;
    qword_140019538 = v40;
  }
  dword_140019A64 = dword_140019154 + HalPrivateDispatchTable[145](0xFFFFFFFFLL);
  dword_140019A60 = 2;
LABEL_58:
  ::DeviceObject.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 0x4000LL, 1919119952LL);
  if ( ::DeviceObject.Queue.ListEntry.Flink )
  {
    v2 = EtwRegister(
           &ProviderId,
           (PETWENABLECALLBACK)sub_140042830,
           0LL,
           (PREGHANDLE)&::DeviceObject.Queue.ListEntry.Blink);
    v3 = v2;
    if ( v2 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v4 = 21;
        goto LABEL_125;
      }
    }
    else
    {
      sub_14002C304((char *)&dword_140018C80);
      byte_140019130 = 1;
      *((_QWORD *)&InputBuffer + 1) = 0LL;
      *(_QWORD *)&InputBuffer = sub_14000D680;
      v2 = ZwPowerInformation(SystemPowerStateNotifyHandler, &InputBuffer, 0x10u, 0LL, 0);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v2 = sub_140049A7C(v15);
        v3 = v2;
        if ( v2 >= 0 )
        {
          v33 = 1;
          EmClientQueryRuleState(&unk_140013EE0, &v33);
          v16 = v33 == 2;
          v33 = 1;
          v17 = 0;
          if ( v16 )
            v17 = 1879048192;
          EmClientQueryRuleState(&unk_140013F10, &v33);
          if ( v33 == 2 )
            v17 |= 2u;
          v33 = 1;
          EmClientQueryRuleState(&unk_140013E80, &v33);
          if ( v33 == 2 )
            v17 |= 0x3300000u;
          v33 = 1;
          EmClientQueryRuleState(&unk_140013EC0, &v33);
          if ( v33 == 2 )
            v17 |= 0x80000000;
          v18 = v17;
          v19 = 0x180891100277LL;
          qword_140019148 = v17 | (unsigned __int64)qword_140019148;
          dword_1400196F4 = v17;
          dword_1400192F0 = 1;
          dword_1400192F4 = 376;
          if ( v37 )
            v19 = 0x181891500277LL;
          qword_140019140[0] = v19 | 0x2010408800400LL;
          if ( (unsigned __int8)PoEnergyEstimationEnabled() )
          {
            v21 = dword_140019840;
            qword_140019140[0] |= 0x2000000000uLL;
            for ( i = 0; i < 2u; ++i )
            {
              LOBYTE(v20) = i;
              sub_14004B714(v20, v21);
              v21 += 64;
            }
          }
          *(_QWORD *)&v42 = 0LL;
          sub_14002C304((char *)&dword_140018CB8);
          v23 = sub_14004903C((__int64)&dword_1400192F0, &v42);
          v3 = v23;
          if ( v23 >= 0 )
          {
            v24 = qword_140019140[0] | v42;
            qword_140019140[0] |= v42;
            if ( v14 )
            {
              qword_140019318 = 0LL;
              qword_140019330 = 0LL;
              qword_140019338 = 0LL;
              qword_140019340 = 0LL;
              qword_140019360 = 0LL;
              qword_140019348 = 0LL;
              qword_140019350 = 0LL;
              qword_140019370 = 0LL;
              qword_140019378 = 0LL;
              qword_140019380 = 0LL;
              byte_1400193D8 = 0;
              qword_1400193E0 = 0LL;
              qword_1400193E8 = 0LL;
              if ( !v13 )
                qword_140019368 = 0LL;
              v24 &= 0xFFFE5FFFFFFFFFFFuLL;
              qword_140019140[0] = v24;
              if ( !v34 )
              {
                v24 &= ~0x800000000uLL;
                qword_140019140[0] = v24;
              }
            }
            if ( dword_1400196DC )
            {
              v24 &= ~0x200000000uLL;
              qword_140019140[0] = v24;
            }
            if ( dword_1400196DC != 1 )
              qword_140019140[0] = v24 & 0xFFFFBFFFFFFFFFFFuLL;
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              v25 = "Disabled";
              if ( dword_1400196DC )
                v25 = "Enabled";
              sub_140003BC4((__int64)off_140018050->DeviceExtension, 4u, 2u, 0x19u, (__int64)&unk_140012AE0, v25);
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              {
                if ( LOWORD(off_140018050->DeviceType) )
                {
                  LOBYTE(v26) = 5;
                  sub_140003D28(off_140018050->DeviceExtension, v26, 2, 26, (__int64)&unk_140012AE0);
                }
                if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
                {
                  LOBYTE(v26) = 5;
                  sub_140003D28(off_140018050->DeviceExtension, v26, 2, 27, (__int64)&unk_140012AE0);
                }
              }
            }
            sub_140049BE4(qword_140019140[0], 5u);
            if ( (v18 & qword_140019140[0] & 0x7F077) != 0 )
              sub_14002BFD8(0);
            if ( (v18 & qword_140019140[0] & 0x70000000) != 0 )
              sub_14002C2AC(0);
            if ( (v18 & qword_140019140[0] & 0x3300000) != 0 )
              sub_14002C2D8(0);
            if ( (v18 & qword_140019140[0] & 0x80000000LL) != 0 )
              sub_14002C058(0);
            if ( qword_140019148 )
            {
              if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
              {
                LOBYTE(v27) = 5;
                sub_140003D28(off_140018050->DeviceExtension, v27, 2, 28, (__int64)&unk_140012AE0);
              }
              sub_140049BE4(~qword_140019148, 5u);
              qword_140019140[0] &= ~qword_140019148;
            }
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LOBYTE(v27) = 4;
              sub_140003D28(off_140018050->DeviceExtension, v27, 2, 29, (__int64)&unk_140012AE0);
            }
            sub_140049BE4(qword_140019140[0], 4u);
            if ( qword_140019330 && (dword_140019150 & 0x70000000) != 0 )
              qword_140019330 = 0LL;
            if ( _bittest64(qword_140019140, 0x23u) )
              sub_140047614(0);
          }
          else
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x18u, (__int64)&unk_140012AE0, v23);
            sub_140010680((char *)&dword_1400192F0, 0, 0x178uLL);
          }
        }
        else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v4 = 23;
          goto LABEL_125;
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v4 = 22;
        goto LABEL_125;
      }
    }
  }
  else
  {
    v3 = -1073741670;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v4 = 20;
      v29 = -1073741670;
      v7 = 3;
LABEL_127:
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, v7, v4, (__int64)&unk_140012AE0, v29);
    }
  }
  return v3;
}
