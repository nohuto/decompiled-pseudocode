/*
 * XREFs of VidSchiIsQuantumLeft @ 0x140037C38
 * Callers:
 *     ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1400226F0 (-VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x140023890 (VidSchiSetTransferContextRunningTime.c)
 */

__int64 __fastcall VidSchiIsQuantumLeft(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  signed __int32 v5; // eax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _QWORD **v12; // r14
  unsigned int v13; // esi
  _QWORD *i; // rdi
  __int64 result; // rax
  volatile signed __int32 *v16; // r10
  __int64 v17; // rax
  char v18; // [rsp+50h] [rbp+8h] BYREF
  char v19; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), (*(_DWORD *)(a1 + 184) >> 1) & 1, 3);
  v6 = *(_QWORD *)(a1 + 96);
  if ( v5 == 2 )
  {
    v18 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v6 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      a1,
      *(unsigned int *)(*(_QWORD *)(v6 + 24) + 32LL),
      &v18);
    v7 = (_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 8) != a1 + 8
      || (v9 = *(_QWORD **)(a1 + 16), (_QWORD *)*v9 != v7)
      || (*v9 = v8,
          *(_QWORD *)(v8 + 8) = v9,
          v10 = v3 + 16LL * *(unsigned int *)(a1 + 404) + 2184,
          v11 = *(_QWORD **)(v10 + 8),
          *v11 != v10) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)(a1 + 16) = v11;
    *v7 = v10;
    *v11 = v7;
    result = 0LL;
    *(_QWORD *)(v10 + 8) = v7;
    return result;
  }
  v12 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) + 32LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v6 + 24) + 4LL))
                  + 216LL);
  v13 = 0;
LABEL_7:
  if ( v13 >= 2 )
  {
    *a2 = a1;
    return 1LL;
  }
  for ( i = *v12; ; i = (_QWORD *)*i )
  {
    if ( i == v12 )
    {
      ++v13;
      goto LABEL_7;
    }
    v16 = (volatile signed __int32 *)(i - 52);
    if ( *(i - 40) == *(_QWORD *)(a1 + 96) )
      break;
LABEL_15:
    ;
  }
  if ( _InterlockedCompareExchange(v16 + 109, (*((_DWORD *)v16 + 46) >> 1) & 1, 3) == 2 )
  {
    v17 = *((_QWORD *)v16 + 12);
    v19 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v17 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      i - 52,
      *(unsigned int *)(*(_QWORD *)(v17 + 24) + 32LL),
      &v19);
    goto LABEL_15;
  }
  *a2 = (__int64)v16;
  if ( v16 != (volatile signed __int32 *)a1 )
    VidSchiSetTransferContextRunningTime((__int64)(i - 52), a1, 1);
  return 1LL;
}
