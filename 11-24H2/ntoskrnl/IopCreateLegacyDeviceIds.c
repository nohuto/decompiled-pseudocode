/*
 * XREFs of IopCreateLegacyDeviceIds @ 0x1407310C4
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateLegacyDeviceIds(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // r14d
  wchar_t *Pool2; // rdi
  NTSTATUS v10; // ebx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp+8h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp+20h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  if ( a1 && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && *(_QWORD *)(v4 + 48) )
  {
    if ( a3 )
    {
      v5 = *(_DWORD *)(a3 + 4);
      if ( (unsigned int)(v5 + 1) > 0x13 )
        v5 = 18;
    }
    else
    {
      v5 = 0;
    }
    v6 = v5;
    v7 = -1LL;
    do
      ++v7;
    while ( off_14000A0C8[v6][v7] );
    v8 = 2 * (*a2 + (_DWORD)v7) + 42;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v8, 0x6F697050u);
    if ( Pool2 )
    {
      v10 = RtlStringCchPrintfExW(
              Pool2,
              (unsigned __int64)v8 >> 1,
              &ppszDestEnd,
              &pcchRemaining,
              0,
              L"%ws%ws\\%wZ",
              L"DETECTED",
              off_14000A0C8[v6],
              a2);
      if ( v10 >= 0 )
      {
        v10 = RtlStringCchPrintfW(ppszDestEnd + 1, pcchRemaining - 1, L"%ws\\%wZ", L"DETECTED", a2);
        if ( v10 >= 0 )
          v10 = CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(v4 + 48), 0, 3, 7, (__int64)Pool2, v8, 0);
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v10;
}
