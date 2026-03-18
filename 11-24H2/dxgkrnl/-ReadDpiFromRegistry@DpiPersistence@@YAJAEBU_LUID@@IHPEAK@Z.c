/*
 * XREFs of ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x14033C7C0
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x14030D570 (DxgkUpdateGdiInfo.c)
 *     DxgkGetDpiOverrideForSource @ 0x14033B0B0 (DxgkGetDpiOverrideForSource.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x140063B04 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x14033B220 (-WriteDwordToParticularRegValue@DpiPersistence@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x14033C79C (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x14033CD38 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1403E708C (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  struct _UNICODE_STRING *v5; // rsi
  __int64 v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  const WCHAR *v20; // rdx
  struct _UNICODE_STRING v21; // xmm0
  NTSTATUS v22; // eax
  const wchar_t *v23; // r9
  void *v24; // rax
  NTSTATUS v25; // eax
  void *v26; // r8
  int v27; // eax
  void *v28; // rdx
  int v29; // eax
  const struct _UNICODE_STRING *v30; // r9
  unsigned int *v32; // [rsp+20h] [rbp-E0h]
  void *v33; // [rsp+50h] [rbp-B0h] BYREF
  void *v34; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v37; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES v39; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v40; // [rsp+F0h] [rbp-10h] BYREF
  int v41; // [rsp+F8h] [rbp-8h]
  const WCHAR *v42; // [rsp+100h] [rbp+0h]
  struct _UNICODE_STRING *v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+110h] [rbp+10h]
  int *v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  __int128 v50; // [rsp+140h] [rbp+40h]
  __int128 v51; // [rsp+150h] [rbp+50h]
  int v52; // [rsp+1B0h] [rbp+B0h] BYREF
  void *KeyHandle; // [rsp+1B8h] [rbp+B8h] BYREF

  v52 = 0;
  *(_DWORD *)&a4->Length = 0;
  KeyHandle = 0LL;
  v37 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  v34 = 0LL;
  DestinationString = 0LL;
  v35 = 0LL;
  LODWORD(v7) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v37, a4);
  if ( (int)v7 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionData = DXGGLOBAL::GetSessionData(Global);
    v5 = (struct _UNICODE_STRING *)SessionData;
    if ( !SessionData )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId();
      LODWORD(v7) = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      WdLogGlobalForLineNumber = 828;
      v15 = PsGetCurrentProcessSessionId();
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v15,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_26;
    }
    if ( *((_QWORD *)SessionData + 2343) )
    {
      WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v21 = v5[1171];
      WdLogGlobalForLineNumber = 860;
      v20 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
      DestinationString = v21;
    }
    else
    {
      if ( DXGSESSIONDATA::GetUserRegistryPath(SessionData, 0)->Length )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 851;
        DxgkLogInternalTriageEvent(
          0LL,
          262146LL,
          0xFFFFFFFFLL,
          L"pDxgSessionData->GetUserRegistryPath()->Length == 0",
          851LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      WdLogGlobalForLineNumber = 852;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
      v20 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
    }
    RtlInitUnicodeString(&v35, v20);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v22 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    v7 = v22;
    if ( v22 >= 0 )
    {
      v24 = KeyHandle;
      if ( !KeyHandle )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 880;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"HKeyRootHandle", 880LL, 0LL, 0LL, 0LL, 0LL);
        v24 = KeyHandle;
      }
      v39.RootDirectory = v24;
      *(_QWORD *)&v39.Length = 48LL;
      v39.ObjectName = &v35;
      *(_QWORD *)&v39.Attributes = 576LL;
      *(_OWORD *)&v39.SecurityDescriptor = 0LL;
      v25 = ZwOpenKey(&v33, 0xF003Fu, &v39);
      LODWORD(v7) = v25;
      if ( v25 < 0 )
      {
        WdLogSingleEntry1(4LL, v25);
        WdLogGlobalForLineNumber = 892;
        goto LABEL_24;
      }
      v26 = v33;
      if ( !v33 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 896;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"PerMonSettingsKeyHandle", 896LL, 0LL, 0LL, 0LL, 0LL);
        v26 = v33;
      }
      v27 = OpenRegistrySubkey(&v34, 0xF003Fu, v26, &v37, 0LL);
      LODWORD(v7) = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(4LL, v27);
        WdLogGlobalForLineNumber = 909;
        goto LABEL_24;
      }
      v28 = v34;
      if ( !v34 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 912;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"MonitorIdKeyHandle", 912LL, 0LL, 0LL, 0LL, 0LL);
        v28 = v34;
      }
      v40 = 0LL;
      v41 = 288;
      v42 = L"DpiValue";
      v43 = a4;
      v45 = &v52;
      v44 = 67108868;
      v46 = 4;
      v47 = 0LL;
      v48 = 0;
      v49 = 0LL;
      v50 = 0LL;
      v51 = 0LL;
      v29 = RtlQueryRegistryValuesEx(0x40000000LL, v28, &v40, 0LL, 0LL);
      v7 = v29;
      if ( v29 >= 0 )
        goto LABEL_24;
      WdLogSingleEntry1(2LL, v29);
      v23 = L"Unable to read registry values. (Status = 0x%I64x, SubKeyHandle2 = 0x%I64x, QueryTable = 0x%I64x)";
      WdLogGlobalForLineNumber = 934;
    }
    else
    {
      WdLogSingleEntry1(2LL, v22);
      v23 = L"Unable to open HKey root handle (Status = 0x%I64x)";
      WdLogGlobalForLineNumber = 877;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v23, v7, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_24:
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = 0;
    *(_DWORD *)&a4->Length = v52;
  }
LABEL_26:
  if ( a3 && (int)v7 >= 0 && v5 && v5[1171].Buffer )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v35, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v32) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(
      &DestinationString,
      &v35,
      &v37,
      v30,
      (const unsigned __int16 *const)v32);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v37.Buffer);
  CloseRegistrySubkey(KeyHandle);
  CloseRegistrySubkey(v33);
  CloseRegistrySubkey(v34);
  return (unsigned int)v7;
}
