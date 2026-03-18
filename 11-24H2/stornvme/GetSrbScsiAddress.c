/*
 * XREFs of GetSrbScsiAddress @ 0x14000B750
 * Callers:
 *     NVMeHwStartIo @ 0x140018740 (NVMeHwStartIo.c)
 * Callees:
 *     <none>
 */

void __fastcall GetSrbScsiAddress(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v4; // rax

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v4 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 52));
    if ( a2 )
      *a2 = v4[8];
    if ( a3 )
      *a3 = v4[9];
    if ( a4 )
      *a4 = v4[10];
  }
  else
  {
    if ( a2 )
      *a2 = *(unsigned __int8 *)(a1 + 5);
    if ( a3 )
      *a3 = *(unsigned __int8 *)(a1 + 6);
    if ( a4 )
      *a4 = *(unsigned __int8 *)(a1 + 7);
  }
}
