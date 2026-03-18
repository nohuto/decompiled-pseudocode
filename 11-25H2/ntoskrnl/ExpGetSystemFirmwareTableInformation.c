/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1409699F8
 * Callers:
 *     ExEnumerateSystemFirmwareTables @ 0x1407A4C40 (ExEnumerateSystemFirmwareTables.c)
 *     ExGetSystemFirmwareTable @ 0x1407A4D30 (ExGetSystemFirmwareTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407A4EF0 (ExpGetSystemPlatformBinary.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     ExpGetSystemFlushInformation @ 0x140A3FEC4 (ExpGetSystemFlushInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9AD58 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetSystemFirmwareTableInformation(char *Src, char a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  _DWORD *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r14
  __int64 i; // rcx
  _DWORD *Pool2; // rax
  int v17; // eax
  _DWORD *v18; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-50h]
  int v21; // [rsp+60h] [rbp-48h]
  int v22; // [rsp+64h] [rbp-44h]

  v7 = 0;
  v8 = 0LL;
  v18 = 0LL;
  if ( a3 < 0x10 )
  {
    *a4 = 16;
    v7 = -1073741820;
  }
  else
  {
    v9 = Src;
    v10 = a3 - 16;
    if ( !a2 )
      goto LABEL_3;
    Pool2 = (_DWORD *)ExAllocatePool2(0x101uLL);
    v8 = Pool2;
    v18 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_11;
    }
    memmove(Pool2, Src, a3);
    v9 = v8;
    if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process)
      || *v8 == 1381190978 && (unsigned __int8)ExpFirmwareAccessAppContainerCheck(0LL) )
    {
LABEL_3:
      v9[3] = v10;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&ExpFirmwareTableResource, 1u);
      v12 = 0LL;
      for ( i = ExpFirmwareTableProviderListHead - 24;
            &ExpFirmwareTableProviderListHead != (__int64 *)(i + 24);
            i = *(_QWORD *)(i + 24) - 24LL )
      {
        if ( *(_DWORD *)i == *v9 )
        {
          v12 = *(_QWORD *)(i + 8);
          break;
        }
      }
      if ( v12 )
        v7 = guard_dispatch_icall_no_overrides(v9);
      ExReleaseResourceLite(&ExpFirmwareTableResource);
      KeLeaveCriticalRegion();
      if ( v12 )
      {
        if ( a2 )
        {
          if ( v7 >= 0 )
            memmove(Src + 16, v8 + 4, (unsigned int)v8[3]);
          if ( (int)(v7 + 0x80000000) < 0 || v7 == -1073741789 )
            *((_DWORD *)Src + 3) = v8[3];
          v17 = v8[3];
        }
        else
        {
          v17 = v9[3];
        }
        *a4 = v17 + 16;
      }
      else
      {
        v7 = -1073741822;
      }
    }
    else
    {
      v7 = -1073741790;
      if ( (unsigned int)dword_140E06EB8 > 5 && tlgKeywordOn((__int64)&dword_140E06EB8, 0x200000000000LL) )
      {
        LODWORD(v18) = *v8;
        v20 = &v18;
        v21 = 4;
        v22 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06EB8,
          (unsigned __int8 *)&dword_1400525D4,
          0LL,
          0LL,
          3u,
          &v19);
      }
    }
  }
LABEL_11:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
