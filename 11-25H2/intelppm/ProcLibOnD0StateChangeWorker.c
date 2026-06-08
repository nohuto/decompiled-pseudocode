/*
 * XREFs of ProcLibOnD0StateChangeWorker @ 0x140004DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     AcpiEval_TPC @ 0x1400444F4 (AcpiEval_TPC.c)
 *     AcpiEval_PPC @ 0x1400447C8 (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x140044B24 (ProcLibCapChange.c)
 */

void __fastcall ProcLibOnD0StateChangeWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  _DWORD *DeviceExtension; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = 0;
  v11 = 0;
  v5 = 0;
  if ( (DeviceExtension[70] & 0x70000000) != 0 )
  {
    v7 = AcpiEval_PPC(DeviceExtension, &v11);
    if ( v7 < 0 )
    {
      if ( v7 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v8,
            2,
            18,
            (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v8,
          3,
          19,
          (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
          v7);
      }
    }
    else
    {
      v5 = v11;
    }
  }
  v6 = DeviceExtension[70];
  v11 = 0;
  if ( (v6 & 0x3000000) != 0 )
  {
    v9 = AcpiEval_TPC(DeviceExtension, &v11);
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v10) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            2,
            20,
            (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          3,
          21,
          (__int64)&WPP_2180814116133f7fef7f45f5db7b6d6f_Traceguids,
          v9);
      }
    }
    else
    {
      v3 = v11;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019188,
    0LL);
  if ( v5 != DeviceExtension[116] || v3 != DeviceExtension[128] )
  {
    ProcLibCapChange(DeviceExtension, v5, v3, 100LL);
    ((void (__fastcall *)(_DWORD *))qword_1400196C8)(DeviceExtension);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  IoFreeWorkItem(Context);
}
