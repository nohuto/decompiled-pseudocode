/*
 * XREFs of RtlpHpLfhOwnerGetSubsegment @ 0x14035EB70
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403D81F0 (RtlpHpLfhBucketGetSubsegment.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDelayFreeListProcess @ 0x1403D8A60 (RtlpHpLfhSubsegmentDelayFreeListProcess.c)
 */

volatile __int32 *__fastcall RtlpHpLfhOwnerGetSubsegment(__int64 a1, __int64 a2)
{
  volatile __int32 *v3; // r8
  volatile __int32 *v4; // rdi
  volatile __int32 *v5; // rdx
  volatile __int32 *v6; // rbx
  unsigned __int16 v7; // cx
  int v8; // r10d
  int v9; // r9d
  unsigned __int32 v10; // eax
  volatile __int32 **v11; // rcx
  volatile __int32 **v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  volatile __int32 **v16; // rax
  volatile __int32 **v17; // rax
  volatile __int32 **v18; // rax
  volatile __int32 *v19; // rax
  volatile __int32 *v20; // [rsp+20h] [rbp-20h] BYREF
  volatile __int32 **v21; // [rsp+28h] [rbp-18h]
  _QWORD *v22; // [rsp+30h] [rbp-10h] BYREF
  volatile __int32 *v23; // [rsp+38h] [rbp-8h]

  v23 = (volatile __int32 *)&v22;
  v3 = (volatile __int32 *)&v20;
  v20 = (volatile __int32 *)&v20;
  v22 = &v22;
  v4 = (volatile __int32 *)(a2 + 24);
  v5 = *(volatile __int32 **)(a2 + 24);
  v21 = &v20;
  while ( v5 != v4 )
  {
    v6 = v5;
    v5 = *(volatile __int32 **)v5;
    v7 = *((_WORD *)v6 + 9);
    v8 = *((unsigned __int16 *)v6 + 16);
    v9 = v8 + v7;
    if ( v9 )
    {
      if ( v9 != *((unsigned __int16 *)v6 + 17) )
      {
        if ( v7 && v7 >= (unsigned __int16)v8 )
        {
          v10 = _InterlockedExchange(v6 + 4, 0);
LABEL_8:
          RtlpHpLfhSubsegmentDelayFreeListProcess(a1, v6, v10);
          v3 = v20;
          goto LABEL_9;
        }
        goto LABEL_9;
      }
      if ( *((volatile __int32 **)v5 + 1) != v6 )
        goto LABEL_17;
      v18 = (volatile __int32 **)*((_QWORD *)v6 + 1);
      if ( *v18 != v6 )
        goto LABEL_17;
      *v18 = v5;
      *((_QWORD *)v5 + 1) = v18;
      v19 = v20;
      if ( *((volatile __int32 ***)v20 + 1) != &v20 )
        goto LABEL_17;
      *(_QWORD *)v6 = v20;
      *((_QWORD *)v6 + 1) = &v20;
      v3 = v6;
      *((_QWORD *)v19 + 1) = v6;
      v20 = v6;
    }
    else
    {
      if ( *((volatile __int32 **)v5 + 1) != v6
        || (v16 = (volatile __int32 **)*((_QWORD *)v6 + 1), *v16 != v6)
        || (*v16 = v5, *((_QWORD *)v5 + 1) = v16, v17 = (volatile __int32 **)v23, *(_QWORD ***)v23 != &v22) )
      {
LABEL_17:
        __fastfail(3u);
      }
      *((_QWORD *)v6 + 1) = v23;
      *(_QWORD *)v6 = &v22;
      *v17 = v6;
      v3 = v20;
      v23 = v6;
    }
  }
  if ( v3 == (volatile __int32 *)&v20 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = v3;
    if ( *((_WORD *)v3 + 9) )
    {
      v10 = _InterlockedExchange(v3 + 4, 0);
      goto LABEL_8;
    }
  }
LABEL_9:
  if ( v3 != (volatile __int32 *)&v20 )
  {
    v11 = (volatile __int32 **)*((_QWORD *)v4 + 1);
    *v11 = v3;
    v12 = v21;
    *((_QWORD *)v4 + 1) = v21;
    *v12 = v4;
    *((_QWORD *)v20 + 1) = v11;
  }
  if ( v22 != &v22 )
  {
    v13 = (_QWORD *)*((_QWORD *)v4 + 1);
    *v13 = v22;
    v14 = v23;
    *((_QWORD *)v4 + 1) = v23;
    *v14 = v4;
    v22[1] = v13;
  }
  return v6;
}
