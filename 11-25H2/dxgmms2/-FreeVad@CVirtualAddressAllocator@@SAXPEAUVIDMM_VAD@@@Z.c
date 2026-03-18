/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400B6868
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400B5900 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1400B6FF4 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ReleaseVaRangeCb @ 0x1400B6ABC (ReleaseVaRangeCb.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi

  v1 = 0LL;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)*((_QWORD *)a1 + v1 + 12);
      if ( v3 )
        break;
LABEL_3:
      *((_QWORD *)a1 + v1 + 12) = 0LL;
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) )
        goto LABEL_4;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = (_QWORD *)*v3;
        if ( !*v3 )
          break;
        v5 = v3;
LABEL_10:
        *v5 = 0LL;
        v3 = v4;
      }
      v5 = v3 + 1;
      v4 = (_QWORD *)v3[1];
      if ( v4 )
        goto LABEL_10;
      v6 = v3[2];
      ReleaseVaRangeCb();
      v7 = v6 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v7 )
        goto LABEL_3;
      v3 = (_QWORD *)v7;
    }
  }
LABEL_4:
  operator delete(a1);
}
