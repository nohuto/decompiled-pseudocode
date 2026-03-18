/*
 * XREFs of AcpiDiagTraceThermalZoneRundown @ 0x140038E40
 * Callers:
 *     AcpiDiagTraceControlCallback @ 0x140056B30 (AcpiDiagTraceControlCallback.c)
 * Callees:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x140039278 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagEnumCoolingDevices @ 0x1400392FC (AcpiDiagEnumCoolingDevices.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1400394F0 (ACPIAmliBuildObjectPathnameUnicode.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x140039F70 (AcpiDiagTracePassiveCoolingConstraint.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

void __fastcall AcpiDiagTraceThermalZoneRundown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rdx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  _QWORD *v10; // rax
  ULONG v11; // r14d
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 Pool2; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int *v26; // rdx
  __int64 v27; // rax
  int v28; // r9d
  _DWORD *v29; // r15
  unsigned int v30; // edi
  _BYTE *v31; // r12
  __int64 v32; // rax
  unsigned int v33; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 v34; // [rsp+3Ch] [rbp-25h] BYREF
  __int16 v35; // [rsp+40h] [rbp-21h] BYREF
  int v36; // [rsp+44h] [rbp-1Dh] BYREF
  int v37; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v39[40]; // [rsp+60h] [rbp-1h] BYREF

  v4 = *(_QWORD *)(a1 + 200);
  v35 = 0;
  DestinationString = 0LL;
  v34 = 0;
  v6 = (_QWORD **)(v4 + 176);
  v36 = 0;
  v37 = 0;
  for ( i = *(_QWORD **)(v4 + 176); i != v6; i = (_QWORD *)*i )
  {
    v8 = i[5];
    if ( v8 )
    {
      LOBYTE(a3) = 1;
      v21 = i[4];
      if ( *((_BYTE *)i + 52) )
      {
        LOBYTE(a4) = *((_BYTE *)i + 53);
        AcpiDiagTracePassiveCoolingConstraint(v21, v8, a3, a4);
      }
      else
      {
        LOBYTE(a4) = *((_BYTE *)i + 55);
        AcpiDiagTraceActiveCoolingConstraint(v21, v8, a3, a4);
      }
    }
  }
  RtlInitUnicodeString(&DestinationString, 0LL);
  UserData = 0LL;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
  {
    if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0 )
      {
        v10 = *v6;
        v11 = 30;
        while ( v10 != v6 )
        {
          v10 = (_QWORD *)*v10;
          ++v11;
        }
        Pool2 = ExAllocatePool2(64LL, 16LL * v11, 1416651585LL);
        UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
        if ( Pool2 )
        {
          v34 = DestinationString.Length >> 1;
          *(_QWORD *)Pool2 = &v34;
          LOBYTE(v23) = 1;
          *(_QWORD *)(Pool2 + 8) = 2LL;
          v24 = 2 * v34;
          *(_QWORD *)(Pool2 + 16) = DestinationString.Buffer;
          *(_DWORD *)(Pool2 + 24) = v24;
          *(_DWORD *)(Pool2 + 28) = 0;
          *(_QWORD *)(Pool2 + 32) = v4 + 16;
          *(_QWORD *)(Pool2 + 40) = 4LL;
          *(_QWORD *)(Pool2 + 48) = v4 + 20;
          *(_QWORD *)(Pool2 + 56) = 4LL;
          *(_QWORD *)(Pool2 + 64) = v4 + 4;
          *(_QWORD *)(Pool2 + 72) = 4LL;
          *(_QWORD *)(Pool2 + 80) = v4 + 8;
          *(_QWORD *)(Pool2 + 88) = 4LL;
          *(_QWORD *)(Pool2 + 96) = v4 + 336;
          *(_QWORD *)(Pool2 + 104) = 4LL;
          *(_QWORD *)(Pool2 + 112) = v4 + 36;
          *(_QWORD *)(Pool2 + 120) = 40LL;
          *(_QWORD *)(Pool2 + 128) = v4 + 76;
          *(_QWORD *)(Pool2 + 136) = 4LL;
          *(_QWORD *)(Pool2 + 144) = v4 + 28;
          *(_QWORD *)(Pool2 + 152) = 4LL;
          *(_QWORD *)(Pool2 + 160) = v4 + 104;
          *(_QWORD *)(Pool2 + 168) = 4LL;
          *(_QWORD *)(Pool2 + 176) = &v36;
          *(_QWORD *)(Pool2 + 184) = 4LL;
          v33 = 12;
          v25 = AcpiDiagEnumCoolingDevices(v4, v23, 1, Pool2, (__int64)&v33);
          v26 = &v37;
          v36 = v25;
          v27 = v33++;
          UserData[v27].Ptr = (unsigned __int64)&v37;
          LOBYTE(v26) = 1;
          *(_QWORD *)&UserData[v27].Size = 4LL;
          v37 = AcpiDiagEnumCoolingDevices(v4, (_DWORD)v26, 0, v28, (__int64)&v33);
          v29 = v39;
          v30 = 0;
          v31 = v39;
          do
          {
            v32 = v33++;
            UserData[v32].Ptr = (unsigned __int64)v31;
            *(_QWORD *)&UserData[v32].Size = 4LL;
            *v29 = AcpiDiagEnumCoolingDevices(v4, 0, v30, (_DWORD)UserData, (__int64)&v33);
            v31 += 4;
            ++v29;
            ++v30;
          }
          while ( v30 < 0xA );
          v12 = v33;
          v13 = v33 + 1;
          UserData[v12].Ptr = v4 + 80;
          *(_QWORD *)&UserData[v12].Size = 4LL;
          v14 = v13++;
          UserData[v14].Ptr = v4 + 24;
          *(_QWORD *)&UserData[v14].Size = 4LL;
          v15 = v13++;
          UserData[v15].Ptr = v4 + 332;
          *(_QWORD *)&UserData[v15].Size = 4LL;
          v16 = v13;
          UserData[v16].Ptr = v4 + 84;
          *(_QWORD *)&UserData[v16].Size = 4LL;
          v35 = *(_WORD *)(v4 + 304) >> 1;
          v17 = v13 + 1;
          v18 = v13 + 2;
          UserData[v17].Ptr = (unsigned __int64)&v35;
          *(_QWORD *)&UserData[v17].Size = 2LL;
          v19 = *(_QWORD *)(v4 + 312);
          UserData[v18].Size = *(unsigned __int16 *)(v4 + 304);
          UserData[v18].Ptr = v19;
          v20 = v13 + 3;
          UserData[v18].Reserved = 0;
          *(_QWORD *)&UserData[v20].Size = 4LL;
          UserData[v20].Ptr = v4 + 88;
          EtwWrite(
            (REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
            &ACPI_ETW_EVENT_THERMAL_ZONE_RUNDOWN,
            0LL,
            v11,
            UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( UserData )
    ExFreePoolWithTag(UserData, 0x54706341u);
}
