/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x1409FD9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     _CmIsDevicePresent @ 0x1409FDDCC (_CmIsDevicePresent.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v8; // di
  PCUNICODE_STRING v9; // rax
  int DeviceRegProp; // eax
  unsigned int v11; // r14d
  __int64 *i; // rsi
  unsigned int v13; // r8d
  WCHAR *v14; // rdx
  int ObjectProperty; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  const WCHAR *j; // rdi
  __int64 v20; // rax
  __int64 Pool2; // rdi
  void *v22; // rcx
  __int64 v23; // rdi
  void *v24; // rcx
  unsigned int v25; // ecx
  ULONG v26; // [rsp+40h] [rbp-99h]
  _BYTE v27[4]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+64h] [rbp-75h] BYREF
  int v29; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-6Dh] BYREF
  int v31; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v33[40]; // [rsp+90h] [rbp-49h] BYREF

  memset_0(v33, 0, 0x4EuLL);
  v8 = 0;
  v29 = 0;
  v31 = 0;
  DestinationString = 0LL;
  v27[0] = 0;
  v28 = 0;
  v30 = 0;
  if ( !*(_BYTE *)(a4 + 8) || (int)CmIsDevicePresent(a1, a2, v27) >= 0 && v27[0] )
  {
    v9 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v9->Length >= 2u && *v9->Buffer )
    {
      while ( 1 )
      {
        v28 = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(
                          (__int64)a1,
                          a2,
                          0LL,
                          5u,
                          (__int64)&v29,
                          *(_QWORD *)(a4 + 16),
                          (__int64)&v28,
                          0);
        if ( !DeviceRegProp && v28 < 2 )
          break;
        if ( DeviceRegProp != -1073741789 )
        {
          if ( !DeviceRegProp )
          {
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
            if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) >= 0 )
            {
              if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                goto LABEL_43;
            }
          }
          break;
        }
        if ( v28 < 2 )
          break;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          break;
        v22 = *(void **)(a4 + 16);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
        *(_DWORD *)(a4 + 24) = v28;
        *(_QWORD *)(a4 + 16) = Pool2;
      }
      v11 = 0;
      for ( i = &qword_140002DF8; ; i += 2 )
      {
        v8 = 0;
        if ( v11 >= 4 )
          break;
        if ( *(_DWORD *)i == 2 && !v33[0] )
        {
          v28 = 78;
          if ( (int)CmGetDeviceRegProp((__int64)a1, a2, 0LL, 9u, (__int64)&v29, (__int64)v33, (__int64)&v28, 0) >= 0
            && v29 == 1
            && v28 >= 2 )
          {
            v33[38] = 0;
            goto LABEL_13;
          }
          return 0;
        }
        while ( 1 )
        {
LABEL_13:
          v13 = *(_DWORD *)i;
          v14 = v33;
          v26 = *(_DWORD *)(a4 + 24);
          if ( *(_DWORD *)i == 1 )
            v14 = (WCHAR *)a2;
          v28 = *(_DWORD *)(a4 + 24);
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             v14,
                             v13,
                             0LL,
                             0LL,
                             *(i - 1),
                             &v31,
                             *(const wchar_t **)(a4 + 16),
                             v26,
                             (__int64)&v30,
                             0);
          v28 = v30;
          if ( !ObjectProperty && v30 < 2 )
            break;
          if ( ObjectProperty != -1073741789 )
          {
            if ( ObjectProperty >= 0 && v31 == 8210 )
            {
              v17 = *(_DWORD *)(a4 + 24);
              if ( v17 > 2 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v17 >> 1) - 2) = 0;
              v18 = *(_DWORD *)(a4 + 24);
              if ( v18 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v18 >> 1) - 4) = 0;
              for ( j = *(const WCHAR **)(a4 + 16); *j; j += v20 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, j) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  goto LABEL_43;
                }
                v20 = -1LL;
                do
                  ++v20;
                while ( j[v20] );
              }
            }
            break;
          }
          if ( v30 < 2 )
            break;
          v23 = ExAllocatePool2(0x100uLL);
          if ( !v23 )
            break;
          v24 = *(void **)(a4 + 16);
          if ( v24 )
            ExFreePoolWithTag(v24, 0);
          v25 = v28;
          *(_QWORD *)(a4 + 16) = v23;
          *(_DWORD *)(a4 + 24) = v25;
        }
        ++v11;
      }
    }
    else
    {
LABEL_43:
      v8 = 1;
      if ( *(_QWORD *)(a4 + 32) )
        return guard_dispatch_icall_no_overrides(a1, a2, a3, *(_QWORD *)(a4 + 40));
    }
  }
  return v8;
}
