/*
 * XREFs of _CmEnumSubkeyCallback @ 0x14081BC70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _CmValidateDeviceName @ 0x1408B59E0 (_CmValidateDeviceName.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _CmIsDevicePresent @ 0x1409F703C (_CmIsDevicePresent.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmEnumSubkeyCallback(__int64 a1, int a2, const wchar_t *a3, __int64 a4)
{
  wchar_t *Pool2; // rax
  wchar_t *v9; // rdi
  size_t v10; // rdx
  wchar_t *v11; // rcx
  NTSTRSAFE_PWSTR v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // esi
  unsigned int v17; // eax
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+38h] [rbp-28h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  char v23; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v23 = 0;
  DestinationString = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x190uLL, 0x52504E50u);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = 200LL;
    v11 = Pool2;
    if ( *(_WORD *)(a4 + 4) )
    {
      if ( RtlStringCchCopyExW(Pool2, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a4 + 4), &ppszDestEnd, &pcchRemaining, 0x900u) < 0
        || pcchRemaining < 2 )
      {
LABEL_20:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_21;
      }
      v12 = ppszDestEnd;
      v10 = pcchRemaining - 2;
      *ppszDestEnd = 92;
      v11 = v12 + 1;
      *v11 = 0;
    }
    if ( RtlStringCchCopyW(v11, v10, a3) >= 0 )
    {
      if ( *(_DWORD *)a4 >= 3u )
      {
        if ( (int)CmValidateDeviceName(v13, v9) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v9) >= 0 )
        {
          v16 = DestinationString.MaximumLength >> 1;
          if ( (!*(_BYTE *)(a4 + 404) || (int)CmIsDevicePresent(a1, v9, &v23) >= 0 && v23)
            && (!*(_QWORD *)(a4 + 408) || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v9)) )
          {
            *(_DWORD *)(a4 + 436) += v16;
            v17 = *(_DWORD *)(a4 + 432);
            if ( v17 > v16 )
            {
              RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 424), v17, v9, 0LL, 0LL, 0x900u);
              *(_QWORD *)(a4 + 424) += 2LL * v16;
              *(_DWORD *)(a4 + 432) -= v16;
            }
          }
        }
      }
      else if ( (int)PnpCtxRegOpenKey(a1, a2, (_DWORD)a3, 8, 131097, (__int64)&Handle) >= 0 )
      {
        v14 = ExAllocatePool2(0x100uLL, 0x1B8uLL, 0x52504E50u);
        v15 = v14;
        if ( v14 )
        {
          *(_DWORD *)v14 = *(_DWORD *)a4 + 1;
          RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v14 + 4), 0xC8uLL, v9, 0LL, 0LL, 0x900u);
          *(_BYTE *)(v15 + 404) = *(_BYTE *)(a4 + 404);
          *(_QWORD *)(v15 + 408) = *(_QWORD *)(a4 + 408);
          *(_QWORD *)(v15 + 416) = *(_QWORD *)(a4 + 416);
          *(_QWORD *)(v15 + 424) = *(_QWORD *)(a4 + 424);
          *(_DWORD *)(v15 + 432) = *(_DWORD *)(a4 + 432);
          *(_DWORD *)(v15 + 436) = *(_DWORD *)(a4 + 436);
          PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmEnumSubkeyCallback, v15);
          *(_DWORD *)(a4 + 436) = *(_DWORD *)(v15 + 436);
          *(_QWORD *)(a4 + 424) = *(_QWORD *)(v15 + 424);
          *(_DWORD *)(a4 + 432) = *(_DWORD *)(v15 + 432);
          ExFreePoolWithTag((PVOID)v15, 0);
        }
      }
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
