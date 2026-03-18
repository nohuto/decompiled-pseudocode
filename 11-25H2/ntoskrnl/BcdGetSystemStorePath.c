/*
 * XREFs of BcdGetSystemStorePath @ 0x140A28A88
 * Callers:
 *     BiLoadSystemStore @ 0x140A288E0 (BiLoadSystemStore.c)
 * Callees:
 *     wcscat_s @ 0x140501FC0 (wcscat_s.c)
 *     wcscpy_s @ 0x140502060 (wcscpy_s.c)
 *     BiGetSystemPartition @ 0x1406EAE8C (BiGetSystemPartition.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiGetFirmwareType @ 0x140A27F84 (BiGetFirmwareType.c)
 *     RtlIsStateSeparationEnabled @ 0x140A28CA0 (RtlIsStateSeparationEnabled.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BcdGetSystemStorePath(wchar_t **a1)
{
  wchar_t *Pool2; // rdi
  wchar_t *v3; // rsi
  __int64 FirmwareType; // rdx
  __int64 v5; // rcx
  char IsStateSeparationEnabled; // bp
  rsize_t v7; // rbx
  int SystemPartition; // ebx
  const wchar_t *v9; // r8
  int v10; // edx
  const wchar_t *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  wchar_t *v15; // rax
  wchar_t *Src; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  Pool2 = 0LL;
  Src = 0LL;
  v3 = 0LL;
  FirmwareType = (unsigned int)BiGetFirmwareType(&v18);
  if ( (v18 & 0x10000) != 0 )
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
    BiLogMessage();
    SystemPartition = 0;
    goto LABEL_20;
  }
  v10 = FirmwareType - 1;
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 1) >= 2 )
    {
      SystemPartition = -1073741637;
      BiLogMessage();
      return (unsigned int)SystemPartition;
    }
    v11 = L"\\EFI\\Microsoft\\Boot\\BCD";
  }
  else
  {
    v11 = L"\\Boot\\BCD";
  }
  BiLogMessage();
  SystemPartition = BiGetSystemPartition(&Src);
  if ( SystemPartition >= 0 )
  {
    v3 = Src;
    BiLogMessage();
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( v3[v13] );
    do
      ++v12;
    while ( v11[v12] );
    v14 = v13 + v12 + 1;
    v15 = (wchar_t *)ExAllocatePool2(0x102uLL);
    Pool2 = v15;
    if ( v15 )
    {
      wcscpy_s(v15, v14, v3);
      wcscat_s(Pool2, v14, v11);
LABEL_20:
      *a1 = Pool2;
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
  return (unsigned int)SystemPartition;
}
