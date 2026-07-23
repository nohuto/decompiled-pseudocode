/*
 * XREFs of PiPnpRtlGatherInterfaceDeleteInfo @ 0x140724478
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140724228 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     _PnpStringFromGuid @ 0x1408B4EBC (_PnpStringFromGuid.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(__int64 a1, void ***a2)
{
  void *v2; // rsi
  __int64 Pool2; // rax
  int v6; // ebx
  int Object; // eax
  int ObjectProperty; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+60h] [rbp-49h] BYREF
  __int64 v14; // [rsp+68h] [rbp-41h] BYREF
  __int128 v15; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v16[80]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x47706E50u);
  *a2 = (void **)Pool2;
  if ( !Pool2 )
  {
    v6 = -1073741670;
LABEL_22:
    PiPnpRtlFreeInterfaceDeleteInfo(*a2);
    *a2 = 0LL;
    goto LABEL_24;
  }
  Object = PiDmGetObject(3LL, a1, Pool2);
  v6 = Object;
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_22;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     a1,
                     3,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                     (__int64)&v13 + 4,
                     (__int64)&v15,
                     16,
                     (__int64)&v13,
                     0);
  v6 = ObjectProperty;
  if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
  {
    if ( ObjectProperty < 0 )
      goto LABEL_22;
    if ( (int)PnpStringFromGuid(&v15, v16) >= 0 )
    {
      v6 = PiDmGetObject(4LL, v16, *a2 + 1);
      if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
        goto LABEL_22;
    }
  }
  v9 = PnpGetObjectProperty(
         0x47706E50u,
         0LL,
         0LL,
         (__int64)&DEVPKEY_Device_InstanceId,
         (__int64)&v13 + 4,
         (__int64)&v14,
         (__int64)&v13,
         0);
  v2 = (void *)v14;
  v6 = v9;
  if ( v9 != -1073741772 && v9 != -1073741275 )
  {
    if ( v9 < 0 )
      goto LABEL_22;
    v6 = PiDmGetObject(1LL, v14, *a2 + 2);
    if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -1073741772 )
      goto LABEL_22;
  }
  v10 = PnpGetObjectProperty(
          PiPnpRtlCtx,
          a1,
          3,
          0,
          0LL,
          (__int64)&DEVPKEY_Device_ContainerId,
          (__int64)&v13 + 4,
          (__int64)&v15,
          16,
          (__int64)&v13,
          0);
  v6 = v10;
  if ( v10 != -1073741772 && v10 != -1073741275 )
  {
    if ( v10 < 0 )
      goto LABEL_22;
    v6 = PnpStringFromGuid(&v15, v16);
    if ( v6 < 0 )
      goto LABEL_22;
    v11 = PiDmGetObject(5LL, v16, *a2 + 3);
    v6 = v11;
    if ( v11 != -1073741772 )
    {
      if ( v11 >= 0 )
        goto LABEL_24;
      goto LABEL_22;
    }
  }
  v6 = 0;
LABEL_24:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)v6;
}
