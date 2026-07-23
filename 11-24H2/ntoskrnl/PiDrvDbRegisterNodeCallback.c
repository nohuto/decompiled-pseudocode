/*
 * XREFs of PiDrvDbRegisterNodeCallback @ 0x1407367E0
 * Callers:
 *     PiDrvDbEnumDriverStoreNodes @ 0x140734BD8 (PiDrvDbEnumDriverStoreNodes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall PiDrvDbRegisterNodeCallback(PCWSTR Source, int *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  ULONG_PTR v6; // rbx
  wchar_t *Pool2; // rsi

  if ( wcsicmp(Source, L"SYSTEM") )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Source[v5] );
    v6 = (unsigned int)(2 * v5 + 86);
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v6, 0x62647050u);
    if ( Pool2 )
    {
      v4 = RtlStringCchPrintfW(
             Pool2,
             v6 >> 1,
             L"%ws\\%ws%ws%ws",
             L"\\DriverStore\\Nodes",
             Source,
             L"\\System32\\config\\",
             L"SYSTEM");
      if ( v4 >= 0 )
      {
        v4 = PiDrvDbRegisterNode(Source, 10, 0, 0LL, Pool2);
        if ( v4 == 0x40000000 )
          v4 = 0;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = 0;
  }
  *a2 = v4;
  return v4 >= 0;
}
