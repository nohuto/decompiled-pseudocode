/*
 * XREFs of ?LogMonitorData_@SearchBoxOnTaskbarSearchAppPositionerTelemetry@@QEAAXUMonitorInfo@@@Z @ 0x1800CBE90
 * Callers:
 *     ?GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AUSearchAppSizeAndBorderInfo@@AEBUtagRECT@@0W4SearchAppActivationMode@Shell@UI@WindowsUdk@winrt@@_NAEBUhstring@8@@Z @ 0x180247F90 (-GetAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AUSearchAppSizeAndBorde.c)
 * Callees:
 *     ?Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800824C8 (-Provider@SearchAppLauncherLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall SearchBoxOnTaskbarSearchAppPositionerTelemetry::LogMonitorData_(__int64 a1, int *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+5Ch] [rbp-A4h] BYREF
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+64h] [rbp-9Ch] BYREF
  int v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+6Ch] [rbp-94h] BYREF
  int v21; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+74h] [rbp-8Ch] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  int v24; // [rsp+7Ch] [rbp-84h] BYREF
  int v25; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v26[3]; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+CCh] [rbp-34h]
  _DWORD *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  int *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  int *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  int *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  int *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  int *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  int *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  int *v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  int *v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  int *v75; // [rsp+220h] [rbp+120h]
  __int64 v76; // [rsp+228h] [rbp+128h]
  __int64 *v77; // [rsp+230h] [rbp+130h]
  __int64 v78; // [rsp+238h] [rbp+138h]

  v3 = SearchAppLauncherLogging::Provider(a1);
  if ( *(_DWORD *)v3 > 4u
    && (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v3 + 3) & 0x200000000000LL) == *((_QWORD *)v3 + 3) )
  {
    v5 = a2[20];
    v6 = a2[19];
    v7 = a2[18];
    v8 = a2[17];
    v9 = a2[16];
    v10 = a2[15];
    v11 = a2[14];
    v12 = a2[13];
    v13 = *((unsigned __int8 *)a2 + 49);
    v14 = *((unsigned __int8 *)a2 + 48);
    v15 = a2[7];
    v16 = a2[6];
    v17 = a2[5];
    v18 = a2[4];
    v19 = a2[3];
    v20 = a2[2];
    v21 = a2[1];
    v22 = *a2;
    v23 = a2[11];
    v24 = a2[10];
    v25 = a2[9];
    v26[0] = a2[8];
    v77 = &v27;
    v75 = &v5;
    v73 = &v6;
    v71 = &v7;
    v69 = &v8;
    v67 = &v9;
    v65 = &v10;
    v63 = &v11;
    v61 = &v12;
    v59 = &v13;
    v57 = &v14;
    v55 = &v15;
    v27 = 0x1000000LL;
    v78 = 8LL;
    v76 = 4LL;
    v74 = 4LL;
    v72 = 4LL;
    v70 = 4LL;
    v68 = 4LL;
    v66 = 4LL;
    v64 = 4LL;
    v62 = 4LL;
    v60 = 4LL;
    v58 = 4LL;
    v56 = 4LL;
    v54 = 4LL;
    v53 = &v16;
    v52 = 4LL;
    v51 = &v17;
    v50 = 4LL;
    v49 = &v18;
    v47 = &v19;
    v45 = &v20;
    v43 = &v21;
    v41 = &v22;
    v39 = &v23;
    v37 = &v24;
    v35 = &v25;
    v33 = v26;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = *((_QWORD *)v3 + 1);
    v48 = 4LL;
    v46 = 4LL;
    v44 = 4LL;
    v42 = 4LL;
    v40 = 4LL;
    v38 = 4LL;
    v36 = 4LL;
    v34 = 4LL;
    EventDescriptor.Keyword = 0x200000000000LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v30 = &unk_1807F52A9;
    UserData.Reserved = 2;
    v31 = 490;
    v32 = 1;
    v26[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v3) = EventWriteTransfer(*((_QWORD *)v3 + 4), &EventDescriptor, 0LL, 0LL, 0x19u, &UserData);
  }
  return (int)v3;
}
