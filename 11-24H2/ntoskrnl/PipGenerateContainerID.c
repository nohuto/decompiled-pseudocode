/*
 * XREFs of PipGenerateContainerID @ 0x140A7063C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCreateUnicodeString @ 0x140833010 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     ExUuidCreate @ 0x1408EA880 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x1409BCE20 (RtlStringFromGUIDEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall PipGenerateContainerID(__int64 a1, __int64 a2, char a3, const WCHAR *a4, _QWORD *a5)
{
  __int64 v6; // rdi
  UUID *p_Uuid; // rcx
  signed int v8; // ebx
  wchar_t *Buffer; // rdi
  unsigned int MaximumLength; // esi
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  int DeviceRegProp; // ebx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+50h] [rbp-51h] BYREF
  int v18; // [rsp+54h] [rbp-4Dh] BYREF
  UUID Uuid; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+70h] [rbp-31h] BYREF

  v17 = 0;
  v18 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v6 = a1;
  *a5 = 0LL;
  UnicodeString.Buffer = 0LL;
  Uuid = 0LL;
  if ( !a3 )
  {
    p_Uuid = (UUID *)(*(_QWORD *)(a1 + 16) + 664LL);
LABEL_3:
    v8 = RtlStringFromGUIDEx(&p_Uuid->Data1, (__int64)&UnicodeString, 1);
    goto LABEL_4;
  }
  if ( a4 )
  {
    v8 = RtlCreateUnicodeString(&UnicodeString, a4) == 0 ? 0xC000009A : 0;
    goto LABEL_4;
  }
  if ( !a2 )
    goto LABEL_14;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v14 = *(_QWORD *)(v6 + 48);
  v17 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v14,
                    a2,
                    0x25u,
                    (__int64)&v18,
                    (__int64)SourceString,
                    (__int64)&v17,
                    0);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceRegProp < 0 || v18 != 1 || !RtlCreateUnicodeString(&UnicodeString, SourceString) )
  {
LABEL_14:
    v8 = ExUuidCreate(&Uuid);
    if ( v8 >= 0 )
    {
      p_Uuid = &Uuid;
      goto LABEL_3;
    }
LABEL_4:
    if ( v8 < 0 )
      return (unsigned int)v8;
    goto LABEL_5;
  }
  v8 = RtlGUIDFromString(&UnicodeString, &Uuid);
  if ( v8 < 0 )
  {
LABEL_18:
    RtlFreeAnsiString(&UnicodeString);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v6 + 16);
    if ( !v6 )
      break;
    if ( (UUID *)(v6 + 664) == &Uuid || RtlCompareMemory((const void *)(v6 + 664), &Uuid, 0x10uLL) == 16 )
      goto LABEL_18;
  }
LABEL_5:
  Buffer = UnicodeString.Buffer;
  if ( UnicodeString.Buffer )
  {
    MaximumLength = UnicodeString.MaximumLength;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    *a5 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Buffer, MaximumLength);
    else
      v8 = -1073741670;
    ExFreePool(UnicodeString.Buffer);
  }
  return (unsigned int)v8;
}
