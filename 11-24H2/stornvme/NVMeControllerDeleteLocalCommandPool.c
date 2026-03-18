/*
 * XREFs of NVMeControllerDeleteLocalCommandPool @ 0x140022178
 * Callers:
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 */

void __fastcall NVMeControllerDeleteLocalCommandPool(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r9
  __int64 v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v5 = 0LL;
    v1 = a1 + 4320;
    if ( a1 != -4320 )
    {
      while ( !(unsigned int)StorPortExtendedFunction(37LL, a1, v1, &v5) && v5 )
      {
        v4 = v5 - 112;
        if ( v5 != 112 )
        {
          if ( *(_QWORD *)(v4 + 96) )
            NVMeFreeDmaBuffer(a1, 4232LL, (__int64 *)(v4 + 96), *(_QWORD *)(v4 + 104));
          StorPortExtendedFunction(1LL, a1, v4, v3);
        }
      }
    }
  }
}
