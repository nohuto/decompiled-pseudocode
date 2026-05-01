/*
 * XREFs of ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800458BC
 * Callers:
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180015C0C (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180045548 (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x1800686BC (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x18006FD40 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x1800820FC (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180082278 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800824A4 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 * Callees:
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

void __fastcall HampActivityPropertiesInitialize(char *a1, char *a2, struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  _WORD *v6; // r9
  signed __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // r11
  __int16 v10; // ax
  _WORD *v11; // rax
  char *v12; // rcx
  signed __int64 v13; // rsi
  __int16 v14; // ax
  char *v15; // rax
  char *v16; // rbx

  memset_0((char *)a3 + 4, 0, 0x184uLL);
  v6 = (_WORD *)((char *)a3 + 12);
  *(_DWORD *)a3 = 8397888;
  v7 = a1 - ((char *)a3 + 12);
  v8 = 64LL;
  v9 = 64LL;
  do
  {
    if ( v9 == -2147483582 )
      break;
    v10 = *(_WORD *)((char *)v6 + v7);
    if ( !v10 )
      break;
    *v6++ = v10;
    --v9;
  }
  while ( v9 );
  v11 = v6 - 1;
  v12 = (char *)a3 + 140;
  if ( v9 )
    v11 = v6;
  v13 = a2 - v12;
  *v11 = 0;
  do
  {
    if ( v8 == -2147483582 )
      break;
    v14 = *(_WORD *)&v12[v13];
    if ( !v14 )
      break;
    *(_WORD *)v12 = v14;
    v12 += 2;
    --v8;
  }
  while ( v8 );
  v15 = v12 - 2;
  if ( v8 )
    v15 = v12;
  *(_WORD *)v15 = 0;
  *((_DWORD *)a3 + 69) = -1;
  *((_DWORD *)a3 + 67) = 5;
  v16 = (char *)a3 + 280;
  memset_0(v16, 0, 0x68uLL);
  *((_DWORD *)v16 + 8) = 0;
  *(_OWORD *)(v16 + 40) = 0LL;
  *(_OWORD *)(v16 + 56) = 0LL;
  *(_OWORD *)(v16 + 72) = 0LL;
  *((_QWORD *)v16 + 11) = 0LL;
  *((_QWORD *)v16 + 9) = -1LL;
  *((_QWORD *)v16 + 8) = -1LL;
  *((_QWORD *)v16 + 7) = -1LL;
  *((_QWORD *)v16 + 6) = -1LL;
  *((_QWORD *)v16 + 5) |= 0x80uLL;
  *((_DWORD *)v16 + 22) = 33;
}
