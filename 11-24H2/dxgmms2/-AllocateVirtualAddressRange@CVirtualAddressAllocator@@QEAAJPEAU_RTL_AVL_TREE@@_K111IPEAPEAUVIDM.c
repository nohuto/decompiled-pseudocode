/*
 * XREFs of ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400BD1F0
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x14009AF84 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400BC21C (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400BCFA0 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1400249FC (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z @ 0x1400BD940 (-FindNodeInFreeList@CVirtualAddressAllocator@@IEAAPEAUVIDMM_VAD@@PEAX@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400BDC60 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400BDD30 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400BDD58 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1400BDE04 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
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
  unsigned int v14; // r15d
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int v19; // r14d
  struct VIDMM_VAD *NodeInFreeList; // rax
  struct VIDMM_VAD *v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  struct VIDMM_VAD *Vad; // rax
  __int64 v25; // r8
  struct VIDMM_VAD **v26; // rsi
  __int64 v27; // rcx
  __int64 **v28; // rdx
  __int64 *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  struct VIDMM_VAD *v32; // r12
  __int64 v33; // rcx
  __int64 result; // rax
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  struct VIDMM_VAD *v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rdi
  __int64 v43; // rax
  _QWORD *v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // r13
  struct _RTL_AVL_TREE *v47; // rax
  struct _RTL_BALANCED_NODE *v48; // rbx
  struct _RTL_BALANCED_NODE *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v56; // [rsp+58h] [rbp-70h]
  unsigned __int64 v57; // [rsp+60h] [rbp-68h]
  unsigned __int64 v58; // [rsp+68h] [rbp-60h]
  unsigned __int64 v59; // [rsp+70h] [rbp-58h]
  __int64 v60; // [rsp+78h] [rbp-50h]
  __int64 v61; // [rsp+80h] [rbp-48h]
  unsigned __int64 v62; // [rsp+88h] [rbp-40h]
  __int64 v63; // [rsp+90h] [rbp-38h]
  struct _RTL_AVL_TREE *v64; // [rsp+D8h] [rbp+10h] BYREF

  v64 = a2;
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
    WdLogGlobalForLineNumber = 1521;
    DxgkLogInternalTriageEvent(v41, 0x40000LL);
    return 3221225485LL;
  }
  else if ( !a7 || (v16 = a7 - 1, ((unsigned int)v16 & a7) != 0) )
  {
    WdLogSingleEntry1(1LL, a7);
    WdLogGlobalForLineNumber = 1527;
    DxgkLogInternalTriageEvent(v50, 0x40000LL);
    return 3221225485LL;
  }
  else
  {
    v56 = 0LL;
    v61 = ~v16;
    v62 = 0LL;
    v63 = 0LL;
    v60 = (unsigned int)v16;
    if ( ((unsigned int)v16 & (unsigned int)a4) != 0 )
    {
      WdLogSingleEntry2(1LL, a4, a7);
      WdLogGlobalForLineNumber = 1537;
      DxgkLogInternalTriageEvent(v51, 0x40000LL);
      return 3221225485LL;
    }
    else
    {
      v17 = a6;
      v18 = a5;
      v55 = a4;
      v56 = a3 + a4;
      v57 = a5;
      if ( !a6 )
        v17 = *((_QWORD *)this + 2);
      v58 = v17;
      v19 = 0;
      v59 = a3;
      if ( v11 && dword_1400815BC && v15 != *((_QWORD *)this + 2) )
      {
        v52 = a3 + 4096;
        if ( a3 + 4096 < a3 || v15 + 4096 < v15 )
        {
          WdLogSingleEntry0(1LL);
          HIDWORD(v54) = 0;
          WdLogGlobalForLineNumber = 1559;
          DxgkLogInternalTriageEvent(v53, 0x40000LL);
          a3 = v59;
          v17 = v58;
          v18 = v57;
        }
        else
        {
          a3 += 4096LL;
          v59 = v52;
          v56 = v15 + 4096;
          v19 = 1;
        }
      }
      if ( v18 >= v17 || v17 - v18 < a3 )
      {
        return 3221225485LL;
      }
      else
      {
        NodeInFreeList = CVirtualAddressAllocator::FindNodeInFreeList(this, &v55);
        v21 = NodeInFreeList;
        if ( NodeInFreeList )
        {
          v22 = *((_QWORD *)NodeInFreeList + 3);
          v23 = v62 + v59;
          if ( v22 == v62 )
          {
            if ( *((_QWORD *)NodeInFreeList + 4) - v22 != v59 )
            {
              Vad = CVirtualAddressAllocator::AllocateVad(v62, v23, v14);
              if ( Vad )
              {
                v26 = a8;
                v27 = (__int64)v21 + 40;
                v28 = (__int64 **)*((_QWORD *)v21 + 6);
                *a8 = Vad;
                v29 = (__int64 *)((char *)Vad + 40);
                if ( *v28 != (__int64 *)((char *)v21 + 40) )
                  goto LABEL_21;
                *v29 = v27;
                v29[1] = (__int64)v28;
                *v28 = v29;
                *((_QWORD *)v21 + 6) = v29;
                if ( (byte_140081242 & 0x40) != 0 )
                {
                  LODWORD(v54) = *((_DWORD *)v21 + 18);
                  McTemplateK0pqxx_EtwWriteTransfer(
                    v27,
                    &DestroyGpuVirtualAddressRange,
                    v25,
                    this,
                    v54,
                    *((_QWORD *)v21 + 3),
                    *((_QWORD *)v21 + 4));
                }
                RtlAvlRemoveNode((char *)this + 40, v21);
                *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
                LOBYTE(v35) = 0;
                v47 = (struct _RTL_AVL_TREE *)(*((_QWORD *)v21 + 4) - v23);
                *((_QWORD *)v21 + 3) = v23;
                v48 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
                v64 = v47;
                if ( v48 )
                {
                  while ( 1 )
                  {
                    if ( (int)CompareVadSizeAvl(&v64, v48) < 0 )
                    {
                      v49 = v48->Children[0];
                      if ( !v48->Children[0] )
                      {
                        LOBYTE(v35) = 0;
                        break;
                      }
                    }
                    else
                    {
                      v49 = v48->Children[1];
                      if ( !v49 )
                      {
                        LOBYTE(v35) = 1;
                        break;
                      }
                    }
                    v48 = v49;
                  }
                }
                RtlAvlInsertNodeEx((char *)this + 40, v48, v35, v21);
                v37 = *((_DWORD *)v21 + 18) & 0xFFFFE7F0 | 1;
                *((_DWORD *)v21 + 18) = v37;
                if ( (byte_140081242 & 0x40) != 0 )
                {
                  LODWORD(v54) = v37;
                  McTemplateK0pqxx_EtwWriteTransfer(
                    v37,
                    &CreateGpuVirtualAddressRange,
                    v36,
                    this,
                    v54,
                    *((_QWORD *)v21 + 3),
                    *((_QWORD *)v21 + 4));
                }
                goto LABEL_28;
              }
              _InterlockedIncrement(&dword_1400817DC);
              WdLogSingleEntry0(6LL);
              WdLogGlobalForLineNumber = 1619;
LABEL_24:
              DxgkLogInternalTriageEvent(v33, 262145LL);
              return 3221225495LL;
            }
            if ( (byte_140081242 & 0x40) != 0 )
            {
              LODWORD(v54) = *((_DWORD *)NodeInFreeList + 18);
              McTemplateK0pqxx_EtwWriteTransfer(
                v62,
                &DestroyGpuVirtualAddressRange,
                v59,
                this,
                v54,
                v22,
                *((_QWORD *)NodeInFreeList + 4));
            }
            RtlAvlRemoveNode((char *)this + 40, v21);
            v26 = a8;
            *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
            *v26 = v21;
LABEL_28:
            *((_DWORD *)*v26 + 18) = (v19 << 12) | *((_DWORD *)*v26 + 18) & 0xFFFFEFFF;
            return 0LL;
          }
          v32 = CVirtualAddressAllocator::AllocateVad(v62, v23, v14);
          if ( !v32 )
          {
            _InterlockedIncrement(&dword_1400817DC);
            WdLogSingleEntry0(6LL);
            WdLogGlobalForLineNumber = 1652;
            goto LABEL_24;
          }
          v38 = *((_QWORD *)v21 + 4);
          v39 = 0LL;
          if ( v23 >= v38 || (v39 = CVirtualAddressAllocator::AllocateVad(v23, v38, v14)) != 0LL )
          {
            if ( (byte_140081242 & 0x40) != 0 )
            {
              LODWORD(v54) = *((_DWORD *)v21 + 18);
              McTemplateK0pqxx_EtwWriteTransfer(
                v30,
                &DestroyGpuVirtualAddressRange,
                v31,
                this,
                v54,
                *((_QWORD *)v21 + 3),
                *((_QWORD *)v21 + 4));
            }
            RtlAvlRemoveNode((char *)this + 40, v21);
            *((_DWORD *)v21 + 18) &= 0xFFFFFFF0;
            *((_QWORD *)v21 + 4) = v62;
            CVirtualAddressAllocator::InsertVadToFreeList(this, v21);
            v26 = a8;
            v42 = (__int64 *)((char *)v21 + 40);
            v43 = *v42;
            *a8 = v32;
            v44 = (_QWORD *)((char *)v32 + 40);
            if ( *(__int64 **)(v43 + 8) == v42 )
            {
              *v44 = v43;
              v44[1] = v42;
              *(_QWORD *)(v43 + 8) = v44;
              *v42 = (__int64)v44;
              if ( !v39 )
                goto LABEL_28;
              CVirtualAddressAllocator::InsertVadToFreeList(this, v39);
              v45 = *v44;
              v46 = (_QWORD *)((char *)v39 + 40);
              if ( *(_QWORD **)(*v44 + 8LL) == v44 )
              {
                *v46 = v45;
                v46[1] = v44;
                *(_QWORD *)(v45 + 8) = v46;
                *v44 = v46;
                goto LABEL_28;
              }
            }
LABEL_21:
            __fastfail(3u);
          }
          _InterlockedIncrement(&dword_1400817DC);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 1665;
          DxgkLogInternalTriageEvent(v40, 262145LL);
          CVirtualAddressAllocator::FreeVad(v32);
          return 3221225495LL;
        }
        else
        {
          WdLogSingleEntry0(3LL);
          result = 3221225473LL;
          WdLogGlobalForLineNumber = 1581;
        }
      }
    }
  }
  return result;
}
