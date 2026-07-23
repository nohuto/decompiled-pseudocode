/*
 * XREFs of MmAcceleratorCallbackRoutine @ 0x140800960
 * Callers:
 *     <none>
 * Callees:
 *     MiDeleteHardwareAccelerators @ 0x140691B9C (MiDeleteHardwareAccelerators.c)
 *     MiAcceptNewAccelerators @ 0x1408007A4 (MiAcceptNewAccelerators.c)
 */

void __fastcall MmAcceleratorCallbackRoutine(__int64 a1)
{
  int *v2; // rcx

  if ( !byte_140E37594 )
  {
    v2 = *(int **)(a1 + 16);
    if ( *(_DWORD *)(a1 + 4) )
    {
      MiDeleteHardwareAccelerators((__int64)v2, 0);
    }
    else if ( v2[1] >= 0 && v2[2] )
    {
      if ( v2[6] )
        MiAcceptNewAccelerators((__int64)v2);
    }
  }
}
