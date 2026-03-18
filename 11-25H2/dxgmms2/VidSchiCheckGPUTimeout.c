/*
 * XREFs of VidSchiCheckGPUTimeout @ 0x1400AD7D0
 * Callers:
 *     VidSchiReportHwHang @ 0x140046CF8 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiCheckNodeTimeout @ 0x1400ADC80 (VidSchiCheckNodeTimeout.c)
 */

__int64 __fastcall VidSchiCheckGPUTimeout(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  struct _VIDSCH_NODE **v6; // rcx
  _QWORD *v7; // rax

  v3 = 0;
  *a3 = 0LL;
  while ( 1 )
  {
    if ( v3 >= *(_DWORD *)(a1 + 80) )
      return 0LL;
    v6 = *(struct _VIDSCH_NODE ***)(a1 + 688);
    if ( v3 < *(_DWORD *)(a1 + 760) )
      v6 += v3;
    if ( (unsigned int)VidSchiCheckNodeTimeout(*v6) )
      break;
    ++v3;
  }
  v7 = *(_QWORD **)(a1 + 688);
  if ( v3 < *(_DWORD *)(a1 + 760) )
    v7 += v3;
  *a3 = *v7;
  return 1LL;
}
