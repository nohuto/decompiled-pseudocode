/*
 * XREFs of sub_14091DCCC @ 0x14091DCCC
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     sub_14091DAB0 @ 0x14091DAB0 (sub_14091DAB0.c)
 *     sub_14091DBE4 @ 0x14091DBE4 (sub_14091DBE4.c)
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x140920FBC (WbSetWowTrapFrame.c)
 */

__int64 __fastcall sub_14091DCCC(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // r9d
  __int64 v5; // rbx
  int ContextThreadInternal; // edi
  _DWORD *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  _KPROCESS *Process; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v12; // eax
  _DWORD *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v17; // rdx
  __int16 v18; // ax
  void **v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v3 = sub_14091EE7C(a1, a2, &v22);
  v5 = v22;
  ContextThreadInternal = v3;
  if ( v3 < 0 )
    goto LABEL_11;
  v7 = (_DWORD *)(v22 + 16);
  v8 = *(_DWORD *)(v22 + 16);
  if ( !v8 )
  {
    ContextThreadInternal = -1073741811;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)(v22 + 24) + 32LL * (unsigned int)(v8 - 1);
  *((_QWORD *)&v20 + 1) = *(_QWORD *)(v9 + 8);
  *(_QWORD *)&v20 = *(_QWORD *)(v9 + 16);
  LODWORD(v21) = *(_DWORD *)(v9 + 24);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].ReadyTime || (v18 = WORD2(Process[3].PerProcessorCycleTimes), v18 != 332) && v18 != 452 )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v4) = 1;
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(v22 + 96) = 1048577;
    v5 = v22;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)v22 + 48, 0, v4, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(v5 + 296) = *((_QWORD *)&v20 + 1);
      *(_QWORD *)(v5 + 200) = v20;
      *(_DWORD *)(v5 + 116) = v21;
      v12 = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
      v5 = v22;
      ContextThreadInternal = v12;
    }
    KeLeaveGuardedRegion();
LABEL_7:
    if ( ContextThreadInternal < 0 )
      goto LABEL_11;
    goto LABEL_8;
  }
  v5 = v22;
  ContextThreadInternal = WbSetWowTrapFrame(v22, &v20);
  if ( ContextThreadInternal < 0 )
    goto LABEL_7;
LABEL_8:
  ContextThreadInternal = 0;
  if ( *v7 )
  {
    v13 = (_DWORD *)(v5 + 16);
    v14 = *(_QWORD *)(v5 + 24) + 32LL * (unsigned int)(*v7 - 1);
    v15 = *(_QWORD *)v14;
    if ( *(_QWORD *)v14 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v17 = *(_QWORD *)(v15 + 40);
        if ( v17 )
        {
          sub_14091DBE4(a1, v17);
          *(_QWORD *)(v15 + 40) = 0LL;
          *(_QWORD *)(v15 + 24) = 0LL;
          *(_QWORD *)(v15 + 32) = 0LL;
          *(_DWORD *)(v15 + 72) = 0;
        }
        SddlpFree((void *)v15);
      }
      v5 = v22;
    }
    *(_OWORD *)v14 = 0LL;
    *(_OWORD *)(v14 + 16) = 0LL;
    --*v13;
  }
  else
  {
    ContextThreadInternal = -1073741811;
  }
LABEL_11:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v19 = (void **)v22;
      if ( (int)sub_14091DAB0(a1, v22, -1) >= 0 )
      {
        SddlpFree(v19[3]);
        SddlpFree(v19);
      }
    }
  }
  return (unsigned int)ContextThreadInternal;
}
