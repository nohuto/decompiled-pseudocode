/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1400D8B80
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     RIMLockShared @ 0x1400410B0 (RIMLockShared.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1400476D0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(HANDLE Handle, int a2, void *a3, void *a4)
{
  BOOL IsCurrentProcessDwm; // eax
  NTSTATUS v9; // ebx
  _QWORD *v10; // rsi
  _QWORD **v11; // r14
  int v12; // eax
  bool v13; // sf
  CInputSink *v14; // r14
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  __int64 v19; // rcx
  char *v20; // rdi
  PVOID Object; // [rsp+30h] [rbp-C8h] BYREF
  _OWORD Src[3]; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-90h]
  _OWORD v25[4]; // [rsp+70h] [rbp-88h] BYREF

  memset(Src, 0, sizeof(Src));
  v24 = 0LL;
  memset(v25, 0, sizeof(v25));
  IsCurrentProcessDwm = UserIsCurrentProcessDwm();
  v9 = !IsCurrentProcessDwm ? 0xC0000022 : 0;
  if ( !IsCurrentProcessDwm )
    goto LABEL_37;
  v10 = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 1u, ExCompositionObjectType, 1, &Object, 0LL);
  v11 = (_QWORD **)Object;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[1] + 16LL))(v11[1]);
    if ( v12 != 2 )
      v9 = -1073741788;
    v10 = v11;
    if ( v12 != 2 )
      v10 = 0LL;
  }
  else
  {
    v9 = -1073741816;
  }
  v13 = v9 < 0;
  if ( v9 < 0 )
  {
    ObfDereferenceObject(v11);
LABEL_12:
    v13 = v9 < 0;
  }
  if ( v13 )
    v10 = 0LL;
  if ( v9 < 0 )
    goto LABEL_35;
  v14 = 0LL;
  v9 = ObReferenceObjectByPointer(v10, 3u, ExCompositionObjectType, 0);
  if ( v9 >= 0 )
  {
    RIMLockShared((__int64)(v10 + 4));
    v9 = 0;
    v14 = (CInputSink *)(v10 + 3);
  }
  if ( v9 < 0 )
    goto LABEL_35;
  v15 = a2 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_30;
          v19 = *((_QWORD *)v14 + 9);
        }
        else
        {
          v19 = *((_QWORD *)v14 + 8);
        }
      }
      else
      {
        v19 = *((_QWORD *)v14 + 7);
      }
    }
    else
    {
      v19 = *((_QWORD *)v14 + 6);
    }
  }
  else
  {
    v19 = *((_QWORD *)v14 + 5);
  }
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v19 + 40LL))(v19, Src);
LABEL_30:
  CInputSink::UnlockAndRelease(v14);
  v20 = 0LL;
  v9 = ObReferenceObjectByPointer(v10, 3u, ExCompositionObjectType, 0);
  if ( v9 >= 0 )
  {
    RIMLockShared((__int64)(v10 + 4));
    v9 = 0;
    v20 = (char *)(v10 + 3);
  }
  if ( v9 >= 0 )
  {
    v25[0] = *(_OWORD *)(v20 + 88);
    v25[1] = *(_OWORD *)(v20 + 104);
    v25[2] = *(_OWORD *)(v20 + 120);
    v25[3] = *(_OWORD *)(v20 + 136);
    CInputSink::UnlockAndRelease((CInputSink *)v20);
  }
LABEL_35:
  if ( v10 )
    ObfDereferenceObject(v10);
LABEL_37:
  if ( v9 >= 0 )
  {
    RtlCopyToUser(a3, Src, 0x38uLL);
    RtlCopyToUser(a4, v25, 0x40uLL);
  }
  return (unsigned int)v9;
}
