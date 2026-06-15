/*
 * XREFs of McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC
 * Callers:
 *     ??2CAPONode@@SAPEAX_K@Z @ 0x14000B4B8 (--2CAPONode@@SAPEAX_K@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D010 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTUnlockModuleSection@@YAJPEAX@Z @ 0x14001E140 (-AERTUnlockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTUnlockHeap@@YAJPEAX@Z @ 0x14001E1A0 (-AERTUnlockHeap@@YAJPEAX@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14001E948 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockCurrentThread@@YAJXZ @ 0x140021944 (-AERTLockCurrentThread@@YAJXZ.c)
 *     ?AERTLockModuleSection@@YAJPEAX@Z @ 0x140021E60 (-AERTLockModuleSection@@YAJPEAX@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140022910 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x140032C00 (-AERTMemoryInitOnce@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x1400349CC (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140042740 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140043C0C (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140044DFC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTUnlockCurrentThread@@YAJXZ @ 0x140048AE8 (-AERTUnlockCurrentThread@@YAJXZ.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004AE00 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140076A78 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTLockZoneHeap@@YAJPEAX@Z @ 0x140076B0C (-AERTLockZoneHeap@@YAJPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140076BA0 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140076C2C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x14000FDB8 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0pqpqqqqqq_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11)
{
  int v12; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v13; // [rsp+38h] [rbp-99h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v15; // [rsp+50h] [rbp-81h]
  __int64 v16; // [rsp+58h] [rbp-79h]
  int *v17; // [rsp+60h] [rbp-71h]
  __int64 v18; // [rsp+68h] [rbp-69h]
  char *v19; // [rsp+70h] [rbp-61h]
  __int64 v20; // [rsp+78h] [rbp-59h]
  char *v21; // [rsp+80h] [rbp-51h]
  __int64 v22; // [rsp+88h] [rbp-49h]
  char *v23; // [rsp+90h] [rbp-41h]
  __int64 v24; // [rsp+98h] [rbp-39h]
  char *v25; // [rsp+A0h] [rbp-31h]
  __int64 v26; // [rsp+A8h] [rbp-29h]
  int *v27; // [rsp+B0h] [rbp-21h]
  __int64 v28; // [rsp+B8h] [rbp-19h]
  char *v29; // [rsp+C0h] [rbp-11h]
  __int64 v30; // [rsp+C8h] [rbp-9h]
  char *v31; // [rsp+D0h] [rbp-1h]
  __int64 v32; // [rsp+D8h] [rbp+7h]
  int v33; // [rsp+118h] [rbp+47h] BYREF

  v33 = a4;
  v16 = 8LL;
  v12 = 0;
  v15 = &v13;
  v13 = 0LL;
  v17 = &v33;
  v18 = 4LL;
  v19 = &a5;
  v21 = &a6;
  v23 = &a7;
  v25 = &a8;
  v27 = &v12;
  v29 = &a10;
  v31 = &a11;
  v20 = 8LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AEMemory, 0LL, 10LL, v14);
}
