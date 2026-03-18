/*
 * XREFs of _GetUserObjectInformation @ 0x1401063F8
 * Callers:
 *     EditionGetUserObjectInformationEntryPoint @ 0x140106250 (EditionGetUserObjectInformationEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     CheckHandleFlag @ 0x1401826E8 (CheckHandleFlag.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _QWORD *a3, unsigned int a4, int *a5)
{
  int v8; // edi
  NTSTATUS v9; // eax
  PVOID v10; // rsi
  POBJECT_TYPE *ObjectType; // r14
  ACCESS_MASK v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD ***v15; // rsi
  int v16; // ebx
  int v17; // ebx
  const void **v18; // rax
  size_t v19; // r8
  int v20; // ecx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  PVOID v25; // rbx
  void *v26; // rcx
  ULONG v27; // eax
  int v29; // [rsp+30h] [rbp-88h]
  unsigned int v30; // [rsp+34h] [rbp-84h]
  const void **v31; // [rsp+38h] [rbp-80h]
  PVOID v32; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-60h] BYREF
  __int64 v35; // [rsp+68h] [rbp-50h]
  _QWORD *v36; // [rsp+70h] [rbp-48h]
  PVOID v37; // [rsp+78h] [rbp-40h]
  _QWORD ***v38; // [rsp+80h] [rbp-38h]

  v30 = 1;
  v8 = 0;
  v29 = 0;
  HandleInformation = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  v10 = Object;
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(v10);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v12 = 2;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
LABEL_49:
        UserSetLastError(1);
        return 0LL;
      }
      v12 = 1;
    }
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_49;
    v32 = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, v12, (POBJECT_TYPE)ObjectType, 1, &v32, &HandleInformation);
    v15 = (_QWORD ***)v32;
    v37 = v32;
    if ( v9 >= 0 )
    {
      v16 = a2 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          if ( ObQueryNameInfo(v32) )
            v18 = (const void **)(ObQueryNameInfo(v15) + 8);
          else
            v18 = 0LL;
LABEL_11:
          v31 = v18;
          if ( v18 )
          {
            v19 = *(unsigned __int16 *)v18;
            v29 = v19 + 2;
            if ( (int)v19 + 2 <= a4 )
            {
              memmove(a3, v18[1], v19);
              *(_WORD *)((char *)a3 + *(unsigned __int16 *)v31) = 0;
LABEL_44:
              *a5 = v29;
              ObfDereferenceObject(v15);
              return v30;
            }
            goto LABEL_15;
          }
LABEL_14:
          v29 = 0;
          goto LABEL_44;
        }
        v21 = v17 - 1;
        if ( !v21 )
        {
          v18 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 != 2 || ObjectType != ExDesktopObjectType || !(unsigned int)IsCurrentProcessDwm() )
              {
                v20 = 87;
                goto LABEL_16;
              }
              v29 = 8;
              if ( a4 >= 8 )
              {
                v35 = **v15[1];
                *a3 = v35;
                goto LABEL_44;
              }
            }
            else
            {
              v29 = 4;
              if ( a4 >= 4 )
              {
                v38 = *(_QWORD ****)(W32GetUserSessionState(v14, v13) + 19200);
                LOBYTE(v8) = v15 == v38;
                *(_DWORD *)a3 = v8;
                goto LABEL_44;
              }
            }
          }
          else
          {
            v29 = 4;
            if ( a4 >= 4 )
            {
              *(_DWORD *)a3 = *((_DWORD *)v32 + 36) >> 10;
              goto LABEL_44;
            }
          }
        }
        else
        {
          v25 = v32;
          if ( ObjectType != (POBJECT_TYPE *)ExWindowStationObjectType )
            v25 = (PVOID)*((_QWORD *)v32 + 5);
          v26 = (void *)*((_QWORD *)v25 + 24);
          if ( !v26 )
            goto LABEL_14;
          v27 = RtlLengthSid(v26);
          v29 = v27;
          if ( v27 <= a4 )
          {
            memmove(a3, *((const void **)v25 + 24), v27);
            goto LABEL_44;
          }
        }
      }
      else
      {
        v29 = 12;
        if ( a4 >= 0xC )
        {
          v36 = a3;
          *(_DWORD *)a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)((char *)a3 + 4) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL) )
              *((_DWORD *)a3 + 2) |= 1u;
          }
          else if ( (*((_DWORD *)v32 + 16) & 4) == 0 )
          {
            *((_DWORD *)a3 + 2) = 1;
          }
          goto LABEL_44;
        }
      }
LABEL_15:
      v20 = 122;
LABEL_16:
      UserSetLastError(v20);
      v30 = 0;
      goto LABEL_44;
    }
  }
  SetLastNtError((unsigned int)v9);
  return 0LL;
}
