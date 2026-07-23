/*
 * XREFs of SiGetEspFromFirmware @ 0x140816EE0
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x1406A9090 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x1406A9CF0 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x1406A9D10 (ZwQueryBootOptions.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SiGetDeviceNumberInformation @ 0x140816678 (SiGetDeviceNumberInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x1408168FC (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140816A68 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x14081733C (SiIsValidWindowsBootEntry.c)
 *     BiReleasePrivilege @ 0x1409A7288 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409A72E0 (BiAcquirePrivilege.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  ULONG v12; // eax
  __int64 Pool2; // rax
  ULONG v14; // eax
  _BOOT_OPTIONS *v15; // rax
  ULONG v16; // r14d
  NTSTATUS v17; // eax
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v19; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  ULONG v22; // r14d
  ULONG *j; // rcx
  ULONG v24; // eax
  __int64 v25; // rax
  ULONG k; // ebx
  unsigned int *v27; // rax
  unsigned int *v28; // r14
  int v29; // eax
  _WORD *v30; // rdx
  __int64 v31; // rax
  ULONG v32; // eax
  unsigned int v33; // [rsp+30h] [rbp-28h] BYREF
  int v34; // [rsp+34h] [rbp-24h] BYREF
  PVOID v35; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v37[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Count; // [rsp+B8h] [rbp+60h] BYREF

  BufferLength = a3;
  v3 = 0;
  Count = 0;
  v4 = 0LL;
  v33 = 0;
  v5 = 0LL;
  v34 = 0;
  v6 = 0LL;
  v37[0] = 0LL;
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  result = BiAcquirePrivilege(22LL, v37);
  if ( (int)result >= 0 )
  {
    BufferLength = 0;
    for ( i = 0LL; ; i = (void *)Pool2 )
    {
      DeviceNumberInformation = ZwEnumerateBootEntries(i, &BufferLength);
      if ( DeviceNumberInformation != -1073741789 )
        break;
      v12 = BufferLength;
      if ( v3 >= BufferLength )
        goto LABEL_48;
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        v12 = BufferLength;
      }
      Pool2 = ExAllocatePool2(0x100uLL, v12, 0x4B505953u);
      v4 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_9;
      v3 = BufferLength;
    }
    if ( DeviceNumberInformation >= 0 )
    {
      if ( BufferLength )
      {
        v14 = 24;
        BufferLength = 24;
        while ( 1 )
        {
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0);
            v14 = BufferLength;
          }
          v15 = (_BOOT_OPTIONS *)ExAllocatePool2(0x100uLL, v14, 0x4B505953u);
          v6 = (int *)v15;
          if ( !v15 )
            break;
          v16 = BufferLength;
          v17 = ZwQueryBootOptions(v15, &BufferLength);
          DeviceNumberInformation = v17;
          if ( v17 != -1073741789 )
          {
            if ( v17 < 0 )
              goto LABEL_48;
            EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
            v19 = EfiBootEntryById;
            if ( EfiBootEntryById
              && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, (_FILE_PATH **)&P),
                  v7 = (wchar_t *)P,
                  DeviceNumberInformation = NtFilePath,
                  NtFilePath >= 0) )
            {
              IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v19, P);
              v22 = 0;
              if ( IsValidWindowsBootEntry )
                goto LABEL_48;
              ExFreePoolWithTag(v7, 0);
              v7 = 0LL;
            }
            else
            {
              v22 = 0;
            }
            for ( j = 0LL; ; j = (ULONG *)v25 )
            {
              DeviceNumberInformation = ZwQueryBootEntryOrder(j, &Count);
              if ( DeviceNumberInformation != -1073741789 )
                break;
              v24 = Count;
              if ( v22 >= Count )
                goto LABEL_48;
              if ( v5 )
              {
                ExFreePoolWithTag(v5, 0);
                v24 = Count;
              }
              v25 = ExAllocatePool2(0x100uLL, 4LL * v24, 0x4B505953u);
              v5 = (void *)v25;
              if ( !v25 )
                goto LABEL_9;
              v22 = Count;
            }
            if ( !DeviceNumberInformation )
            {
              if ( !Count )
                goto LABEL_12;
              for ( k = 0; k < Count; ++k )
              {
                v27 = SiGetEfiBootEntryById((unsigned int *)v4, *((_DWORD *)v5 + k));
                v28 = v27;
                if ( v27 )
                {
                  v29 = SiBootEntryGetNtFilePath((__int64)v27, (_FILE_PATH **)&v35);
                  v8 = (wchar_t *)v35;
                  if ( v29 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v28, v35) )
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
                      v35 = 0LL;
                      v8 = 0LL;
                    }
                  }
                  if ( v8 )
                  {
                    ExFreePoolWithTag(v8, 0);
                    v8 = 0LL;
                    v35 = 0LL;
                  }
                }
              }
              DeviceNumberInformation = v7 == 0LL ? 0xC0000225 : 0;
            }
            goto LABEL_48;
          }
          v14 = BufferLength;
          if ( v16 >= BufferLength )
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
    BiReleasePrivilege(v37);
    if ( DeviceNumberInformation >= 0 )
    {
      if ( v7 )
      {
        if ( a1 )
        {
          v30 = v7 + 6;
          v31 = -1LL;
          do
            ++v31;
          while ( v30[v31] );
          v32 = 2 * v31 + 2;
          BufferLength = v32;
          if ( v32 <= 0x6A )
            memmove(a2, v30, v32);
          else
            DeviceNumberInformation = -1073741789;
        }
        else
        {
          DeviceNumberInformation = SiGetDeviceNumberInformation(v7 + 6, &v33, &v34);
          if ( DeviceNumberInformation >= 0 )
            DeviceNumberInformation = RtlStringCbPrintfW(
                                        (NTSTRSAFE_PWSTR)a2,
                                        0x6AuLL,
                                        L"\\Device\\Harddisk%lu\\Partition%lu",
                                        v33,
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
