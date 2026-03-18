/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1403F9324
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F96D0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiDecodeResourceDescriptorLength @ 0x140406ED8 (DpiDecodeResourceDescriptorLength.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  const void *v6; // r13
  int v7; // eax
  PIRP v8; // rax
  NTSTATUS Status; // ebx
  NTSTATUS v11; // eax
  unsigned int *Information; // rdi
  unsigned int v13; // ebx
  unsigned int *v14; // r12
  unsigned int *v15; // r15
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h] BYREF
  int v21; // [rsp+88h] [rbp-78h]
  const wchar_t *v22; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  __int128 v30; // [rsp+D0h] [rbp-30h]
  __int128 v31; // [rsp+E0h] [rbp-20h]
  _QWORD v32[20]; // [rsp+F0h] [rbp-10h] BYREF

  v17 = a1;
  v3 = a1;
  memset(v32, 0, sizeof(v32));
  v4 = *(_QWORD *)(v3 + 64);
  v5 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( *(_BYTE *)(v4 + 2722) )
    return 0LL;
  v6 = (const void *)(v4 + 544);
  if ( RtlCompareMemory((const void *)(v4 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v4 + 2719) )
  {
LABEL_32:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v7 = DpiAcquirePostDisplayInfoFromBgfx(v32, 0LL);
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 1831;
LABEL_28:
    if ( RtlCompareMemory(v6, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v16) = 0;
    v20 = 0LL;
    v22 = L"DisableAutoAcpiPostDeivce";
    v21 = 288;
    v24 = 67108868;
    v23 = &v16;
    v26 = 4;
    v25 = &v16;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v20, 0LL, 0LL);
    if ( (_DWORD)v16 )
      return 0LL;
    WdLogSingleEntry1(3LL, v3);
    WdLogGlobalForLineNumber = 2012;
    goto LABEL_32;
  }
  v16 = v32[2] + (unsigned int)(LODWORD(v32[1]) * HIDWORD(v32[0]));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v8 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v4 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v8 )
  {
    Status = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 1871;
    return (unsigned int)Status;
  }
  v8->IoStatus.Status = -1073741637;
  v8->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 152), v8);
  if ( Status == 259 )
  {
    v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = v11;
    if ( v11 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 1904;
      return (unsigned int)Status;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    Information = (unsigned int *)IoStatusBlock.Information;
    if ( IoStatusBlock.Information )
    {
      v13 = 0;
LABEL_18:
      if ( v13 < *Information )
      {
        v14 = &Information[8 * v13 + 3 + v13];
        while ( 1 )
        {
          if ( v5 >= v14[1] )
          {
            ++v13;
            v5 = 0;
            goto LABEL_18;
          }
          v15 = &v14[5 * v5];
          if ( ((*((_BYTE *)v15 + 8) - 3) & 0xFB) == 0
            && *(_QWORD *)(v15 + 3) <= v32[2]
            && *(_QWORD *)(v15 + 3) + DpiDecodeResourceDescriptorLength(v15 + 2) >= v16 )
          {
            break;
          }
          ++v5;
        }
        *a2 = 1;
      }
      ExFreePoolWithTag(Information, 0);
      v3 = v17;
      goto LABEL_28;
    }
  }
  else if ( Status != -1073741637 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v4 + 152), Status);
    WdLogGlobalForLineNumber = 1917;
    return (unsigned int)Status;
  }
  return 0LL;
}
