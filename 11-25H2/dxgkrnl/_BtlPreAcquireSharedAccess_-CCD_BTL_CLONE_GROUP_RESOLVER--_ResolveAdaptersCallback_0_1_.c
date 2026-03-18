/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1403BD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14001E480 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030728 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x14004F6E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x14007E0AC (DxgkIsMSBDDFallbackEnabled.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1402CE7D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1403BD8BC (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  unsigned int v3; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  VIDPN_MGR *v11; // rbx
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  unsigned int v13; // esi
  _QWORD *v15; // rax
  struct DMMVIDPN *v16; // rbx
  int v17; // r13d
  unsigned int j; // r12d
  int v19; // eax
  ReferenceCounted *v20; // rcx
  int v21; // ebx
  unsigned int i; // r12d
  int v23; // eax
  struct DMMVIDPN *v24; // [rsp+30h] [rbp-A9h] BYREF
  __int64 v25; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v26[8]; // [rsp+40h] [rbp-99h] BYREF
  struct DXGADAPTER *v27; // [rsp+48h] [rbp-91h]
  char v28; // [rsp+50h] [rbp-89h]
  __int64 v29; // [rsp+58h] [rbp-81h]
  _BYTE v30[144]; // [rsp+60h] [rbp-79h] BYREF

  v27 = a1;
  v3 = 0;
  v28 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v15[3] = a1;
      v15[4] = *((int *)a1 + 104);
      v15[5] = *((unsigned int *)a1 + 103);
      v15[6] = this;
      WdLogGlobalForLineNumber = 60;
    }
    else
    {
      v3 = v5;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    return v3;
  }
  if ( *((_BYTE *)a1 + 3017) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    return 0LL;
  }
  v10 = *((_QWORD *)a1 + 390);
  if ( !v10 )
  {
    v13 = 0;
    goto LABEL_10;
  }
  if ( !*((_BYTE *)this + 16) && !*(_BYTE *)(v10 + 290) )
  {
LABEL_28:
    v21 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(*(_QWORD *)this + 32LL) )
      {
        v13 = v21 == 0 ? 0x8000001A : 0;
        goto LABEL_10;
      }
      if ( (*(_QWORD *)(296LL * i + *((_QWORD *)this + 1) + 56) & 0x200000000000LL) == 0 )
      {
        v23 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, i, 0LL);
        v13 = v23;
        if ( v23 == -1073741275 )
        {
          ++v21;
        }
        else if ( v23 < 0 )
        {
          WdLogSingleEntry5(2LL, v23, a1, *((_QWORD *)this + 1), *(_QWORD *)this, i);
          WdLogGlobalForLineNumber = 331;
          goto LABEL_10;
        }
      }
    }
  }
  v11 = *(VIDPN_MGR **)(v10 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v25, (__int64)v11);
  v24 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v11, (__int64 *)&v24);
  v13 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
  {
    WdLogSingleEntry5(
      2LL,
      ClientVidPnFromLastClientCommitedVidPn,
      v11,
      *((_QWORD *)this + 1),
      *((int *)a1 + 104),
      *((unsigned int *)a1 + 103));
    WdLogGlobalForLineNumber = 269;
    if ( v24 )
    {
      v20 = (struct DMMVIDPN *)((char *)v24 + 24);
LABEL_40:
      ReferenceCounted::Release(v20);
    }
    goto LABEL_9;
  }
  v16 = v24;
  v17 = 0;
  for ( j = 0; j < *(unsigned __int16 *)(*(_QWORD *)this + 32LL); ++j )
  {
    v29 = j;
    if ( !_bittest64((const signed __int64 *)(296LL * j + *((_QWORD *)this + 1) + 56), 0x2Du) )
    {
      v19 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, j, v16);
      v13 = v19;
      if ( v19 == -1073741275 )
      {
        ++v17;
      }
      else if ( v19 < 0 )
      {
        WdLogSingleEntry5(2LL, v19, a1, *((_QWORD *)this + 1), *(_QWORD *)this, v29);
        WdLogGlobalForLineNumber = 295;
        if ( v16 )
        {
          v20 = (struct DMMVIDPN *)((char *)v16 + 24);
          goto LABEL_40;
        }
LABEL_9:
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
        goto LABEL_10;
      }
    }
  }
  if ( v17 )
  {
    if ( v16 )
      ReferenceCounted::Release((struct DMMVIDPN *)((char *)v16 + 24));
    v24 = 0LL;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
    goto LABEL_28;
  }
  if ( v16 )
    ReferenceCounted::Release((struct DMMVIDPN *)((char *)v16 + 24));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
  v13 = -2147483622;
LABEL_10:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  return v13;
}
