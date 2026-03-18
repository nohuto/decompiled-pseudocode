/*
 * XREFs of HalpAllocatePmcCounterSetEx @ 0x140545110
 * Callers:
 *     HalpAllocatePmcCounterSet @ 0x1405450E0 (HalpAllocatePmcCounterSet.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14024BD68 (HalpMmAllocCtxAlloc.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x1406FE420 (HalpRequestPmuAccess.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSetEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 *v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // r13
  char v11; // cl
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbp
  unsigned int *v21; // r15
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v39; // [rsp+40h] [rbp-A8h]
  _DWORD *v41; // [rsp+48h] [rbp-A0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-90h] BYREF
  __int64 v43; // [rsp+68h] [rbp-80h]
  __int64 v44; // [rsp+70h] [rbp-78h]
  __int64 v45; // [rsp+78h] [rbp-70h]
  _DWORD *v46; // [rsp+80h] [rbp-68h]
  _DWORD *v47; // [rsp+88h] [rbp-60h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-58h] BYREF

  v6 = a5;
  v7 = a3;
  v45 = a6;
  Affinity = 0LL;
  v47 = a4;
  PreviousAffinity = 0LL;
  v43 = a2;
  v8 = a1;
  v9 = HalpRequestPmuAccess();
  if ( v9 < 0 )
    return (unsigned int)v9;
  *(_DWORD *)Affinity.Reserved = 0;
  v10 = (unsigned int)v8;
  Affinity.Reserved[2] = 0;
  v11 = *((_DWORD *)KiGlobalState + v8) & 0x3F;
  Affinity.Group = *((_DWORD *)KiGlobalState + v8) >> 6;
  Affinity.Mask = 1LL << v11;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v13 = (void *)HalpMmAllocCtxAlloc(v12, 40 * v7 + 24);
  v14 = (__int64)v13;
  if ( !v13 )
  {
    v9 = -1073741801;
    goto LABEL_46;
  }
  memset_0(v13, 0, 40 * v7 + 24);
  *(_DWORD *)(v14 + 20) = v7;
  v9 = 0;
  *(_DWORD *)(v14 + 16) = v8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v16 = 0LL;
  v17 = 0;
  v39 = 0;
  while ( v17 < v7 )
  {
    v18 = 5 * v16;
    v19 = v14 + 8 * v18;
    v44 = v18;
    v20 = v17;
    v21 = (unsigned int *)(v14 + 48 + 8 * v18);
    v46 = (_DWORD *)(v14 + 56 + 8 * v18);
    v22 = *(unsigned int *)(v43 + 4LL * v17);
    *(_DWORD *)(v19 + 40) = v22;
    v41 = (_DWORD *)(v14 + 52 + 8 * v18);
    v23 = guard_dispatch_icall_no_overrides(1LL, v22, v19 + 44, v41);
    v9 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741637 )
      {
        if ( v17 )
        {
          v35 = (unsigned int *)(v14 + 40);
          do
          {
            guard_dispatch_icall_no_overrides(*v35, v35 + 2, v24, v25);
            _InterlockedDecrement(&dword_140FC1D8C);
            v35 += 10;
            --v20;
          }
          while ( v20 );
        }
        goto LABEL_41;
      }
      --*(_DWORD *)(v14 + 20);
      v9 = 0;
      goto LABEL_32;
    }
    _InterlockedIncrement(&dword_140FC1D8C);
    v26 = *(_DWORD *)(v19 + 44);
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( !v27 )
      {
        v28 = __readpmc(*v21);
        LODWORD(v29) = HIDWORD(v28);
        v28 = (unsigned int)v28;
        v29 = (unsigned int)v29;
        goto LABEL_14;
      }
      if ( v27 == 1 )
      {
        v28 = __readmsr(*v21);
        LODWORD(v29) = HIDWORD(v28);
        v28 = (unsigned int)v28;
        v29 = (unsigned int)v29;
LABEL_14:
        v30 = (v29 << 32) | v28;
        goto LABEL_16;
      }
    }
    v30 = 0LL;
LABEL_16:
    v31 = v44;
    ++v39;
    *(_QWORD *)(v14 + 8 * v44 + 24) = v30;
    v9 = guard_dispatch_icall_no_overrides(*v21, v14 + 8 * v31 + 60, v24, v25);
    if ( v45 )
      *(_DWORD *)(v45 + 4LL * v17) = *v41;
    v32 = (unsigned int)*v41;
    if ( (_DWORD)v32 != -1 )
    {
      v33 = *(_QWORD *)(KiProcessorBlock[v10] + 88);
      if ( *v46 )
      {
        switch ( *v46 )
        {
          case 1:
            v33 += 24LL;
            break;
          case 0x64:
            v33 += 48LL;
            break;
          case 0x65:
            v33 += 72LL;
            break;
          default:
            goto LABEL_32;
        }
      }
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 16);
        if ( v47 )
          *(_DWORD *)(v34 + 48 * v32 + 32) = *v47;
        else
          *(_DWORD *)(v34 + 48 * v32 + 32) = 1701736270;
      }
    }
LABEL_32:
    v7 = a3;
    ++v17;
    v16 = v39;
  }
  if ( v9 >= 0 )
  {
    v36 = HalpCounterSetInfo + 24 * v10;
    v37 = *(_QWORD *)v36;
    if ( *(_QWORD *)(*(_QWORD *)v36 + 8LL) != v36 )
      __fastfail(3u);
    *(_QWORD *)v14 = v37;
    *(_QWORD *)(v14 + 8) = v36;
    *(_QWORD *)(v37 + 8) = v14;
    *(_QWORD *)v36 = v14;
  }
LABEL_41:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v9 < 0 )
    HalpMmAllocCtxFree(CurrentIrql, v14);
  v6 = a5;
LABEL_46:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  _InterlockedCompareExchange(&dword_140FC1D88, 0, 1);
  if ( v9 >= 0 )
    *v6 = v14;
  return (unsigned int)v9;
}
