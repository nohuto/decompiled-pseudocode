/*
 * XREFs of PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x140A5A6E4
 * Callers:
 *     PiPnpPdoDeviceListEnumCallback @ 0x140A5A6A0 (PiPnpPdoDeviceListEnumCallback.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpAddDeviceToPdoDeviceListEnumContext(unsigned int *a1, __int64 a2)
{
  const void **v2; // rdi
  _DWORD *v4; // rbx
  unsigned int *v7; // rbp
  __int64 v8; // r14
  _DWORD *Pool2; // rax
  const void **v10; // rax

  v2 = (const void **)(a1 + 2);
  v4 = (_DWORD *)*((_QWORD *)a1 + 1);
  if ( v4 )
  {
    if ( *v4 != *a1 )
    {
LABEL_3:
      *(_QWORD *)&v4[2 * *v4 + 2] = a2;
      ++*(_DWORD *)*v2;
      return 0LL;
    }
    v7 = a1 + 2;
  }
  else
  {
    v7 = a1 + 2;
  }
  v8 = *a1 + 256;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, 8 * v8 + 8, 0x20207050u);
  v4 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0;
    v10 = v2;
    if ( *v2 )
    {
      memmove(v4, *v2, 8LL * *a1 + 8);
      ExFreePoolWithTag((PVOID)*v2, 0);
      v10 = (const void **)v7;
    }
    *v2 = v4;
    v2 = v10;
    *a1 = v8;
    goto LABEL_3;
  }
  return 3221225626LL;
}
