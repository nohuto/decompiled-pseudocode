/*
 * XREFs of RtlpHpLfhOwnerGetSubsegment @ 0x1403C8554
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14044FFDC (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403C7060 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 */

unsigned __int64 __fastcall RtlpHpLfhOwnerGetSubsegment(ULONG_PTR *a1, __int64 a2)
{
  volatile __int32 *v3; // r8
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int16 v7; // cx
  int v8; // r10d
  int v9; // r9d
  _QWORD *v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int32 v12; // eax
  volatile __int32 **v13; // rcx
  unsigned __int64 *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 *v16; // rcx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 *v21; // [rsp+28h] [rbp-18h]
  _QWORD *v22; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v23; // [rsp+38h] [rbp-8h]

  v23 = (unsigned __int64 *)&v22;
  v3 = (volatile __int32 *)&v20;
  v20 = (unsigned __int64)&v20;
  v22 = &v22;
  v4 = (_QWORD *)(a2 + 24);
  v5 = *(_QWORD **)(a2 + 24);
  v21 = &v20;
  while ( v5 != v4 )
  {
    v6 = (unsigned __int64)v5;
    v5 = (_QWORD *)*v5;
    v7 = *(_WORD *)(v6 + 18);
    v8 = *(unsigned __int16 *)(v6 + 32);
    v9 = v8 + v7;
    if ( v9 )
    {
      if ( v9 != *(unsigned __int16 *)(v6 + 34) )
      {
        if ( v7 && v7 >= (unsigned __int16)v8 )
        {
          v12 = _InterlockedExchange((volatile __int32 *)(v6 + 16), 0);
LABEL_12:
          RtlpHpLfhSubsegmentDelayFreeListProcess(a1, v6, v12);
          v3 = (volatile __int32 *)v20;
          goto LABEL_13;
        }
        goto LABEL_13;
      }
      if ( v5[1] != v6
        || (v18 = *(_QWORD **)(v6 + 8), *v18 != v6)
        || (*v18 = v5, v5[1] = v18, v19 = v20, *(unsigned __int64 **)(v20 + 8) != &v20) )
      {
LABEL_7:
        __fastfail(3u);
      }
      *(_QWORD *)v6 = v20;
      *(_QWORD *)(v6 + 8) = &v20;
      v3 = (volatile __int32 *)v6;
      *(_QWORD *)(v19 + 8) = v6;
      v20 = v6;
    }
    else
    {
      if ( v5[1] != v6 )
        goto LABEL_7;
      v10 = *(_QWORD **)(v6 + 8);
      if ( *v10 != v6 )
        goto LABEL_7;
      *v10 = v5;
      v5[1] = v10;
      v11 = v23;
      if ( (_QWORD **)*v23 != &v22 )
        goto LABEL_7;
      *(_QWORD *)(v6 + 8) = v23;
      *(_QWORD *)v6 = &v22;
      *v11 = v6;
      v3 = (volatile __int32 *)v20;
      v23 = (unsigned __int64 *)v6;
    }
  }
  if ( v3 == (volatile __int32 *)&v20 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (unsigned __int64)v3;
    if ( *((_WORD *)v3 + 9) )
    {
      v12 = _InterlockedExchange(v3 + 4, 0);
      goto LABEL_12;
    }
  }
LABEL_13:
  if ( v3 != (volatile __int32 *)&v20 )
  {
    v13 = (volatile __int32 **)v4[1];
    *v13 = v3;
    v14 = v21;
    v4[1] = v21;
    *v14 = (unsigned __int64)v4;
    *(_QWORD *)(v20 + 8) = v13;
  }
  if ( v22 != &v22 )
  {
    v15 = (_QWORD *)v4[1];
    *v15 = v22;
    v16 = v23;
    v4[1] = v23;
    *v16 = (unsigned __int64)v4;
    v22[1] = v15;
  }
  return v6;
}
