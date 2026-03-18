/*
 * XREFs of ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1401B0EB0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     HMDestroyObject @ 0x140063280 (HMDestroyObject.c)
 */

void __fastcall DestroyHandleFirstPass(struct _HANDLEENTRY *a1)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned int i; // r8d
  __int64 v8; // rcx

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(UserSessionState + 19888);
  v4 = (unsigned int)(((__int64)a1 - *(_QWORD *)(UserSessionState + 19944)) >> 5);
  v5 = 5 * v4;
  if ( *((_BYTE *)a1 + 24) == 22 )
    HMUnlockObject(*(int **)(*(_QWORD *)(v3 + 40 * v4) + 16LL));
  v6 = *(_QWORD *)(v3 + 8 * v5);
  if ( *(_DWORD *)(v6 + 8) )
  {
    if ( *((_BYTE *)a1 + 24) == 13 )
    {
      *(_QWORD *)(v6 + 48) = 0LL;
      *(_QWORD *)(v6 + 56) = 0LL;
      if ( *(_QWORD *)(v6 + 96) )
      {
        for ( i = 0; i < *(_DWORD *)(v6 + 88); *(_QWORD *)(*(_QWORD *)(v6 + 96) + 8 * v8) = 0LL )
          v8 = i++;
      }
      *(_DWORD *)(v6 + 88) = 0;
    }
  }
  else
  {
    HMDestroyObject(*(struct _HEAD **)(v3 + 8 * v5));
  }
}
