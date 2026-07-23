/*
 * XREFs of SiGetEspFromFirmware @ 0x1408068A0
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140806448 (SiGetEfiSystemDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x14069CE20 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x14069DA80 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x14069DAA0 (ZwQueryBootOptions.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     SiGetDeviceNumberInformation @ 0x140806038 (SiGetDeviceNumberInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x1408062BC (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140806428 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x140806CFC (SiIsValidWindowsBootEntry.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEspFromFirmware(int a1, void *a2, ULONG a3)
{
  ULONG v3; // r14d
  void *v4; // r15
  void *v5; // r12
  int *v6; // r13
  wchar_t *v7; // rdi
  wchar_t *v8; // rsi
  __int64 result; // rax
  void *i; // rcx
  signed int DeviceNumberInformation; // ebx
  __int64 Pool2; // rax
  _BOOT_OPTIONS *v13; // rax
  ULONG v14; // r14d
  NTSTATUS v15; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v17; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  ULONG v20; // r14d
  ULONG *j; // rcx
  __int64 v22; // rax
  ULONG k; // ebx
  unsigned int *v24; // rax
  unsigned int *v25; // r14
  int v26; // eax
  _WORD *v27; // rdx
  __int64 v28; // rax
  ULONG v29; // eax
  unsigned int v30; // [rsp+30h] [rbp-28h] BYREF
  int v31; // [rsp+34h] [rbp-24h] BYREF
  PVOID v32; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v34[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Count; // [rsp+B8h] [rbp+60h] BYREF

  BufferLength = a3;
  v3 = 0;
  Count = 0;
  v4 = 0LL;
  v30 = 0;
  v5 = 0LL;
  v31 = 0;
  v6 = 0LL;
  v34[0] = 0LL;
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v32 = 0LL;
  result = BiAcquirePrivilege(22LL, v34);
  if ( (int)result >= 0 )
  {
    BufferLength = 0;
    for ( i = 0LL; ; i = (void *)Pool2 )
    {
      DeviceNumberInformation = ZwEnumerateBootEntries(i, &BufferLength);
      if ( DeviceNumberInformation != -1073741789 )
        break;
      if ( v3 >= BufferLength )
        goto LABEL_48;
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      Pool2 = ExAllocatePool2(0x100uLL);
      v4 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_9;
      v3 = BufferLength;
    }
    if ( DeviceNumberInformation >= 0 )
    {
      if ( BufferLength )
      {
        BufferLength = 24;
        while ( 1 )
        {
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          v13 = (_BOOT_OPTIONS *)ExAllocatePool2(0x100uLL);
          v6 = (int *)v13;
          if ( !v13 )
            break;
          v14 = BufferLength;
          v15 = ZwQueryBootOptions(v13, &BufferLength);
          DeviceNumberInformation = v15;
          if ( v15 != -1073741789 )
          {
            if ( v15 < 0 )
              goto LABEL_48;
            EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
            v17 = EfiBootEntryById;
            if ( EfiBootEntryById
              && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, (_FILE_PATH **)&P),
                  v7 = (wchar_t *)P,
                  DeviceNumberInformation = NtFilePath,
                  NtFilePath >= 0) )
            {
              IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v17, P);
              v20 = 0;
              if ( IsValidWindowsBootEntry )
                goto LABEL_48;
              ExFreePoolWithTag(v7, 0);
              v7 = 0LL;
            }
            else
            {
              v20 = 0;
            }
            for ( j = 0LL; ; j = (ULONG *)v22 )
            {
              DeviceNumberInformation = ZwQueryBootEntryOrder(j, &Count);
              if ( DeviceNumberInformation != -1073741789 )
                break;
              if ( v20 >= Count )
                goto LABEL_48;
              if ( v5 )
                ExFreePoolWithTag(v5, 0);
              v22 = ExAllocatePool2(0x100uLL);
              v5 = (void *)v22;
              if ( !v22 )
                goto LABEL_9;
              v20 = Count;
            }
            if ( !DeviceNumberInformation )
            {
              if ( !Count )
                goto LABEL_12;
              for ( k = 0; k < Count; ++k )
              {
                v24 = SiGetEfiBootEntryById((unsigned int *)v4, *((_DWORD *)v5 + k));
                v25 = v24;
                if ( v24 )
                {
                  v26 = SiBootEntryGetNtFilePath((__int64)v24, (_FILE_PATH **)&v32);
                  v8 = (wchar_t *)v32;
                  if ( v26 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v25, v32) )
                  {
                    if ( v7 )
                    {
                      if ( wcsicmp(v7 + 6, v8 + 6) )
                      {
                        DeviceNumberInformation = -1073740719;
                        goto LABEL_48;
                      }
                    }
                    else
                    {
                      v7 = v8;
                      v32 = 0LL;
                      v8 = 0LL;
                    }
                  }
                  if ( v8 )
                  {
                    ExFreePoolWithTag(v8, 0);
                    v8 = 0LL;
                    v32 = 0LL;
                  }
                }
              }
              DeviceNumberInformation = v7 == 0LL ? 0xC0000225 : 0;
            }
            goto LABEL_48;
          }
          if ( v14 >= BufferLength )
            goto LABEL_48;
        }
LABEL_9:
        DeviceNumberInformation = -1073741801;
        goto LABEL_48;
      }
LABEL_12:
      DeviceNumberInformation = -1073741275;
    }
LABEL_48:
    BiReleasePrivilege(v34);
    if ( DeviceNumberInformation >= 0 )
    {
      if ( v7 )
      {
        if ( a1 )
        {
          v27 = v7 + 6;
          v28 = -1LL;
          do
            ++v28;
          while ( v27[v28] );
          v29 = 2 * v28 + 2;
          BufferLength = v29;
          if ( v29 <= 0x6A )
            memmove(a2, v27, v29);
          else
            DeviceNumberInformation = -1073741789;
        }
        else
        {
          DeviceNumberInformation = SiGetDeviceNumberInformation(v7 + 6, &v30, &v31);
          if ( DeviceNumberInformation >= 0 )
            DeviceNumberInformation = RtlStringCbPrintfW(
                                        (NTSTRSAFE_PWSTR)a2,
                                        0x6AuLL,
                                        L"\\Device\\Harddisk%lu\\Partition%lu",
                                        v30,
                                        0LL);
        }
      }
      else
      {
        DeviceNumberInformation = -1073741823;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return (unsigned int)DeviceNumberInformation;
  }
  return result;
}
