/*
 * XREFs of HalpAllocatePmcCounterSetEx @ 0x1405429D0
 * Callers:
 *     HalpAllocatePmcCounterSet @ 0x1405429A0 (HalpAllocatePmcCounterSet.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x1406FC060 (HalpRequestPmuAccess.c)
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
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v37; // [rsp+40h] [rbp-A8h]
  _DWORD *v39; // [rsp+48h] [rbp-A0h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-90h] BYREF
  __int64 v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  __int64 v43; // [rsp+78h] [rbp-70h]
  _DWORD *v44; // [rsp+80h] [rbp-68h]
  _DWORD *v45; // [rsp+88h] [rbp-60h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-58h] BYREF

  v6 = a5;
  v7 = a3;
  v43 = a6;
  Affinity = 0LL;
  v45 = a4;
  PreviousAffinity = 0LL;
  v41 = a2;
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
  v37 = 0;
  while ( v17 < v7 )
  {
    v18 = 5 * v16;
    v19 = v14 + 8 * v18;
    v42 = v18;
    v20 = v17;
    v21 = (unsigned int *)(v14 + 48 + 8 * v18);
    v44 = (_DWORD *)(v14 + 56 + 8 * v18);
    v22 = *(unsigned int *)(v41 + 4LL * v17);
    *(_DWORD *)(v19 + 40) = v22;
    v39 = (_DWORD *)(v14 + 52 + 8 * v18);
    v23 = guard_dispatch_icall_no_overrides(1LL, v22);
    v9 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741637 )
      {
        if ( v17 )
        {
          v33 = (unsigned int *)(v14 + 40);
          do
          {
            guard_dispatch_icall_no_overrides(*v33, v33 + 2);
            _InterlockedDecrement(&dword_140FC1FEC);
            v33 += 10;
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
    _InterlockedIncrement(&dword_140FC1FEC);
    v24 = *(_DWORD *)(v19 + 44);
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( !v25 )
      {
        v26 = __readpmc(*v21);
        LODWORD(v27) = HIDWORD(v26);
        v26 = (unsigned int)v26;
        v27 = (unsigned int)v27;
        goto LABEL_14;
      }
      if ( v25 == 1 )
      {
        v26 = __readmsr(*v21);
        LODWORD(v27) = HIDWORD(v26);
        v26 = (unsigned int)v26;
        v27 = (unsigned int)v27;
LABEL_14:
        v28 = (v27 << 32) | v26;
        goto LABEL_16;
      }
    }
    v28 = 0LL;
LABEL_16:
    v29 = v42;
    ++v37;
    *(_QWORD *)(v14 + 8 * v42 + 24) = v28;
    v9 = guard_dispatch_icall_no_overrides(*v21, v14 + 8 * v29 + 60);
    if ( v43 )
      *(_DWORD *)(v43 + 4LL * v17) = *v39;
    v30 = (unsigned int)*v39;
    if ( (_DWORD)v30 != -1 )
    {
      v31 = *(_QWORD *)(KiProcessorBlock[v10] + 88);
      if ( *v44 )
      {
        switch ( *v44 )
        {
          case 1:
            v31 += 24LL;
            break;
          case 0x64:
            v31 += 48LL;
            break;
          case 0x65:
            v31 += 72LL;
            break;
          default:
            goto LABEL_32;
        }
      }
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 16);
        if ( v45 )
          *(_DWORD *)(v32 + 48 * v30 + 32) = *v45;
        else
          *(_DWORD *)(v32 + 48 * v30 + 32) = 1701736270;
      }
    }
LABEL_32:
    v7 = a3;
    ++v17;
    v16 = v37;
  }
  if ( v9 >= 0 )
  {
    v34 = HalpCounterSetInfo + 24 * v10;
    v35 = *(_QWORD *)v34;
    if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 )
      __fastfail(3u);
    *(_QWORD *)v14 = v35;
    *(_QWORD *)(v14 + 8) = v34;
    *(_QWORD *)(v35 + 8) = v14;
    *(_QWORD *)v34 = v14;
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
  _InterlockedCompareExchange(&dword_140FC1FE8, 0, 1);
  if ( v9 >= 0 )
    *v6 = v14;
  return (unsigned int)v9;
}
