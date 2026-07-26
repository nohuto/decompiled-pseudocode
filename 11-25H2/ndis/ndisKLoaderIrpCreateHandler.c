/*
 * XREFs of ndisKLoaderIrpCreateHandler @ 0x1400E3C90
 * Callers:
 *     ?ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z @ 0x140028B30 (-ndisKLoaderDispatch@@YAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUKLOADER_MODULE_REFERENCE__@@@Z @ 0x1400E3884 (-KLoaderReferenceModuleForCreateIrp@@YAJPEBU_KLOADER_REFERENCE_MODULE_CONFIG@@PEBU_IRP@@PEAPEAUK.c)
 *     ??$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@Z @ 0x1400E3B84 (--$invoke@P6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@wistd@@YA_J$$QEAP6A_JPEAX@ZAEAPEAU_DRIVER_OBJECT@@@.c)
 *     ??_GProxyFileObject@@QEAAPEAXI@Z @ 0x1400E3BD8 (--_GProxyFileObject@@QEAAPEAXI@Z.c)
 *     ?ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z @ 0x1400E3FA8 (-ParseModuleID@@YAJAEBU_UNICODE_STRING@@AEAU_GUID@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?GetDeviceObject@DriverService@@QEBAPEAU_DEVICE_OBJECT@@XZ @ 0x1401561E0 (-GetDeviceObject@DriverService@@QEBAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall ndisKLoaderIrpCreateHandler(struct _IRP *a1, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  struct _UNICODE_STRING *v8; // r12
  unsigned int v9; // edi
  __int64 *v10; // rdi
  unsigned int Irp; // esi
  __int64 v12; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  void (__fastcall *v15)(struct KLOADER_MODULE_REFERENCE__ *); // [rsp+28h] [rbp-58h] BYREF
  struct _UNICODE_STRING v16; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( !v2 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62694C4Eu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1] = 0;
  v8 = (struct _UNICODE_STRING *)(v2 + 88);
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  *((_QWORD *)PoolWithTag + 3) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *PoolWithTag = 183160574;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v9 = ParseModuleID((const struct _UNICODE_STRING *)(v2 + 88), &v17, &v16);
  if ( v9 )
  {
LABEL_5:
    ProxyFileObject::`scalar deleting destructor'((__int64 *)v7);
    return v9;
  }
  v20 = 0LL;
  v10 = (__int64 *)(v7 + 2);
  v18 = 32LL;
  v19 = v17;
  if ( *((_QWORD *)v7 + 1) )
  {
    v14 = *((_QWORD *)v7 + 1);
    v15 = KLoaderDereferenceModule;
    wistd::invoke<__int64 (*)(void *),_DRIVER_OBJECT * &>((__int64 (__fastcall **)(_QWORD))&v15, &v14);
  }
  *v10 = 0LL;
  Irp = KLoaderReferenceModuleForCreateIrp(
          (const struct _KLOADER_REFERENCE_MODULE_CONFIG *)&v18,
          a1,
          (struct KLOADER_MODULE_REFERENCE__ **)v7 + 1);
  if ( Irp )
  {
    ProxyFileObject::`scalar deleting destructor'((__int64 *)v7);
    return Irp;
  }
  else
  {
    v12 = *v10;
    *(struct _UNICODE_STRING *)(v7 + 6) = *v8;
    *v8 = v16;
    *((_QWORD *)v7 + 2) = DriverService::GetDeviceObject((DriverService *)(*(_QWORD *)v12 + 48LL));
    CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v9 = IoSynchronousCallDriver(*((_QWORD *)v7 + 2), a1);
    *v8 = *(struct _UNICODE_STRING *)(v7 + 6);
    if ( v9 )
      goto LABEL_5;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 24LL) = v7;
    return 0LL;
  }
}
