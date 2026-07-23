/*
 * XREFs of MiAcceptNewAccelerators @ 0x1408007A4
 * Callers:
 *     MmAcceleratorCallbackRoutine @ 0x140800960 (MmAcceleratorCallbackRoutine.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140691DA4 (MiSignalNewAcceleratorsAvailable.c)
 *     MiQueryAcceleratorHandle @ 0x1408008B0 (MiQueryAcceleratorHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiAcceptNewAccelerators(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *Pool; // rbx
  __int64 v4; // r14
  __int64 **v5; // rax
  __int64 *v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v7; // [rsp+28h] [rbp-8h]
  unsigned int v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  v8 = 0;
  v7 = &v6;
  v2 = 0LL;
  v6 = (__int64 *)&v6;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 8) )
      goto LABEL_13;
    Pool = (_QWORD *)MiAllocatePool(0x40uLL, 0x38uLL, 1632135501);
    if ( !Pool )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2);
    if ( (int)MiQueryAcceleratorHandle(v4, &v8, &v9) < 0 )
    {
      byte_140E37596 = 1;
      goto LABEL_11;
    }
    if ( v8 >= (unsigned __int16)KeNumberNodes )
    {
      byte_140E37597 = 1;
LABEL_11:
      ExFreePoolWithTag(Pool, 0);
      goto LABEL_13;
    }
    *((_DWORD *)Pool + 6) = v8;
    Pool[4] = v9;
    Pool[2] = v4;
    v5 = v7;
    if ( *v7 != (__int64 *)&v6 )
      __fastfail(3u);
    Pool[1] = v7;
    *Pool = &v6;
    v2 = (unsigned int)(v2 + 1);
    *v5 = Pool;
    v7 = (__int64 **)Pool;
  }
  byte_140E37595 = 1;
LABEL_13:
  if ( v6 != (__int64 *)&v6 )
    MiSignalNewAcceleratorsAvailable((__int64 *)&v6);
}
