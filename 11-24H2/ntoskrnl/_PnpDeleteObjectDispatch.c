/*
 * XREFs of _PnpDeleteObjectDispatch @ 0x14081ACF8
 * Callers:
 *     _PnpDeleteObject @ 0x14081ABD4 (_PnpDeleteObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _PnpObjectRaiseDeleteEvent @ 0x14081C3DC (_PnpObjectRaiseDeleteEvent.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1409FBFCC (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpDeleteObjectDispatch(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int ObjectDispatchCallback; // ebx
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v11[16]; // [rsp+40h] [rbp-48h] BYREF

  v10 = 0LL;
  memset_0(v11, 0, sizeof(v11));
  if ( (_WORD)a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, a3, &v10);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v10 )
      {
        v11[0] = a4;
        ObjectDispatchCallback = guard_dispatch_icall_no_overrides(a1, a2, a3, 4LL);
        if ( ObjectDispatchCallback >= 0 && (int)a3 >= 7 )
          PnpObjectRaiseDeleteEvent(a1, a2, a3);
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
