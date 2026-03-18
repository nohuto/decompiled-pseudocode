/*
 * XREFs of ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400BDE04
 * Callers:
 *     ?FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1400BC304 (-FreeVadAvl@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400BD1F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ReleaseVaRangeCb @ 0x140114874 (ReleaseVaRangeCb.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  __int64 v4; // rbp
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned int v10; // edx
  _QWORD **v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  VIDMM_MAPPED_VA_RANGE *v14; // rcx

  v1 = 0;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    while ( 1 )
    {
      v3 = v1 + 4LL;
      v4 = 3 * v3;
      v5 = (_QWORD *)*((_QWORD *)a1 + 3 * v3);
      if ( v5 )
        break;
LABEL_9:
      *((_QWORD *)a1 + v4) = 0LL;
      if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
      {
        v11 = (_QWORD **)((char *)a1 + 8 * v4 + 8);
        while ( 1 )
        {
          v12 = *v11;
          if ( *v11 == v11 )
            break;
          if ( (_QWORD **)v12[1] != v11 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
            __fastfail(3u);
          *v11 = v13;
          v14 = (VIDMM_MAPPED_VA_RANGE *)(v12 - 1);
          v13[1] = v11;
          *((_DWORD *)v14 + 18) &= ~0x8000u;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v14, v10);
        }
      }
      if ( ++v1 >= ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) )
        goto LABEL_16;
    }
    while ( 1 )
    {
      v6 = (_QWORD *)*v5;
      if ( *v5 )
        break;
      v7 = v5 + 1;
      v6 = (_QWORD *)v5[1];
      if ( v6 )
      {
LABEL_6:
        *v7 = 0LL;
        v5 = v6;
      }
      else
      {
        v8 = v5[2];
        ReleaseVaRangeCb(v5, 0LL);
        v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v9 )
          goto LABEL_9;
        v5 = (_QWORD *)v9;
      }
    }
    v7 = v5;
    goto LABEL_6;
  }
LABEL_16:
  operator delete(a1);
}
