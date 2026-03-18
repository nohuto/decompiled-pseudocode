/*
 * XREFs of ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x14008A220
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     EngFreeMem @ 0x14001A6C0 (EngFreeMem.c)
 *     GreDeleteSemaphore @ 0x14003E0B0 (GreDeleteSemaphore.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall MultiUserGreCleanupEngResources(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  int v5; // edx
  __int64 *v6; // rbx
  int (*v7)(void); // rax
  void (__fastcall *v8)(_QWORD *); // rax
  int (*v9)(void); // rax
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64); // rax
  _QWORD *v12; // [rsp+30h] [rbp+8h]

  v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v4 = (_QWORD *)(v3 + 3040);
  while ( 1 )
  {
    v12 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v2 = (_QWORD *)*v4;
    v5 = *((_DWORD *)v12 + 4);
    if ( v5 )
    {
      v1 = (unsigned int)(v5 - 1);
      if ( !(_DWORD)v1 )
        goto LABEL_8;
      v1 = (unsigned int)(v1 - 1);
      if ( (_DWORD)v1 )
      {
        if ( (_DWORD)v1 == 2 )
LABEL_8:
          GreDeleteSemaphore((PERESOURCE)(v12 + 4), v1);
      }
      else
      {
        v2 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v12, v1) + 24);
        v7 = (int (*)(void))v2[150];
        if ( v7 && v7() >= 0 )
        {
          v1 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v1) + 24);
          v8 = *(void (__fastcall **)(_QWORD *))(v1 + 1208);
          if ( v8 )
            v8(v12 + 4);
        }
      }
    }
    else
    {
      EngFreeMem(v12 + 4);
    }
  }
  v6 = (__int64 *)(v3 + 3056);
  while ( (__int64 *)*v6 != v6 )
  {
    *(_DWORD *)(*v6 + 16) = 1;
    v2 = *(_QWORD **)(W32GetWin32kBaseApiSetTable(v2, v1) + 24);
    v9 = (int (*)(void))v2[152];
    if ( v9 )
    {
      if ( v9() >= 0 )
      {
        v10 = *v6;
        v1 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v2, v1) + 24);
        v11 = *(void (__fastcall **)(__int64))(v1 + 1224);
        if ( v11 )
          v11(v10 + 24);
      }
    }
  }
}
