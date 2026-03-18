/*
 * XREFs of _SetUserObjectInformation @ 0x140271980
 * Callers:
 *     NtUserSetObjectInformation @ 0x14029E0B0 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  int v7; // eax
  PVOID v8; // r14
  POBJECT_TYPE *ObjectType; // rbx
  ACCESS_MASK v10; // edx
  __int64 v11; // r8
  int v12; // ecx
  __int16 v14; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-40h] BYREF
  _DWORD *v18; // [rsp+50h] [rbp-38h]
  PVOID v19; // [rsp+58h] [rbp-30h] BYREF

  v15 = 1;
  HandleInformation = 0LL;
  v14 = 0;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v8 = Object;
  if ( v7 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(v8);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v10 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        UserSetLastError(1);
        return 0LL;
      }
      v10 = 128;
    }
    v19 = 0LL;
    v7 = ObReferenceObjectByHandle(Handle, v10, (POBJECT_TYPE)ObjectType, 1, &v19, &HandleInformation);
    if ( v7 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          v18 = a3;
          LOBYTE(v14) = *a3 != 0;
          HIBYTE(v14) = HandleInformation.HandleAttributes & 1;
          LOBYTE(v11) = 1;
          ObSetHandleAttributes(Handle, &v14, v11);
          if ( ObjectType == ExDesktopObjectType )
          {
            v15 = SetHandleFlag(Handle, 0LL, v18[2] & 1);
            if ( !v15 )
              UserSetLastError(8);
          }
          goto LABEL_16;
        }
        v12 = 13;
      }
      else
      {
        v12 = 87;
      }
      UserSetLastError(v12);
      v15 = 0;
LABEL_16:
      ObfDereferenceObject(v19);
      return v15;
    }
  }
  SetLastNtError(v7);
  return 0LL;
}
