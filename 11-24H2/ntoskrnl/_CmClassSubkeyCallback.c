/*
 * XREFs of _CmClassSubkeyCallback @ 0x14081AF10
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x14041DC50 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmValidateInstallerClassName @ 0x1408B7B50 (_CmValidateInstallerClassName.c)
 *     _PnpCtxRegOpenKey @ 0x1408C7AFC (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall CmClassSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  __int64 v4; // rdx
  unsigned int v8; // edi
  unsigned int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v4 = *((_QWORD *)a4 + 1);
  DestinationString = 0LL;
  if ( v4 && (int)PnpCtxRegOpenKey(a1, v4, (_DWORD)a3, 0, 131097, (__int64)&Handle) >= 0 )
  {
    ZwClose(0LL);
  }
  else if ( ((unsigned __int8)*a4 == 2 || *a4 == 4)
         && (int)CmValidateInstallerClassName(a1, a3) >= 0
         && RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
  {
    v8 = DestinationString.MaximumLength >> 1;
    if ( !*((_QWORD *)a4 + 2) || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a3, *a4, *((_QWORD *)a4 + 3)) )
    {
      a4[11] += v8;
      v9 = a4[10];
      if ( v9 > v8 )
      {
        RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 4), v9, a3, 0LL, 0LL, 0x900u);
        *((_QWORD *)a4 + 4) += 2LL * v8;
        a4[10] -= v8;
      }
    }
  }
  return 0LL;
}
