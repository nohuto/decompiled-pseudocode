/*
 * XREFs of ?ndisOidPostIovAllocateVF@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int16 *v8; // rcx
  _LIST_ENTRY *Flink; // rax
  unsigned __int16 v10; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v12; // rax
  __int64 v13; // r8
  __int64 *i; // rax
  __int64 *v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 *j; // rax
  __int64 *v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int128 v23; // [rsp+40h] [rbp-98h]
  __int64 v24; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v24, a1);
  v23 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      40,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  if ( (_BYTE)v23 )
  {
    v6 = *(_QWORD *)(v1 + 144);
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v6 )
        ExFreePoolWithTag(*(PVOID *)(v1 + 144), 0);
      goto LABEL_7;
    }
    v7 = *(_QWORD *)(v1 + 40);
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5, &NewIrql);
    v8 = (unsigned __int16 *)(v6 + 1722);
    if ( v6 )
    {
      *v8 = *(_WORD *)(v7 + 1626);
      *(_DWORD *)(v6 + 1724) = *(_DWORD *)(v7 + 1628);
    }
    Flink = v5->VFList.Flink;
    if ( Flink == &v5->VFList )
    {
LABEL_17:
      Blink = Flink->Blink;
      v12 = Blink->Flink;
      if ( Blink->Flink->Blink != Blink )
        goto LABEL_28;
      *(_QWORD *)v6 = v12;
      *(_QWORD *)(v6 + 8) = Blink;
      v12->Blink = (_LIST_ENTRY *)v6;
      Blink->Flink = (_LIST_ENTRY *)v6;
      ++v5->NumAllocatedVFs;
    }
    else
    {
      v10 = *v8;
      while ( WORD1(Flink[107].Blink) != v10 )
      {
        if ( WORD1(Flink[107].Blink) <= v10 )
        {
          Flink = Flink->Flink;
          if ( Flink != &v5->VFList )
            continue;
        }
        goto LABEL_17;
      }
    }
    v13 = *(_QWORD *)(v6 + 56);
    for ( i = *(__int64 **)(v13 + 808); i != (__int64 *)(v13 + 808); i = (__int64 *)*i )
    {
      if ( *((_WORD *)i + 853) > *(_WORD *)(v6 + 1722) )
        break;
    }
    v15 = (__int64 *)i[1];
    v16 = (_QWORD *)(v6 + 16);
    v17 = *v15;
    if ( *(__int64 **)(*v15 + 8) == v15 )
    {
      *(_QWORD *)(v6 + 24) = v15;
      *v16 = v17;
      *(_QWORD *)(v17 + 8) = v16;
      *v15 = (__int64)v16;
      ++*(_DWORD *)(v13 + 800);
      v18 = *(_QWORD *)(v6 + 64);
      for ( j = *(__int64 **)(v18 + 80); j != (__int64 *)(v18 + 80); j = (__int64 *)*j )
      {
        if ( *((_WORD *)j + 845) > *(_WORD *)(v6 + 1722) )
          break;
      }
      v20 = (__int64 *)j[1];
      v21 = (_QWORD *)(v6 + 32);
      v22 = *v20;
      if ( *(__int64 **)(*v20 + 8) == v20 )
      {
        v21[1] = v20;
        *v21 = v22;
        *(_QWORD *)(v22 + 8) = v21;
        *v20 = (__int64)v21;
        ++*(_DWORD *)(v18 + 72);
        v5->MiniportThread = 0LL;
        KeReleaseSpinLock(&v5->Lock, NewIrql);
        goto LABEL_7;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      41,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
}
