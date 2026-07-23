/*
 * XREFs of PiCMGenerateDeviceInstance @ 0x14072F37C
 * Callers:
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCchLengthW @ 0x140420BA0 (RtlStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCatExW @ 0x140476350 (RtlStringCchCatExW.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmDeleteDevice @ 0x1408189D8 (_CmDeleteDevice.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x1408BA218 (_CmGetDeviceStatus.c)
 *     RtlUpcaseUnicodeString @ 0x140949F30 (RtlUpcaseUnicodeString.c)
 *     _PnpCtxRegSetValue @ 0x14097EB54 (_PnpCtxRegSetValue.c)
 *     _CmCreateDevice @ 0x1409C4008 (_CmCreateDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGenerateDeviceInstance(NTSTRSAFE_PCWSTR pszSrc, char a2, wchar_t *a3, int a4)
{
  char v4; // r12
  void *v8; // rdi
  NTSTATUS inited; // ebx
  NTSTRSAFE_PCWSTR i; // rdx
  wchar_t v11; // cx
  NTSTRSAFE_PWSTR *v12; // r9
  NTSTRSAFE_PWSTR *v13; // r9
  wchar_t *Pool2; // rsi
  int v15; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  size_t *pcchRemaining; // [rsp+20h] [rbp-50h]
  size_t *pcchRemaininga; // [rsp+20h] [rbp-50h]
  ULONG dwFlags; // [rsp+28h] [rbp-48h]
  ULONG dwFlagsa; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  void *v27; // [rsp+50h] [rbp-20h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v30; // [rsp+C0h] [rbp+50h] BYREF
  size_t v31; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v31) = a4;
  v4 = 0;
  *a3 = 0;
  LODWORD(v26) = 0;
  v25 = 0LL;
  v30 = 0;
  v27 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  inited = RtlStringCchLengthW(pszSrc, 0xC8uLL, &pcchLength);
  if ( inited >= 0 )
  {
    for ( i = pszSrc; ; ++i )
    {
      v11 = *i;
      if ( !*i )
        break;
      if ( (unsigned __int16)(v11 - 33) > 0x5Eu || v11 == 44 || v11 == 92 )
        return (unsigned int)-1073741773;
    }
    inited = RtlStringCchCopyExW(a3, 0xC8uLL, L"Root", 0LL, 0LL, 0x800u);
    if ( inited >= 0 )
    {
      inited = RtlInitUnicodeStringEx(&DestinationString, a3);
      if ( inited >= 0 )
      {
        inited = RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
        if ( inited >= 0 )
        {
          inited = RtlStringCchCatExW(a3, 0xC8uLL, L"\\", v12, pcchRemaining, dwFlags);
          if ( inited >= 0 )
          {
            inited = RtlStringCchCatExW(a3, 0xC8uLL, pszSrc, v13, pcchRemaininga, dwFlagsa);
            if ( inited >= 0 )
            {
              Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x34706E50u);
              if ( !Pool2 )
                return (unsigned int)-1073741670;
              v15 = 0;
              while ( 1 )
              {
                if ( v8 )
                {
                  ZwClose(v8);
                  v8 = 0LL;
                  v27 = 0LL;
                }
                LODWORD(v24) = v15;
                inited = RtlStringCchPrintfExW(Pool2, 0xC8uLL, 0LL, 0LL, 0x800u, L"%s\\%04u", a3, v24, v25, v26);
                if ( inited < 0 )
                  break;
                if ( (int)CmGetDeviceStatus(
                            PiPnpRtlCtx,
                            (_DWORD)Pool2,
                            0,
                            (unsigned int)&v26,
                            (__int64)&v25 + 4,
                            (__int64)&v25) < 0 )
                {
                  CurrentThread = KeGetCurrentThread();
                  --CurrentThread->KernelApcDisable;
                  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                  LOBYTE(v31) = 0;
                  v4 = 1;
                  inited = CmCreateDevice(PiPnpRtlCtx, (_DWORD)Pool2, 131078, (unsigned int)&v27, (__int64)&v31, 0);
                  if ( inited < 0 )
                  {
                    v8 = v27;
                    goto LABEL_35;
                  }
                  if ( (_BYTE)v31 )
                  {
                    v8 = v27;
                    inited = CmValidateDeviceName(v17, Pool2);
                    if ( inited < 0 || (inited = RtlStringCchCopyExW(a3, 0xC8uLL, Pool2, 0LL, 0LL, 0x800u), inited < 0) )
                    {
                      CmDeleteDevice(PiPnpRtlCtx);
                    }
                    else if ( a2 )
                    {
                      v30 = 1;
                      inited = PnpCtxRegSetValue(v18, v8, L"Phantom", 4LL, &v30, 4);
                    }
                    goto LABEL_34;
                  }
                  ExReleaseResourceLite(&PnpRegistryDeviceResource);
                  KeLeaveCriticalRegion();
                  v8 = v27;
                  v4 = 0;
                }
                if ( (unsigned int)++v15 > 0x270F )
                {
                  inited = -2147483622;
LABEL_34:
                  if ( !v4 )
                    break;
LABEL_35:
                  ExReleaseResourceLite(&PnpRegistryDeviceResource);
                  KeLeaveCriticalRegion();
                  break;
                }
                v4 = 0;
              }
              if ( v8 )
                ZwClose(v8);
              ExFreePoolWithTag(Pool2, 0x34706E50u);
            }
          }
        }
      }
    }
  }
  if ( inited == -2147483643 )
    return (unsigned int)-1073741789;
  return (unsigned int)inited;
}
