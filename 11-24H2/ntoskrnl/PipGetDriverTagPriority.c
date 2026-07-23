/*
 * XREFs of PipGetDriverTagPriority @ 0x140C22830
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     PnpRegSzToString @ 0x140A3FBB8 (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipGetDriverTagPriority(HANDLE KeyHandle)
{
  unsigned __int16 i; // di
  _WORD *v3; // rsi
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // r14d
  NTSTATUS RegistryValue; // ebx
  NTSTATUS v8; // ebx
  unsigned __int64 v9; // r10
  unsigned int *v10; // rdx
  unsigned int v11; // r9d
  _DWORD *v12; // rdx
  PVOID v14; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v15; // [rsp+28h] [rbp-18h] BYREF
  PVOID v16; // [rsp+78h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+40h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  P = 0LL;
  v14 = 0LL;
  *(_DWORD *)(&v15.MaximumLength + 1) = 0;
  Handle = 0LL;
  v15.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GroupOrderList";
  i = -1;
  *(_DWORD *)&v15.Length = 8650882;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v15, 0x20019u) < 0 )
    return i;
  if ( IopGetRegistryValue(KeyHandle, L"Group", 0, &v16) < 0 )
  {
LABEL_21:
    ZwClose(Handle);
    return i;
  }
  v3 = v16;
  if ( *((_DWORD *)v16 + 1) == 1 )
  {
    v4 = *((_DWORD *)v16 + 3);
    if ( v4 )
    {
      v5 = *((unsigned int *)v16 + 2);
      LODWORD(v16) = 0;
      PnpRegSzToString((_WORD *)((char *)v3 + v5), v4, (int *)&v16);
      v15.Length = (unsigned __int16)v16;
      v15.MaximumLength = v3[6];
      v15.Buffer = (_WORD *)((char *)v3 + *((unsigned int *)v3 + 2));
    }
  }
  v6 = 0;
  RegistryValue = IopGetRegistryValue(KeyHandle, L"Tag", 80, &P);
  if ( RegistryValue < 0
    || (*((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4
      ? (RegistryValue = -1073741823)
      : (v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2))),
        ExFreePoolWithTag(P, 0),
        RegistryValue < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    goto LABEL_21;
  }
  v8 = IopGetRegistryValue(Handle, v15.Buffer, 80, &v14);
  ExFreePoolWithTag(v3, 0);
  ZwClose(Handle);
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)v14 + 1) == 3 )
    {
      v9 = *((unsigned int *)v14 + 3);
      if ( (unsigned int)v9 >= 4 )
      {
        v10 = (unsigned int *)((char *)v14 + *((unsigned int *)v14 + 2));
        v11 = *v10;
        if ( 4 * (unsigned __int64)(*v10 + 1) <= v9 )
        {
          v12 = v10 + 1;
          for ( i = 1; i <= v11; ++v12 )
          {
            if ( v6 == *v12 )
              break;
            ++i;
          }
        }
      }
    }
    ExFreePoolWithTag(v14, 0);
  }
  return i;
}
