/*
 * XREFs of _CmServiceFilterCallback @ 0x14081C5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall CmServiceFilterCallback(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r14
  char v7; // di
  const WCHAR *v8; // rdx
  int DeviceRegProp; // edi
  unsigned int v10; // eax
  void *v11; // rcx
  __int64 Pool2; // rax
  int v13; // esi
  _DWORD *v14; // rax
  unsigned int v15; // r13d
  int v16; // r12d
  unsigned int v17; // r15d
  _DWORD *v18; // r14
  unsigned int v19; // eax
  int InstallerClassRegProp; // eax
  void *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  const WCHAR *i; // rdi
  __int64 v26; // rax
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v29[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  _DWORD v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v33[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v34; // [rsp+70h] [rbp-90h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[76]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v38; // [rsp+ECh] [rbp-14h]

  v29[1] = a3;
  v31 = a2;
  v30 = a1;
  v28 = 0;
  v29[0] = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  DestinationString = 0LL;
  String2 = 0LL;
  if ( a4 )
  {
    v8 = *(const WCHAR **)a4;
    if ( *(_QWORD *)a4 && *v8 )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, v8) < 0 )
        return v7;
      while ( 1 )
      {
        v28 = *(_DWORD *)(a4 + 16);
        DeviceRegProp = CmGetDeviceRegProp(v6, v5, 0, 5, (__int64)v29, *(_QWORD *)(a4 + 8), (__int64)&v28, 0);
        v10 = v28;
        if ( !DeviceRegProp && v28 < 2 )
        {
LABEL_13:
          v13 = -1073741811;
          goto LABEL_18;
        }
        if ( DeviceRegProp != -1073741789 )
          break;
        if ( v28 < 2 )
          goto LABEL_13;
        v11 = *(void **)(a4 + 8);
        if ( v11 )
        {
          ExFreePoolWithTag(v11, 0);
          v10 = v28;
        }
        Pool2 = ExAllocatePool2(0x100uLL, v10, 0x52504E50u);
        *(_QWORD *)(a4 + 8) = Pool2;
        if ( !Pool2 )
        {
          *(_DWORD *)(a4 + 16) = 0;
          v13 = -1073741801;
          goto LABEL_18;
        }
        *(_DWORD *)(a4 + 16) = v28;
      }
      v13 = DeviceRegProp;
      if ( DeviceRegProp
        || (*(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 16) >> 1) - 2) = 0,
            RtlInitUnicodeStringEx(&String2, *(PCWSTR *)(a4 + 8)) < 0)
        || !RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      {
LABEL_18:
        v32[0] = 1;
        v14 = v32;
        v32[1] = 2;
        v15 = 0;
        while ( 1 )
        {
          v34 = v14;
          v7 = 0;
          if ( v15 >= 2 )
            return v7;
          v16 = *v14;
          v33[0] = 18;
          v33[1] = 19;
          if ( v16 == 2 )
          {
            v28 = 78;
            v13 = CmGetDeviceRegProp(v6, v5, 0, 9, (__int64)v29, (__int64)v37, (__int64)&v28, 0);
            v7 = 0;
            if ( v13 < 0 || v29[0] != 1 || v28 < 2 )
              return v7;
            v38 = 0;
          }
          v17 = 0;
          v18 = v33;
          do
          {
            while ( 1 )
            {
              v19 = *(_DWORD *)(a4 + 16);
              v28 = v19;
              if ( v16 == 1 )
              {
                InstallerClassRegProp = CmGetDeviceRegProp(
                                          v30,
                                          v31,
                                          0,
                                          *v18,
                                          (__int64)v29,
                                          *(_QWORD *)(a4 + 8),
                                          (__int64)&v28,
                                          0);
LABEL_30:
                v13 = InstallerClassRegProp;
                v19 = v28;
                goto LABEL_31;
              }
              if ( v16 == 2 )
              {
                InstallerClassRegProp = CmGetInstallerClassRegProp(
                                          v30,
                                          (unsigned int)v37,
                                          0,
                                          *v18,
                                          (__int64)v29,
                                          *(_QWORD *)(a4 + 8),
                                          (__int64)&v28);
                goto LABEL_30;
              }
LABEL_31:
              if ( !v13 && v19 < 2 )
              {
LABEL_33:
                v13 = -1073741811;
                goto LABEL_34;
              }
              if ( v13 != -1073741789 )
                break;
              if ( v19 < 2 )
                goto LABEL_33;
              v21 = *(void **)(a4 + 8);
              if ( v21 )
              {
                ExFreePoolWithTag(v21, 0);
                v19 = v28;
              }
              v22 = ExAllocatePool2(0x100uLL, v19, 0x52504E50u);
              *(_QWORD *)(a4 + 8) = v22;
              if ( !v22 )
              {
                *(_DWORD *)(a4 + 16) = 0;
                v13 = -1073741801;
                goto LABEL_34;
              }
              *(_DWORD *)(a4 + 16) = v28;
            }
            if ( v13 >= 0 && v29[0] == 7 )
            {
              v23 = *(_DWORD *)(a4 + 16);
              if ( v23 > 2 )
                *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v23 >> 1) - 2) = 0;
              v24 = *(_DWORD *)(a4 + 16);
              if ( v24 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 8) + 2 * ((unsigned __int64)v24 >> 1) - 4) = 0;
              for ( i = *(const WCHAR **)(a4 + 8); *i; i += v26 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&String2, i) >= 0 && RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
                {
                  v6 = v30;
                  v5 = v31;
                  goto LABEL_57;
                }
                v26 = -1LL;
                do
                  ++v26;
                while ( i[v26] );
              }
            }
LABEL_34:
            ++v17;
            ++v18;
          }
          while ( v17 < 2 );
          ++v15;
          LODWORD(v6) = v30;
          v14 = v34 + 1;
          LODWORD(v5) = v31;
        }
      }
    }
LABEL_57:
    v7 = 1;
    if ( *(_QWORD *)(a4 + 24) )
      return guard_dispatch_icall_no_overrides(v6, v5);
  }
  return v7;
}
