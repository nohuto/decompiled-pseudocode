/*
 * XREFs of PiDevCfgResolveVariableKeyHandle @ 0x140A97D54
 * Callers:
 *     PiDevCfgResolveVariableKeyCopy @ 0x140729D80 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140729E60 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpCtxOpenContextBaseKey @ 0x14094C0C4 (_PnpCtxOpenContextBaseKey.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     PnpRegSzToString @ 0x140A3FBB8 (PnpRegSzToString.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyHandle(__int64 *a1, void *a2, _QWORD *a3)
{
  PVOID v5; // r12
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r14
  int DeviceRegProp; // ebx
  unsigned int v9; // esi
  const wchar_t *v10; // rbx
  wchar_t **v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  const WCHAR *v17; // rsi
  wchar_t *v18; // rax
  NTSTATUS v19; // eax
  wchar_t *v20; // rsi
  wchar_t *v21; // rax
  unsigned int v22; // edi
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  wchar_t *v25; // r15
  wchar_t *v26; // rax
  wchar_t *v27; // rsi
  __int64 v28; // rdi
  int v29; // edi
  __int64 *v30; // r12
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rax
  PVOID v35; // rcx
  void *v37; // rdi
  wchar_t *v38; // rsi
  _WORD *v39; // r13
  unsigned int v40; // ebx
  wchar_t *v41; // rax
  wchar_t *v42; // r15
  __int64 v43; // rcx
  wchar_t *v44; // r9
  unsigned int v45; // edi
  __int64 v46; // rcx
  __int64 v47; // rdi
  wchar_t *v48; // r15
  __int64 v49; // rax
  bool v50; // zf
  UNICODE_STRING v51; // xmm0
  unsigned int v52; // edx
  _WORD *v53; // rcx
  HANDLE v54; // rax
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v57; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Pool2; // [rsp+70h] [rbp-90h]
  PVOID v60; // [rsp+78h] [rbp-88h]
  int v61; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v62[3]; // [rsp+84h] [rbp-7Ch] BYREF
  UNICODE_STRING v63; // [rsp+90h] [rbp-70h]
  HANDLE v64; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v65; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t *Str; // [rsp+B0h] [rbp-50h]
  _QWORD *v67; // [rsp+B8h] [rbp-48h]
  _BYTE v68[76]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v69; // [rsp+10Ch] [rbp+Ch]

  v67 = a3;
  *a3 = 0LL;
  v60 = a1;
  P = 0LL;
  Handle = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v61 = 0;
  DestinationString = 0LL;
  v62[0] = 0;
  v5 = 0LL;
  Pool2 = 0LL;
  *(_QWORD *)&v63.Length = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryString(P) )
    {
LABEL_3:
      DeviceRegProp = -1073741823;
      goto LABEL_68;
    }
    v9 = 0;
    v10 = (const wchar_t *)((char *)v7 + v7[2]);
    while ( 1 )
    {
      if ( v9 >= 7 )
        goto LABEL_22;
      v11 = &(&off_140B3F810)[4 * v9];
      if ( !wcsicmp(*v11, v10) )
        break;
      ++v9;
    }
    if ( v11 )
    {
      v13 = *((unsigned int *)v11 + 4);
      v14 = *a1;
      if ( !(_DWORD)v13 )
      {
        v16 = *((_DWORD *)v11 + 3);
        if ( !v16 )
        {
          DeviceRegProp = -1073741595;
          goto LABEL_68;
        }
        if ( v16 == 7 )
        {
          v61 = 78;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(v14 + 48),
                            0LL,
                            9u,
                            (__int64)v62,
                            (__int64)v68,
                            (__int64)&v61,
                            0);
          if ( DeviceRegProp < 0 )
            goto LABEL_68;
          if ( v62[0] != 1 )
            goto LABEL_3;
          v69 = 0;
          v17 = (const WCHAR *)v68;
        }
        else
        {
          v17 = v11[3];
        }
        DeviceRegProp = PnpCtxOpenContextBaseKey(v12, *((_DWORD *)v11 + 3), v13, 0x20019u, (__int64)&Handle);
        if ( DeviceRegProp < 0 )
          goto LABEL_68;
        if ( v17 )
        {
          RtlInitUnicodeString(&DestinationString, v17);
          DeviceRegProp = IopOpenRegistryKeyEx(&v65, Handle, &DestinationString, 0x20019u);
          if ( DeviceRegProp < 0 )
            goto LABEL_68;
          ZwClose(Handle);
          Handle = v65;
        }
LABEL_31:
        ExFreePoolWithTag(v7, 0);
        P = 0LL;
        v19 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
        v7 = (unsigned int *)P;
        DeviceRegProp = v19;
        if ( v19 < 0 )
        {
          if ( v19 != -1073741772 )
            goto LABEL_68;
          v54 = Handle;
          DeviceRegProp = 0;
          v64 = Handle;
          Handle = 0LL;
        }
        else
        {
          if ( !PnpValidateRegistryString(P) )
            goto LABEL_3;
          Str = (wchar_t *)((char *)v7 + v7[2]);
          v20 = Str;
          v21 = wcschr(Str, 0x24u);
          if ( !v21 )
            goto LABEL_107;
          v22 = 0;
          do
          {
            ++v22;
            v21 = wcschr(v21 + 1, 0x24u);
          }
          while ( v21 );
          v7 = (unsigned int *)P;
          v57 = v22;
          if ( v22 )
          {
            Pool2 = (PVOID)ExAllocatePool2(0x100uLL, 8LL * v22, 0x63647050u);
            if ( !Pool2 )
            {
              DeviceRegProp = -1073741670;
              goto LABEL_68;
            }
            LOWORD(v23) = v63.MaximumLength;
            v24 = 0;
            while ( 1 )
            {
              v25 = v20;
              if ( !*v20 || v24 >= v22 )
                break;
              v26 = wcschr(v20, 0x5Cu);
              v27 = v26;
              if ( v26 )
              {
                *v26 = 0;
                v28 = v26 - v25;
              }
              else
              {
                v28 = -1LL;
                do
                  ++v28;
                while ( v25[v28] );
              }
              v29 = 2 * v28;
              if ( *v25 == 36 )
              {
                v30 = (__int64 *)((char *)Pool2 + 8 * v24);
                v31 = PiDevCfgResolveVariable((__int64)v60, v25 + 1, v30);
                DeviceRegProp = v31;
                if ( v31 < 0 )
                {
                  if ( v31 != -1073741772 )
                    goto LABEL_66;
                  DeviceRegProp = 0;
                }
                else
                {
                  v32 = *v30;
                  if ( *(_DWORD *)(*v30 + 32) == 1 || *(_DWORD *)(*v30 + 32) == 2 )
                  {
                    v29 = *(_DWORD *)(v32 + 36) - 2;
                  }
                  else if ( *(_DWORD *)(*v30 + 32) == 7 )
                  {
                    v33 = -1LL;
                    do
                      ++v33;
                    while ( *(_WORD *)(*(_QWORD *)(v32 + 40) + 2 * v33) );
                    v29 = 2 * v33;
                  }
                }
                LOWORD(v23) = v63.MaximumLength;
                ++v24;
              }
              if ( (unsigned __int64)(v29 + (unsigned int)(unsigned __int16)v23) + 2 >= 0xFFFE )
              {
                DeviceRegProp = -2147483643;
LABEL_66:
                v35 = Pool2;
                goto LABEL_67;
              }
              LOWORD(v23) = v29 + 2 + v23;
              v63.MaximumLength = v23;
              if ( v27 )
              {
                *v27 = 92;
                v20 = v27 + 1;
              }
              else
              {
                v34 = -1LL;
                do
                  ++v34;
                while ( v25[v34] );
                v20 = &v25[v34];
              }
              v22 = v57;
            }
            if ( DeviceRegProp < 0 )
              goto LABEL_66;
            v63.Length = v23 - 2;
            v37 = (void *)ExAllocatePool2(0x100uLL, (unsigned __int16)v23, 0x63647050u);
            v60 = v37;
            v63.Buffer = (wchar_t *)v37;
            if ( !v37 )
            {
              DeviceRegProp = -1073741670;
LABEL_76:
              v5 = v60;
LABEL_114:
              if ( v5 )
                ExFreePool(v5);
              v35 = Pool2;
              if ( Pool2 )
LABEL_67:
                ExFreePoolWithTag(v35, 0);
              goto LABEL_68;
            }
            v38 = Str;
            v39 = v37;
            v23 = (unsigned __int16)v23;
            v40 = 0;
            LODWORD(P) = 0;
            while ( *v38 && v40 < v57 )
            {
              v41 = wcschr(v38, 0x5Cu);
              v42 = v41;
              if ( v41 )
              {
                *v41 = 0;
                v43 = v41 - v38;
              }
              else
              {
                v43 = -1LL;
                do
                  ++v43;
                while ( v38[v43] );
              }
              v44 = v38;
              if ( v38 != Str )
              {
                if ( v23 <= 2 )
                  goto LABEL_103;
                *v39++ = 92;
                v23 -= 2;
              }
              v45 = 2 * v43;
              if ( *v38 == 36 )
              {
                LODWORD(P) = v40 + 1;
                v46 = *((_QWORD *)Pool2 + v40);
                if ( v46 )
                {
                  if ( *(_DWORD *)(v46 + 32) == 1 || *(_DWORD *)(v46 + 32) == 2 )
                  {
                    v44 = *(wchar_t **)(v46 + 40);
                    v45 = *(_DWORD *)(v46 + 36) - 2;
                  }
                  else if ( *(_DWORD *)(v46 + 32) == 7 )
                  {
                    v44 = *(wchar_t **)(v46 + 40);
                    v47 = -1LL;
                    do
                      ++v47;
                    while ( v44[v47] );
                    v45 = 2 * v47;
                  }
                }
              }
              if ( v23 <= v45 )
              {
LABEL_103:
                DeviceRegProp = -1073741823;
                goto LABEL_76;
              }
              memmove(v39, v44, v45);
              v23 -= v45;
              v39 += (unsigned __int64)v45 >> 1;
              if ( v42 )
              {
                *v42 = 92;
                v48 = v42 + 1;
              }
              else
              {
                v49 = -1LL;
                do
                  ++v49;
                while ( v38[v49] );
                v48 = &v38[v49];
              }
              v40 = (unsigned int)P;
              v38 = v48;
            }
            v50 = v23 == 2;
            v5 = v60;
            if ( !v50 )
            {
              DeviceRegProp = -1073741823;
              goto LABEL_114;
            }
            v51 = v63;
            *v39 = 0;
            DestinationString = v51;
          }
          else
          {
LABEL_107:
            v52 = v7[3];
            v53 = (_WORD *)((char *)v7 + v7[2]);
            LODWORD(P) = 0;
            PnpRegSzToString(v53, v52, (int *)&P);
            DestinationString.Length = (unsigned __int16)P;
            DestinationString.MaximumLength = *((_WORD *)v7 + 6);
            DestinationString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
          }
          DeviceRegProp = IopOpenRegistryKeyEx(&v64, Handle, &DestinationString, 0x20019u);
          if ( DeviceRegProp < 0 )
            goto LABEL_114;
          v54 = v64;
        }
        *v67 = v54;
        goto LABEL_114;
      }
      v15 = CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(v14 + 48),
              v13,
              0,
              131097,
              0,
              (__int64)&Handle,
              0LL);
    }
    else
    {
LABEL_22:
      if ( wcsicmp(v10, L"SYSTEM") )
      {
        if ( wcsicmp(v10, L"SOFTWARE") )
        {
          if ( wcsicmp(v10, L"HARDWARE") )
          {
            DeviceRegProp = -1073741772;
            goto LABEL_114;
          }
          v18 = L"\\Registry\\Machine\\HARDWARE";
        }
        else
        {
          v18 = L"\\Registry\\Machine\\SOFTWARE";
        }
        *(_DWORD *)&DestinationString.Length = 3538996;
      }
      else
      {
        *(_DWORD *)&DestinationString.Length = 3276848;
        v18 = L"\\Registry\\Machine\\SYSTEM";
      }
      DestinationString.Buffer = v18;
      v15 = IopOpenRegistryKeyEx(&Handle, 0LL, &DestinationString, 0x20019u);
    }
    DeviceRegProp = v15;
    if ( v15 < 0 )
      goto LABEL_68;
    goto LABEL_31;
  }
LABEL_68:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
