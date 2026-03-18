/*
 * XREFs of Crashdump_UcxEvtFreeDumpData @ 0x140051790
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_FreeDeviceContext @ 0x1400509F0 (Crashdump_FreeDeviceContext.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

ULONG __fastcall Crashdump_UcxEvtFreeDumpData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int i; // edi
  void *v7; // rcx
  _QWORD **v8; // rdi
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: Begin\n");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_QWORD *)(v4 + 824) == v5 )
    *(_QWORD *)(v4 + 824) = 0LL;
  if ( *(_QWORD *)(v5 + 568) )
  {
    for ( i = 0; i < *(_DWORD *)(v5 + 536); ++i )
      Crashdump_FreeDeviceContext(*(_QWORD *)(v5 + 568) + 376LL * i);
    ExFreePoolWithTag(*(PVOID *)(v5 + 568), 0x43434858u);
  }
  v7 = *(void **)(v5 + 176);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v5 + 176) = 0LL;
  }
  v8 = (_QWORD **)(v5 + 496);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    v10[1] = v8;
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v5 + 488), (__int64)v9);
  }
  ExFreePoolWithTag((PVOID)v5, 0x43434858u);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: End\n");
}
