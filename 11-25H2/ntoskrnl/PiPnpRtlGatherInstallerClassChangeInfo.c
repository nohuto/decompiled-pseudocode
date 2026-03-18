/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB53E8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406EF194 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x14094E664 (_PnpStringFromGuid.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(unsigned __int16 *a1, __int64 a2, PVOID *a3)
{
  __int64 Pool2; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v9; // eax
  int v11; // [rsp+60h] [rbp-98h] BYREF
  int v12; // [rsp+64h] [rbp-94h] BYREF
  int v13[6]; // [rsp+68h] [rbp-90h] BYREF
  wchar_t v14[40]; // [rsp+80h] [rbp-78h] BYREF

  v12 = 0;
  v11 = 0;
  *(_OWORD *)v13 = 0LL;
  Pool2 = ExAllocatePool2(0x100uLL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
    goto LABEL_13;
  }
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2u, a2, (_QWORD *)(Pool2 + 16));
    if ( Object < 0 )
      goto LABEL_13;
  }
  Object = PiDmGetObject(1, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_13;
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     &v12,
                     v13,
                     0x10u,
                     (__int64)&v11,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
    return 0;
  if ( ObjectProperty < 0 )
    goto LABEL_13;
  Object = PnpStringFromGuid(v13, v14);
  if ( Object < 0 )
    goto LABEL_13;
  v9 = PiDmGetObject(2, v14, (_QWORD *)*a3 + 1);
  Object = v9;
  if ( v9 == -1073741772 )
    return 0;
  if ( v9 < 0 )
  {
LABEL_13:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3);
    *a3 = 0LL;
  }
  return (unsigned int)Object;
}
