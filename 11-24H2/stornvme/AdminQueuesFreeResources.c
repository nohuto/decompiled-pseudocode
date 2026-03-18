/*
 * XREFs of AdminQueuesFreeResources @ 0x140017250
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

void *__fastcall AdminQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // rdi
  __int64 v6; // r9
  _QWORD *j; // rdi
  __int64 v8; // r9
  __int64 v9; // rdx
  void *result; // rax
  void *v11; // rcx
  void **v12; // rdi
  __int64 v13; // rbp
  _BYTE *v14; // rsi
  void *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r9

  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = *(_QWORD **)(a1 + 528); i; i = *(_QWORD **)(a1 + 528) )
    {
      *(_QWORD *)(a1 + 528) = i[3];
      StorPortExtendedFunction(1LL, a1, *i, a4);
      StorPortExtendedFunction(1LL, a1, i, v6);
    }
    for ( j = *(_QWORD **)(a1 + 536); j; j = *(_QWORD **)(a1 + 536) )
    {
      *(_QWORD *)(a1 + 536) = j[3];
      StorPortExtendedFunction(1LL, a1, *j, a4);
      StorPortExtendedFunction(1LL, a1, j, v8);
    }
    NVMeFreePool(a1, *(_QWORD *)(a1 + 360));
    v9 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 360) = 0LL;
    result = (void *)NVMeFreePool(a1, v9);
    v11 = *(void **)(a1 + 1104);
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_BYTE *)(a1 + 1008) = 0;
    if ( v11 )
      result = memset(v11, 0, 0x1088uLL);
    v12 = (void **)(a1 + 1232);
    v13 = 2LL;
    v14 = (_BYTE *)(a1 + 1136);
    do
    {
      v15 = *v12;
      *v14 = 0;
      if ( v15 )
        result = memset(v15, 0, 0x1088uLL);
      v14 += 128;
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v16 = *(_QWORD *)(a1 + 1392);
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 96) && *(_WORD *)(a1 + 1552) )
        NVMeFreeDmaBuffer(
          a1,
          (unsigned __int64)*(unsigned __int16 *)(a1 + 1552) << 13,
          (__int64 *)(v16 + 96),
          *(_QWORD *)(v16 + 104));
      result = (void *)StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1392), v16);
      *(_QWORD *)(a1 + 1392) = 0LL;
      *(_WORD *)(a1 + 1552) = 0;
    }
    v17 = *(_QWORD *)(a1 + 1400);
    if ( v17 )
    {
      if ( *(_QWORD *)(v17 + 96) )
      {
        if ( *(_WORD *)(a1 + 1554) )
          NVMeFreeDmaBuffer(
            a1,
            (unsigned __int64)*(unsigned __int16 *)(a1 + 1554) << 13,
            (__int64 *)(v17 + 96),
            *(_QWORD *)(v17 + 104));
      }
      result = (void *)StorPortExtendedFunction(1LL, a1, *(_QWORD *)(a1 + 1400), v17);
      *(_QWORD *)(a1 + 1400) = 0LL;
      *(_WORD *)(a1 + 1554) = 0;
    }
  }
  return result;
}
