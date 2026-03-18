/*
 * XREFs of SpRegOpenRedirectedKey @ 0x1407BB144
 * Callers:
 *     ExpOsProductCacheProviderHelper @ 0x1407B9058 (ExpOsProductCacheProviderHelper.c)
 *     sub_1407B935C @ 0x1407B935C (sub_1407B935C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     SpRegOpenKey @ 0x1407BB0A4 (SpRegOpenKey.c)
 *     RtlGetPersistedStateLocation @ 0x1409CC0E0 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *Pool2; // rdi
  int PersistedStateLocation; // eax
  int v6; // ebx
  int v7; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  HANDLE v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE v12; // [rsp+70h] [rbp+20h] BYREF
  int v13; // [rsp+78h] [rbp+28h] BYREF
  int v14; // [rsp+7Ch] [rbp+2Ch]

  v14 = HIDWORD(a2);
  v12 = 0LL;
  Pool2 = 0LL;
  v13 = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(off_140FD75F8, 0LL, 0, (__int64)&v13);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v7 = v13;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(off_140FD75F8, Pool2, v7, (__int64)&v13);
    if ( v6 < 0 )
    {
LABEL_15:
      ExFreePoolWithTag(Pool2, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_11;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140FD75E0;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 < 0 )
  {
    v9 = v12;
    goto LABEL_12;
  }
LABEL_11:
  v9 = 0LL;
  *a3 = v12;
LABEL_12:
  if ( v9 )
    ZwClose(v9);
  if ( Pool2 )
    goto LABEL_15;
  return (unsigned int)v6;
}
