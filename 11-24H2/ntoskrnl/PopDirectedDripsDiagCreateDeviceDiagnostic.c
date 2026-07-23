/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x140763C84
 * Callers:
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406F961C (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x140763B64 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x140763DAC (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  Pool2 = ExAllocatePool2(0x100uLL, 0xA8uLL, 0x67696450u);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 24) = dword_140F06B40++;
    *(_DWORD *)(Pool2 + 148) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, Pool2) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140F06938;
      if ( *(PVOID **)qword_140F06938 != &qword_140F06930 )
        __fastfail(3u);
      *v3 = &qword_140F06930;
      v3[1] = v4;
      *v4 = v3;
      qword_140F06938 = (__int64)v3;
    }
  }
  return v3;
}
