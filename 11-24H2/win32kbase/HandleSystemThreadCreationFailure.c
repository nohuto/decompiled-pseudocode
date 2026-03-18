/*
 * XREFs of HandleSystemThreadCreationFailure @ 0x1401AD760
 * Callers:
 *     <none>
 * Callees:
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x140134A3C (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 */

__int64 __fastcall HandleSystemThreadCreationFailure(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KEVENT *v6; // rcx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v9 = 0LL;
  v1 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v3, v2, v4, v5) == v1 )
  {
    if ( (unsigned int)CSTPop(&v8, &v9) )
    {
      if ( v8 == 4 )
      {
        v6 = (struct _KEVENT *)*((_QWORD *)v9 + 1);
        if ( v6 )
          KeSetEvent(v6, 1, 0);
      }
    }
  }
  return 1LL;
}
