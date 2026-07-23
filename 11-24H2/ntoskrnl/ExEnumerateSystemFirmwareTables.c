/*
 * XREFs of ExEnumerateSystemFirmwareTables @ 0x1407B4460
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1408590B8 (ExpGetSystemFirmwareTableInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExEnumerateSystemFirmwareTables(int a1, void *a2, int a3, _DWORD *a4)
{
  _DWORD *Pool2; // rax
  _DWORD *v10; // rbx
  int SystemFirmwareTableInformation; // edi

  if ( !a2 && a3 )
    return 3221225485LL;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(a3 + 16), 0x54465241u);
  v10 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = 0;
    Pool2[2] = 0;
    Pool2[3] = a3;
    *Pool2 = a1;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(Pool2);
    if ( (int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789 )
    {
      if ( a4 )
        *a4 = v10[3];
      if ( SystemFirmwareTableInformation >= 0 )
      {
        if ( a2 )
          memmove(a2, v10 + 4, 0xFFFFFFF0uLL);
      }
    }
    ExFreePoolWithTag(v10, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
