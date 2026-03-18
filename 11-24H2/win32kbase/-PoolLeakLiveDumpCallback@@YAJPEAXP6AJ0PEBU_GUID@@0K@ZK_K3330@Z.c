/*
 * XREFs of ?PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1401BF8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1401BF79C (-PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PoolLeakLiveDumpCallback(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8)
{
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // ebx
  __int64 UserSessionState; // rax
  __int64 v14; // rcx
  bool v15; // cl
  __int64 v16; // rax
  bool v17; // al
  unsigned int v19; // edi
  int v20; // eax
  _OWORD v21[3]; // [rsp+30h] [rbp-58h] BYREF

  if ( !a8 )
    return 0LL;
  result = ((__int64 (__fastcall *)(void *, void *, _QWORD, _QWORD))a2)(a1, &unk_14026CB08, *(_QWORD *)a8, a8[2]);
  v12 = result;
  if ( (int)result >= 0 )
  {
    UserSessionState = W32GetUserSessionState(v11);
    v14 = *(_QWORD *)(UserSessionState + 72376);
    if ( v14 )
      v15 = *(_DWORD *)(v14 + 48) == 0;
    else
      v15 = 1;
    v16 = *(_QWORD *)(UserSessionState + 72384);
    if ( v16 )
      v17 = *(_QWORD *)(v16 + 40) == 0LL;
    else
      v17 = 1;
    if ( !v15 || !v17 )
    {
      v19 = 0;
      v21[0] = xmmword_14026CAF8;
      v21[1] = xmmword_14026CAE8;
      v21[2] = xmmword_14026CAD8;
      do
      {
        if ( v12 < 0 )
          break;
        v20 = PoolLeakLiveDumpAddSecondaryData(a1, a2, (const struct _GUID *)&v21[v19++]);
        v12 = v20;
      }
      while ( v19 < 3 );
    }
    return (unsigned int)v12;
  }
  return result;
}
