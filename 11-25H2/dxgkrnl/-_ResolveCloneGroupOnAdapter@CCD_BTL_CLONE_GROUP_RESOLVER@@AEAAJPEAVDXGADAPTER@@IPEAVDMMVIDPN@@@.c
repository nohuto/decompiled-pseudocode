/*
 * XREFs of ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1403BD8BC
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_0_1_ @ 0x1403BD4E0 (_BtlPreAcquireSharedAccess_-CCD_BTL_CLONE_GROUP_RESOLVER--_ResolveAdaptersCallback_0_1_.c)
 * Callees:
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402D597C (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140367198 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z @ 0x14036A6BC (-QueryUnicodeMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_UNICODE_STRING@@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1403D0330 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?QueryMonitorUniqueness@CCD_SET_STRING_ID@@QEBAJIPEAI@Z @ 0x1403E6F94 (-QueryMonitorUniqueness@CCD_SET_STRING_ID@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(
        CCD_SET_STRING_ID **this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        struct DMMVIDPN *a4)
{
  struct DMMVIDPN *v4; // r12
  __int64 v5; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 result; // rax
  CCD_SET_STRING_ID *v11; // rcx
  __int64 *v12; // r13
  unsigned int v13; // ebx
  int PathSourceFromTarget; // r14d
  int v15; // eax
  __int64 TargetIdFromCcdMonitorId; // r12
  CCD_SET_STRING_ID *v17; // rcx
  int v18; // eax
  CCD_SET_STRING_ID *v19; // rcx
  int v20; // eax
  int v21; // r8d
  unsigned __int8 v22; // r9
  __int64 v23; // r8
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // r9d
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int8 v33; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int8 v34; // [rsp+51h] [rbp-28h] BYREF
  unsigned int v35; // [rsp+54h] [rbp-25h] BYREF
  unsigned int v36; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-1Dh] BYREF
  unsigned int v38; // [rsp+60h] [rbp-19h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v39; // [rsp+64h] [rbp-15h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v40; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-Dh] BYREF
  unsigned int v42[4]; // [rsp+70h] [rbp-9h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+80h] [rbp+7h] BYREF
  __int128 v44; // [rsp+90h] [rbp+17h]
  unsigned __int8 v45; // [rsp+E0h] [rbp+67h] BYREF
  struct DMMVIDPN *v46; // [rsp+F8h] [rbp+7Fh]

  v46 = a4;
  v41 = 0;
  v36 = 0;
  v4 = a4;
  v42[0] = 0;
  v5 = a3;
  v8 = CCD_SET_STRING_ID::QueryCloneInfo(*this, a3, &v36, &v41, v42);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry5(1LL, v8, a2, (unsigned int)v5, *this, v5);
    result = v9;
    WdLogGlobalForLineNumber = 386;
    return result;
  }
  v11 = *this;
  v12 = (__int64 *)(this + 1);
  v13 = v5;
  PathSourceFromTarget = -1;
  if ( (unsigned int)v5 < *((unsigned __int16 *)*this + 16) )
  {
    while ( 1 )
    {
      v37 = 0;
      v15 = CCD_SET_STRING_ID::QueryCloneInfo(v11, v13, &v37, 0LL, 0LL);
      LODWORD(TargetIdFromCcdMonitorId) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry5(1LL, v15, a2, v5, *this, v13);
        WdLogGlobalForLineNumber = 408;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      if ( v37 != v36 )
        goto LABEL_29;
      v17 = *this;
      v38 = 0;
      v18 = CCD_SET_STRING_ID::QueryMonitorUniqueness(v17, v13, &v38);
      LODWORD(TargetIdFromCcdMonitorId) = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry5(1LL, v18, a2, v5, *this, v13);
        WdLogGlobalForLineNumber = 427;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      if ( v38 )
      {
        WdLogSingleEntry5(1LL, a2, v5, *this, v38, v13);
        result = 3221225474LL;
        WdLogGlobalForLineNumber = 439;
        return result;
      }
      v35 = -1;
      v39 = D3DKMDT_VOT_UNINITIALIZED;
      v40 = D3DKMDT_VOT_UNINITIALIZED;
      v19 = *this;
      v34 = 0;
      v45 = 0;
      v33 = 0;
      UnicodeString = 0LL;
      v20 = CCD_SET_STRING_ID::QueryUnicodeMonitorId(v19, v13, &UnicodeString);
      LODWORD(TargetIdFromCcdMonitorId) = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry5(2LL, v20, a2, v5, *this, v13);
        WdLogGlobalForLineNumber = 461;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      TargetIdFromCcdMonitorId = (int)DmmGetTargetIdFromCcdMonitorId(
                                        a2,
                                        &UnicodeString,
                                        v21,
                                        &v35,
                                        &v39,
                                        &v40,
                                        (bool *)&v34,
                                        &v45,
                                        &v33);
      RtlFreeUnicodeString(&UnicodeString);
      v44 = 0LL;
      UnicodeString = 0LL;
      if ( (_DWORD)TargetIdFromCcdMonitorId == -1073741275 )
        break;
      if ( (int)TargetIdFromCcdMonitorId < 0 )
      {
        WdLogSingleEntry5(2LL, TargetIdFromCcdMonitorId, a2, v5, *this, v13);
        WdLogGlobalForLineNumber = 505;
        return (unsigned int)TargetIdFromCcdMonitorId;
      }
      v22 = v45;
      if ( v13 != (_DWORD)v5 && v45 )
        goto LABEL_29;
      v4 = v46;
      v23 = 296LL * v13;
      *(_DWORD *)(v23 + *v12 + 84) = v35;
      *(_DWORD *)(*v12 + v23 + 144) = v39;
      *(_DWORD *)(*v12 + v23 + 148) = v40;
      *(_BYTE *)(*v12 + v23 + 185) = (v33 != 0 ? 4 : 0) | (v22 != 0 ? 2 : 0) | (v34 != 0);
      *(_DWORD *)(*v12 + v23 + 240) = v41 | 0xFE520000;
      *(_QWORD *)(*v12 + v23 + 56) |= 0xCC00000000000uLL;
      if ( v4 )
      {
        if ( PathSourceFromTarget == -1 )
        {
          PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *)((char *)v4 + 96), v35);
          if ( PathSourceFromTarget != -1 )
          {
            v24 = 0;
            if ( (_DWORD)v5 )
            {
              v25 = *v12;
              while ( 1 )
              {
                v26 = 296LL * v24;
                if ( _bittest64((const signed __int64 *)(v26 + v25 + 56), 0x2Du) )
                {
                  if ( *(_DWORD *)(v26 + v25 + 80) == PathSourceFromTarget
                    && *(_DWORD *)(v26 + v25 + 72) == *((_DWORD *)a2 + 103)
                    && *(_DWORD *)(v26 + v25 + 76) == *((_DWORD *)a2 + 104) )
                  {
                    break;
                  }
                }
                if ( ++v24 >= (unsigned int)v5 )
                  goto LABEL_25;
              }
              PathSourceFromTarget = -1;
            }
          }
        }
      }
LABEL_25:
      v11 = *this;
      if ( ++v13 >= *((unsigned __int16 *)*this + 16) )
        goto LABEL_30;
    }
    if ( v13 == (_DWORD)v5 )
      return 3221226021LL;
LABEL_29:
    v4 = v46;
LABEL_30:
    if ( PathSourceFromTarget != -1 )
      goto LABEL_41;
  }
  if ( v4 )
    return 3221226021LL;
  v27 = *(_DWORD *)(*((_QWORD *)a2 + 390) + 96LL);
  if ( !v27 )
    return 3221226021LL;
  v28 = 0;
  PathSourceFromTarget = 0;
  if ( *((_WORD *)*this + 16) )
  {
    while ( 1 )
    {
      v29 = *v12;
      while ( 1 )
      {
        v30 = 296LL * v28;
        if ( _bittest64((const signed __int64 *)(v30 + v29 + 56), 0x2Du) )
        {
          if ( *(_DWORD *)(v30 + v29 + 80) == PathSourceFromTarget
            && *(_DWORD *)(v30 + v29 + 72) == *((_DWORD *)a2 + 103)
            && *(_DWORD *)(v30 + v29 + 76) == *((_DWORD *)a2 + 104) )
          {
            break;
          }
        }
        if ( ++v28 >= *((unsigned __int16 *)*this + 16) )
          goto LABEL_40;
      }
      if ( ++PathSourceFromTarget >= v27 )
        return 3221226021LL;
      v28 = 0;
    }
  }
LABEL_40:
  if ( PathSourceFromTarget == -1 )
    return 3221226021LL;
LABEL_41:
  if ( (unsigned int)v5 < v13 )
  {
    v31 = 296 * v5;
    v32 = v13 - (unsigned int)v5;
    do
    {
      v31 += 296LL;
      *(_QWORD *)((char *)this[1] + v31 - 224) = *(_QWORD *)((char *)a2 + 412);
      *(_DWORD *)((char *)this[1] + v31 - 216) = PathSourceFromTarget;
      *(_QWORD *)((char *)this[1] + v31 - 240) |= 0x300000000000uLL;
      --v32;
    }
    while ( v32 );
  }
  return 0LL;
}
