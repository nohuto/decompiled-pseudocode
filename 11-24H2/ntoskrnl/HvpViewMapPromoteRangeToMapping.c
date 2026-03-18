/*
 * XREFs of HvpViewMapPromoteRangeToMapping @ 0x1409826CC
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140982010 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404A933C (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapMigrateCOWData @ 0x1407DEE3C (HvpViewMapMigrateCOWData.c)
 *     HvpViewMapCreateView @ 0x14097FA0C (HvpViewMapCreateView.c)
 *     HvpViewMapFindViewForFileOffset @ 0x14097FF54 (HvpViewMapFindViewForFileOffset.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140980000 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140984600 (HvpViewMapMakeViewRangeInvalid.c)
 *     HvpViewMapFreeView @ 0x140A4A284 (HvpViewMapFreeView.c)
 */

__int64 __fastcall HvpViewMapPromoteRangeToMapping(__int64 a1, int a2, unsigned int a3, __int64 *a4)
{
  __int64 v4; // r13
  __int64 v6; // r15
  unsigned __int64 *ViewForFileOffset; // rax
  _QWORD *v8; // r9
  unsigned __int64 *v9; // rdi
  int ViewRangeValid; // ebx
  __int64 MemoryAllocationGranularity; // rax
  int v13; // eax
  _QWORD *v14; // rsi
  __int64 i; // rdx
  unsigned __int64 *v16; // rbx
  __int64 j; // rax
  unsigned __int64 **v18; // rax
  unsigned __int64 **v19; // rax
  __int64 *v20; // rcx
  unsigned __int64 v21; // rdx
  bool v22; // r8
  unsigned __int64 v23; // rax
  __int64 **v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // r12
  unsigned __int64 *v28; // r12
  unsigned __int64 *v29; // r9
  unsigned __int64 **v30; // rax
  _QWORD *v31; // [rsp+30h] [rbp-20h] BYREF
  __int64 **v32; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 *v33; // [rsp+40h] [rbp-10h]

  v31 = 0LL;
  v4 = (unsigned int)(a2 + 4096);
  v33 = (unsigned __int64 *)&v32;
  v32 = (__int64 **)&v32;
  v6 = v4 + a3;
  ViewForFileOffset = (unsigned __int64 *)HvpViewMapFindViewForFileOffset(a1, v4);
  v9 = ViewForFileOffset;
  if ( (__int64)ViewForFileOffset[6] >= v6 )
  {
    *v8 = v4 + ViewForFileOffset[7] - ViewForFileOffset[3];
    return 0;
  }
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v13 = HvpViewMapCreateView(a1, (LARGE_INTEGER)(v4 & -MemoryAllocationGranularity), v6, &v31);
  v14 = v31;
  ViewRangeValid = v13;
  if ( v13 >= 0 )
  {
    ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, v31, v4, v6, 0);
    if ( ViewRangeValid >= 0 )
    {
      for ( i = v4; i < v6; i = v27[6] )
      {
        v27 = (_QWORD *)HvpViewMapFindViewForFileOffset(a1, i);
        ViewRangeValid = HvpViewMapMigrateCOWData(a1, v14, v27);
        if ( ViewRangeValid < 0 )
          goto LABEL_28;
      }
      v16 = (unsigned __int64 *)HvpViewMapFindViewForFileOffset(a1, v6 - 1);
      for ( j = v9[6]; j < (__int64)v16[5]; j = v28[6] )
      {
        v28 = (unsigned __int64 *)HvpViewMapFindViewForFileOffset(a1, j);
        RtlRbRemoveNode(v29, v28);
        v30 = (unsigned __int64 **)v33;
        if ( (__int64 ***)*v33 != &v32 )
          goto LABEL_12;
        v28[1] = (unsigned __int64)v33;
        *v28 = (unsigned __int64)&v32;
        *v30 = v28;
        v33 = v28;
      }
      if ( v9[5] == v4 )
      {
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 40), v9);
        v18 = (unsigned __int64 **)v33;
        if ( (__int64 ***)*v33 != &v32 )
          goto LABEL_12;
        v9[1] = (unsigned __int64)v33;
        *v9 = (unsigned __int64)&v32;
        *v18 = v9;
        v33 = v9;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(a1, v9, v4, v9[6]);
      }
      if ( v16[6] == v6 )
      {
        RtlRbRemoveNode((unsigned __int64 *)(a1 + 40), v16);
        v19 = (unsigned __int64 **)v33;
        if ( (__int64 ***)*v33 != &v32 )
          goto LABEL_12;
        v16[1] = (unsigned __int64)v33;
        *v16 = (unsigned __int64)&v32;
        *v19 = v16;
        v33 = v16;
      }
      else
      {
        HvpViewMapMakeViewRangeInvalid(a1, v16, v16[5], v6);
      }
      v20 = (__int64 *)(a1 + 40);
      v21 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 && v21 )
        v21 ^= (unsigned __int64)v20;
      v22 = 0;
      if ( v21 )
      {
        while ( 1 )
        {
          if ( v14[5] < *(_QWORD *)(v21 + 40) )
          {
            v23 = *(_QWORD *)v21;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_37;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_37:
              v22 = 0;
              break;
            }
          }
          else
          {
            v23 = *(_QWORD *)(v21 + 8);
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            {
              if ( !v23 )
                goto LABEL_23;
              v23 ^= v21;
            }
            if ( !v23 )
            {
LABEL_23:
              v22 = 1;
              break;
            }
          }
          v21 = v23;
        }
      }
      RtlRbInsertNodeEx(v20, v21, v22, (unsigned __int64)v14);
      v24 = v32;
      v25 = *v32;
      if ( v32[1] == (__int64 *)&v32 )
      {
        while ( 1 )
        {
          if ( (__int64 **)v25[1] != v24 )
            goto LABEL_12;
          v32 = (__int64 **)v25;
          v25[1] = (__int64)&v32;
          if ( v24 == (__int64 **)&v32 )
            break;
          HvpViewMapFreeView(a1, v24);
          v24 = v32;
          if ( v32[1] != (__int64 *)&v32 )
            goto LABEL_12;
          v25 = *v32;
        }
        ViewRangeValid = 0;
        v26 = v4 + v14[7] - v14[3];
        v14 = 0LL;
        *a4 = v26;
        goto LABEL_28;
      }
LABEL_12:
      __fastfail(3u);
    }
  }
LABEL_28:
  if ( v14 )
    HvpViewMapFreeView(a1, v14);
  return (unsigned int)ViewRangeValid;
}
