/*
 * XREFs of PiBuildDeviceNodeInstancePath @ 0x140A634F0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140A46AF4 (PnpCleanupDeviceRegistryValues.c)
 *     PnpFreeDeviceInstancePath @ 0x140A6364C (PnpFreeDeviceInstancePath.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiBuildDeviceNodeInstancePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  size_t v12; // r15
  wchar_t *Pool2; // rax
  wchar_t *v14; // rsi
  NTSTATUS v15; // edi
  const wchar_t *v17; // rcx

  if ( a2 && a3 && a4 )
  {
    if ( *(_QWORD *)(a1 + 48) && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 42) )
      PnpCleanupDeviceRegistryValues(a1 + 40);
    v8 = -1LL;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(a2 + 2 * v9) );
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(a3 + 2 * v10) );
    v11 = v10 + v9;
    do
      ++v8;
    while ( *(_WORD *)(a4 + 2 * v8) );
    v12 = (unsigned int)(2 * (v8 + v11) + 6);
    Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
    v14 = Pool2;
    if ( Pool2 )
    {
      v15 = RtlStringCbPrintfW(Pool2, v12, L"%s\\%s\\%s", a2, a3, a4);
      if ( v15 < 0 || (v17 = *(const wchar_t **)(a1 + 48)) != 0LL && !wcsicmp(v17, v14) )
      {
        ExFreePoolWithTag(v14, 0x49706E50u);
      }
      else
      {
        PnpFreeDeviceInstancePath(a1);
        RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v14);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v15;
}
