/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B6400
 * Callers:
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400A9270 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400AC280 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAllocator@@_K2E@Z @ 0x1400B519C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVCVirtualAddressAll.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z @ 0x1400B575C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_MAPPED_VA_RANGE@@EE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x14010188C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x14003BABC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400B6840 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400B6868 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     RemoveVaRangeCb @ 0x1400B6904 (RemoveVaRangeCb.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  struct VIDMM_VAD *v4; // rbx
  __int64 v5; // rdx
  char v6; // di
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  _QWORD *v11; // rcx
  __int64 v12; // r8
  char *v13; // rdx
  char *v14; // rcx
  __int64 v15; // rax
  unsigned int *v16; // rsi
  char *v17; // rcx
  __int64 v18; // rdx
  struct VIDMM_VAD **v19; // rax
  char *v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rcx
  char **v24; // rax
  struct _RTL_BALANCED_NODE *v25; // rsi
  struct _RTL_BALANCED_NODE *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  __int64 v33; // [rsp+20h] [rbp-38h]
  __int64 v34; // [rsp+68h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)a2 + 56);
  v4 = a2;
  v5 = *((_QWORD *)a2 + 7);
  v6 = 0;
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 )
      goto LABEL_43;
    v8 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v8 != v3 )
      goto LABEL_43;
    *v8 = v5;
    *(_QWORD *)(v5 + 8) = v8;
    *v3 = 0LL;
  }
  v9 = *((unsigned int *)v4 + 18);
  v10 = 0;
  if ( (v9 & 0x7F0) != 0 )
  {
    while ( 1 )
    {
      v11 = (_QWORD *)*((_QWORD *)v4 + v10 + 12);
      if ( v11 )
        break;
LABEL_7:
      *((_QWORD *)v4 + v10++ + 12) = 0LL;
      v9 = *((unsigned int *)v4 + 18);
      if ( v10 >= ((*((_DWORD *)v4 + 18) >> 4) & 0x7Fu) )
        goto LABEL_8;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v29 = (_QWORD *)*v11;
        if ( !*v11 )
          break;
        v30 = v11;
LABEL_46:
        v11 = v29;
        *v30 = 0LL;
      }
      v30 = v11 + 1;
      v29 = (_QWORD *)v11[1];
      if ( v29 )
        goto LABEL_46;
      v31 = v11[2];
      RemoveVaRangeCb(v11, this);
      v32 = v31 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v32 )
        goto LABEL_7;
      v11 = (_QWORD *)v32;
    }
  }
LABEL_8:
  if ( (byte_140081242 & 0x40) != 0 )
    McTemplateK0pqxx_EtwWriteTransfer(
      v9,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v9,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  RtlAvlRemoveNode((char *)this + 48, v4);
  *((_DWORD *)v4 + 18) &= 0xFFFFFFF0;
  v13 = (char *)v4 + 80;
  while ( 1 )
  {
    v14 = *(char **)v13;
    if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 )
      goto LABEL_43;
    v15 = *(_QWORD *)v14;
    if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 )
      goto LABEL_43;
    *(_QWORD *)v13 = v15;
    *(_QWORD *)(v15 + 8) = v13;
    if ( v14 == v13 )
      break;
    **((_QWORD **)v14 + 2) = 0LL;
    *(_QWORD *)v14 = 0LL;
    *((_QWORD *)v14 + 1) = 0LL;
  }
  v16 = (unsigned int *)*((_QWORD *)v4 + 6);
  v17 = (char *)this + 24;
  if ( v16 != (unsigned int *)((char *)this + 24) && *((_QWORD *)v4 + 3) == *((_QWORD *)v16 - 1) )
  {
    v12 = v16[8];
    if ( (v16[8] & 0xF) == 1 )
    {
      if ( (byte_140081242 & 0x40) != 0 )
      {
        LODWORD(v33) = v16[8];
        McTemplateK0pqxx_EtwWriteTransfer(
          (__int64)v17,
          &DestroyGpuVirtualAddressRange,
          v12,
          this,
          v33,
          *((_QWORD *)v16 - 2),
          *((_QWORD *)v16 - 1));
      }
      RtlAvlRemoveNode((char *)this + 40, v16 - 10);
      v16[8] &= 0xFFFFFFF0;
      *((_QWORD *)v16 - 1) = *((_QWORD *)v4 + 4);
      v18 = *((_QWORD *)v4 + 5);
      if ( *(struct VIDMM_VAD **)(v18 + 8) != (struct VIDMM_VAD *)((char *)v4 + 40) )
        goto LABEL_43;
      v19 = (struct VIDMM_VAD **)*((_QWORD *)v4 + 6);
      if ( *v19 != (struct VIDMM_VAD *)((char *)v4 + 40) )
        goto LABEL_43;
      *v19 = (struct VIDMM_VAD *)v18;
      *(_QWORD *)(v18 + 8) = v19;
      CVirtualAddressAllocator::FreeVad(v4);
      v17 = (char *)this + 24;
      v4 = (struct VIDMM_VAD *)(v16 - 10);
    }
  }
  v20 = (char *)v4 + 40;
  v21 = *((_QWORD *)v4 + 5);
  if ( (char *)v21 != v17 )
  {
    v22 = *(_QWORD *)(v21 - 16);
    if ( *((_QWORD *)v4 + 4) == v22 )
    {
      v12 = *(unsigned int *)(v21 + 32);
      if ( (*(_DWORD *)(v21 + 32) & 0xF) == 1 )
      {
        if ( (byte_140081242 & 0x40) != 0 )
        {
          LODWORD(v33) = *(_DWORD *)(v21 + 32);
          McTemplateK0pqxx_EtwWriteTransfer(
            v22,
            &DestroyGpuVirtualAddressRange,
            v12,
            this,
            v33,
            v22,
            *(_QWORD *)(v21 - 8));
        }
        RtlAvlRemoveNode((char *)this + 40, v21 - 40);
        *(_DWORD *)(v21 + 32) &= 0xFFFFFFF0;
        *(_QWORD *)(v21 - 16) = *((_QWORD *)v4 + 3);
        v23 = *(_QWORD *)v20;
        if ( *(char **)(*(_QWORD *)v20 + 8LL) == v20 )
        {
          v24 = (char **)*((_QWORD *)v4 + 6);
          if ( *v24 == v20 )
          {
            *v24 = (char *)v23;
            *(_QWORD *)(v23 + 8) = v24;
            CVirtualAddressAllocator::FreeVad(v4);
            v4 = (struct VIDMM_VAD *)(v21 - 40);
            goto LABEL_30;
          }
        }
LABEL_43:
        __fastfail(3u);
      }
    }
  }
LABEL_30:
  v25 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v34 = *((_QWORD *)v4 + 4) - *((_QWORD *)v4 + 3);
  if ( !v25 )
    goto LABEL_37;
  while ( (int)CompareVadSizeAvl(&v34, v25) < 0 )
  {
    v26 = v25->Children[0];
    if ( !v25->Children[0] )
      goto LABEL_37;
LABEL_33:
    v25 = v26;
  }
  v26 = v25->Children[1];
  if ( v26 )
    goto LABEL_33;
  v6 = 1;
LABEL_37:
  LOBYTE(v12) = v6;
  RtlAvlInsertNodeEx((char *)this + 40, v25, v12, v4);
  v28 = *((_DWORD *)v4 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v4 + 18) = v28;
  if ( (byte_140081242 & 0x40) != 0 )
  {
    LODWORD(v33) = v28;
    McTemplateK0pqxx_EtwWriteTransfer(
      v28,
      &CreateGpuVirtualAddressRange,
      v27,
      this,
      v33,
      *((_QWORD *)v4 + 3),
      *((_QWORD *)v4 + 4));
  }
}
