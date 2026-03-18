/*
 * XREFs of IoQueuesFreeResources @ 0x140007110
 * Callers:
 *     IoQueuesCreation @ 0x140007860 (IoQueuesCreation.c)
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 *     IoQueuesCreationAsync @ 0x14001A314 (IoQueuesCreationAsync.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeCompletePendingForwardIoRequests @ 0x14001BEA8 (NVMeCompletePendingForwardIoRequests.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1)
{
  unsigned int v2; // esi
  __int64 result; // rax
  __int64 i; // rcx
  unsigned __int16 v5; // bp
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r9
  _QWORD *v9; // rdi
  __int64 v10; // r9
  _QWORD *v11; // rdi
  __int64 v12; // r9
  unsigned __int16 v13; // di
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int j; // ebp
  __int64 v18; // rdx
  __int64 v19; // rdx

  v2 = 16 * *(unsigned __int16 *)(a1 + 326);
  result = *(unsigned __int16 *)(a1 + 326) << 6;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    i = *(_QWORD *)(a1 + 936);
    if ( i )
    {
      v5 = 0;
      if ( *(_WORD *)(a1 + 330) )
      {
        v6 = (unsigned int)result;
        do
        {
          v7 = 208LL * v5;
          NVMeCompletePendingForwardIoRequests(a1, v7 + i, 0, 1, 1, 8);
          result = NVMeFreeDmaBuffer(a1, v6, v7 + *(_QWORD *)(a1 + 936), *(_QWORD *)(v7 + *(_QWORD *)(a1 + 936) + 8));
          for ( i = *(_QWORD *)(a1 + 936); *(_QWORD *)(i + v7 + 192); i = *(_QWORD *)(a1 + 936) )
          {
            v9 = *(_QWORD **)(v7 + i + 192);
            *(_QWORD *)(v7 + i + 192) = v9[3];
            StorPortExtendedFunction(1LL, a1, *v9, v8);
            result = StorPortExtendedFunction(1LL, a1, v9, v10);
          }
          for ( ; *(_QWORD *)(i + v7 + 200); i = *(_QWORD *)(a1 + 936) )
          {
            v11 = *(_QWORD **)(v7 + i + 200);
            *(_QWORD *)(v7 + i + 200) = v11[3];
            StorPortExtendedFunction(1LL, a1, *v11, v8);
            result = StorPortExtendedFunction(1LL, a1, v11, v12);
          }
          ++v5;
        }
        while ( v5 < *(_WORD *)(a1 + 330) );
      }
    }
    if ( *(_QWORD *)(a1 + 944) )
    {
      v13 = 0;
      if ( *(_WORD *)(a1 + 332) )
      {
        v14 = v2;
        do
        {
          v15 = 392LL * v13;
          v16 = *(_QWORD *)(a1 + 944);
          if ( *(_BYTE *)(v15 + v16 + 248) && *(_QWORD *)(v15 + v16 + 256) )
          {
            for ( j = 0;
                  j < *(unsigned __int16 *)(a1 + 234);
                  StorPortExtendedFunction(
                    91LL,
                    a1,
                    *(_QWORD *)(*(_QWORD *)(v15 + *(_QWORD *)(a1 + 944) + 256) + 8LL * j++),
                    1LL) )
            {
              ;
            }
            NVMeFreePool(a1, *(_QWORD *)(v15 + *(_QWORD *)(a1 + 944) + 256));
          }
          result = NVMeFreeDmaBuffer(a1, v14, v15 + *(_QWORD *)(a1 + 944), *(_QWORD *)(v15 + *(_QWORD *)(a1 + 944) + 8));
          ++v13;
        }
        while ( v13 < *(_WORD *)(a1 + 332) );
      }
    }
    v18 = *(_QWORD *)(a1 + 936);
    if ( v18 )
    {
      NVMeFreePool(a1, *(_QWORD *)(v18 + 24));
      NVMeFreePool(a1, *(_QWORD *)(*(_QWORD *)(a1 + 936) + 32LL));
      NVMeFreePool(a1, *(_QWORD *)(*(_QWORD *)(a1 + 936) + 40LL));
      result = NVMeFreePool(a1, *(_QWORD *)(a1 + 936));
    }
    v19 = *(_QWORD *)(a1 + 944);
    if ( v19 )
    {
      NVMeFreePool(a1, *(_QWORD *)(v19 + 192));
      NVMeFreePool(a1, *(_QWORD *)(*(_QWORD *)(a1 + 944) + 224LL));
      result = NVMeFreePool(a1, *(_QWORD *)(a1 + 944));
    }
  }
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_QWORD *)(a1 + 936) = 0LL;
  *(_DWORD *)(a1 + 330) = 0;
  return result;
}
