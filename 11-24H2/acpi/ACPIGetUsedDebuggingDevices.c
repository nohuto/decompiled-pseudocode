/*
 * XREFs of ACPIGetUsedDebuggingDevices @ 0x1400C0A44
 * Callers:
 *     ACPIGlobalInitialize @ 0x1400C6008 (ACPIGlobalInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 ACPIGetUsedDebuggingDevices()
{
  unsigned int v0; // esi
  int v1; // eax
  unsigned int v2; // edi
  __int64 Pool2; // rax
  WCHAR *v4; // rbx
  unsigned int v5; // r14d
  const WCHAR *v6; // rdi
  unsigned int i; // ebp
  __int64 v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0;
  DestinationString = 0LL;
  v0 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  gDebuggingDevicesInUse[0] = 0LL;
  xmmword_140089B90 = 0LL;
  v1 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
         33LL,
         0LL,
         0LL,
         &v11);
  v2 = v1;
  if ( v1 == -2147483643 )
  {
    Pool2 = ExAllocatePool2(256LL, v11, 1114661697LL);
    v4 = (WCHAR *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, unsigned int *))HalDispatchTable->HalQuerySystemInformation)(
           33LL,
           v11,
           Pool2,
           &v11);
    if ( (v2 & 0x80000000) != 0 )
    {
LABEL_14:
      ExFreePoolWithTag(v4, 0x42706341u);
      return v2;
    }
    v5 = 0;
    v6 = v4 + 2;
    for ( i = 0; i < *(_DWORD *)v4; ++i )
    {
      v6 = (const WCHAR *)((char *)v6 + v5);
      v5 = *((_DWORD *)v6 + 1);
      if ( *(_DWORD *)v6 == 1 && *((_DWORD *)v6 + 2) )
      {
        RtlInitUnicodeString(&DestinationString, v6 + 6);
        v8 = v0++;
        gDebuggingDevicesInUse[v8] = (__int128)DestinationString;
      }
    }
    v2 = 0;
  }
  else
  {
    v4 = 0LL;
    if ( v1 < 0 )
      return v2;
  }
  if ( !v0 && v4 )
    goto LABEL_14;
  return v2;
}
