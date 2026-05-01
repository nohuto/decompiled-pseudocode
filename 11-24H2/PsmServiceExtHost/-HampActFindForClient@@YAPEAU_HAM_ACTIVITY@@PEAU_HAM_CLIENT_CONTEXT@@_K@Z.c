/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001A5DC
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180006894 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180062D50 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x18007FE6C (-HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x180080704 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18008086C (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x18001A700 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // ebp
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v13 = a2;
  v4 = (v2 & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) + 424;
  v5 = v4 + 16;
  RtlAcquireSRWLockShared(v4 + 16);
  v6 = 0LL;
  v7 = *(_QWORD *)v4;
  v8 = *(_BYTE *)(v4 + 8) & 1;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    if ( v7 )
    {
      v7 ^= v4;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    while ( v7 )
    {
      v9 = HampActCompareByHandle(&v13, (void *)v7);
      if ( v9 < 0 )
      {
        v10 = *(_QWORD *)v7;
      }
      else
      {
        if ( v9 <= 0 )
          break;
        v10 = *(_QWORD *)(v7 + 8);
      }
      if ( v8 && v10 )
        v7 ^= v10;
      else
        v7 = v10;
    }
  }
  v11 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v11 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v5);
  if ( v11 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v11 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v11;
    else
      CemRcObjectDereference((_QWORD *)v11);
  }
  return (struct _HAM_ACTIVITY *)v6;
}
