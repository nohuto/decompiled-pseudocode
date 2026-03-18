/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x14026F164
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F6A3C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005287C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140367C10 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(
        DXGMONITOR *this,
        struct _MONITOR_PACKED_ELD_INFORMATION *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // r15d
  unsigned __int16 *v7; // rbx
  __int64 v8; // rcx
  _WORD *v9; // r13
  _WORD *v10; // r12
  int v11; // edi
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rdi
  int CCDMonitorID; // eax
  NTSTATUS v15; // edi
  unsigned int Length; // r14d
  unsigned __int64 v17; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG HashValue; // [rsp+70h] [rbp+40h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, __int64); // [rsp+78h] [rbp+48h] BYREF

  v6 = 130;
  v7 = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2962;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2968;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, __int64)))(*(_QWORD *)v8 + 24LL))(v8, &v21);
    if ( !v21 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 2979;
      wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
        &v21,
        0LL);
      return 3221225495LL;
    }
    v9 = (_WORD *)((char *)a2 + 10);
    v10 = (_WORD *)((char *)a2 + 8);
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), char *, char *))(*v21)[14])(
            v21,
            (char *)a2 + 8,
            (char *)a2 + 10);
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v21,
      0LL);
    if ( v11 >= 0 )
      goto LABEL_12;
  }
  else
  {
    v10 = (_WORD *)((char *)a2 + 8);
    v9 = (_WORD *)((char *)a2 + 10);
  }
  *v10 = 0;
  *v9 = 0;
  while ( 1 )
  {
LABEL_12:
    v6 *= 2;
    v12 = 2LL * v6;
    v13 = v7;
    if ( !is_mul_ok(v6, 2uLL) )
      v12 = -1LL;
    v7 = (unsigned __int16 *)operator new[](v12, 0x4D677844u, 256LL, a4);
    if ( v13 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v13);
    if ( !v7 )
      break;
    CCDMonitorID = DXGMONITOR::GetCCDMonitorID((DXGMONITOR *)((char *)this + 16), 0, v6, v7);
    v15 = CCDMonitorID;
    if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
    {
      if ( CCDMonitorID >= 0 )
      {
        HashValue = 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v7);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        v15 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( v15 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3074;
        }
        *(_QWORD *)a2 = HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v17 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v7[v17];
          v15 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          if ( v15 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3091;
          }
          *(_QWORD *)a2 |= (unsigned __int64)HashValue << 32;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, this, CCDMonitorID);
        WdLogGlobalForLineNumber = 3039;
      }
LABEL_29:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
      return (unsigned int)v15;
    }
    v15 = -1073741789;
    if ( v6 >= 0x410 )
      goto LABEL_29;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3016;
  return 3221225495LL;
}
