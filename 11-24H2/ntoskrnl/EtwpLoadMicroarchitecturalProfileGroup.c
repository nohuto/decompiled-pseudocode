/*
 * XREFs of EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4
 * Callers:
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A85A8 (EtwpLoadMicroarchitecturalPmcs.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A802C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1407A80DC (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407A8AE8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     KiGetCpuVendor @ 0x140B6F294 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLoadMicroarchitecturalProfileGroup(HANDLE KeyHandle, __int64 a2)
{
  int CpuVendor; // edi
  __int64 v5; // rbx
  __int64 **v6; // rdx
  __int64 *v7; // r8
  char *v8; // rcx
  __int64 *v9; // r9
  char *v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  ULONG_PTR v13; // rsi
  WCHAR *Pool2; // rbx
  int v15; // edi
  __int64 v16; // rax
  ULONG Length; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KAFFINITY_EX v23; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyInformation[12]; // [rsp+190h] [rbp+90h] BYREF
  unsigned int v25; // [rsp+19Ch] [rbp+9Ch]
  wchar_t v26[264]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v27; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v28; // [rsp+3B8h] [rbp+2B8h]
  _QWORD v29[4]; // [rsp+3C0h] [rbp+2C0h] BYREF
  char v30; // [rsp+3E0h] [rbp+2E0h] BYREF
  char v31; // [rsp+3E8h] [rbp+2E8h] BYREF
  int v32[6]; // [rsp+420h] [rbp+320h] BYREF
  char v33; // [rsp+438h] [rbp+338h] BYREF

  v18 = 0;
  memset_0(KeyInformation, 0, 0x218uLL);
  v29[0] = L"Family";
  v29[1] = L"Model";
  v29[2] = L"Stepping";
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  memset_0(&v23.8, 0, sizeof(v23.8));
  KeyHandlea = 0LL;
  ResultLength = 0;
  CpuVendor = KiGetCpuVendor();
  EtwpGetPmcCpuHierarchyRegistry((int)KeyHandle, &v18, (__int64)&v27);
  memset_0(v32, 0, 0xE0uLL);
  v5 = -1LL;
  v6 = (__int64 **)&v31;
  v27 = -1LL;
  v7 = v29;
  v28 = -1;
  v8 = &v33;
  v9 = &v27;
  v10 = &v30;
  v11 = 3LL;
  do
  {
    *(_QWORD *)v8 = v10;
    *((_QWORD *)v8 - 3) = &EtwpQueryRegistryCallback;
    v10 += 16;
    v12 = *v7++;
    *v6 = v9;
    v9 = (__int64 *)((char *)v9 + 4);
    *((_QWORD *)v8 - 1) = v12;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 56;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 2;
    --v11;
  }
  while ( v11 );
  if ( (int)RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v32, 0, Length, 1) >= 0 && v18 == CpuVendor )
  {
    *(_QWORD *)&v23.Count = 2097153LL;
    memset_0(&v23.8, 0, sizeof(v23.8));
    EtwpGetMicroarchitecturalPmcAffinity((__int64)&v27, &v23.Count);
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v23.Count) )
    {
      do
        ++v5;
      while ( *(_WORD *)(a2 + 2 * v5) );
      v13 = (unsigned int)(2 * v5 + 512);
      Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL, v13, 0x50777445u);
      v15 = -1;
      while ( ZwEnumerateKey(KeyHandle, ++v15, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
      {
        v16 = v25 >> 1;
        if ( (unsigned int)v16 <= 0xFE )
        {
          v26[v16] = 0;
          if ( RtlStringCbPrintfW(Pool2, v13, L"%ws\\%ws", a2, v26) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, Pool2);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileSource((_DWORD)KeyHandlea, &v23, v26);
              ZwClose(KeyHandlea);
            }
          }
        }
      }
      ExFreePoolWithTag(Pool2, 0x50777445u);
    }
  }
}
