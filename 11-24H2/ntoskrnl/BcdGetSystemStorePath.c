/*
 * XREFs of BcdGetSystemStorePath @ 0x14085F5F8
 * Callers:
 *     BiLoadSystemStore @ 0x14085F450 (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x140504740 (wcscat_s.c)
 *     wcscpy_s @ 0x1405047E0 (wcscpy_s.c)
 *     BiGetSystemPartition @ 0x1406F66F0 (BiGetSystemPartition.c)
 *     BiGetFirmwareType @ 0x14085DE80 (BiGetFirmwareType.c)
 *     RtlIsStateSeparationEnabled @ 0x14085F810 (RtlIsStateSeparationEnabled.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetSystemStorePath(wchar_t **a1)
{
  wchar_t *Pool2; // rdi
  wchar_t *v3; // rsi
  __int64 FirmwareType; // rdx
  __int64 v5; // rcx
  char IsStateSeparationEnabled; // bp
  rsize_t v7; // rbx
  int v8; // ebx
  const wchar_t *v9; // r8
  int v10; // edx
  const wchar_t *v11; // rbp
  int SystemPartition; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  wchar_t *v16; // rax
  wchar_t *Src; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  Pool2 = 0LL;
  Src = 0LL;
  v3 = 0LL;
  FirmwareType = (unsigned int)BiGetFirmwareType(&v19);
  if ( (v19 & 0x10000) != 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled(v5, FirmwareType);
    v7 = IsStateSeparationEnabled != 0 ? 44LL : 36LL;
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v9 = L"\\OSDataRoot\\Windows\\";
    if ( !IsStateSeparationEnabled )
      v9 = L"\\SystemRoot\\";
    wcscpy_s(Pool2, v7, v9);
    wcscat_s(Pool2, v7, L"system32\\config\\BootBCD");
    BiLogMessage(2LL, L"Using cached BCD path: %s", Pool2);
    v8 = 0;
    goto LABEL_20;
  }
  v10 = FirmwareType - 1;
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) >= 2 )
    {
      v8 = -1073741637;
      BiLogMessage(4LL, L"Failed to get system store path. Status: %x", 3221225659LL);
      return (unsigned int)v8;
    }
    v11 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  else
  {
    v11 = L"\\Boot\\BCD";
  }
  BiLogMessage(2LL, L"System store path: %s", v11);
  SystemPartition = BiGetSystemPartition(&Src);
  v8 = SystemPartition;
  if ( SystemPartition >= 0 )
  {
    v3 = Src;
    BiLogMessage(2LL, L"System partition: %s", Src);
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( v3[v14] );
    do
      ++v13;
    while ( v11[v13] );
    v15 = v14 + v13 + 1;
    v16 = (wchar_t *)ExAllocatePool2(0x102uLL);
    Pool2 = v16;
    if ( v16 )
    {
      wcscpy_s(v16, v15, v3);
      wcscat_s(Pool2, v15, v11);
LABEL_20:
      *a1 = Pool2;
      goto LABEL_21;
    }
    v8 = -1073741801;
  }
  else
  {
    BiLogMessage(4LL, L"Failed to get system partition. Status: %x", (unsigned int)SystemPartition);
    v3 = Src;
  }
LABEL_21:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v8 < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return (unsigned int)v8;
}
