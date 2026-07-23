/*
 * XREFs of IopGetDriverNameFromKeyNode @ 0x1409B6410
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PiGetDefaultMessageString @ 0x1409B8860 (PiGetDefaultMessageString.c)
 *     IopUnloadDriver @ 0x140AA4068 (IopUnloadDriver.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x140C65844 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpLoadBootFilterDriver @ 0x140C69CC4 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetDriverNameFromKeyNode(HANDLE KeyHandle, PUNICODE_STRING Destination)
{
  wchar_t *v4; // rdi
  const WCHAR *v5; // r13
  int v6; // ecx
  unsigned int v7; // r15d
  unsigned __int16 *Pool2; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned int v11; // ebx
  wchar_t *v12; // rax
  _WORD *v14; // r10
  unsigned int v15; // ecx
  __int16 *v16; // r8
  unsigned int i; // r9d
  __int16 v18; // ax
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF
  ULONG Length; // [rsp+90h] [rbp+50h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  P = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"ObjectName", 64, &P) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) > 2u && *((_DWORD *)P + 1) == 1 )
    {
      v14 = P;
      v15 = (unsigned __int16)(*((_WORD *)P + 6) - 2);
      Destination->Length = v15;
      Destination->MaximumLength = v4[6];
      v16 = (__int16 *)((char *)v4 + *((unsigned int *)v4 + 2));
      for ( i = v15 >> 1; i; --i )
      {
        v18 = *v16++;
        *v14++ = v18;
      }
      Destination->Buffer = v4;
      return 0LL;
    }
    v10 = -1073741472;
    goto LABEL_15;
  }
  Source = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Type", 0, &P) >= 0 )
  {
    v4 = (wchar_t *)P;
    if ( *((_DWORD *)P + 3) )
    {
      v5 = L"\\Driver\\";
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      if ( v6 == 2 || (v7 = 16, v6 == 8) )
      {
        v5 = L"\\FileSystem\\";
        v7 = 24;
      }
      Length = 164;
      Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL, 0xA4uLL, 0x654B6F49u);
      if ( !Pool2 )
        goto LABEL_17;
      v9 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool2, Length, &Length);
      v10 = v9;
      if ( v9 == -2147483643 || v9 == -1073741789 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL, Length, 0x654B6F49u);
        if ( !Pool2 )
          goto LABEL_17;
        v10 = ZwQueryKey(KeyHandle, KeyBasicInformation, Pool2, Length, &Length);
      }
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_15;
      }
      v11 = v7 + *((_DWORD *)Pool2 + 3);
      if ( v11 < v7 )
      {
        ExFreePoolWithTag(Pool2, 0);
        v10 = -1073741675;
LABEL_15:
        ExFreePoolWithTag(v4, 0);
        return (unsigned int)v10;
      }
      v12 = (wchar_t *)ExAllocatePool2(0x40uLL, (unsigned __int16)(v7 + Pool2[6]), 0x314E6F49u);
      Destination->Buffer = v12;
      if ( v12 )
      {
        Destination->Length = 0;
        Destination->MaximumLength = v11;
        RtlAppendUnicodeToString(Destination, v5);
        Source.Length = Pool2[6];
        Source.MaximumLength = Source.Length;
        Source.Buffer = Pool2 + 8;
        RtlAppendUnicodeStringToString(Destination, &Source);
        ExFreePoolWithTag(Pool2, 0);
        ExFreePoolWithTag(v4, 0);
        return 0LL;
      }
      ExFreePoolWithTag(Pool2, 0);
LABEL_17:
      v10 = -1073741670;
      goto LABEL_15;
    }
    ExFreePoolWithTag(P, 0);
  }
  return 3221225824LL;
}
