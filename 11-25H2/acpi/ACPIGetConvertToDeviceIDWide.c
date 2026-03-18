/*
 * XREFs of ACPIGetConvertToDeviceIDWide @ 0x14004C2E8
 * Callers:
 *     ACPIGetWorkerForString @ 0x14003F3E0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToDeviceID @ 0x14005496C (ACPIGetConvertToDeviceID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x14003F928 (ACPIAnsiStringToWideHelper.c)
 *     ACPIAmliDoubleToNameWide @ 0x14003F954 (ACPIAmliDoubleToNameWide.c)
 *     ACPIGetProcessorIDWide @ 0x14004D5C8 (ACPIGetProcessorIDWide.c)
 */

__int64 __fastcall ACPIGetConvertToDeviceIDWide(__int64 a1, int a2, __int64 a3, int a4, char **a5, int *a6)
{
  __int64 v8; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebx
  int v12; // ebp
  unsigned __int64 v13; // r14
  char *v14; // rdi
  int v15; // eax
  _BYTE *v16; // rsi
  __int64 v17; // rbx
  unsigned int v18; // ebx
  char *Pool2; // rax

  if ( (a4 & 0x4000000) != 0 )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 8);
  if ( (v8 & 0x1000000000LL) != 0 )
    return ACPIGetProcessorIDWide(a1, a2, a3, a4, (__int64)a5, (__int64)a6);
  if ( (v8 & 0x800000000000LL) == 0 )
  {
LABEL_10:
    if ( a2 < 0 )
      return (unsigned int)a2;
    if ( *(_WORD *)(a3 + 2) == 1 )
    {
      v12 = 26;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        26LL,
                        1399874369LL);
      v14 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, 0xDuLL, "ACPI\\");
        ACPIAnsiStringToWideHelper(v14, 0xAuLL);
        ACPIAmliDoubleToNameWide((_WORD *)v14 + 5, *(_DWORD *)(a3 + 16), 0);
        goto LABEL_26;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 2) != 2 )
        return 3222536207LL;
      v15 = *(_DWORD *)(a3 + 24);
      v16 = *(_BYTE **)(a3 + 32);
      if ( !v15 )
        return 3221225485LL;
      if ( *v16 == 42 )
      {
        ++v16;
        if ( v15 == 1 )
          return 3221225485LL;
      }
      v17 = -1LL;
      do
        ++v17;
      while ( v16[v17] );
      v18 = v17 + 6;
      v12 = 2 * v18;
      v13 = 2 * v18;
      v14 = (char *)ExAllocatePool2(
                      (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                      v13,
                      1399874369LL);
      if ( v14 )
      {
        RtlStringCchPrintfA(v14, v18, "ACPI\\%s", v16);
        goto LABEL_9;
      }
    }
    return 3221225626LL;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 608) + v10) );
  v11 = v10 + 1;
  v12 = 2 * v11;
  v13 = 2 * v11;
  v14 = (char *)ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v13, 1399874369LL);
  if ( !v14 )
    return 3221225626LL;
  RtlStringCchPrintfA(v14, v11, "%s", *(_QWORD *)(a1 + 608));
LABEL_9:
  ACPIAnsiStringToWideHelper(v14, v13);
LABEL_26:
  *a5 = v14;
  if ( a6 )
    *a6 = v12;
  return 0LL;
}
