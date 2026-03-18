/*
 * XREFs of PiSwCompleteCreate @ 0x1409A3A80
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x140424514 (McTemplateK0zzd_EtwWriteTransfer.c)
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A4D4C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PnpAllocatePWSTR @ 0x140839154 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x1408392C0 (PnpFreeDevPropertyArray.c)
 *     PnpCopyDevPropertyArray @ 0x140839FDC (PnpCopyDevPropertyArray.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     PiSwPropertySet @ 0x1409550B8 (PiSwPropertySet.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140955AE0 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14095720C (_CmGetDeviceInterfaceClassGuid.c)
 *     IoRegisterDeviceInterface @ 0x14095CE40 (IoRegisterDeviceInterface.c)
 *     PiSwInterfaceCreate @ 0x14095E95C (PiSwInterfaceCreate.c)
 *     PiSwInterfaceFree @ 0x1409A3F4C (PiSwInterfaceFree.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwCompleteCreate(_QWORD *a1)
{
  __int64 v2; // r15
  unsigned __int16 *v3; // r13
  PVOID *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  _WORD *v11; // rcx
  unsigned __int64 v12; // rdx
  signed int PWSTR; // ebx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // r8
  PVOID v18; // rcx
  __int64 v19; // rax
  PVOID v20; // rcx
  PVOID *v21; // rsi
  struct _DEVICE_OBJECT *v22; // r12
  __int64 v23; // rax
  __int64 *j; // rsi
  __int64 v25; // r11
  _WORD *v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 i; // r8
  PVOID *v29; // rcx
  PVOID *v30; // rax
  __int64 v31; // rcx
  NTSTATUS DeviceInterfaceReferenceString; // eax
  char v33; // bl
  __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v35; // [rsp+40h] [rbp-C8h] BYREF
  PVOID *v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h] BYREF
  PVOID *v38; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString; // [rsp+78h] [rbp-90h] BYREF
  PVOID **v43; // [rsp+80h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-50h]
  __int128 v48; // [rsp+C8h] [rbp-40h]
  GUID InterfaceClassGuid; // [rsp+D8h] [rbp-30h] BYREF
  WCHAR v50[264]; // [rsp+E8h] [rbp-20h] BYREF

  v36 = &v35;
  v38 = 0LL;
  LODWORD(v34) = 0;
  v35 = &v35;
  v2 = 0LL;
  LODWORD(v39) = 0;
  v3 = 0LL;
  v41 = 0LL;
  v4 = 0LL;
  v43 = 0LL;
  InterfaceClassGuid = 0LL;
  Object = 0LL;
  DestinationString = 0LL;
  LODWORD(v37) = 0;
  *(_OWORD *)P = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  PiSwLock();
  v7 = (__int64 *)a1[8];
  v8 = *v7;
  if ( *v7 )
  {
    *((_DWORD *)v7 + 2) &= 0xFFFFFFF9;
    v9 = a1[39];
    v3 = (unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 40LL);
    if ( (byte_140EEFA6C & 0x40) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v5,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_DeviceEnumerated,
        v6,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        *(const wchar_t **)(*(_QWORD *)(v9 + 40) + 48LL));
    v10 = *(void **)(v8 + 80);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x57706E50u);
      *(_OWORD *)(v8 + 72) = 0LL;
    }
    v11 = (_WORD *)*((_QWORD *)v3 + 1);
    v12 = ((unsigned __int64)*v3 >> 1) + 1;
    SourceString = 0LL;
    PWSTR = PnpAllocatePWSTR(v11, v12, 0x57706E50u, (PVOID *)&SourceString);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v8 + 72), SourceString);
      *(_DWORD *)(v8 + 4) |= 4u;
      if ( !*(_QWORD *)(v8 + 88) )
      {
        v15 = *(_QWORD *)(v8 + 144);
        if ( v15 )
        {
          if ( _InterlockedExchange64((volatile __int64 *)(v15 + 104), 0LL) )
          {
            v2 = *(_QWORD *)(v8 + 144);
            *(_QWORD *)(v8 + 144) = 0LL;
            if ( v2 )
            {
              PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v2 + 24),
                        *(unsigned int *)(*(_QWORD *)(v2 + 184) + 8LL),
                        *(NTSTRSAFE_PCWSTR *)(v8 + 80));
              if ( PWSTR >= 0 )
              {
                v26 = *(_WORD **)(v2 + 24);
                if ( v26 )
                {
                  v27 = (unsigned __int64)*(unsigned int *)(v25 + 8) >> 1;
                  for ( i = v27; v27; --v27 )
                  {
                    if ( !*v26 )
                      break;
                    ++v26;
                  }
                  PWSTR = v27 == 0 ? 0xC000000D : 0;
                  if ( v27 )
                    v14 = i - v27;
                  else
                    v14 = 0LL;
                  if ( v27 )
                  {
                    v41 = 2 * v14;
                    goto LABEL_10;
                  }
                }
                else
                {
                  PWSTR = -1073741811;
                }
                v41 = 0LL;
              }
LABEL_11:
              v4 = v38;
              goto LABEL_12;
            }
          }
        }
LABEL_10:
        LODWORD(v37) = *(_DWORD *)(v8 + 164);
        v47 = 0x19uLL;
        *((_QWORD *)&v48 + 1) = &v37;
        v46 = DEVPKEY_Device_CreatorProcessId;
        *(_QWORD *)&v48 = 0x400000007LL;
        PWSTR = PnpCopyDevPropertyArray(*(_DWORD *)(v8 + 176), *(_QWORD *)(v8 + 168), v14, &v34, (PVOID *)&v38);
        if ( PWSTR >= 0 )
        {
          for ( j = *(__int64 **)(v8 + 184); j != (__int64 *)(v8 + 184); j = (__int64 *)*j )
          {
            PWSTR = PiSwInterfaceCreate((_WORD *)j[2], j[3], *((_DWORD *)j + 8), (PVOID *)&v43);
            if ( PWSTR < 0 )
              goto LABEL_11;
            v29 = v36;
            if ( *v36 != &v35 )
LABEL_32:
              __fastfail(3u);
            v30 = (PVOID *)v43;
            *v43 = &v35;
            v30[1] = v29;
            *v29 = v30;
            v36 = v30;
          }
          Object = a1;
          PsReferenceSiloContext(a1);
        }
        goto LABEL_11;
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
LABEL_12:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( PWSTR >= 0 )
  {
    if ( !*((_QWORD *)&v48 + 1) || (PWSTR = PiSwPropertySet(*((_QWORD *)v3 + 1), 1u, (__int64)&v46, 1u), PWSTR >= 0) )
    {
      if ( !v4 || (PWSTR = PiSwPropertySet(*((_QWORD *)v3 + 1), 1u, (__int64)v4, v34), PWSTR >= 0) )
      {
        v21 = (PVOID *)v35;
        if ( v35 != &v35 )
        {
          v22 = (struct _DEVICE_OBJECT *)Object;
          do
          {
            PWSTR = CmGetDeviceInterfaceClassGuid(v16, (int)v21[2], &InterfaceClassGuid);
            if ( PWSTR < 0 )
              break;
            DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                               v31,
                                               (__int64)v21[2],
                                               v50,
                                               0x104u,
                                               &v39);
            PWSTR = DeviceInterfaceReferenceString;
            if ( DeviceInterfaceReferenceString == -1073741772 )
            {
              v33 = 0;
            }
            else
            {
              if ( DeviceInterfaceReferenceString < 0 )
                break;
              v33 = 1;
              RtlInitUnicodeString(&DestinationString, v50);
            }
            PWSTR = IoRegisterDeviceInterface(
                      v22,
                      &InterfaceClassGuid,
                      (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v33 != 0)),
                      (PUNICODE_STRING)P);
            if ( PWSTR < 0 )
              break;
            PWSTR = PiSwPropertySet((__int64)v21[2], 3u, (__int64)v21[3], *((_DWORD *)v21 + 8));
            if ( PWSTR < 0 )
              break;
            v21 = (PVOID *)*v21;
            RtlFreeAnsiString((PUNICODE_STRING)P);
          }
          while ( v21 != &v35 );
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v4 )
    PnpFreeDevPropertyArray(v34, v4, 0x57706E50u);
  while ( 1 )
  {
    v18 = v35;
    if ( v35 == &v35 )
      break;
    if ( *((PVOID **)v35 + 1) != &v35 )
      goto LABEL_32;
    v19 = *(_QWORD *)v35;
    if ( *(PVOID *)(*(_QWORD *)v35 + 8LL) != v35 )
      goto LABEL_32;
    v35 = *(PVOID *)v35;
    *(_QWORD *)(v19 + 8) = &v35;
    PiSwInterfaceFree(v18);
  }
  v20 = P[1];
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v2 )
  {
    if ( PWSTR < 0 )
      v23 = 0LL;
    else
      v23 = v41 + 2;
    *(_QWORD *)(v2 + 56) = v23;
    *(_DWORD *)(v2 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v2, 0);
  }
  if ( v8 && (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v20,
      (__int64)KMPnPEvt_SwDevice_DeviceEnumerated_Status,
      v17,
      *(const wchar_t **)(v8 + 8),
      *(const wchar_t **)(v8 + 16),
      PWSTR);
}
