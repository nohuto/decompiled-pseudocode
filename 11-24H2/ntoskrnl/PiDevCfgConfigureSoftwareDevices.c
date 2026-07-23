/*
 * XREFs of PiDevCfgConfigureSoftwareDevices @ 0x14094C890
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 *     _PnpCtxRegCopyTree @ 0x14081800C (_PnpCtxRegCopyTree.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegDeleteTree @ 0x140A7F11C (_PnpCtxRegDeleteTree.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureSoftwareDevices(__int64 a1, void *a2)
{
  NTSTATUS v3; // eax
  int v4; // ebx
  int v5; // eax
  HANDLE v6; // r14
  unsigned int *Pool2; // rdi
  ULONG i; // esi
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v12; // [rsp+38h] [rbp-38h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp+48h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+58h] BYREF

  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  v12 = L"Devices";
  v11 = 1048590LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v4 = v3;
  if ( v3 == -1073741772 )
  {
    v4 = 0;
  }
  else if ( v3 >= 0 )
  {
    LODWORD(v11) = 1048590;
    v12 = L"Devices";
    v5 = IopCreateRegistryKeyEx(&Handle, a1, &v11, 983103LL, 0, 0LL);
    v6 = Handle;
    v4 = v5;
    if ( v5 >= 0 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, 0x220uLL, 0x63647050u);
      if ( Pool2 )
      {
        for ( i = 0; ; ++i )
        {
          v4 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, Pool2, 0x220u, &ResultLength);
          if ( v4 < 0 )
            break;
          *((_WORD *)Pool2 + ((unsigned __int64)Pool2[3] >> 1) + 8) = 0;
          PnpCtxRegDeleteTree(*(_QWORD *)&PiPnpRtlCtx, v6, Pool2 + 4);
          v4 = PnpCtxRegCopyTree(v9, (int)KeyHandle, (int)Pool2 + 16, (int)v6, (__int64)(Pool2 + 4));
          if ( v4 < 0 )
            goto LABEL_15;
        }
        if ( v4 == -2147483622 )
        {
          v4 = 0;
        }
        else if ( v4 == -2147483643 )
        {
          v4 = -1073741773;
        }
LABEL_15:
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        v4 = -1073741670;
      }
    }
    if ( v6 )
      ZwClose(v6);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
