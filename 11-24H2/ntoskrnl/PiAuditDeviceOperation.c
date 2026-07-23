/*
 * XREFs of PiAuditDeviceOperation @ 0x140A68944
 * Callers:
 *     PiAuditDeviceEnableDisableAction @ 0x140734764 (PiAuditDeviceEnableDisableAction.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x140734798 (PiAuditDeviceEnableDisableRequest.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiAuditDeviceStart @ 0x14097B680 (PiAuditDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PnpFindAlternateStringData @ 0x140A17758 (PnpFindAlternateStringData.c)
 *     SeAuditPlugAndPlay @ 0x140A69008 (SeAuditPlugAndPlay.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuditDeviceOperation(__int64 a1, int a2, char a3)
{
  wchar_t *v4; // r13
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v12; // r14d
  ULONG_PTR i; // rdx
  const wchar_t *Pool2; // rax
  wchar_t *v15; // r12
  int ObjectProperty; // eax
  __int16 v17; // ax
  const wchar_t *v18; // rax
  wchar_t *v19; // r15
  int v20; // eax
  __int16 v21; // ax
  ULONG_PTR v22; // rdx
  const wchar_t *v23; // rax
  int v24; // eax
  __int16 v25; // ax
  WCHAR *v26; // rdx
  ULONG_PTR j; // rdx
  const wchar_t *v28; // rax
  wchar_t *v29; // rsi
  int v30; // eax
  const wchar_t *v31; // rax
  wchar_t *v32; // rdi
  int k; // eax
  const wchar_t *v34; // rax
  const WCHAR *v35; // rdx
  int v36; // eax
  bool v37; // zf
  int v38; // [rsp+68h] [rbp-69h] BYREF
  ULONG v39; // [rsp+6Ch] [rbp-65h] BYREF
  ULONG v40; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v41; // [rsp+74h] [rbp-5Dh] BYREF
  char v42; // [rsp+78h] [rbp-59h]
  ULONG v43; // [rsp+7Ch] [rbp-55h] BYREF
  ULONG v44; // [rsp+80h] [rbp-51h] BYREF
  int v45; // [rsp+84h] [rbp-4Dh] BYREF
  const WCHAR *v46; // [rsp+88h] [rbp-49h] BYREF
  __int64 v47; // [rsp+90h] [rbp-41h]
  __int128 v48; // [rsp+98h] [rbp-39h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-29h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-19h] BYREF
  int v51; // [rsp+C8h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v53; // [rsp+E0h] [rbp+Fh] BYREF
  __int128 v54; // [rsp+F0h] [rbp+1Fh] BYREF

  v42 = a3;
  v47 = a1;
  v41 = 0;
  v46 = 0LL;
  v44 = 0;
  v4 = 0LL;
  v39 = 0;
  v40 = 0;
  v45 = 0;
  v38 = 0;
  v53 = 0LL;
  v54 = 0LL;
  DestinationString = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v48 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v12 = 6;
            }
            else
            {
              v12 = 5;
            }
          }
          else
          {
            v12 = 4;
          }
        }
        else
        {
          v12 = 3;
        }
      }
      else
      {
        v12 = 2;
      }
    }
    else
    {
      v12 = 1;
    }
  }
  else
  {
    v12 = 0;
  }
  v43 = 512;
  for ( i = 512LL; ; i = v43 )
  {
    Pool2 = (const wchar_t *)ExAllocatePool2(0x100uLL, i, 0x20207050u);
    v15 = (wchar_t *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(_QWORD **)&PiPnpRtlCtx,
                       *(WCHAR **)(a1 + 8),
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       &v38,
                       Pool2,
                       v43,
                       (__int64)&v43,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    ExFreePoolWithTag(v15, 0);
  }
  if ( ObjectProperty >= 0 && v38 == 8210 )
  {
    v17 = v43;
  }
  else
  {
    ExFreePoolWithTag(v15, 0);
    v17 = 0;
    v15 = 0LL;
    v43 = 0;
  }
  LOWORD(v50) = v17;
  WORD1(v50) = v17;
  *((_QWORD *)&v50 + 1) = v15;
  v39 = 512;
  v18 = (const wchar_t *)ExAllocatePool2(0x100uLL, 0x200uLL, 0x20207050u);
  v19 = (wchar_t *)v18;
  if ( v18 )
  {
    while ( 1 )
    {
      v20 = PnpGetObjectProperty(
              *(_QWORD **)&PiPnpRtlCtx,
              *(WCHAR **)(a1 + 8),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_CompatibleIds,
              &v38,
              v18,
              v39,
              (__int64)&v39,
              0);
      if ( v20 != -1073741789 )
        break;
      ExFreePoolWithTag(v19, 0);
      v18 = (const wchar_t *)ExAllocatePool2(0x100uLL, v39, 0x20207050u);
      v19 = (wchar_t *)v18;
      if ( !v18 )
        goto LABEL_65;
    }
    if ( v20 >= 0 && v38 == 8210 )
    {
      v21 = v39;
    }
    else
    {
      ExFreePoolWithTag(v19, 0);
      v21 = 0;
      v19 = 0LL;
      v39 = 0;
    }
    v22 = 64LL;
    LOWORD(v49) = v21;
    v40 = 64;
    WORD1(v49) = v21;
    *((_QWORD *)&v49 + 1) = v19;
    while ( 1 )
    {
      v23 = (const wchar_t *)ExAllocatePool2(0x100uLL, v22, 0x20207050u);
      v4 = (wchar_t *)v23;
      if ( !v23 )
        break;
      v24 = PnpGetObjectProperty(
              *(_QWORD **)&PiPnpRtlCtx,
              *(WCHAR **)(a1 + 8),
              1u,
              0LL,
              0LL,
              (__int64)&DEVPKEY_Device_LocationInfo,
              &v38,
              v23,
              v40,
              (__int64)&v40,
              0);
      if ( v24 != -1073741789 )
      {
        if ( v24 >= 0 && v38 == 18 )
        {
          v25 = v40;
        }
        else
        {
          ExFreePoolWithTag(v4, 0);
          v25 = 0;
          v4 = 0LL;
          v40 = 0;
        }
        v26 = *(WCHAR **)(a1 + 8);
        LOWORD(v48) = v25;
        WORD1(v48) = v25;
        *((_QWORD *)&v48 + 1) = v4;
        v45 = 16;
        if ( (int)PnpGetObjectProperty(
                    *(_QWORD **)&PiPnpRtlCtx,
                    v26,
                    1u,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_ClassGuid,
                    &v38,
                    (const wchar_t *)&v54,
                    0x10u,
                    (__int64)&v45,
                    0) < 0
          || v38 != 13
          || v45 != 16 )
        {
          v54 = 0LL;
        }
        v44 = 32;
        for ( j = 32LL; ; j = v44 )
        {
          v28 = (const wchar_t *)ExAllocatePool2(0x100uLL, j, 0x20207050u);
          v29 = (wchar_t *)v28;
          if ( !v28 )
            break;
          v30 = PnpGetObjectProperty(
                  *(_QWORD **)&PiPnpRtlCtx,
                  *(WCHAR **)(a1 + 8),
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_Class,
                  &v38,
                  v28,
                  v44,
                  (__int64)&v44,
                  0);
          if ( v30 != -1073741789 )
          {
            if ( v30 < 0 || v38 != 18 )
            {
              ExFreePoolWithTag(v29, 0);
              v29 = 0LL;
              v44 = 0;
            }
            RtlInitUnicodeString(&DestinationString, v29);
            v41 = 32;
            v31 = (const wchar_t *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x20207050u);
            v32 = (wchar_t *)v31;
            if ( v31 )
            {
              for ( k = PnpGetObjectProperty(
                          *(_QWORD **)&PiPnpRtlCtx,
                          *(WCHAR **)(a1 + 8),
                          1u,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_NAME,
                          &v38,
                          v31,
                          v41,
                          (__int64)&v41,
                          0);
                    ;
                    k = PnpGetObjectProperty(
                          *(_QWORD **)&PiPnpRtlCtx,
                          *(WCHAR **)(v47 + 8),
                          1u,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_NAME,
                          &v38,
                          v34,
                          v41,
                          (__int64)&v41,
                          0) )
              {
                v10 = k;
                if ( k != -1073741789 )
                  break;
                ExFreePoolWithTag(v32, 0);
                v34 = (const wchar_t *)ExAllocatePool2(0x100uLL, v41, 0x20207050u);
                v32 = (wchar_t *)v34;
                if ( !v34 )
                  goto LABEL_73;
              }
              if ( k < 0 )
                goto LABEL_41;
              v36 = v38;
              if ( v38 == 25 )
              {
                v37 = (unsigned int)PnpFindAlternateStringData(v32, v41, &v46, &v51) == 0;
                v35 = v32;
                v36 = 18;
                if ( !v37 )
                  v35 = v46;
                v38 = 18;
              }
              else
              {
                v35 = 0LL;
                if ( v38 == 18 )
                  v35 = v32;
              }
              if ( v36 != 18 )
              {
LABEL_41:
                v10 = 0;
                ExFreePoolWithTag(v32, 0);
                v41 = 0;
                v32 = 0LL;
                v35 = 0LL;
              }
              RtlInitUnicodeString(&v53, v35);
              SeAuditPlugAndPlay(
                v47,
                (unsigned int)&v53,
                (unsigned int)&v50,
                (unsigned int)&v49,
                (__int64)&v48,
                (__int64)&v54,
                (__int64)&DestinationString,
                v12,
                v42);
              if ( v32 )
                ExFreePoolWithTag(v32, 0);
            }
            else
            {
LABEL_73:
              v10 = -1073741670;
            }
            if ( v29 )
              ExFreePoolWithTag(v29, 0);
            goto LABEL_46;
          }
          ExFreePoolWithTag(v29, 0);
        }
        break;
      }
      ExFreePoolWithTag(v4, 0);
      v22 = v40;
    }
    v10 = -1073741670;
LABEL_46:
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  else
  {
LABEL_65:
    v10 = -1073741670;
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}
