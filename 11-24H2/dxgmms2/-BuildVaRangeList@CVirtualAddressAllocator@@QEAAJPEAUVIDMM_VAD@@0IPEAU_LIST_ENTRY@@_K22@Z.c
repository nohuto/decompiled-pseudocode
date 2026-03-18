/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x14008F4EC
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140112AB8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140031710 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140031A2C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x14004C118 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1400997A0 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     CompareVaRangeAddressWithin @ 0x1400FF750 (CompareVaRangeAddressWithin.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // r12
  _QWORD *i; // rcx
  __int64 v12; // r15
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rbx
  int v15; // eax
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r14
  void *v21; // r11
  __int64 v22; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v24; // rax
  unsigned __int64 v25; // rax
  _BYTE v27[32]; // [rsp+70h] [rbp-38h] BYREF

  v9 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, this + 7);
  v12 = a8 - a6;
  v13 = (_QWORD *)*((_QWORD *)a2 + 3 * v9 + 12);
  v14 = 0LL;
  while ( 1 )
  {
    if ( !v13 )
      goto LABEL_16;
    v15 = CompareVaRangeAddressWithin(&a6, v13);
    if ( !v15 )
      break;
    if ( v15 >= 0 )
    {
      v13 = (_QWORD *)v13[1];
    }
    else
    {
      v14 = (unsigned __int64)v13;
      v13 = (_QWORD *)*v13;
    }
  }
  v14 = (unsigned __int64)v13;
  v16 = 0LL;
  v17 = (_QWORD *)*v13;
  if ( !v17 )
    goto LABEL_16;
  do
  {
    v18 = CompareVaRangeAddressWithin(&a6, v17);
    if ( v18 >= 0 )
    {
      if ( v18 > 0 )
      {
        v17 = (_QWORD *)v17[1];
        continue;
      }
      v16 = v17;
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  if ( v16 )
    v14 = (unsigned __int64)v16;
LABEL_16:
  while ( v14 )
  {
    v19 = *(_QWORD *)(v14 + 96);
    if ( a7 <= v19 )
      break;
    v20 = *(_QWORD *)(v14 + 104);
    if ( a6 > v19 )
      v19 = a6;
    if ( a7 < v20 )
      v20 = a7;
    v21 = VIDMM_MAPPED_VA_RANGE::operator new((unsigned __int64)i);
    if ( !v21
      || (v22 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                  (__int64)v21,
                  (__int64)a3,
                  v19 + v12,
                  v20 + v12,
                  v9,
                  *(_QWORD *)(v14 + 56),
                  v19 + *(_QWORD *)(v14 + 72) - *(_QWORD *)(v14 + 96),
                  *(_DWORD *)(v14 + 64) & 0xF,
                  *(_QWORD *)(v14 + 88),
                  *(_QWORD *)(v14 + 80),
                  *(_QWORD *)(v14 + 120),
                  *(_QWORD *)(v14 + 112),
                  0)) == 0 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
      return 3221225495LL;
    }
    Blink = a5->Blink;
    v24 = (struct _LIST_ENTRY *)(v22 + 8);
    if ( Blink->Flink != a5 )
      __fastfail(3u);
    v24->Flink = a5;
    v24->Blink = Blink;
    Blink->Flink = v24;
    a5->Blink = v24;
    v25 = v14;
    i = *(_QWORD **)(v14 + 8);
    if ( i )
    {
      v14 = *(_QWORD *)(v14 + 8);
      for ( i = (_QWORD *)*i; i; i = (_QWORD *)*i )
        v14 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 || *(_QWORD *)v14 == v25 )
          break;
        v25 = v14;
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27);
  return 0LL;
}
