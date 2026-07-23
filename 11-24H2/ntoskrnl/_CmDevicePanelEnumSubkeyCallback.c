/*
 * XREFs of _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140412020 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     wcstoul @ 0x1404FE090 (wcstoul.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140A85920 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDevicePanelEnumSubkeyCallback(__int64 a1, int a2, const WCHAR *a3, int *a4)
{
  int v5; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // cc
  wchar_t *Pool2; // rax
  wchar_t *v13; // rdi
  size_t v14; // rdx
  wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // esi
  unsigned int v19; // eax
  wchar_t *EndPtr; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  size_t pcchRemaining; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  v5 = *a4;
  EndPtr = 0LL;
  pcchRemaining = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  Guid = 0LL;
  v9 = v5 - 1;
  if ( !v9 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
      goto LABEL_28;
LABEL_11:
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x72uLL, 0x52504E50u);
    v13 = Pool2;
    if ( !Pool2 )
      goto LABEL_28;
    v14 = 57LL;
    v15 = Pool2;
    if ( *((_WORD *)a4 + 2) )
    {
      if ( RtlStringCchCopyExW(Pool2, 0x39uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &EndPtr, &pcchRemaining, 0x900u) < 0
        || pcchRemaining < 2 )
      {
LABEL_27:
        ExFreePoolWithTag(v13, 0);
        goto LABEL_28;
      }
      v14 = pcchRemaining - 2;
      *EndPtr++ = 92;
      *EndPtr = 0;
      v15 = EndPtr;
    }
    else
    {
      EndPtr = Pool2;
    }
    if ( RtlStringCchCopyW(v15, v14, a3) >= 0 )
    {
      if ( (unsigned int)*a4 >= 3 )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
        {
          v18 = DestinationString.MaximumLength >> 1;
          if ( !*((_QWORD *)a4 + 15) || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, v13) )
          {
            a4[37] += v18;
            v19 = a4[36];
            if ( v19 > v18 )
            {
              RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 17), v19, v13, 0LL, 0LL, 0x900u);
              *((_QWORD *)a4 + 17) += 2LL * v18;
              a4[36] -= v18;
            }
          }
        }
      }
      else if ( (int)PnpCtxRegOpenKey(a1, a2, (_DWORD)a3, 8, 131097, (__int64)&Handle) >= 0 )
      {
        v16 = ExAllocatePool2(0x100uLL, 0xA0uLL, 0x52504E50u);
        v17 = v16;
        if ( v16 )
        {
          *(_DWORD *)v16 = *a4 + 1;
          RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v16 + 4), 0x39uLL, v13, 0LL, 0LL, 0x900u);
          *(_QWORD *)(v17 + 120) = *((_QWORD *)a4 + 15);
          *(_QWORD *)(v17 + 128) = *((_QWORD *)a4 + 16);
          *(_QWORD *)(v17 + 136) = *((_QWORD *)a4 + 17);
          *(_DWORD *)(v17 + 144) = a4[36];
          *(_DWORD *)(v17 + 148) = a4[37];
          PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDevicePanelEnumSubkeyCallback, v17);
          a4[37] = *(_DWORD *)(v17 + 148);
          *((_QWORD *)a4 + 17) = *(_QWORD *)(v17 + 136);
          a4[36] = *(_DWORD *)(v17 + 144);
          ExFreePoolWithTag((PVOID)v17, 0);
        }
      }
    }
    goto LABEL_27;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 0LL;
    v11 = wcstoul(a3, &EndPtr, 16) <= 7;
  }
  else
  {
    v11 = wcstoul(a3, &EndPtr, 16) <= 0xFFFF;
  }
  if ( v11 && EndPtr && !*EndPtr )
    goto LABEL_11;
LABEL_28:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
