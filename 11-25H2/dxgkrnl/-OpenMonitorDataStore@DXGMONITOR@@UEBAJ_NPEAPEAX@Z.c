/*
 * XREFs of ?OpenMonitorDataStore@DXGMONITOR@@UEBAJ_NPEAPEAX@Z @ 0x1403E5810
 * Callers:
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1402777EC (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1403E5788 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004C414 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14008FE68 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGMONITOR::OpenMonitorDataStore(DXGMONITOR *this, char a2, void **a3)
{
  bool v3; // zf
  char v7; // bp
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax
  unsigned __int16 v14; // ax
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 64) == 1;
  Destination = 0LL;
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 531;
  }
  if ( !*((_WORD *)this + 184) )
  {
    WdLogSingleEntry2(2LL, (char *)this - 24, -1073741637LL);
    WdLogGlobalForLineNumber = 539;
    return 3221225659LL;
  }
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 80LL))(*((_QWORD *)this + 18)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 96LL))(*((_QWORD *)this + 18)) )
    {
      v12 = WdLogNewEntry5_WdTrace(v10, v9, v11, v8);
      *(_QWORD *)(v12 + 24) = (char *)this - 24;
      *(_QWORD *)(v12 + 32) = -1073741637LL;
      WdLogGlobalForLineNumber = 550;
      return 3221225659LL;
    }
    v7 = 1;
  }
  v14 = *((_WORD *)this + 184) + 170;
  Destination.MaximumLength = v14;
  if ( v7 )
  {
    v14 += *((_WORD *)this + 200);
    Destination.MaximumLength = v14;
  }
  Destination.Buffer = (wchar_t *)operator new[](v14, 0x4D677844u, 256LL, v8);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 23);
    if ( v7 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 25);
    v15 = a2 != 0 ? 0xFFF2FFDA : 0;
    v18 = DxgkOpenRegistrySubkey(a3, v15 + 983103, 0LL, &Destination);
    if ( v18 == -1073741772
      && (a2 || (v18 = DxgkCreateRegistrySubkey(a3, v15 + 983103, 0LL, &Destination), v18 == -1073741772)) )
    {
      v21 = WdLogNewEntry5_WdTrace(v17, v16, v19, v20);
      *(_QWORD *)(v21 + 24) = (char *)this - 24;
      *(_QWORD *)(v21 + 32) = -1073741772LL;
      WdLogGlobalForLineNumber = 616;
    }
    else if ( v18 < 0 )
    {
      WdLogSingleEntry2(2LL, (char *)this - 24, v18);
      WdLogGlobalForLineNumber = 620;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Destination.Buffer);
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry1(6LL, (char *)this - 24);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 575;
  }
  return result;
}
