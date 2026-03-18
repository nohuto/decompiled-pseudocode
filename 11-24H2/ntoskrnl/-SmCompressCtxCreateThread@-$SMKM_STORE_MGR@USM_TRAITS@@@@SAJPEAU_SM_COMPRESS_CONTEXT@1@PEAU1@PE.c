/*
 * XREFs of ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x14044A41C
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140449540 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x14060A050 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ?SmCompressCtxDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140449650 (-SmCompressCtxDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAM.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x14044AAA4 (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A224A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(PVOID P))
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(PVOID); // rdi
  unsigned int v6; // r14d
  int v9; // edi
  __int64 ThreadParams; // rax
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
  ThreadParams = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(a1, v6);
  v11 = (struct _EX_RUNDOWN_REF **)ThreadParams;
  if ( ThreadParams )
  {
    *(_QWORD *)(ThreadParams + 8) = a2;
    DWORD1(Object) = 0;
    v14 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    BYTE2(Object) = 6;
    *(_QWORD *)(ThreadParams + 16) = &Object;
    v9 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, *(_QWORD *)(a2 + 2024), 0LL, v5, ThreadParams, 0LL, a3);
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
