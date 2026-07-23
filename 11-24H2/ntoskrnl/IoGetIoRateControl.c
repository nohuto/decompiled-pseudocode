/*
 * XREFs of IoGetIoRateControl @ 0x14020D3D0
 * Callers:
 *     <none>
 * Callees:
 *     IopFindDiskIoAttribution @ 0x14020D650 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     IoDiskIoAttributionQuery @ 0x140314874 (IoDiskIoAttributionQuery.c)
 *     PsIoRateControlReference @ 0x14045AA74 (PsIoRateControlReference.c)
 */

__int64 __fastcall IoGetIoRateControl(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        _DWORD *a8)
{
  unsigned int v8; // r13d
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  unsigned __int64 Count; // r15
  __int64 v14; // rdi
  __int128 *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  __int128 v29; // [rsp+70h] [rbp-10h]

  v8 = 0;
  v25 = 0LL;
  *a7 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution();
  v12 = DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( !ExAcquireRundownProtection_0(DiskIoAttribution + 21) )
    {
LABEL_14:
      IoDiskIoAttributionDereference(v12);
      return v8;
    }
    Count = v12[20].Count;
    PsIoRateControlReference(Count, a2, a4, (unsigned int)&v25, a5);
    v14 = a6 + 16;
    v15 = &v25;
    v16 = a4 - (_QWORD)&v25;
    v17 = 2LL;
    do
    {
      if ( *(_QWORD *)((char *)v15 + v16) )
      {
        IoDiskIoAttributionQuery(*(_QWORD *)v15, &v28, &v26);
        v23 = *((_QWORD *)&v27 + 1);
        v24 = v29;
        *(_OWORD *)(v14 - 16) = v28;
        *(_OWORD *)v14 = v24;
        *(_QWORD *)(v14 + 8) += v23;
        *(_QWORD *)v14 += v27;
        *(_QWORD *)(v14 - 16) += v26;
        *(_QWORD *)(v14 - 8) += *((_QWORD *)&v26 + 1);
        ++v8;
      }
      v15 = (__int128 *)((char *)v15 + 8);
      v14 += 32LL;
      --v17;
    }
    while ( v17 );
    v18 = v12[22].Count;
    v19 = v12;
    while ( v18 )
    {
      v19 = (struct _EX_RUNDOWN_REF *)v18;
      v18 = *(_QWORD *)(v18 + 176);
    }
    *a7 = v19[3].Count;
    if ( a8 )
    {
      *a8 = 0;
      v20 = *(_QWORD *)(a3 + 544);
      if ( *(_QWORD *)(v20 + 672) )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 672) + 1800LL);
        if ( v21 )
        {
          if ( v21 == Count || *(_QWORD *)(v21 + 1584) == Count )
            *a8 |= 1u;
        }
      }
    }
    if ( v12 )
    {
      ExReleaseRundownProtection_0(v12 + 21);
      goto LABEL_14;
    }
  }
  return v8;
}
