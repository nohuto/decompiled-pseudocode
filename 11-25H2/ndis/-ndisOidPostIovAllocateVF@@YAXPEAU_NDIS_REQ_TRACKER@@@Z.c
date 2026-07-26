/*
 * XREFs of ?ndisOidPostIovAllocateVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6510
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int16 *v7; // rcx
  _LIST_ENTRY *Flink; // rax
  unsigned __int16 v9; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v11; // rax
  __int64 v12; // r8
  __int64 *i; // rax
  __int64 *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *j; // rax
  __int64 *v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  __int128 v22; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v23, a1);
  v22 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x28u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( (_BYTE)v22 )
  {
    v5 = *(_QWORD *)(v1 + 144);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v5 )
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
      goto LABEL_7;
    }
    v6 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
    v7 = (unsigned __int16 *)(v5 + 1722);
    if ( v5 )
    {
      *v7 = *(_WORD *)(v6 + 1626);
      *(_DWORD *)(v5 + 1724) = *(_DWORD *)(v6 + 1628);
    }
    Flink = v4->VFList.Flink;
    if ( Flink == &v4->VFList )
    {
LABEL_17:
      Blink = Flink->Blink;
      v11 = Blink->Flink;
      if ( Blink->Flink->Blink != Blink )
        goto LABEL_28;
      *(_QWORD *)v5 = v11;
      *(_QWORD *)(v5 + 8) = Blink;
      v11->Blink = (_LIST_ENTRY *)v5;
      Blink->Flink = (_LIST_ENTRY *)v5;
      ++v4->NumAllocatedVFs;
    }
    else
    {
      v9 = *v7;
      while ( WORD1(Flink[107].Blink) != v9 )
      {
        if ( WORD1(Flink[107].Blink) <= v9 )
        {
          Flink = Flink->Flink;
          if ( Flink != &v4->VFList )
            continue;
        }
        goto LABEL_17;
      }
    }
    v12 = *(_QWORD *)(v5 + 56);
    for ( i = *(__int64 **)(v12 + 808); i != (__int64 *)(v12 + 808); i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 853) > *(_WORD *)(v5 + 1722) )
        break;
    }
    v14 = (__int64 *)i[1];
    v15 = (_QWORD *)(v5 + 16);
    v16 = *v14;
    if ( *(__int64 **)(*v14 + 8) == v14 )
    {
      *(_QWORD *)(v5 + 24) = v14;
      *v15 = v16;
      *(_QWORD *)(v16 + 8) = v15;
      *v14 = (__int64)v15;
      ++*(_DWORD *)(v12 + 800);
      v17 = *(_QWORD *)(v5 + 64);
      for ( j = *(__int64 **)(v17 + 80); j != (__int64 *)(v17 + 80); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 845) > *(_WORD *)(v5 + 1722) )
          break;
      }
      v19 = (__int64 *)j[1];
      v20 = (_QWORD *)(v5 + 32);
      v21 = *v19;
      if ( *(__int64 **)(*v19 + 8) == v19 )
      {
        v20[1] = v19;
        *v20 = v21;
        *(_QWORD *)(v21 + 8) = v20;
        *v19 = (__int64)v20;
        ++*(_DWORD *)(v17 + 72);
        v4->MiniportThread = 0LL;
        KeReleaseSpinLock(&v4->Lock, NewIrql);
        goto LABEL_7;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x29u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
