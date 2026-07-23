/*
 * XREFs of ExpGetSystemFirmwareTableInformation @ 0x1408590B8
 * Callers:
 *     ExEnumerateSystemFirmwareTables @ 0x1407B4460 (ExEnumerateSystemFirmwareTables.c)
 *     ExGetSystemFirmwareTable @ 0x1407B4550 (ExGetSystemFirmwareTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B4710 (ExpGetSystemPlatformBinary.c)
 *     ExpGetSystemFlushInformation @ 0x140A397A4 (ExpGetSystemFlushInformation.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9BEA8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _QWORD *v14; // rdx
  _DWORD *Pool2; // rax
  int v18; // eax
  _DWORD *v19; // [rsp+30h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v21; // [rsp+58h] [rbp-50h]
  int v22; // [rsp+60h] [rbp-48h]
  int v23; // [rsp+64h] [rbp-44h]

  v7 = 0;
  v8 = 0LL;
  v19 = 0LL;
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
    Pool2 = (_DWORD *)ExAllocatePool2(0x101uLL, a3, 0x54465241u);
    v8 = Pool2;
    v19 = Pool2;
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
      for ( i = ExpFirmwareTableProviderListHead - 24; ; i = *v14 - 24LL )
      {
        v14 = (_QWORD *)(i + 24);
        if ( &ExpFirmwareTableProviderListHead == (__int64 *)(i + 24) )
          break;
        if ( *(_DWORD *)i == *v9 )
        {
          v12 = *(_QWORD *)(i + 8);
          break;
        }
      }
      if ( v12 )
        v7 = guard_dispatch_icall_no_overrides(v9, v14);
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
          v18 = v8[3];
        }
        else
        {
          v18 = v9[3];
        }
        *a4 = v18 + 16;
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
        LODWORD(v19) = *v8;
        v21 = &v19;
        v22 = 4;
        v23 = 0;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06EB8,
          (unsigned __int8 *)byte_1400544F8,
          0LL,
          0LL,
          3u,
          &v20);
      }
    }
  }
LABEL_11:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x54465241u);
  return (unsigned int)v7;
}
