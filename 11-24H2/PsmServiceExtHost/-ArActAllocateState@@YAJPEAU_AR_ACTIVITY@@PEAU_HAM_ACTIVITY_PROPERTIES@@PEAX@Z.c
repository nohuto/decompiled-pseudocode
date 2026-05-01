/*
 * XREFs of ?ArActAllocateState@@YAJPEAU_AR_ACTIVITY@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAX@Z @ 0x18003EAB8
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B30 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ArActAllocateState(struct _AR_ACTIVITY *a1, struct _HAM_ACTIVITY_PROPERTIES *a2, void *a3)
{
  __int64 v6; // r8
  _OWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 result; // rax
  char *v19; // [rsp+20h] [rbp-1C8h]
  _DWORD v20[100]; // [rsp+30h] [rbp-1B8h] BYREF

  memset_0(v20, 0, 0x188uLL);
  v6 = *((_QWORD *)a1 + 2);
  v7 = v20;
  v8 = 3LL;
  v9 = *(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  do
  {
    v10 = *((_OWORD *)a2 + 1);
    *v7 = *(_OWORD *)a2;
    v11 = *((_OWORD *)a2 + 2);
    v7[1] = v10;
    v12 = *((_OWORD *)a2 + 3);
    v7[2] = v11;
    v13 = *((_OWORD *)a2 + 4);
    v7[3] = v12;
    v14 = *((_OWORD *)a2 + 5);
    v7[4] = v13;
    v15 = *((_OWORD *)a2 + 6);
    v7[5] = v14;
    v16 = *((_OWORD *)a2 + 7);
    a2 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a2 + 128);
    v7[6] = v15;
    v7 += 8;
    *(v7 - 1) = v16;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v7 = *(_QWORD *)a2;
  if ( (*((_BYTE *)a1 + 24) & 1) == 0 )
    v20[0] |= 0x200000u;
  v17 = *(_QWORD *)(v9 + 80);
  v19 = (char *)a1 + 8;
  if ( a3 )
    result = HamCreateActivityForProcess(v17, a1, a3, v20, v19);
  else
    result = HamCreateActivity(v17, a1, v6 + 40, v20, v19);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
