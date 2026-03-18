/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryString @ 0x1404ACEE0 (PnpValidateRegistryString.c)
 *     PnpValidateStringData @ 0x1404ACF1C (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404B3254 (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryDword @ 0x1404C71B4 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     PnpGetObjectProperty @ 0x1408CCF60 (PnpGetObjectProperty.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  void *v6; // r12
  int RegistryValue; // ebx
  unsigned int *v8; // r15
  wchar_t *v9; // rdx
  wchar_t *v10; // rcx
  wchar_t *v11; // r8
  unsigned __int16 v12; // ax
  NTSTATUS v13; // eax
  _DWORD *v14; // rdi
  int v15; // r14d
  __int64 v16; // r8
  int ObjectProperty; // eax
  unsigned int v18; // esi
  int v19; // ecx
  _DWORD *Pool2; // rax
  __int64 v21; // rax
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  PVOID v24; // [rsp+68h] [rbp-31h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h] BYREF
  __int64 v26; // [rsp+78h] [rbp-21h] BYREF
  __int64 v27; // [rsp+80h] [rbp-19h] BYREF
  void *Src; // [rsp+88h] [rbp-11h]
  UNICODE_STRING GuidString; // [rsp+90h] [rbp-9h] BYREF
  GUID Guid; // [rsp+A0h] [rbp+7h] BYREF
  int v31; // [rsp+B0h] [rbp+17h]

  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  LODWORD(v26) = 0;
  LODWORD(v23) = 0;
  v24 = 0LL;
  v31 = 0;
  v27 = 0LL;
  Src = 0LL;
  Guid = 0LL;
  v6 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_64;
  v8 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    RegistryValue = -1073741823;
    goto LABEL_65;
  }
  v9 = (wchar_t *)((char *)v8 + v8[2]);
  v10 = v9;
  v11 = &v9[(unsigned __int64)v8[3] >> 1];
  if ( v9 < v11 )
  {
    do
    {
      if ( !*v10 )
        break;
      ++v10;
    }
    while ( v10 < v11 );
  }
  v12 = *((_WORD *)v8 + 6);
  GuidString.Length = (_WORD)v10 - (_WORD)v9;
  GuidString.Buffer = v9;
  GuidString.MaximumLength = v12;
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue >= 0 )
  {
    ExFreePoolWithTag(v8, 0);
    P = 0LL;
    v13 = IopGetRegistryValue(a2, L"PropertyId", 0, &P);
    v14 = 0LL;
    RegistryValue = v13;
    if ( v13 >= 0 )
    {
      v8 = (unsigned int *)P;
      if ( !PnpValidateRegistryDword((__int64)P) )
        goto LABEL_3;
      v15 = 1;
      v16 = *a1;
      v31 = *(unsigned int *)((char *)v8 + v8[2]);
      ObjectProperty = PnpGetObjectProperty(
                         0x47706E50u,
                         0,
                         *(WCHAR **)(v16 + 48),
                         1u,
                         0LL,
                         0LL,
                         (__int64)&Guid,
                         (int *)&v26,
                         &v24,
                         (unsigned int *)&v23,
                         0);
      RegistryValue = ObjectProperty;
      if ( ObjectProperty < 0 )
      {
        if ( ObjectProperty != -1073741275 )
        {
LABEL_62:
          if ( v24 )
            ExFreePoolWithTag(v24, 0);
          goto LABEL_65;
        }
        RegistryValue = 0;
        goto LABEL_58;
      }
      if ( (unsigned int)v26 <= 0xD )
      {
        if ( (_DWORD)v26 == 13 )
        {
          if ( (_DWORD)v23 != 16 )
            goto LABEL_22;
          RegistryValue = RtlStringFromGUIDEx((unsigned int *)v24, (__int64)&v27, 1);
          if ( RegistryValue >= 0 )
          {
            v18 = (unsigned __int16)v27 + 2;
            Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
            v14 = Pool2;
            if ( Pool2 )
            {
              v6 = Src;
              memmove(Pool2, Src, v18);
LABEL_59:
              *(_DWORD *)(a3 + 32) = v15;
              *(_DWORD *)(a3 + 36) = v18;
              *(_QWORD *)(a3 + 40) = v14;
LABEL_60:
              if ( v6 )
                ExFreePool(v6);
              goto LABEL_62;
            }
            RegistryValue = -1073741670;
          }
          v6 = Src;
          goto LABEL_60;
        }
        if ( (unsigned int)v26 <= 5 )
        {
          if ( (_DWORD)v26 == 5 )
          {
LABEL_18:
            if ( (_DWORD)v23 == 2 )
            {
              v15 = 4;
              v18 = 4;
              v14 = (_DWORD *)ExAllocatePool2(0x100uLL);
              if ( v14 )
              {
                v19 = *(unsigned __int16 *)v24;
LABEL_55:
                *v14 = v19;
                goto LABEL_59;
              }
              goto LABEL_24;
            }
            goto LABEL_22;
          }
          if ( (unsigned int)v26 >= 2 )
          {
            if ( (_DWORD)v26 == 2 || (_DWORD)v26 == 3 )
            {
              if ( (_DWORD)v23 == 1 )
              {
                v15 = 4;
                v18 = 4;
                v14 = (_DWORD *)ExAllocatePool2(0x100uLL);
                if ( v14 )
                {
                  v19 = *(unsigned __int8 *)v24;
                  goto LABEL_55;
                }
                goto LABEL_24;
              }
              goto LABEL_22;
            }
            goto LABEL_18;
          }
LABEL_58:
          v18 = 0;
          v15 = 0;
          goto LABEL_59;
        }
        if ( (_DWORD)v26 != 6 && (_DWORD)v26 != 7 )
        {
          if ( (unsigned int)(v26 - 8) <= 1 )
          {
            v18 = 8;
            if ( (_DWORD)v23 != 8 )
              goto LABEL_22;
            v15 = 11;
            goto LABEL_51;
          }
LABEL_47:
          v18 = v23;
          v15 = 3;
LABEL_51:
          v14 = v24;
          v24 = 0LL;
          goto LABEL_59;
        }
LABEL_48:
        if ( (_DWORD)v23 != 4 )
          goto LABEL_22;
        v15 = 4;
        v18 = 4;
        goto LABEL_51;
      }
      if ( (_DWORD)v26 == 17 )
      {
        if ( (_DWORD)v23 == 1 )
        {
          v15 = 4;
          v18 = 4;
          v21 = ExAllocatePool2(0x100uLL);
          v19 = 0;
          v14 = (_DWORD *)v21;
          if ( v21 )
          {
            LOBYTE(v19) = *(_BYTE *)v24 == 0xFF;
            goto LABEL_55;
          }
LABEL_24:
          RegistryValue = -1073741670;
          goto LABEL_62;
        }
LABEL_22:
        RegistryValue = -1073741823;
        goto LABEL_62;
      }
      if ( (_DWORD)v26 != 18 && (_DWORD)v26 != 20 )
      {
        if ( (_DWORD)v26 == 22 || (_DWORD)v26 == 23 || (_DWORD)v26 == 24 )
          goto LABEL_48;
        if ( (_DWORD)v26 != 25 )
        {
          if ( (_DWORD)v26 == 8210 )
          {
            v18 = v23;
            if ( !PnpValidateMultiSzData(v24, v23) )
              goto LABEL_22;
            v15 = 7;
            goto LABEL_51;
          }
          goto LABEL_47;
        }
      }
      v18 = v23;
      if ( !PnpValidateStringData((__int64)v24, v23) )
        goto LABEL_22;
      goto LABEL_51;
    }
LABEL_64:
    v8 = (unsigned int *)P;
  }
LABEL_65:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RegistryValue;
}
