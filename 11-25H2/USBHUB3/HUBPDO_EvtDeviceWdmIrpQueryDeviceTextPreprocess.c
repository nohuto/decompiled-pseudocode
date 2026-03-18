/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x140017E38
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x140016670 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     RtlStringCbPrintfW @ 0x14001D294 (RtlStringCbPrintfW.c)
 *     HUBMISC_WaitForSignal @ 0x140033EF8 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(__int64 a1, IRP *a2)
{
  NTSTATUS v3; // ebp
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v6; // r14
  unsigned int Length; // eax
  int v8; // edx
  wchar_t *Pool2; // rbx
  int v10; // r9d
  __int16 Size; // r15
  unsigned __int8 *v12; // rax
  __int64 v13; // rdx
  _WORD *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  unsigned __int64 v17; // rax
  void *v18; // rcx
  unsigned __int8 *v19; // rax
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rdi
  size_t v23; // rbx

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006C0F8);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v4 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, 42LL, 1681082453LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v3 = -1073741670;
        goto LABEL_35;
      }
      v10 = 53;
LABEL_5:
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        v8,
        5,
        v10,
        (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids);
      goto LABEL_6;
    }
    v3 = RtlStringCbPrintfW(
           Pool2,
           0x2AuLL,
           L"Port_#%04d.Hub_#%04d",
           *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
           *(_DWORD *)(*(_QWORD *)v6 + 96LL));
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
          2u,
          5u,
          0x36u,
          (__int64)&WPP_31a10eb015d93b042fda7856b1df3354_Traceguids,
          v3);
      ExFreePoolWithTag(Pool2, 0x64334855u);
      goto LABEL_35;
    }
    a2->IoStatus.Information = (unsigned __int64)Pool2;
LABEL_34:
    v3 = 0;
    goto LABEL_35;
  }
  if ( !Length && *(_BYTE *)(v6 + 2003) && (*(_DWORD *)(v6 + 1644) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( Size )
    {
      v12 = *(unsigned __int8 **)(v6 + 2024);
      if ( v12 )
      {
        v13 = *v12;
        if ( (unsigned __int8)v13 > 2u )
        {
          v14 = v12 + 2;
          v15 = v13 - 2;
          v16 = 0;
          v17 = v15 >> 1;
          if ( (_DWORD)v17 )
          {
            do
            {
              if ( !*v14 )
                break;
              if ( *v14 == Size )
                goto LABEL_23;
              ++v16;
              ++v14;
            }
            while ( v16 < (unsigned int)v17 );
          }
        }
      }
    }
    Size = 1033;
LABEL_23:
    if ( Size != *(_WORD *)(v6 + 2040) )
    {
      v18 = *(void **)(v6 + 2032);
      *(_WORD *)(v6 + 2040) = Size;
      if ( v18 )
        ExFreePoolWithTag(v18, 0x64334855u);
      *(_QWORD *)(v6 + 2032) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 472));
      HUBSM_AddEvent(v6 + 504, 4087);
      HUBMISC_WaitForSignal((PVOID)(v6 + 472));
    }
    v19 = *(unsigned __int8 **)(v6 + 2032);
    if ( v19
      || Size != 1033
      && (*(_WORD *)(v6 + 2040) = 1033,
          KeClearEvent((PRKEVENT)(v6 + 472)),
          HUBSM_AddEvent(v6 + 504, 4087),
          HUBMISC_WaitForSignal((PVOID)(v6 + 472)),
          (v19 = *(unsigned __int8 **)(v6 + 2032)) != 0LL) )
    {
      v20 = (unsigned __int16)((((unsigned __int64)*v19 - 2) >> 1) + 1);
      v21 = (char *)ExAllocatePool2(64LL, 2 * v20, 1681082453LL);
      v22 = v21;
      if ( !v21 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v10 = 55;
        goto LABEL_5;
      }
      v23 = 2 * v20 - 2;
      memmove(v21, (const void *)(*(_QWORD *)(v6 + 2032) + 2LL), v23);
      *(_WORD *)&v22[v23] = 0;
      a2->IoStatus.Information = (unsigned __int64)v22;
      goto LABEL_34;
    }
  }
LABEL_35:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
