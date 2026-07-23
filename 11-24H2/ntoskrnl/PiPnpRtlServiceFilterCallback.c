/*
 * XREFs of PiPnpRtlServiceFilterCallback @ 0x1409F6C40
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     _CmIsDevicePresent @ 0x1409F703C (_CmIsDevicePresent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PiPnpRtlServiceFilterCallback(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // di
  PCUNICODE_STRING v8; // rax
  int DeviceRegProp; // eax
  unsigned int v10; // r14d
  __int64 *i; // rsi
  unsigned int v12; // r8d
  WCHAR *v13; // rdx
  int ObjectProperty; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  const WCHAR *j; // rdi
  __int64 v19; // rax
  __int64 Pool2; // rdi
  void *v21; // rcx
  __int64 v22; // rdi
  void *v23; // rcx
  unsigned int v24; // ecx
  ULONG v25; // [rsp+40h] [rbp-99h]
  _BYTE v26[4]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+64h] [rbp-75h] BYREF
  int v28; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v29; // [rsp+6Ch] [rbp-6Dh] BYREF
  int v30; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v32[40]; // [rsp+90h] [rbp-49h] BYREF

  memset_0(v32, 0, 0x4EuLL);
  v7 = 0;
  v28 = 0;
  v30 = 0;
  DestinationString = 0LL;
  v26[0] = 0;
  v27 = 0;
  v29 = 0;
  if ( !*(_BYTE *)(a4 + 8) || (int)CmIsDevicePresent(a1, a2, v26) >= 0 && v26[0] )
  {
    v8 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v8->Length >= 2u && *v8->Buffer )
    {
      while ( 1 )
      {
        v27 = *(_DWORD *)(a4 + 24);
        DeviceRegProp = CmGetDeviceRegProp(
                          (__int64)a1,
                          a2,
                          0LL,
                          5u,
                          (__int64)&v28,
                          *(_QWORD *)(a4 + 16),
                          (__int64)&v27,
                          0);
        if ( !DeviceRegProp && v27 < 2 )
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
        if ( v27 < 2 )
          break;
        Pool2 = ExAllocatePool2(0x100uLL, v27, 0x47706E50u);
        if ( !Pool2 )
          break;
        v21 = *(void **)(a4 + 16);
        if ( v21 )
          ExFreePoolWithTag(v21, 0);
        *(_DWORD *)(a4 + 24) = v27;
        *(_QWORD *)(a4 + 16) = Pool2;
      }
      v10 = 0;
      for ( i = &qword_140002E98; ; i += 2 )
      {
        v7 = 0;
        if ( v10 >= 4 )
          break;
        if ( *(_DWORD *)i == 2 && !v32[0] )
        {
          v27 = 78;
          if ( (int)CmGetDeviceRegProp((__int64)a1, a2, 0LL, 9u, (__int64)&v28, (__int64)v32, (__int64)&v27, 0) >= 0
            && v28 == 1
            && v27 >= 2 )
          {
            v32[38] = 0;
            goto LABEL_13;
          }
          return 0;
        }
        while ( 1 )
        {
LABEL_13:
          v12 = *(_DWORD *)i;
          v13 = v32;
          v25 = *(_DWORD *)(a4 + 24);
          if ( *(_DWORD *)i == 1 )
            v13 = (WCHAR *)a2;
          v27 = *(_DWORD *)(a4 + 24);
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             v13,
                             v12,
                             0LL,
                             0LL,
                             *(i - 1),
                             &v30,
                             *(const wchar_t **)(a4 + 16),
                             v25,
                             (__int64)&v29,
                             0);
          v27 = v29;
          if ( !ObjectProperty && v29 < 2 )
            break;
          if ( ObjectProperty != -1073741789 )
          {
            if ( ObjectProperty >= 0 && v30 == 8210 )
            {
              v16 = *(_DWORD *)(a4 + 24);
              if ( v16 > 2 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v16 >> 1) - 2) = 0;
              v17 = *(_DWORD *)(a4 + 24);
              if ( v17 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v17 >> 1) - 4) = 0;
              for ( j = *(const WCHAR **)(a4 + 16); *j; j += v19 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, j) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  goto LABEL_43;
                }
                v19 = -1LL;
                do
                  ++v19;
                while ( j[v19] );
              }
            }
            break;
          }
          if ( v29 < 2 )
            break;
          v22 = ExAllocatePool2(0x100uLL, v29, 0x47706E50u);
          if ( !v22 )
            break;
          v23 = *(void **)(a4 + 16);
          if ( v23 )
            ExFreePoolWithTag(v23, 0);
          v24 = v27;
          *(_QWORD *)(a4 + 16) = v22;
          *(_DWORD *)(a4 + 24) = v24;
        }
        ++v10;
      }
    }
    else
    {
LABEL_43:
      v7 = 1;
      if ( *(_QWORD *)(a4 + 32) )
        return guard_dispatch_icall_no_overrides(a1, a2);
    }
  }
  return v7;
}
