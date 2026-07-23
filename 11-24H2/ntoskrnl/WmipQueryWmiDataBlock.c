/*
 * XREFs of WmipQueryWmiDataBlock @ 0x140A37640
 * Callers:
 *     IoWMISystemControl @ 0x140A373A4 (IoWMISystemControl.c)
 * Callees:
 *     WmipFindRegEntryByDevice @ 0x14045A0A4 (WmipFindRegEntryByDevice.c)
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     IoGetDeviceInstanceName @ 0x14049B9DC (IoGetDeviceInstanceName.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4498 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A46F0 (WmipGetSysIds.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     IoWMICompleteRequest @ 0x140A377CC (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x140A37918 (WmipGetSMBiosTableData.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        void *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rsi
  int DeviceInstanceName; // edi
  int *v11; // r15
  unsigned int v12; // r14d
  unsigned int *v13; // r12
  char *v14; // rcx
  unsigned int v15; // ebx
  int SMBiosEventlog; // eax
  unsigned int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  ULONG_PTR v22; // rcx
  unsigned int v23; // ecx
  wchar_t *v24; // rdx
  __int64 v25; // rbx
  _QWORD *RegEntryByDevice; // rax
  ULONG_PTR v27; // rcx
  int v28; // r12d
  size_t Length; // r13
  __int64 v30; // r14
  wchar_t *Buffer; // rdx
  _WORD *v32; // rsi
  ULONG v33; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+34h] [rbp-CCh] BYREF
  void *v36; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  void *v39; // [rsp+58h] [rbp-A8h]
  int v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  const wchar_t *v42; // [rsp+70h] [rbp-90h]
  unsigned int *v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+A0h] [rbp-60h]
  const wchar_t *v47; // [rsp+A8h] [rbp-58h]
  int *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  const wchar_t *v52; // [rsp+E0h] [rbp-20h]
  void **v53; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+110h] [rbp+10h]

  v8 = a8;
  DeviceInstanceName = 0;
  v11 = (int *)a6;
  v12 = 0;
  v39 = a2;
  v13 = 0LL;
  switch ( a3 )
  {
    case 0:
      UnicodeString = 0LL;
      RegEntryByDevice = (_QWORD *)WmipFindRegEntryByDevice(a1);
      Src = RegEntryByDevice;
      v21 = (__int64)RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_15;
      v27 = RegEntryByDevice[3];
      if ( v27 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v27, &UnicodeString);
        if ( DeviceInstanceName >= 0 )
        {
          v28 = UnicodeString.Length + 2;
          v12 = v28 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v34 = v12;
          if ( v12 <= a7 )
          {
            memset_0((void *)a8, 0, v12);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v30 = a5;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v11 = v28;
                v32 = (_WORD *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v11;
                *v32++ = Length;
                memmove(v32, Buffer, Length);
                v8 = (unsigned __int64)v32 + Length;
                --v30;
              }
              while ( v30 );
              v12 = v34;
              v21 = (__int64)Src;
            }
            goto LABEL_42;
          }
          goto LABEL_41;
        }
LABEL_43:
        DeviceInstanceName = -1073741163;
        goto LABEL_45;
      }
LABEL_44:
      DeviceInstanceName = -1073741823;
      goto LABEL_45;
    case 1:
      UnicodeString = 0LL;
      v20 = WmipFindRegEntryByDevice(a1);
      v21 = v20;
      if ( !v20 )
        goto LABEL_15;
      v22 = *(_QWORD *)(v20 + 24);
      if ( v22 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v22, &UnicodeString);
        if ( DeviceInstanceName >= 0 )
        {
          v23 = UnicodeString.Length;
          v12 = UnicodeString.Length + 10;
          if ( v12 <= a7 )
          {
            v24 = UnicodeString.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v12;
            v25 = v23;
            *(_WORD *)(a8 + 4) = v23 + 4;
            memmove((void *)(a8 + 6), v24, v23);
            *(_DWORD *)(a8 + 4 + v25 + 2) = 3145823;
LABEL_42:
            RtlFreeAnsiString(&UnicodeString);
LABEL_45:
            WmipUnreferenceRegEntry(v21);
            return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
          }
LABEL_41:
          DeviceInstanceName = -1073741789;
          goto LABEL_42;
        }
        goto LABEL_43;
      }
      goto LABEL_44;
    case 2:
      v34 = 0;
      v44 = 0x4000000;
      v41 = 292;
      v42 = L"BootArchitecture";
      v46 = 292;
      v43 = &v34;
      v49 = 0x4000000;
      v47 = L"PreferredProfile";
      v48 = &v35;
      v52 = L"Capabilities";
      v51 = 292;
      v54 = 0x4000000;
      v53 = &v36;
      v35 = 0;
      LODWORD(v36) = 0;
      *(_QWORD *)v40 = 0LL;
      v45 = 0LL;
      v50 = 0LL;
      v55 = 0LL;
      v56 = 0;
      if ( (int)RtlpQueryRegistryValues(
                  0LL,
                  (const WCHAR *)L"\\Registry\\Machine\\Hardware\\Description\\System",
                  (__int64)v40,
                  0LL,
                  v33,
                  1) < 0 )
        goto LABEL_15;
      v12 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = v34;
        *(_DWORD *)(a8 + 4) = v35;
        *(_DWORD *)(a8 + 8) = (_DWORD)v36;
        goto LABEL_9;
      }
      goto LABEL_27;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 && a3 != 5 )
    {
      if ( a3 == 6 )
      {
        v35 = a7 != 0 ? a7 : 0;
        SMBiosEventlog = WmipGetSMBiosEventlog(a8 & -(__int64)(a7 != 0), (unsigned int *)&v35);
        v12 = v35;
        DeviceInstanceName = SMBiosEventlog;
        if ( SMBiosEventlog < 0 )
          return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
        goto LABEL_9;
      }
LABEL_15:
      DeviceInstanceName = -1073741163;
      return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
    }
    Src = 0LL;
    v34 = 0;
    v36 = 0LL;
    v35 = 0;
    DeviceInstanceName = WmipGetSysIds(&Src, &v34, &v36, &v35);
    if ( DeviceInstanceName < 0 )
      return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
    if ( a3 == 5 )
    {
      v18 = v35;
      a2 = v36;
      v19 = 8 * v35;
    }
    else
    {
      v18 = v34;
      a2 = Src;
      v19 = 16 * v34;
    }
    v12 = v19 + 4;
    if ( a7 >= v12 )
    {
      *a6 = v12;
      *(_DWORD *)a8 = v18;
      memmove((void *)(a8 + 4), a2, v12 - 4LL);
      DeviceInstanceName = 0;
      return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
    }
LABEL_27:
    DeviceInstanceName = -1073741789;
    return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
  }
  if ( a7 >= 8 )
  {
    v13 = (unsigned int *)(a8 + 4);
    v15 = a7 - 8;
    v14 = (char *)(a8 + 8);
  }
  else
  {
    v14 = 0LL;
    v15 = 0;
  }
  v34 = v15;
  DeviceInstanceName = WmipGetSMBiosTableData(v14);
  v12 = v15 + 8;
  if ( DeviceInstanceName >= 0 )
  {
    *v13 = v15;
LABEL_9:
    *a6 = v12;
  }
  return IoWMICompleteRequest(a1, a2, v39, (unsigned int)DeviceInstanceName, v12);
}
