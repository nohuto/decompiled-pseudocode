/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400B5900
 * Callers:
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400B4278 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400B550C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x14003BABC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1400B60E0 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400B676C (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400B6840 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400B6868 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400B6ADC (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AllocateVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct _RTL_AVL_TREE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct VIDMM_VAD **a8,
        unsigned __int8 a9)
{
  unsigned __int8 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // r15d
  struct VIDMM_VAD *NodeInFreeList; // rax
  struct VIDMM_VAD *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r14
  unsigned __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rbx
  int v28; // ecx
  struct VIDMM_VAD **v29; // rsi
  struct VIDMM_VAD **v30; // rcx
  struct VIDMM_VAD *v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rcx
  struct VIDMM_VAD *Vad; // r14
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 result; // rax
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 *v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rbx
  __int64 v47; // rax
  _QWORD *v48; // r14
  struct _RTL_AVL_TREE *v49; // rax
  struct _RTL_BALANCED_NODE *v50; // rbx
  struct _RTL_BALANCED_NODE *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  unsigned __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v58; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v59; // [rsp+58h] [rbp-70h]
  unsigned __int64 v60; // [rsp+60h] [rbp-68h]
  unsigned __int64 v61; // [rsp+68h] [rbp-60h]
  unsigned __int64 v62; // [rsp+70h] [rbp-58h]
  __int64 v63; // [rsp+78h] [rbp-50h]
  __int64 v64; // [rsp+80h] [rbp-48h]
  __int64 v65; // [rsp+88h] [rbp-40h]
  __int64 v66; // [rsp+90h] [rbp-38h]
  struct _RTL_AVL_TREE *v67; // [rsp+D8h] [rbp+10h] BYREF

  v67 = a2;
  v11 = a9;
  if ( a9 )
  {
    v12 = *((_QWORD *)this + 12);
    if ( !v12 || (*(_DWORD *)(v12 + 96) & 2) != 0 && !*(_BYTE *)(*((_QWORD *)this + 11) + 40105LL) )
      v11 = 0;
  }
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 6944);
  else
    v14 = 1;
  v15 = a3 + a4;
  if ( a3 + a4 <= a4 )
  {
    WdLogSingleEntry2(1LL, a4, a3 + a4);
    WdLogGlobalForLineNumber = 1176;
    DxgkLogInternalTriageEvent(v43, 0x40000LL);
    return 3221225485LL;
  }
  else if ( !a7 || (v16 = a7 - 1, ((unsigned int)v16 & a7) != 0) )
  {
    WdLogSingleEntry1(1LL, a7);
    WdLogGlobalForLineNumber = 1182;
    DxgkLogInternalTriageEvent(v52, 0x40000LL);
    return 3221225485LL;
  }
  else
  {
    v59 = 0LL;
    v64 = ~v16;
    v65 = 0LL;
    v66 = 0LL;
    v63 = (unsigned int)v16;
    if ( ((unsigned int)v16 & (unsigned int)a4) != 0 )
    {
      WdLogSingleEntry2(1LL, a4, a7);
      WdLogGlobalForLineNumber = 1192;
      DxgkLogInternalTriageEvent(v53, 0x40000LL);
      return 3221225485LL;
    }
    else
    {
      v17 = a6;
      v18 = a5;
      v58 = a4;
      v59 = a3 + a4;
      v60 = a5;
      if ( !a6 )
        v17 = *((_QWORD *)this + 2);
      v61 = v17;
      v19 = 0;
      v62 = a3;
      if ( v11 && dword_14008159C && v15 != *((_QWORD *)this + 2) )
      {
        v54 = a3 + 4096;
        if ( a3 + 4096 < a3 || v15 + 4096 < v15 )
        {
          WdLogSingleEntry0(1LL);
          HIDWORD(v57) = 0;
          WdLogGlobalForLineNumber = 1214;
          DxgkLogInternalTriageEvent(v55, 0x40000LL);
          a3 = v62;
          v17 = v61;
          v18 = v60;
        }
        else
        {
          a3 += 4096LL;
          v62 = v54;
          v59 = v15 + 4096;
          v19 = 1;
        }
      }
      if ( v18 >= v17 || v17 - v18 < a3 )
        return 3221225485LL;
      NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, &v58);
      v21 = NodeInFreeList;
      if ( NodeInFreeList )
      {
        v22 = *((_QWORD *)NodeInFreeList + 3);
        v23 = v65;
        v24 = v65 + v62;
        if ( v22 == v65 )
        {
          if ( *((_QWORD *)NodeInFreeList + 4) - v22 == v62 )
          {
            if ( (byte_140081242 & 0x40) != 0 )
            {
              LODWORD(v57) = *((_DWORD *)NodeInFreeList + 18);
              McTemplateK0pqxx_EtwWriteTransfer(
                v22,
                &DestroyGpuVirtualAddressRange,
                *((_QWORD *)NodeInFreeList + 4),
                this,
                v57,
                v22,
                *((_QWORD *)NodeInFreeList + 4));
            }
            RtlAvlRemoveNode((char *)this + 40, v21);
            v29 = a8;
            *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
            *v29 = v21;
LABEL_37:
            *((_DWORD *)*v29 + 18) = (v19 << 12) | *((_DWORD *)*v29 + 18) & 0xFFFFEFFF;
            return 0LL;
          }
          v25 = operator new[](8 * v14 + 96, 0x39346956u, 256LL);
          v27 = v25;
          if ( v25 )
          {
            v28 = *(_DWORD *)(v25 + 72);
            *(_QWORD *)(v25 + 24) = v23;
            *(_QWORD *)(v25 + 32) = v24;
            *(_DWORD *)(v25 + 72) = v28 ^ ((unsigned __int16)v28 ^ (unsigned __int16)(16 * v14)) & 0x7F0;
            if ( v14 )
              memset((void *)(v25 + 96), 0, 8LL * v14);
            v29 = a8;
            *(_QWORD *)(v27 + 88) = v27 + 80;
            *(_QWORD *)(v27 + 80) = v27 + 80;
            v30 = (struct VIDMM_VAD **)*((_QWORD *)v21 + 6);
            *v29 = (struct VIDMM_VAD *)v27;
            v31 = (struct VIDMM_VAD *)(v27 + 40);
            if ( *v30 != (struct VIDMM_VAD *)((char *)v21 + 40) )
              goto LABEL_23;
            *(_QWORD *)v31 = (char *)v21 + 40;
            *((_QWORD *)v31 + 1) = v30;
            *v30 = v31;
            *((_QWORD *)v21 + 6) = v31;
            if ( (byte_140081242 & 0x40) != 0 )
            {
              LODWORD(v57) = *((_DWORD *)v21 + 18);
              McTemplateK0pqxx_EtwWriteTransfer(
                (__int64)v30,
                &DestroyGpuVirtualAddressRange,
                v26,
                this,
                v57,
                *((_QWORD *)v21 + 3),
                *((_QWORD *)v21 + 4));
            }
            RtlAvlRemoveNode((char *)this + 40, v21);
            *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
            LOBYTE(v40) = 0;
            v49 = (struct _RTL_AVL_TREE *)(*((_QWORD *)v21 + 4) - v24);
            *((_QWORD *)v21 + 3) = v24;
            v50 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
            v67 = v49;
            if ( v50 )
            {
              while ( 1 )
              {
                if ( (int)CompareVadSizeAvl(&v67, v50) < 0 )
                {
                  v51 = v50->Children[0];
                  if ( !v50->Children[0] )
                  {
                    LOBYTE(v40) = 0;
                    break;
                  }
                }
                else
                {
                  v51 = v50->Children[1];
                  if ( !v51 )
                  {
                    LOBYTE(v40) = 1;
                    break;
                  }
                }
                v50 = v51;
              }
            }
            RtlAvlInsertNodeEx((char *)this + 40, v50, v40, v21);
            v42 = *((_DWORD *)v21 + 18) & 0xFFFFE7F0 | 1;
            *((_DWORD *)v21 + 18) = v42;
            if ( (byte_140081242 & 0x40) != 0 )
            {
              LODWORD(v57) = v42;
              McTemplateK0pqxx_EtwWriteTransfer(
                v42,
                &CreateGpuVirtualAddressRange,
                v41,
                this,
                v57,
                *((_QWORD *)v21 + 3),
                *((_QWORD *)v21 + 4));
            }
            goto LABEL_37;
          }
          _InterlockedIncrement(&dword_1400817BC);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1274;
        }
        else
        {
          v32 = operator new[](8 * v14 + 96, 0x39346956u, 256LL);
          v34 = v32;
          if ( v32 )
          {
            v35 = *(unsigned int *)(v32 + 72);
            *(_QWORD *)(v32 + 24) = v23;
            *(_QWORD *)(v32 + 32) = v24;
            *(_DWORD *)(v32 + 72) = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(16 * v14)) & 0x7F0;
            if ( v14 )
              memset((void *)(v32 + 96), 0, 8LL * v14);
            Vad = 0LL;
            *(_QWORD *)(v34 + 88) = v34 + 80;
            *(_QWORD *)(v34 + 80) = v34 + 80;
            v37 = *((_QWORD *)v21 + 4);
            if ( v24 >= v37 || (Vad = CVirtualAddressAllocator::AllocateVad(v24, v37, v14)) != 0LL )
            {
              if ( (byte_140081242 & 0x40) != 0 )
              {
                LODWORD(v57) = *((_DWORD *)v21 + 18);
                McTemplateK0pqxx_EtwWriteTransfer(
                  v35,
                  &DestroyGpuVirtualAddressRange,
                  v33,
                  this,
                  v57,
                  *((_QWORD *)v21 + 3),
                  *((_QWORD *)v21 + 4));
              }
              RtlAvlRemoveNode((char *)this + 40, v21);
              *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
              *((_QWORD *)v21 + 4) = v65;
              CVirtualAddressAllocator::InsertVadToFreeList(this, v21);
              v29 = a8;
              v44 = (__int64 *)((char *)v21 + 40);
              v45 = *v44;
              *a8 = (struct VIDMM_VAD *)v34;
              v46 = (_QWORD *)(v34 + 40);
              if ( *(__int64 **)(v45 + 8) != v44 )
LABEL_23:
                __fastfail(3u);
              *v46 = v45;
              v46[1] = v44;
              *(_QWORD *)(v45 + 8) = v46;
              *v44 = (__int64)v46;
              if ( Vad )
              {
                CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
                v47 = *v46;
                v48 = (_QWORD *)((char *)Vad + 40);
                if ( *(_QWORD **)(*v46 + 8LL) != v46 )
                  goto LABEL_23;
                *v48 = v47;
                v48[1] = v46;
                *(_QWORD *)(v47 + 8) = v48;
                *v46 = v48;
              }
              goto LABEL_37;
            }
            _InterlockedIncrement(&dword_1400817BC);
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 1320;
            DxgkLogInternalTriageEvent(v38, 262145LL);
            CVirtualAddressAllocator::FreeVad((struct VIDMM_VAD *)v34);
            return 3221225495LL;
          }
          _InterlockedIncrement(&dword_1400817BC);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1307;
        }
        DxgkLogInternalTriageEvent(v56, 262145LL);
        return 3221225495LL;
      }
      WdLogSingleEntry0(3LL);
      result = 3221225473LL;
      WdLogGlobalForLineNumber = 1236;
    }
  }
  return result;
}
