/*
 * XREFs of ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x1800847DC
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180080CE8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003EC6C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 */

__int64 __fastcall HampWakeManagerAllocateState(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  int v3; // eax
  struct _HAM_CLIENT_CONTEXT **v6; // [rsp+50h] [rbp-48h]
  __int128 v7; // [rsp+60h] [rbp-38h] BYREF
  _OWORD v8[2]; // [rsp+70h] [rbp-28h] BYREF

  v1 = 0;
  *(_QWORD *)&v7 = HampWakeManagerActivityCallback;
  *((_QWORD *)&v7 + 1) = 0LL;
  v6 = (struct _HAM_CLIENT_CONTEXT **)((char *)a1 + 8);
  v2 = *(_QWORD *)a1;
  memset(v8, 0, sizeof(v8));
  v3 = HampClientCreate(v2, 0LL, 0LL, 0LL, 0, 0, 0, &v7, (__int64)a1, (const unsigned __int16 **)v8, v6);
  if ( v3 < 0 )
    return (unsigned int)v3;
  return v1;
}
