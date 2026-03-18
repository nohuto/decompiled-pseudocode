/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x14008F4EC
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400BF1DC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140027B84 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1400380D4 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     CompareVaRangeAddressWithin @ 0x1400F1DF4 (CompareVaRangeAddressWithin.c)
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
  __int64 v11; // r15
  _QWORD *v12; // rdi
  unsigned __int64 v13; // rbx
  int v14; // eax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r14
  __int64 v20; // r11
  __int64 v21; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v23; // rax
  unsigned __int64 v24; // rax
  _QWORD **v25; // rcx
  _QWORD *i; // rcx
  _BYTE v28[32]; // [rsp+60h] [rbp-38h] BYREF

  v9 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28, this + 7);
  v11 = a8 - a6;
  v12 = (_QWORD *)*((_QWORD *)a2 + v9 + 12);
  v13 = 0LL;
  while ( 1 )
  {
    if ( !v12 )
      goto LABEL_16;
    v14 = CompareVaRangeAddressWithin(&a6, v12);
    if ( !v14 )
      break;
    if ( v14 >= 0 )
    {
      v12 = (_QWORD *)v12[1];
    }
    else
    {
      v13 = (unsigned __int64)v12;
      v12 = (_QWORD *)*v12;
    }
  }
  v13 = (unsigned __int64)v12;
  v15 = 0LL;
  v16 = (_QWORD *)*v12;
  if ( !v16 )
    goto LABEL_16;
  do
  {
    v17 = CompareVaRangeAddressWithin(&a6, v16);
    if ( v17 >= 0 )
    {
      if ( v17 > 0 )
      {
        v16 = (_QWORD *)v16[1];
        continue;
      }
      v15 = v16;
    }
    v16 = (_QWORD *)*v16;
  }
  while ( v16 );
  if ( v15 )
    v13 = (unsigned __int64)v15;
LABEL_16:
  while ( v13 )
  {
    v18 = *(_QWORD *)(v13 + 96);
    if ( a7 <= v18 )
      break;
    v19 = *(_QWORD *)(v13 + 104);
    if ( a6 > v18 )
      v18 = a6;
    if ( a7 < v19 )
      v19 = a7;
    v20 = operator new(144LL, 0x39346956u, 256LL);
    if ( !v20
      || (v21 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                  v20,
                  (__int64)a3,
                  v18 + v11,
                  v19 + v11,
                  v9,
                  *(_QWORD *)(v13 + 56),
                  v18 + *(_QWORD *)(v13 + 72) - *(_QWORD *)(v13 + 96),
                  *(_DWORD *)(v13 + 64) & 0xF,
                  *(_QWORD *)(v13 + 88),
                  *(_QWORD *)(v13 + 80),
                  *(_QWORD *)(v13 + 120),
                  *(_QWORD *)(v13 + 112))) == 0 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
      return 3221225495LL;
    }
    Blink = a5->Blink;
    v23 = (struct _LIST_ENTRY *)(v21 + 8);
    if ( Blink->Flink != a5 )
      __fastfail(3u);
    v23->Flink = a5;
    v23->Blink = Blink;
    Blink->Flink = v23;
    a5->Blink = v23;
    v24 = v13;
    v25 = *(_QWORD ***)(v13 + 8);
    if ( v25 )
    {
      v13 = *(_QWORD *)(v13 + 8);
      for ( i = *v25; i; i = (_QWORD *)*i )
        v13 = (unsigned __int64)i;
    }
    else
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v13 || *(_QWORD *)v13 == v24 )
          break;
        v24 = v13;
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
  return 0LL;
}
