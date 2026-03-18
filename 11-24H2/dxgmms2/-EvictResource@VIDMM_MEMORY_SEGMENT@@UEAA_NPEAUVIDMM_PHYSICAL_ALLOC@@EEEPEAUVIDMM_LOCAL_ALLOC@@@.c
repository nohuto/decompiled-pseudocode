/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400B2DF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B1FBC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1400B206C (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@Z @ 0x1400B2188 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@EPEAUVIDMM_LOCAL_ALLOC@@_N@.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400B3520 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  __int64 v6; // rsi
  __int64 v8; // rbx
  _QWORD *v10; // rdi
  _QWORD *i; // r14
  struct VIDMM_LOCAL_ALLOC *v12; // rdi
  int v13; // ebp
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v14; // rdx
  char v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v6 = *((_QWORD *)this + 3);
  v8 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(v6 + 40936) & 0x10) != 0 )
  {
    v10 = *(_QWORD **)(v8 + 112);
    if ( v10 != (_QWORD *)(v8 + 112) )
    {
      do
      {
        for ( i = (_QWORD *)*(v10 - 2); i != v10 - 2; i = (_QWORD *)*i )
          VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident((VIDMM_GLOBAL *)v6, (struct VIDMM_ALLOC *)(i - 5));
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != (_QWORD *)(v8 + 112) );
      v6 = *((_QWORD *)this + 3);
      a3 = v16;
    }
  }
  v12 = a6;
  if ( !a6 )
    v12 = *(struct VIDMM_LOCAL_ALLOC **)(v8 + 48);
  v13 = 0;
  if ( (*(_DWORD *)(v6 + 6984) & 0x10) == 0
    && _InterlockedCompareExchange16((volatile signed __int16 *)(*(_QWORD *)(v8 + 392) + 8LL), 3, 2) == 2 )
  {
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer();
    v13 = 1;
    if ( *(_BYTE *)(v8 + 43) )
      *(_BYTE *)(v8 + 42) = 0;
    a3 = 0;
  }
  VIDMM_MEMORY_SEGMENT::TransferToSystem(this, (struct VIDMM_PARTITION ***)v8, a3, v12);
  v14 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)*((_QWORD *)a2 + 24);
  if ( v14 )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 69), v14);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(
      *((VIDMM_CPU_HOST_APERTURE **)this + 69),
      *((struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2 + 24));
    *((_QWORD *)a2 + 24) = 0LL;
  }
  *(_QWORD *)(*((_QWORD *)this + 3) + 44432LL) -= *((_QWORD *)a2 + 2);
  *(_QWORD *)(*((_QWORD *)this + 3) + 40224LL) -= *((_QWORD *)a2 + 2) >> 12;
  if ( !v13 )
  {
    *(_DWORD *)(v8 + 32) &= ~8u;
    *(_BYTE *)(v8 + 43) = 0;
  }
  return 1;
}
