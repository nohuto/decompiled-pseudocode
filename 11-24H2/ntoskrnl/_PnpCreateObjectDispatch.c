/*
 * XREFs of _PnpCreateObjectDispatch @ 0x14081B20C
 * Callers:
 *     _PnpCreateObject @ 0x14081B09C (_PnpCreateObject.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpObjectRaiseCreateEvent @ 0x1409C4D80 (_PnpObjectRaiseCreateEvent.c)
 *     _PnpCtxGetObjectDispatchCallback @ 0x1409F4D0C (_PnpCtxGetObjectDispatchCallback.c)
 */

__int64 __fastcall PnpCreateObjectDispatch(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, _BYTE *a6, __int16 a7)
{
  int ObjectDispatchCallback; // ebx
  int v12; // r10d
  char v13; // cl
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+48h] [rbp-40h]
  char v18; // [rsp+50h] [rbp-38h]
  int v19; // [rsp+54h] [rbp-34h]

  v15 = 0LL;
  memset_0(&v16, 0, 0x40uLL);
  if ( a7 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    ObjectDispatchCallback = PnpCtxGetObjectDispatchCallback(a1, (unsigned int)a3, &v15);
    if ( ObjectDispatchCallback >= 0 )
    {
      if ( v15 )
      {
        v16 = a4;
        v19 = v12;
        ObjectDispatchCallback = guard_dispatch_icall_no_overrides(a1, a2);
        if ( ObjectDispatchCallback >= 0 )
        {
          v13 = v18;
          *a5 = v17;
          *a6 = v13;
          if ( v13 )
          {
            if ( a3 >= 7 )
              PnpObjectRaiseCreateEvent(a1, a2, (unsigned int)a3, *a5, &v16);
          }
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
  }
  return (unsigned int)ObjectDispatchCallback;
}
