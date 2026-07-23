/*
 * XREFs of VfTargetDriversRemove @ 0x1403E4B7C
 * Callers:
 *     VfDriverUnloadImage @ 0x140B8C5C0 (VfDriverUnloadImage.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     VfAvlLookupTreeNode @ 0x1403E4D94 (VfAvlLookupTreeNode.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1403E4F80 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403E4FE4 (ViAvlRaiseIrqlSafe.c)
 *     VfAvlCleanupLockContext @ 0x1403E514C (VfAvlCleanupLockContext.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403E51B0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     VfAvlFreeNodeNoLock @ 0x14060EC88 (VfAvlFreeNodeNoLock.c)
 *     ViTargetDriversFreeVerifiedData @ 0x14060F904 (ViTargetDriversFreeVerifiedData.c)
 *     DifRemovePerDriverDataForPlugins @ 0x1406160A0 (DifRemovePerDriverDataForPlugins.c)
 *     CarDeleteDriverRuleViolations @ 0x14061793C (CarDeleteDriverRuleViolations.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140B8DAB8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140B8DB44 (ViTargetRemovingCheckEtwWmi.c)
 *     VfThunkRemoveTargetNotify @ 0x140B992BC (VfThunkRemoveTargetNotify.c)
 *     VfPoolCheckForLeaks @ 0x140B9C350 (VfPoolCheckForLeaks.c)
 */

__int64 __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  ULONG_PTR v7; // rsi
  void *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int64 Buffer; // [rsp+28h] [rbp-29h] BYREF
  __int64 v15; // [rsp+30h] [rbp-21h]
  __int128 v16; // [rsp+38h] [rbp-19h] BYREF
  __int64 v17; // [rsp+48h] [rbp-9h]
  _OWORD v18[4]; // [rsp+58h] [rbp+7h] BYREF
  __int64 v19; // [rsp+98h] [rbp+47h]

  result = (__int64)memset_0(v18, 0, 0x48uLL);
  if ( !VfSafeMode )
  {
    result = (unsigned int)ViTargetInitialized;
    if ( ViTargetInitialized )
    {
      v3 = *(_QWORD *)(a1 + 48);
      v4 = 0LL;
      v16 = 0LL;
      v17 = 0LL;
      BYTE12(v16) = 4;
      v5 = ((__int64 (__fastcall *)(void *, __int128 *, unsigned __int64, __int64, unsigned __int64, __int64))VfAvlLookupTreeNode)(
             &ViTargetDriversAvl,
             &v16,
             v3,
             1LL,
             Buffer,
             v15);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(_QWORD *)(v5 + 64);
        if ( v7 )
        {
          ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v5 + 64), v3);
          VfPoolCheckForLeaks(v7);
          ViTargetRemovingCheckContiguousMemory(v7);
          DifRemovePerDriverDataForPlugins(v7 + 96);
          CarDeleteDriverRuleViolations(*(_QWORD *)v6, *(_QWORD *)(v6 + 8));
        }
        v8 = *(void **)(v6 + 48);
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x62436656u);
          *(_QWORD *)(v6 + 48) = 0LL;
        }
        v9 = *(_OWORD *)(v6 + 16);
        v18[0] = *(_OWORD *)v6;
        v10 = *(_OWORD *)(v6 + 32);
        v18[1] = v9;
        v11 = *(_OWORD *)(v6 + 48);
        v18[2] = v10;
        v19 = *(_QWORD *)(v6 + 64);
        v18[3] = v11;
        if ( v19 )
          --dword_140F047A0;
        Buffer = v3;
        v15 = 1LL;
        if ( dword_140F04798 == 1 )
          v12 = 0LL;
        else
          v12 = (v3 >> 12) % (unsigned int)dword_140F04798;
        ViAvlRaiseIrqlSafe(&v16);
        v13 = 192 * v12;
        ViAvlAcquireTableLockAtDpcLevelSafe(v13 + qword_140F04790, &v16);
        RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v13 + qword_140F04790), &Buffer);
        _InterlockedDecrement64(&qword_140F04788);
        v4 = *(_QWORD *)(v13 + qword_140F04790 + 112);
        *(_QWORD *)(v13 + qword_140F04790 + 112) = 0LL;
        ViAvlReleaseTableLockFromDpcLevel(v13 + qword_140F04790, &v16);
      }
      result = VfAvlCleanupLockContext(&v16);
      if ( v4 )
      {
        VfThunkRemoveTargetNotify(v18);
        if ( v19 )
          ViTargetDriversFreeVerifiedData(v19);
        return VfAvlFreeNodeNoLock(&ViTargetDriversAvl, v4);
      }
    }
  }
  return result;
}
