/*
 * XREFs of PiGetDeviceRegistryProperty @ 0x14071EC28
 * Callers:
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     wcschr @ 0x1404FFD90 (wcschr.c)
 *     wcsstr @ 0x1405002B0 (wcsstr.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140990DBC (PnpDeviceObjectToDeviceInstance.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     PnpFindAlternateStringData @ 0x140A23348 (PnpFindAlternateStringData.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     RtlFormatMessageEx @ 0x140A6F178 (RtlFormatMessageEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, wchar_t *a5, int *a6)
{
  int *v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r12
  int RegistryValue; // ebx
  _DWORD *v11; // rsi
  unsigned int v12; // r14d
  wchar_t *v13; // rdi
  wchar_t *v14; // r15
  wchar_t *v15; // rax
  __int64 v16; // rcx
  const wchar_t *v17; // rcx
  unsigned int i; // r13d
  wchar_t *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // cl
  size_t Size; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  NTSTRSAFE_PWSTR v30; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v33[152]; // [rsp+B0h] [rbp-58h] BYREF

  v6 = a6;
  Handle = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v30 = a5;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v29 = (__int64)a6;
  P = 0LL;
  HIDWORD(Size) = 0;
  --CurrentThread->KernelApcDisable;
  Str = 0LL;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = PnpDeviceObjectToDeviceInstance(a1, &Handle, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    RegistryValue = IopOpenRegistryKeyEx(&KeyHandle, Handle, &DestinationString, 131097LL);
    if ( RegistryValue >= 0 )
    {
      ZwClose(Handle);
      Handle = KeyHandle;
      RegistryValue = IopGetRegistryValue(KeyHandle);
    }
    ZwClose(Handle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( RegistryValue >= 0 )
  {
    v11 = P;
    v12 = *((_DWORD *)P + 3);
    v13 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    if ( *((_DWORD *)P + 1) == 1
      && (unsigned int)PnpFindAlternateStringData((char *)P + *((unsigned int *)P + 2), v12, &Str, (char *)&Size + 4) )
    {
      v14 = Str;
      v12 = HIDWORD(Size);
      v13 = Str;
      v15 = wcsstr(Str, L";(");
      v9 = (__int64)v15;
      if ( v15 )
      {
        v16 = (v12 >> 1) - 2;
        if ( v14[v16] == 41 )
        {
          *v15 = 0;
          v9 = (__int64)(v15 + 2);
          v14[v16] = 0;
          memset_0(v33, 0, sizeof(v33));
          v17 = (const wchar_t *)v9;
          v32 = v9;
          for ( i = 1; ; ++i )
          {
            v19 = wcschr(v17, 0x2Cu);
            if ( !v19 )
              break;
            *v19 = 0;
            v20 = (__int64)(v19 + 1);
            if ( i >= 0x13 )
            {
              v6 = (int *)v29;
              v22 = 1;
              goto LABEL_18;
            }
            v21 = i;
            *(_QWORD *)&v33[8 * v21 - 8] = v20;
            v17 = (const wchar_t *)v20;
          }
          v6 = (int *)v29;
        }
      }
      v22 = 0;
    }
    else
    {
      LODWORD(v14) = (_DWORD)Str;
      v22 = 0;
    }
LABEL_18:
    if ( *v6 < v12 )
    {
      RegistryValue = -1073741789;
    }
    else if ( v11[1] == 8 )
    {
      if ( v9 )
      {
        if ( v22 )
          RegistryValue = -1073741619;
        else
          RegistryValue = RtlFormatMessageEx((int)v14, 0, 0, 0, 1, (__int64)&v32, v30, *v6, (__int64)v6);
      }
      else
      {
        memmove(v30, v13, v12);
      }
    }
    else
    {
      RegistryValue = -1073741584;
    }
    *v6 = v12;
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)RegistryValue;
}
