/*
 * XREFs of ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1401A913C
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x140187F08 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1402254CC (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401A8FA8 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVmMultiString(unsigned __int16 *a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  int v7; // esi
  unsigned int v8; // edi
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // r8
  unsigned __int16 v14; // r9
  unsigned int v15; // ecx
  _QWORD *v16; // rdx
  unsigned int i; // r8d
  unsigned __int16 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edi
  void *v22; // rcx
  __int64 v23; // rax
  int v24; // edi

  v4 = (unsigned int)(a2 - 1);
  v5 = 0LL;
  a1[v4] = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  while ( v8 < (unsigned int)v4 )
  {
    if ( a1[v8] )
    {
      v11 = operator new(0x210uLL, 0x4B677844u, 256LL, a4);
      if ( !v11 )
      {
        v7 = -1073741801;
        goto LABEL_24;
      }
      *(_QWORD *)v11 = 0LL;
      *(_WORD *)(v11 + 526) = 0;
      if ( v5 )
        *v6 = v11;
      else
        v5 = (_QWORD *)v11;
      v12 = 0;
      v13 = (unsigned __int16 *)(v11 + 8);
      v6 = (_QWORD *)v11;
      do
      {
        v14 = a1[v8];
        if ( !v14 )
          break;
        if ( v8 >= (unsigned int)v4 )
          break;
        *v13 = v14;
        ++v8;
        ++v13;
        ++v12;
      }
      while ( v12 < 0x103 );
      *(_WORD *)(v11 + 2LL * v12 + 8) = 0;
      v7 = TranslateUmdFileNameToVm((char *)(v11 + 8), 0x104u, 0LL);
      if ( v7 < 0 )
        goto LABEL_24;
    }
    else
    {
      ++v8;
    }
  }
  v15 = 0;
  v16 = v5;
LABEL_17:
  if ( v16 )
  {
    for ( i = 0; ; ++i )
    {
      v18 = *((_WORD *)v16 + i + 4);
      if ( !v18 )
      {
        v20 = v15++;
        a1[v20] = 0;
        v16 = (_QWORD *)*v16;
        goto LABEL_17;
      }
      if ( v15 >= (unsigned int)v4 )
        break;
      v19 = v15++;
      a1[v19] = v18;
    }
    v7 = -2147483643;
  }
LABEL_24:
  v21 = 0;
  while ( v5 )
  {
    v22 = v5;
    v23 = -1LL;
    do
      ++v23;
    while ( *((_WORD *)v5 + v23 + 4) );
    v5 = (_QWORD *)*v5;
    v21 += v23 + 1;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
  }
  v24 = 2 * v21 + 2;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
    *a3 = v24;
  return (unsigned int)v7;
}
