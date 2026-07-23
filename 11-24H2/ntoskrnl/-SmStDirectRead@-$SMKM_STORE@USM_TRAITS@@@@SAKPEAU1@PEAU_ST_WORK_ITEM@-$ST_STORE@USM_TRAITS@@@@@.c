/*
 * XREFs of ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x1402E1B30
 * Callers:
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1402E21C4 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140232D00 (KeExpandKernelStackAndCalloutEx.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402E1CAC (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14044EA6C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectRead(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  __int64 Context; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int128 v9; // xmm0
  __int128 v11; // xmm1
  __int128 Parameter; // [rsp+30h] [rbp-98h] BYREF
  __int128 v13; // [rsp+40h] [rbp-88h]
  __int128 v14; // [rsp+50h] [rbp-78h]
  __int128 v15; // [rsp+60h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  Parameter = 0LL;
  v13 = 0LL;
  if ( KeGetCurrentThread()->ApcStateIndex != 1 || KeGetCurrentThread()->ApcState.Process == *(_KPROCESS **)(a1 + 7432) )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(a1 + 7432), &ApcState);
    v2 = 2;
    Context = ST_STORE<SM_TRAITS>::StAcquireReadContext(a1);
    v8 = Context;
    if ( Context )
    {
      v9 = *a2;
      *(_QWORD *)&Parameter = a1;
      *((_QWORD *)&Parameter + 1) = a2;
      v14 = v9;
      *(_QWORD *)&v13 = Context;
      v15 = a2[1];
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout,
             &Parameter,
             0x2000uLL,
             0,
             0LL) < 0 )
      {
        ST_STORE<SM_TRAITS>::StReleaseReadContext(a1, v8);
        v2 = 3;
      }
      else if ( DWORD2(v13) )
      {
        v2 = 6;
      }
      else
      {
        v11 = v15;
        *a2 = v14;
        a2[1] = v11;
      }
    }
    KiUnstackDetachProcess((__int64)&ApcState, 0, v6, v7);
  }
  return v2 >> 2;
}
