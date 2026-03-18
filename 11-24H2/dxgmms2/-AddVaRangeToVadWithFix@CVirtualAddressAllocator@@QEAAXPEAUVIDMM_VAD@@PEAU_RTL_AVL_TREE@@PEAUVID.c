/*
 * XREFs of ?AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAU_RTL_AVL_TREE@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099F98
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x140099824 (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAUVIDMM_MAPPED.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140037894 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     CompareVaRangeAddressWithin @ 0x1400FF750 (CompareVaRangeAddressWithin.c)
 */

void __fastcall CVirtualAddressAllocator::AddVaRangeToVadWithFix(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _RTL_AVL_TREE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4)
{
  _QWORD *VidMmAllocFromOwner; // rax
  __int64 v9; // r8
  __int64 *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *i; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rdx

  VidMmAllocFromOwner = (_QWORD *)GetVidMmAllocFromOwner(*((_DWORD *)a4 + 18) & 0xF, *((_QWORD *)a4 + 8));
  if ( VidMmAllocFromOwner )
  {
    v10 = (__int64 *)*VidMmAllocFromOwner;
    v11 = (_QWORD *)((char *)a4 + 32);
    v12 = VidMmAllocFromOwner + 16;
    v9 = *v10;
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_19;
    *v11 = v13;
    *((_QWORD *)a4 + 5) = v12;
    *(_QWORD *)(v13 + 8) = v11;
    *v12 = v11;
    if ( *((__int64 *)a4 + 11) < 0 )
    {
      for ( i = *(_QWORD **)(v9 + 96); i != (_QWORD *)(v9 + 96); i = (_QWORD *)*i )
      {
        if ( *((_QWORD *)a4 + 10) <= i[4] )
          break;
      }
      v15 = (_QWORD *)i[1];
      v16 = (_QWORD *)((char *)a4 + 48);
      if ( (_QWORD *)*v15 != i )
LABEL_19:
        __fastfail(3u);
      *v16 = i;
      *((_QWORD *)a4 + 7) = v15;
      *v15 = v16;
      i[1] = v16;
    }
  }
  v17 = *(_QWORD **)a3;
  LOBYTE(v9) = 0;
  if ( *(_QWORD *)a3 )
  {
    while ( 1 )
    {
      if ( (int)CompareVaRangeAddressWithin((char *)a4 + 104, v17) < 0 )
      {
        v18 = (_QWORD *)*v17;
        if ( !*v17 )
        {
          LOBYTE(v9) = 0;
          break;
        }
      }
      else
      {
        v18 = (_QWORD *)v17[1];
        if ( !v18 )
        {
          LOBYTE(v9) = 1;
          break;
        }
      }
      v17 = v18;
    }
  }
  RtlAvlInsertNodeEx(a3, v17, v9, (char *)a4 + 8);
  *((_DWORD *)a4 + 18) |= 0x4000u;
  ++*((_DWORD *)a2 + 19);
  if ( (*((_BYTE *)a4 + 96) & 4) != 0 )
  {
    v19 = (_QWORD *)((char *)a2 + 56);
    if ( !*((_QWORD *)a2 + 7) )
    {
      v20 = (_QWORD *)((char *)this + 128);
      v21 = *((_QWORD *)this + 16);
      if ( *(CVirtualAddressAllocator **)(v21 + 8) != (CVirtualAddressAllocator *)((char *)this + 128) )
        goto LABEL_19;
      *v19 = v21;
      *((_QWORD *)a2 + 8) = v20;
      *(_QWORD *)(v21 + 8) = v19;
      *v20 = v19;
    }
  }
}
