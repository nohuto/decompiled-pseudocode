/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEBAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1402760C4
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F0AAC (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVIMonitorDriverInterface@DxgMonitor@@@Z @ 0x14005252C (-reset@-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U-$default_delete@VIMonitorDriverInterf.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x14033C310 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(DXGMONITOR *this, struct _MONITOR_PACKED_ELD_INFORMATION *a2)
{
  unsigned int v4; // r15d
  unsigned __int16 *v5; // rbx
  __int64 v6; // rcx
  _WORD *v7; // r13
  _WORD *v8; // r12
  int v9; // edi
  unsigned __int64 v10; // rax
  unsigned __int16 *v11; // rdi
  int CCDMonitorID; // eax
  NTSTATUS v13; // edi
  unsigned int Length; // r14d
  unsigned __int64 v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG HashValue; // [rsp+70h] [rbp+40h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, __int64); // [rsp+78h] [rbp+48h] BYREF

  v4 = 130;
  v5 = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3066;
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3072;
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, __int64)))(*(_QWORD *)v6 + 24LL))(v6, &v19);
    if ( !v19 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 3083;
      wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
        &v19,
        0LL);
      return 3221225495LL;
    }
    v7 = (_WORD *)((char *)a2 + 10);
    v8 = (_WORD *)((char *)a2 + 8);
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), char *, char *))(*v19)[14])(
           v19,
           (char *)a2 + 8,
           (char *)a2 + 10);
    wistd::unique_ptr<DxgMonitor::IMonitorDriverInterface,wistd::default_delete<DxgMonitor::IMonitorDriverInterface>>::reset(
      &v19,
      0LL);
    if ( v9 >= 0 )
      goto LABEL_12;
  }
  else
  {
    v8 = (_WORD *)((char *)a2 + 8);
    v7 = (_WORD *)((char *)a2 + 10);
  }
  *v8 = 0;
  *v7 = 0;
  while ( 1 )
  {
LABEL_12:
    v4 *= 2;
    v10 = 2LL * v4;
    v11 = v5;
    if ( !is_mul_ok(v4, 2uLL) )
      v10 = -1LL;
    v5 = (unsigned __int16 *)operator new[](v10, 0x4D677844u, 256LL);
    if ( v11 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v11);
    if ( !v5 )
      break;
    CCDMonitorID = DXGMONITOR::GetCCDMonitorID((DXGMONITOR *)((char *)this + 16), 0, v4, v5);
    v13 = CCDMonitorID;
    if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
    {
      if ( CCDMonitorID >= 0 )
      {
        HashValue = 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v5);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        v13 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( v13 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3178;
        }
        *(_QWORD *)a2 = HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v15 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v5[v15];
          v13 = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          if ( v13 < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 3195;
          }
          *(_QWORD *)a2 |= (unsigned __int64)HashValue << 32;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, this, CCDMonitorID);
        WdLogGlobalForLineNumber = 3143;
      }
LABEL_29:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      return (unsigned int)v13;
    }
    v13 = -1073741789;
    if ( v4 >= 0x410 )
      goto LABEL_29;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 3120;
  return 3221225495LL;
}
