/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400FBFBC
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z @ 0x14009B574 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EEE@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1400A8F40 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400B4660 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400E6660 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400FBBC4 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1400249FC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140037628 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400BDC60 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400BDE04 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400F5530 (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     RemoveVaRangeCb @ 0x1400FCB0C (RemoveVaRangeCb.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  struct VIDMM_VAD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 **v17; // rdx
  _QWORD **v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  VIDMM_MAPPED_VA_RANGE *v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 **v24; // r8
  __int64 *v25; // rcx
  __int64 v26; // rdx
  _DWORD *v27; // rdi
  __int64 v28; // rdx
  struct VIDMM_VAD **v29; // rcx
  char *v30; // rdi
  _DWORD *v31; // rsi
  __int64 v32; // rcx
  char **v33; // rax

  v3 = (_QWORD *)((char *)a2 + 56);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 7);
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_31;
    v7 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v7 != v3 )
      goto LABEL_31;
    *v7 = v5;
    *(_QWORD *)(v5 + 8) = v7;
    *v3 = 0LL;
  }
  v8 = *((unsigned int *)v4 + 18);
  v9 = 0;
  if ( (v8 & 0x7F0) != 0 )
  {
    while ( 1 )
    {
      v10 = v9 + 4LL;
      v11 = 3 * v10;
      v12 = (_QWORD *)*((_QWORD *)v4 + 3 * v10);
      if ( v12 )
        break;
LABEL_13:
      *((_QWORD *)v4 + v11) = 0LL;
      if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
      {
        v18 = (_QWORD **)((char *)v4 + 8 * v11 + 8);
        while ( 1 )
        {
          v19 = *v18;
          if ( *v18 == v18 )
            break;
          if ( (_QWORD **)v19[1] != v18 )
            goto LABEL_31;
          v20 = (_QWORD *)*v19;
          if ( *(_QWORD **)(*v19 + 8LL) != v19 )
            goto LABEL_31;
          *v18 = v20;
          v20[1] = v18;
          v21 = (VIDMM_MAPPED_VA_RANGE *)(v19 - 1);
          *((_DWORD *)v19 + 16) &= ~0x8000u;
          v22 = v19 + 3;
          v23 = *v22;
          if ( *v22 )
          {
            if ( *(__int64 **)(v23 + 8) != v22 )
              goto LABEL_31;
            v17 = (__int64 **)v22[1];
            if ( *v17 != v22 )
              goto LABEL_31;
            *v17 = (__int64 *)v23;
            *(_QWORD *)(v23 + 8) = v17;
            *v22 = 0LL;
          }
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v21, (unsigned int)v17);
        }
      }
      v8 = *((unsigned int *)v4 + 18);
      if ( ++v9 >= ((*((_DWORD *)v4 + 18) >> 4) & 0x7Fu) )
        goto LABEL_24;
    }
    while ( 1 )
    {
      v13 = (_QWORD *)*v12;
      if ( *v12 )
        break;
      v14 = v12 + 1;
      v13 = (_QWORD *)v12[1];
      if ( v13 )
      {
LABEL_10:
        *v14 = 0LL;
        v12 = v13;
      }
      else
      {
        v15 = v12[2];
        RemoveVaRangeCb(v12, this);
        v16 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v16 )
          goto LABEL_13;
        v12 = (_QWORD *)v16;
      }
    }
    v14 = v12;
    goto LABEL_10;
  }
LABEL_24:
  if ( (byte_140081242 & 0x40) != 0 )
    McTemplateK0pqxx_EtwWriteTransfer(
      v8,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v8,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  RtlAvlRemoveNode((char *)this + 48, v4);
  *((_DWORD *)v4 + 18) &= 0xFFFFFFF0;
  v24 = (__int64 **)((char *)v4 + 80);
  while ( 1 )
  {
    v25 = *v24;
    v26 = **v24;
    if ( (__int64 **)(*v24)[1] != v24 || *(__int64 **)(v26 + 8) != v25 )
      goto LABEL_31;
    *v24 = (__int64 *)v26;
    *(_QWORD *)(v26 + 8) = v24;
    if ( v25 == (__int64 *)v24 )
      break;
    *(_QWORD *)v25[2] = 0LL;
    *v25 = 0LL;
    v25[1] = 0LL;
  }
  v27 = (_DWORD *)*((_QWORD *)v4 + 6);
  if ( v27 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v4 + 3) == *((_QWORD *)v27 - 1) && (v27[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v27 - 10), (__int64)v24);
    *((_QWORD *)v27 - 1) = *((_QWORD *)v4 + 4);
    v28 = *((_QWORD *)v4 + 5);
    if ( *(struct VIDMM_VAD **)(v28 + 8) != (struct VIDMM_VAD *)((char *)v4 + 40) )
      goto LABEL_31;
    v29 = (struct VIDMM_VAD **)*((_QWORD *)v4 + 6);
    if ( *v29 != (struct VIDMM_VAD *)((char *)v4 + 40) )
      goto LABEL_31;
    *v29 = (struct VIDMM_VAD *)v28;
    *(_QWORD *)(v28 + 8) = v29;
    CVirtualAddressAllocator::FreeVad(v4);
    v4 = (struct VIDMM_VAD *)(v27 - 10);
  }
  v30 = (char *)v4 + 40;
  v31 = (_DWORD *)*((_QWORD *)v4 + 5);
  if ( v31 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v4 + 4) == *((_QWORD *)v31 - 2) && (v31[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v31 - 10), (__int64)v24);
    *((_QWORD *)v31 - 2) = *((_QWORD *)v4 + 3);
    v32 = *(_QWORD *)v30;
    if ( *(char **)(*(_QWORD *)v30 + 8LL) == v30 )
    {
      v33 = (char **)*((_QWORD *)v4 + 6);
      if ( *v33 == v30 )
      {
        *v33 = (char *)v32;
        *(_QWORD *)(v32 + 8) = v33;
        CVirtualAddressAllocator::FreeVad(v4);
        v4 = (struct VIDMM_VAD *)(v31 - 10);
        goto LABEL_44;
      }
    }
LABEL_31:
    __fastfail(3u);
  }
LABEL_44:
  CVirtualAddressAllocator::InsertVadToFreeList(this, v4);
}
