/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x140028FC0
 * Callers:
 *     ?QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1403AC990 (-QuerySwapChainBindingStatus@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJIPEAU_D3DKMT_PRESENTHISTORY.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     DxgkGetSessionTokenManager @ 0x14001A800 (DxgkGetSessionTokenManager.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(HANDLE Handle, char *Src)
{
  HANDLE v3; // r13
  _QWORD *v4; // rdi
  int SessionTokenManager; // ebx
  __int64 v6; // r12
  PVOID v7; // r14
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r15
  _QWORD *v15; // rsi
  _QWORD *v16; // rsi
  _QWORD *v17; // r13
  _QWORD *v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // r13
  int v21; // ebx
  char v22; // al
  _QWORD *v24; // [rsp+30h] [rbp-8B8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-8B0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-8A8h] BYREF
  int v27; // [rsp+48h] [rbp-8A0h]
  PVOID v28; // [rsp+50h] [rbp-898h]
  HANDLE v29; // [rsp+58h] [rbp-890h]
  HANDLE v30; // [rsp+68h] [rbp-880h]
  _BYTE v31[1056]; // [rsp+70h] [rbp-878h] BYREF
  _QWORD v32[132]; // [rsp+490h] [rbp-458h] BYREF

  v3 = Handle;
  v29 = Handle;
  v30 = Handle;
  v4 = 0LL;
  SessionTokenManager = 0;
  v6 = 0LL;
  v25 = 0LL;
  memset(v32, 0, sizeof(v32));
  v7 = 0LL;
  v28 = 0LL;
  if ( Src )
  {
    if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    {
      LODWORD(v24) = 0;
      RtlCopyFromUser(&v24, Src, 4uLL);
      if ( (_DWORD)v24 != 2 )
        SessionTokenManager = -1073741811;
      v27 = SessionTokenManager;
      memset(v31, 0, sizeof(v31));
      RtlCopyFromUser(v31, Src + 16, 0x420uLL);
      v8 = v32;
      v9 = v31;
      v10 = 8LL;
      do
      {
        *v8 = *v9;
        v8[1] = v9[1];
        v8[2] = v9[2];
        v8[3] = v9[3];
        v8[4] = v9[4];
        v8[5] = v9[5];
        v8[6] = v9[6];
        v8 += 8;
        *(v8 - 1) = v9[7];
        v9 += 8;
        --v10;
      }
      while ( v10 );
      *v8 = *v9;
      v8[1] = v9[1];
      Object = 0LL;
      RtlCopyFromUser(&Object, Src + 8, 8uLL);
      v7 = Object;
      v28 = Object;
      v3 = v29;
    }
    else
    {
      v11 = Src + 16;
      v12 = v32;
      v13 = 8LL;
      do
      {
        *v12 = *v11;
        v12[1] = v11[1];
        v12[2] = v11[2];
        v12[3] = v11[3];
        v12[4] = v11[4];
        v12[5] = v11[5];
        v12[6] = v11[6];
        v12 += 8;
        *(v12 - 1) = v11[7];
        v11 += 8;
        --v13;
      }
      while ( v13 );
      *v12 = *v11;
      v12[1] = v11[1];
      v7 = (PVOID)*((_QWORD *)Src + 1);
      SessionTokenManager = -1073741811;
      if ( *(_DWORD *)Src == 2 )
        SessionTokenManager = 0;
    }
  }
  KeEnterCriticalRegion();
  if ( SessionTokenManager >= 0 )
  {
    SessionTokenManager = DxgkGetSessionTokenManager(&v25);
    v6 = v25;
    if ( SessionTokenManager >= 0 )
    {
      v14 = 0LL;
      Object = 0LL;
      SessionTokenManager = ObReferenceObjectByHandle(v3, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
      v15 = Object;
      if ( SessionTokenManager >= 0 )
      {
        if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 1 )
        {
          v14 = v15;
        }
        else
        {
          ObfDereferenceObject(v15);
          SessionTokenManager = -1073741788;
        }
      }
      if ( SessionTokenManager >= 0 )
      {
        v16 = 0LL;
        v24 = 0LL;
        SessionTokenManager = ObReferenceObjectByPointer(v14, 3u, g_pDxgkCompositionObjectType, 0);
        if ( SessionTokenManager >= 0 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v14 + 6, 0LL);
          v14[7] = PsGetCurrentThreadId();
          SessionTokenManager = 0;
          v16 = v14 + 5;
          v24 = v14 + 5;
        }
        if ( SessionTokenManager >= 0 )
        {
          v25 = 0LL;
          if ( !*((_DWORD *)v16 + 34) )
            goto LABEL_27;
          v17 = v16 + 15;
          v18 = (_QWORD *)v16[15];
          if ( v18 == v16 + 15 )
            goto LABEL_27;
          while ( 1 )
          {
            v19 = v18 - 3;
            if ( (PVOID)*(v18 - 1) == v7 )
              break;
            v18 = (_QWORD *)*v18;
            if ( v18 == v17 )
              goto LABEL_26;
          }
          v21 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v19 + 8LL))(v19);
          v25 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v19 + 32LL))(v19);
          v22 = v19[40];
          if ( v21 != 2 )
          {
LABEL_26:
            v16 = v24;
            goto LABEL_27;
          }
          v16 = v24;
          if ( !v22 )
            goto LABEL_27;
          SessionTokenManager = 0;
          if ( *((_DWORD *)v24 + 34) && *(_BYTE *)(*v17 - 24LL + 40) )
            v4 = (_QWORD *)(*v17 - 24LL);
          if ( v4 && (PVOID)v4[2] == v7 && (*(unsigned int (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4) == 2 )
            (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 64LL))(v4, v32);
          else
LABEL_27:
            SessionTokenManager = -1073741811;
          CCompositionSurface::UnlockAndRelease((CCompositionSurface *)v16);
          v20 = v25;
          if ( SessionTokenManager >= 0 )
          {
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 192LL))(v6) )
            {
              SessionTokenManager = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 112LL))(v6, v14);
            }
            else
            {
              SessionTokenManager = -1071775730;
              if ( v20 )
                SessionTokenManager = -1071775733;
            }
          }
        }
        ObfDereferenceObject(v14);
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
