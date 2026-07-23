/*
 * XREFs of PiSwCompleteCreate @ 0x1409F0EA8
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1402B827C (McTemplateK0zzd_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A554C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoRegisterDeviceInterface @ 0x1408B0410 (IoRegisterDeviceInterface.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1408B4F88 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1408C9070 (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x1408D192C (PnpFreeDevPropertyArray.c)
 *     PiSwInterfaceCreate @ 0x1409F0C54 (PiSwInterfaceCreate.c)
 *     PiSwInterfaceFree @ 0x1409F1384 (PiSwInterfaceFree.c)
 *     PnpCopyDevPropertyArray @ 0x1409F2BB0 (PnpCopyDevPropertyArray.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID v18; // rcx
  __int64 v19; // rax
  PVOID v20; // rcx
  __int64 *v21; // rsi
  const WCHAR *v22; // rsi
  struct _DEVICE_OBJECT *v23; // r12
  __int64 v24; // rax
  __int64 *j; // rsi
  __int64 v26; // rsi
  _WORD *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 i; // r8
  PVOID *v30; // rcx
  PVOID *v31; // rax
  __int64 v32; // rcx
  NTSTATUS DeviceInterfaceReferenceString; // eax
  char v34; // bl
  __int64 v35; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v36; // [rsp+40h] [rbp-C8h] BYREF
  PVOID *v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  PVOID *v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  PCWSTR SourceString; // [rsp+78h] [rbp-90h] BYREF
  PVOID **v44; // [rsp+80h] [rbp-88h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h]
  __int128 v49; // [rsp+C8h] [rbp-40h]
  GUID InterfaceClassGuid; // [rsp+D8h] [rbp-30h] BYREF
  WCHAR v51[264]; // [rsp+E8h] [rbp-20h] BYREF

  v37 = &v36;
  v39 = 0LL;
  LODWORD(v35) = 0;
  v36 = &v36;
  v2 = 0LL;
  LODWORD(v40) = 0;
  v3 = 0LL;
  v42 = 0LL;
  v4 = 0LL;
  v44 = 0LL;
  InterfaceClassGuid = 0LL;
  Object = 0LL;
  DestinationString = 0LL;
  LODWORD(v38) = 0;
  *(_OWORD *)P = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  PiSwLock();
  v7 = (__int64 *)a1[8];
  v8 = *v7;
  if ( *v7 )
  {
    *((_DWORD *)v7 + 2) &= 0xFFFFFFF9;
    v9 = a1[39];
    v3 = (unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 40LL);
    if ( (byte_140EEFF64 & 0x40) != 0 )
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
              v26 = *(_QWORD *)(v2 + 184);
              PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v2 + 24),
                        *(unsigned int *)(v26 + 8),
                        *(NTSTRSAFE_PCWSTR *)(v8 + 80));
              if ( PWSTR >= 0 )
              {
                v27 = *(_WORD **)(v2 + 24);
                if ( v27 )
                {
                  v28 = (unsigned __int64)*(unsigned int *)(v26 + 8) >> 1;
                  for ( i = v28; v28; --v28 )
                  {
                    if ( !*v27 )
                      break;
                    ++v27;
                  }
                  PWSTR = v28 == 0 ? 0xC000000D : 0;
                  if ( v28 )
                    v14 = i - v28;
                  else
                    v14 = 0LL;
                  if ( v28 )
                  {
                    v42 = 2 * v14;
                    goto LABEL_10;
                  }
                }
                else
                {
                  PWSTR = -1073741811;
                }
                v42 = 0LL;
              }
LABEL_11:
              v4 = v39;
              goto LABEL_12;
            }
          }
        }
LABEL_10:
        LODWORD(v38) = *(_DWORD *)(v8 + 164);
        v48 = 0x19uLL;
        *((_QWORD *)&v49 + 1) = &v38;
        v47 = DEVPKEY_Device_CreatorProcessId;
        *(_QWORD *)&v49 = 0x400000007LL;
        PWSTR = PnpCopyDevPropertyArray(
                  *(_DWORD *)(v8 + 176),
                  *(_QWORD *)(v8 + 168),
                  v14,
                  (unsigned int)&v35,
                  (__int64)&v39);
        if ( PWSTR >= 0 )
        {
          for ( j = *(__int64 **)(v8 + 184); j != (__int64 *)(v8 + 184); j = (__int64 *)*j )
          {
            PWSTR = PiSwInterfaceCreate((_WORD *)j[2], j[3], *((_DWORD *)j + 8), (PVOID *)&v44);
            if ( PWSTR < 0 )
              goto LABEL_11;
            v30 = v37;
            if ( *v37 != &v36 )
LABEL_32:
              __fastfail(3u);
            v31 = (PVOID *)v44;
            *v44 = &v36;
            v31[1] = v30;
            *v30 = v31;
            v37 = v31;
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
    v21 = (__int64 *)(v3 + 4);
    if ( !*((_QWORD *)&v49 + 1) || (PWSTR = PiSwPropertySet(*v21, 1LL, (__int64)&v47, 1u), PWSTR >= 0) )
    {
      if ( !v4 || (PWSTR = PiSwPropertySet(*v21, 1LL, (__int64)v4, v35), PWSTR >= 0) )
      {
        v22 = (const WCHAR *)v36;
        if ( v36 != &v36 )
        {
          v23 = (struct _DEVICE_OBJECT *)Object;
          do
          {
            PWSTR = CmGetDeviceInterfaceClassGuid(v16, *((const WCHAR **)v22 + 2), &InterfaceClassGuid);
            if ( PWSTR < 0 )
              break;
            DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                               v32,
                                               *((_QWORD *)v22 + 2),
                                               v51,
                                               0x104u,
                                               &v40);
            PWSTR = DeviceInterfaceReferenceString;
            if ( DeviceInterfaceReferenceString == -1073741772 )
            {
              v34 = 0;
            }
            else
            {
              if ( DeviceInterfaceReferenceString < 0 )
                break;
              v34 = 1;
              RtlInitUnicodeString(&DestinationString, v51);
            }
            PWSTR = IoRegisterDeviceInterface(
                      v23,
                      &InterfaceClassGuid,
                      (PUNICODE_STRING)((unsigned __int64)&DestinationString & -(__int64)(v34 != 0)),
                      (PUNICODE_STRING)P);
            if ( PWSTR < 0 )
              break;
            PWSTR = PiSwPropertySet(*((_QWORD *)v22 + 2), 3LL, *((_QWORD *)v22 + 3), *((_DWORD *)v22 + 8));
            if ( PWSTR < 0 )
              break;
            v22 = *(const WCHAR **)v22;
            RtlFreeAnsiString((PUNICODE_STRING)P);
          }
          while ( v22 != (const WCHAR *)&v36 );
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v4 )
    PnpFreeDevPropertyArray(v35, v4, 0x57706E50u);
  while ( 1 )
  {
    v18 = v36;
    if ( v36 == &v36 )
      break;
    if ( *((PVOID **)v36 + 1) != &v36 )
      goto LABEL_32;
    v19 = *(_QWORD *)v36;
    if ( *(PVOID *)(*(_QWORD *)v36 + 8LL) != v36 )
      goto LABEL_32;
    v36 = *(PVOID *)v36;
    *(_QWORD *)(v19 + 8) = &v36;
    PiSwInterfaceFree(v18);
  }
  v20 = P[1];
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v2 )
  {
    if ( PWSTR < 0 )
      v24 = 0LL;
    else
      v24 = v42 + 2;
    *(_QWORD *)(v2 + 56) = v24;
    *(_DWORD *)(v2 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v2, 0);
  }
  if ( v8 && (byte_140EEFF64 & 0x40) != 0 )
    McTemplateK0zzd_EtwWriteTransfer(
      (__int64)v20,
      (__int64)KMPnPEvt_SwDevice_DeviceEnumerated_Status,
      v17,
      *(const wchar_t **)(v8 + 8),
      *(const wchar_t **)(v8 + 16),
      PWSTR);
}
