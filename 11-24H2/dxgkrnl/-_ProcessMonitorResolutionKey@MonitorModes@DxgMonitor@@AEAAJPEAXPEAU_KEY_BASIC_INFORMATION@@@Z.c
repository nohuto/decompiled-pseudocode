/*
 * XREFs of ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14028BC08
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14028BA08 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14001EE78 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140021E58 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004BEC4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1400918F0 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ParseFreqRangeValue @ 0x14027E650 (ParseFreqRangeValue.c)
 *     xwcschr @ 0x14040286C (xwcschr.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1404028A4 (-xwtol@@YAKPEBG@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
        DxgMonitor::MonitorModes *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  unsigned int NameLength_low; // ebx
  WCHAR *Name; // rdi
  size_t v7; // r8
  _BYTE *v8; // r11
  unsigned int v9; // r10d
  _WORD *v10; // rax
  const unsigned __int16 *v11; // r11
  unsigned int v12; // eax
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // r14d
  int v17; // r15d
  NTSTATUS v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 i; // di
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  void *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rbx
  int valid; // eax
  DxgMonitor::MonitorModes *v32; // rbx
  DxgMonitor::MonitorModes **v33; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  void *v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _UNICODE_STRING v41; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+70h] [rbp-90h]
  int v44; // [rsp+74h] [rbp-8Ch]
  int v45; // [rsp+78h] [rbp-88h]
  int v46; // [rsp+7Ch] [rbp-84h]
  WCHAR SourceString[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v48[528]; // [rsp+90h] [rbp-70h] BYREF

  NameLength_low = LOWORD(a3->NameLength);
  Name = a3->Name;
  v41.Length = NameLength_low;
  v41.MaximumLength = NameLength_low;
  v41.Buffer = a3->Name;
  *(_DWORD *)(&v41.MaximumLength + 1) = 0;
  Handle = 0LL;
  memset(v48, 0, 0x208uLL);
  v7 = 518LL;
  if ( (unsigned __int16)NameLength_low <= 0x206u )
    v7 = NameLength_low;
  memmove(v48, Name, v7);
  v43 = 0;
  v44 = -1;
  v8 = v48;
  v46 = -1;
  v9 = 0;
  v45 = 0;
  do
  {
    if ( v9 >= 4 )
      break;
    v10 = (_WORD *)xwcschr(v8, 44LL);
    if ( v10 )
      *v10 = 0;
    v12 = xwtol(v11);
    v14 = v13;
    v8 = (_BYTE *)(v15 + 2);
    v9 = v13 + 1;
    *(&v43 + v14) = v12;
  }
  while ( v15 );
  v16 = v43;
  if ( !v43 || (v17 = v44, v44 == -1) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1028;
    if ( Handle )
      ZwClose(Handle);
    return 3221225473LL;
  }
  else
  {
    if ( Handle )
      ZwClose(Handle);
    Handle = 0LL;
    v18 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, a2, &v41);
    v19 = v18;
    if ( v18 >= 0 )
    {
      wcscpy(SourceString, L"ModeX");
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      for ( i = 1; i < 9u; ++i )
      {
        v36 = 0LL;
        SourceString[4] = i + 48;
        v21 = DxgkRetrieveValueFromRegistry(Handle, &DestinationString, &v36);
        v26 = v21;
        if ( v21 >= 0 )
        {
          v37 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          if ( !ParseFreqRangeValue(v36, (int)&v37, (int)&v38, (__int64)&v39, (__int64)&v40) )
          {
            WdLogSingleEntry1(2LL, i);
            WdLogGlobalForLineNumber = 1084;
            wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
              &v36,
              0LL);
            v19 = -1073741823;
            goto LABEL_30;
          }
          v29 = operator new(0x40uLL, 0x4D677844u, 256LL);
          v30 = (_QWORD *)v29;
          if ( !v29 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 1098;
            wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
              &v36,
              0LL);
            v19 = -1073741801;
            goto LABEL_30;
          }
          *(_DWORD *)(v29 + 4) = v37;
          *(_DWORD *)(v29 + 12) = v38;
          *(_DWORD *)(v29 + 20) = v39;
          *(_DWORD *)v29 = 4;
          *(_DWORD *)(v29 + 36) = 1;
          *(_DWORD *)(v29 + 40) = v16;
          *(_DWORD *)(v29 + 44) = v17;
          *(_DWORD *)(v29 + 8) = 1;
          *(_DWORD *)(v29 + 16) = 1;
          *(_DWORD *)(v29 + 24) = 1;
          *(_DWORD *)(v29 + 28) = v40;
          *(_DWORD *)(v29 + 32) = 1;
          valid = IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v29);
          if ( valid < 0 )
          {
            WdLogSingleEntry1(3LL, valid);
            WdLogGlobalForLineNumber = 1131;
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v30);
          }
          else
          {
            v32 = (DxgMonitor::MonitorModes *)(v30 + 6);
            v33 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 23);
            if ( *v33 != (DxgMonitor::MonitorModes *)((char *)this + 176) )
              __fastfail(3u);
            *(_QWORD *)v32 = (char *)this + 176;
            *((_QWORD *)v32 + 1) = v33;
            *v33 = v32;
            *((_QWORD *)this + 23) = v32;
            ++*((_DWORD *)this + 42);
            ++*((_DWORD *)this + 43);
          }
          wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
            &v36,
            0LL);
        }
        else
        {
          v27 = WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
          *(_QWORD *)(v27 + 24) = i;
          v28 = v36;
          *(_QWORD *)(v27 + 32) = v26;
          WdLogGlobalForLineNumber = 1066;
          if ( v28 )
            DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v28);
        }
      }
      if ( Handle )
        ZwClose(Handle);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 1037;
LABEL_30:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return v19;
    }
  }
}
