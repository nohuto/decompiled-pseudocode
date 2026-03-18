/*
 * XREFs of HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcPatchConfiguration @ 0x140557204 (HalpMcPatchConfiguration.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140354A70 (RtlStringCbCopyNW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     wcstoul @ 0x1404FE050 (wcstoul.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x140556BB8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     PrExtControlOperations @ 0x140657C2C (PrExtControlOperations.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x14069B400 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x14069B780 (ZwEnumerateKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmGetSystemRoutineAddress @ 0x1408E84F0 (MmGetSystemRoutineAddress.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpMcEnumerateAndSetPatchConfig(void *a1, __int64 a2, int a3)
{
  HANDLE v3; // rbx
  wchar_t *v4; // rdi
  _DWORD *Pool2; // r14
  void *v6; // rsi
  int v8; // ebx
  unsigned int v9; // r15d
  NTSTATUS v10; // eax
  ULONG v11; // r15d
  size_t v12; // rax
  ULONG v13; // r12d
  unsigned int v14; // r15d
  wchar_t *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // r15
  int v18; // eax
  unsigned int v19; // eax
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  HANDLE v25; // [rsp+50h] [rbp-B0h]
  size_t Size; // [rsp+58h] [rbp-A8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING SystemRoutineName; // [rsp+A0h] [rbp-60h] BYREF
  char v30[8]; // [rsp+B0h] [rbp-50h] BYREF
  int v31; // [rsp+B8h] [rbp-48h]
  const wchar_t *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+120h] [rbp+20h] BYREF
  int v36; // [rsp+128h] [rbp+28h]

  v25 = a1;
  v3 = a1;
  v24 = a2;
  v4 = 0LL;
  Length = 0;
  Pool2 = 0LL;
  KeyHandle = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v36 = 0;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( a2 || a3 != 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x636C6148u);
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v8 = -1073741801;
        goto LABEL_46;
      }
      v10 = ZwQueryKey(v3, KeyFullInformation, Pool2, Length, &Length);
      ++v9;
      v8 = v10;
      if ( v10 != -1073741789 && v10 != -2147483643 )
        break;
      if ( v9 >= 0xA )
        break;
      v3 = v25;
    }
    if ( v10 >= 0 )
    {
      v11 = Pool2[5];
      v12 = (unsigned int)(Pool2[6] + 2);
      v23 = v11;
      Size = v12;
      v6 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v6 )
      {
LABEL_14:
        v8 = -1073741801;
        goto LABEL_43;
      }
      Length = 24;
      v13 = 0;
      while ( 2 )
      {
        if ( v13 >= v11 )
        {
          if ( !v4 )
            goto LABEL_43;
        }
        else
        {
          v14 = 0;
          do
          {
            if ( v4 )
              ExFreePoolWithTag(v4, 0x636C6148u);
            v15 = (wchar_t *)ExAllocatePool2(0x100uLL);
            v4 = v15;
            if ( !v15 )
              goto LABEL_14;
            v16 = ZwEnumerateKey(v25, v13, KeyBasicInformation, v15, Length, &Length);
            ++v14;
            v8 = v16;
          }
          while ( (v16 == -1073741789 || v16 == -2147483643) && v14 < 0xA );
          if ( v16 >= 0 )
          {
            memset_0(v6, 0, Size);
            v8 = RtlStringCbCopyNW((NTSTRSAFE_PWSTR)v6, Size, v4 + 8, *((unsigned int *)v4 + 3));
            if ( v8 >= 0 )
            {
              if ( !a3 )
              {
                v35 = 0LL;
                v36 = 0;
                LODWORD(v35) = wcstoul((const wchar_t *)v6, 0LL, 16);
                goto LABEL_28;
              }
              if ( a3 == 1 )
              {
                v19 = wcstoul((const wchar_t *)v6, 0LL, 16);
                v17 = v24;
                *(_DWORD *)(v24 + 8) = v19;
              }
              else
              {
LABEL_28:
                v17 = v24;
              }
              RtlInitUnicodeString(&DestinationString, (PCWSTR)v6);
              ObjectAttributes.RootDirectory = v25;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( KeyHandle )
              {
                ZwClose(v6);
                KeyHandle = 0LL;
              }
              v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
              if ( v8 >= 0 )
              {
                if ( !a3 )
                {
                  v18 = HalpMcEnumerateAndSetPatchConfig(KeyHandle, &v35, 1LL);
                  v8 = v18;
LABEL_34:
                  if ( v18 < 0 )
                    break;
                  goto LABEL_35;
                }
                memset_0(v30, 0, 0x70uLL);
                v32 = L"Revision";
                v31 = 288;
                v33 = v17 + 4;
                v34 = 0x4000000;
                SystemRoutineName = 0LL;
                RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
                MmGetSystemRoutineAddress(&SystemRoutineName);
                v8 = guard_dispatch_icall_no_overrides(0x40000000LL);
                if ( v8 >= 0 )
                {
                  v18 = PrExtControlOperations(1LL, v17);
                  v8 = v18;
                  if ( v18 != -1073741275 )
                    goto LABEL_34;
                  v8 = 0;
LABEL_35:
                  v11 = v23;
                  ++v13;
                  continue;
                }
              }
            }
          }
        }
        break;
      }
      ExFreePoolWithTag(v4, 0x636C6148u);
    }
LABEL_43:
    ExFreePoolWithTag(Pool2, 0x636C6148u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x636C6148u);
LABEL_46:
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
