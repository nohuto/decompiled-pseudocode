/*
 * XREFs of HalpAllocatePmcCounterSetEx @ 0x140542820
 * Callers:
 *     HalpAllocatePmcCounterSet @ 0x1405427F0 (HalpAllocatePmcCounterSet.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x1406F2630 (HalpRequestPmuAccess.c)
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
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned int v35; // [rsp+40h] [rbp-A8h]
  _DWORD *v37; // [rsp+48h] [rbp-A0h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-90h] BYREF
  __int64 v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+70h] [rbp-78h]
  __int64 v41; // [rsp+78h] [rbp-70h]
  _DWORD *v42; // [rsp+80h] [rbp-68h]
  _DWORD *v43; // [rsp+88h] [rbp-60h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+90h] [rbp-58h] BYREF

  v6 = a5;
  v7 = a3;
  v41 = a6;
  Affinity = 0LL;
  v43 = a4;
  PreviousAffinity = 0LL;
  v39 = a2;
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
  v35 = 0;
  while ( v17 < v7 )
  {
    v18 = 5 * v16;
    v19 = v14 + 8 * v18;
    v40 = v18;
    v20 = v17;
    v21 = (unsigned int *)(v14 + 48 + 8 * v18);
    v42 = (_DWORD *)(v14 + 56 + 8 * v18);
    *(_DWORD *)(v19 + 40) = *(_DWORD *)(v39 + 4LL * v17);
    v37 = (_DWORD *)(v14 + 52 + 8 * v18);
    v22 = guard_dispatch_icall_no_overrides(1LL);
    v9 = v22;
    if ( v22 < 0 )
    {
      if ( v22 != -1073741637 )
      {
        if ( v17 )
        {
          v31 = (unsigned int *)(v14 + 40);
          do
          {
            guard_dispatch_icall_no_overrides(*v31);
            _InterlockedDecrement(&dword_140FC15EC);
            v31 += 10;
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
    _InterlockedIncrement(&dword_140FC15EC);
    v23 = *(_DWORD *)(v19 + 44);
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
      {
        v25 = __readpmc(*v21);
        LODWORD(v26) = HIDWORD(v25);
        v25 = (unsigned int)v25;
        v26 = (unsigned int)v26;
        goto LABEL_14;
      }
      if ( v24 == 1 )
      {
        v25 = __readmsr(*v21);
        LODWORD(v26) = HIDWORD(v25);
        v25 = (unsigned int)v25;
        v26 = (unsigned int)v26;
LABEL_14:
        v27 = (v26 << 32) | v25;
        goto LABEL_16;
      }
    }
    v27 = 0LL;
LABEL_16:
    ++v35;
    *(_QWORD *)(v14 + 8 * v40 + 24) = v27;
    v9 = guard_dispatch_icall_no_overrides(*v21);
    if ( v41 )
      *(_DWORD *)(v41 + 4LL * v17) = *v37;
    v28 = (unsigned int)*v37;
    if ( (_DWORD)v28 != -1 )
    {
      v29 = *(_QWORD *)(KiProcessorBlock[v10] + 88);
      if ( *v42 )
      {
        switch ( *v42 )
        {
          case 1:
            v29 += 24LL;
            break;
          case 0x64:
            v29 += 48LL;
            break;
          case 0x65:
            v29 += 72LL;
            break;
          default:
            goto LABEL_32;
        }
      }
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 16);
        if ( v43 )
          *(_DWORD *)(v30 + 48 * v28 + 32) = *v43;
        else
          *(_DWORD *)(v30 + 48 * v28 + 32) = 1701736270;
      }
    }
LABEL_32:
    v7 = a3;
    ++v17;
    v16 = v35;
  }
  if ( v9 >= 0 )
  {
    v32 = HalpCounterSetInfo + 24 * v10;
    v33 = *(_QWORD *)v32;
    if ( *(_QWORD *)(*(_QWORD *)v32 + 8LL) != v32 )
      __fastfail(3u);
    *(_QWORD *)v14 = v33;
    *(_QWORD *)(v14 + 8) = v32;
    *(_QWORD *)(v33 + 8) = v14;
    *(_QWORD *)v32 = v14;
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
  _InterlockedCompareExchange(&dword_140FC15E8, 0, 1);
  if ( v9 >= 0 )
    *v6 = v14;
  return (unsigned int)v9;
}
