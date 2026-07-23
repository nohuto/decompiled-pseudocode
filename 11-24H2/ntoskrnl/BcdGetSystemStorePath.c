/*
 * XREFs of BcdGetSystemStorePath @ 0x140A57798
 * Callers:
 *     BiLoadSystemStore @ 0x140A575F0 (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x140502000 (wcscat_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     BiGetSystemPartition @ 0x1406F46F0 (BiGetSystemPartition.c)
 *     BiGetFirmwareType @ 0x140859BF0 (BiGetFirmwareType.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl BcdGetSystemStorePath(PWSTR *BcdSystemStorePath)
{
  wchar_t *Pool2; // rdi
  wchar_t *v3; // rsi
  int FirmwareType; // edx
  BOOLEAN IsStateSeparationEnabled; // bp
  rsize_t v6; // rbx
  NTSTATUS SystemPartition; // ebx
  const wchar_t *v8; // r8
  int v9; // edx
  const wchar_t *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  wchar_t *v14; // rax
  wchar_t *Src; // [rsp+58h] [rbp+10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  Pool2 = 0LL;
  Src = 0LL;
  v3 = 0LL;
  FirmwareType = BiGetFirmwareType(&v17);
  if ( (v17 & 0x10000) != 0 )
  {
    IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
    v6 = IsStateSeparationEnabled != 0 ? 44LL : 36LL;
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL, 2 * v6, 0x4B444342u);
    if ( !Pool2 )
      return -1073741801;
    v8 = L"\\OSDataRoot\\Windows\\";
    if ( !IsStateSeparationEnabled )
      v8 = L"\\SystemRoot\\";
    wcscpy_s(Pool2, v6, v8);
    wcscat_s(Pool2, v6, L"system32\\config\\BootBCD");
    BiLogMessage();
    SystemPartition = 0;
    goto LABEL_20;
  }
  v9 = FirmwareType - 1;
  if ( v9 )
  {
    if ( (unsigned int)(v9 - 1) >= 2 )
    {
      SystemPartition = -1073741637;
      BiLogMessage();
      return SystemPartition;
    }
    v10 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  else
  {
    v10 = L"\\Boot\\BCD";
  }
  BiLogMessage();
  SystemPartition = BiGetSystemPartition(&Src);
  if ( SystemPartition >= 0 )
  {
    v3 = Src;
    BiLogMessage();
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( v3[v12] );
    do
      ++v11;
    while ( v10[v11] );
    v13 = v12 + v11 + 1;
    v14 = (wchar_t *)ExAllocatePool2(0x102uLL, 2LL * v13, 0x4B444342u);
    Pool2 = v14;
    if ( v14 )
    {
      wcscpy_s(v14, v13, v3);
      wcscat_s(Pool2, v13, v10);
LABEL_20:
      *BcdSystemStorePath = Pool2;
      goto LABEL_21;
    }
    SystemPartition = -1073741801;
  }
  else
  {
    BiLogMessage();
    v3 = Src;
  }
LABEL_21:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( SystemPartition < 0 && Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  return SystemPartition;
}
