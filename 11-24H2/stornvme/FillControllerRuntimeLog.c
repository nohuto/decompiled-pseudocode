/*
 * XREFs of FillControllerRuntimeLog @ 0x140017B10
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     ControllerReset @ 0x14000F830 (ControllerReset.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall FillControllerRuntimeLog(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 result; // rax
  _DWORD *v6; // rcx
  __int64 v7; // r10

  memset(a2, 0, 0x58uLL);
  *a2 = 88;
  v4 = 0LL;
  a2[1] = 88;
  *((_BYTE *)a2 + 8) = (*(_BYTE *)(a1 + 21) & 0x20) != 0;
  *((_BYTE *)a2 + 9) = *(_BYTE *)(a1 + 22);
  a2[3] = *(_DWORD *)(a1 + 24);
  a2[4] = *(_DWORD *)(a1 + 28);
  *((_QWORD *)a2 + 3) = *(_QWORD *)(a1 + 3792);
  a2[8] = *(_DWORD *)(a1 + 3800);
  *((_WORD *)a2 + 18) = *(_WORD *)(a1 + 320);
  *((_WORD *)a2 + 19) = *(_WORD *)(a1 + 322);
  *((_WORD *)a2 + 20) = *(_WORD *)(a1 + 324);
  *((_WORD *)a2 + 21) = *(_WORD *)(a1 + 326);
  *((_WORD *)a2 + 22) = *(_WORD *)(a1 + 328);
  *((_WORD *)a2 + 23) = *(_WORD *)(a1 + 330);
  *((_WORD *)a2 + 24) = *(_WORD *)(a1 + 332);
  *((_WORD *)a2 + 25) = *(_WORD *)(a1 + 334);
  *((_WORD *)a2 + 26) = *(_WORD *)(a1 + 952);
  *((_WORD *)a2 + 27) = *(_WORD *)(a1 + 954);
  *((_WORD *)a2 + 28) = *(_WORD *)(a1 + 976);
  *((_WORD *)a2 + 29) = *(_WORD *)(a1 + 978);
  *((_WORD *)a2 + 30) = *(_WORD *)(a1 + 980);
  result = *(unsigned __int16 *)(a1 + 982);
  for ( *((_WORD *)a2 + 31) = result; (unsigned int)v4 < *(_DWORD *)(a1 + 224); v4 = (unsigned int)(v4 + 1) )
  {
    result = *(_QWORD *)(a1 + 8 * v4 + 1672);
    if ( result )
    {
      v6 = a2 + 18;
      *((_QWORD *)a2 + 8) += *(_QWORD *)(result + 24);
      v7 = 4LL;
      do
      {
        result = *(unsigned int *)((char *)v6 + -40LL - (_QWORD)a2 + *(_QWORD *)(a1 + 8 * v4 + 1672));
        *v6++ += result;
        --v7;
      }
      while ( v7 );
    }
  }
  return result;
}
