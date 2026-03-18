/*
 * XREFs of ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x140393894
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140393600 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x1405FDB60 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x140393448 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140393710 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(
        __int64 a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(PVOID P))
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(PVOID); // rdi
  int v6; // r14d
  int v9; // edi
  struct _EX_RUNDOWN_REF **ThreadParams; // rax
  struct _EX_RUNDOWN_REF **v11; // rsi
  __int128 Object; // [rsp+50h] [rbp-20h] BYREF
  char *v14; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+A0h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  Handle = 0LL;
  v5 = a4;
  v6 = 0;
  v14 = 0LL;
  Object = 0LL;
  if ( !a4 )
  {
    v5 = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread;
    if ( *(_DWORD *)(v4 + 44) - *(_DWORD *)(v4 + 40) >= 0 )
    {
LABEL_5:
      v9 = -1073741527;
      goto LABEL_12;
    }
    v6 = 1;
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v4 + 44)) > *(_DWORD *)(v4 + 40) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 44));
      goto LABEL_5;
    }
  }
  ThreadParams = (struct _EX_RUNDOWN_REF **)SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(a1, v6);
  v11 = ThreadParams;
  if ( ThreadParams )
  {
    ThreadParams[1] = a2;
    DWORD1(Object) = 0;
    v14 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    BYTE2(Object) = 6;
    ThreadParams[2] = (struct _EX_RUNDOWN_REF *)&Object;
    v9 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, a2[253].Count, 0LL, v5, ThreadParams, 0LL, a3);
    if ( v9 >= 0 )
    {
      v9 = 0;
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  if ( v6 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 44));
  if ( v11 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxDeleteThreadParams(v11);
LABEL_12:
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v9;
}
