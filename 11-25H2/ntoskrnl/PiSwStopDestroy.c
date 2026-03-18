/*
 * XREFs of PiSwStopDestroy @ 0x1409A13B8
 * Callers:
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405A4D4C (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x1405A4E64 (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PiSwFindChildren @ 0x140836178 (PiSwFindChildren.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     PnpConcatPWSTR @ 0x14083E890 (PnpConcatPWSTR.c)
 *     PiSwFindPdoAssociation @ 0x140A767C0 (PiSwFindPdoAssociation.c)
 *     PiSwCloseDevice @ 0x140A8F2A4 (PiSwCloseDevice.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwStopDestroy(__int64 a1, const WCHAR *a2, __int64 a3)
{
  char v5; // bp
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD **Children; // r14
  int v9; // ebx
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  const wchar_t *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *Str2; // [rsp+98h] [rbp+20h] BYREF

  Str2 = 0LL;
  DestinationString = 0LL;
  v5 = 0;
  PiSwLock();
  RtlInitUnicodeString(&DestinationString, a2);
  Children = (_QWORD **)PiSwFindChildren((__int64)&DestinationString);
  if ( Children )
  {
    if ( (byte_140EEFA6C & 0x40) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v6,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Start,
        v7,
        a2,
        L"DRIVERENUM",
        0LL);
    v5 = 1;
    v9 = PnpConcatPWSTR(0xC8uLL, 0x57706E50u, (PVOID *)&Str2, 2uLL);
    if ( v9 >= 0 )
    {
      v10 = *Children;
      while ( v10 != Children )
      {
        v11 = v10 - 12;
        v12 = (const wchar_t *)*(v10 - 11);
        v10 = (_QWORD *)*v10;
        if ( !wcsicmp(v12, Str2) && (*((_DWORD *)v11 + 1) & 1) == 0 )
        {
          LOBYTE(v13) = 1;
          if ( PiSwFindPdoAssociation(v11, a3, v13) )
            PiSwCloseDevice(v11);
        }
      }
    }
    if ( Str2 )
      ExFreePoolWithTag(Str2, 0x57706E50u);
  }
  else
  {
    v9 = -1073741772;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( v5 && (byte_140EEFA6C & 0x40) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v14,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_KernelClose_Stop,
      v15,
      a2,
      L"DRIVERENUM",
      0LL,
      v9);
  return (unsigned int)v9;
}
