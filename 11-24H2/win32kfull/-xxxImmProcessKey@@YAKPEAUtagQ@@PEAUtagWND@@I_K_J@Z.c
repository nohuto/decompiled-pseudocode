/*
 * XREFs of ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140238600
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140066508 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x14019FF30 (-CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z.c)
 *     ClientImmProcessKey @ 0x1401B7F9C (ClientImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1401D06BC (GetAppImeCompatFlags.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x140280898 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxImmProcessKey(struct tagQ *a1, struct tagWND *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  __int64 v8; // rdi
  int v9; // ebx
  struct _tagIMEHOTKEYOBJ *v10; // rax
  int v11; // esi
  __int64 v12; // rbp
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  bool v17; // cc
  __int64 UserSessionState; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  unsigned int v23; // ebx
  __int64 v24; // rdx
  int AppImeCompatFlags; // ecx

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 480LL);
  if ( !v8 )
    return 0LL;
  v9 = (unsigned __int8)a4;
  v10 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 + 2);
    v12 = *((_QWORD *)v10 + 3);
  }
  else
  {
    v11 = -1;
    v12 = 0LL;
  }
  v13 = (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() == 0;
  v16 = v11 - 256;
  if ( v13 )
  {
    v17 = v16 <= 0x1F;
  }
  else
  {
    if ( v16 <= 0x1F )
      goto LABEL_11;
    v17 = (unsigned int)(v11 - 67175425) <= 0xFBFDFBFF;
  }
  if ( v17 )
  {
LABEL_11:
    if ( *(_QWORD *)(v8 + 40) != v12 )
    {
      UserSessionState = W32GetUserSessionState(v15, v14);
      _PostTransformableMessageExtended(
        a2,
        0x50u,
        (*(_DWORD *)(UserSessionState + 66128) & *(_DWORD *)(v8 + 64)) != 0,
        v12,
        0LL,
        1);
    }
    return (GetAppImeCompatFlags(*((struct tagTHREADINFO **)a2 + 2), v14) & 0x800000) == 0;
  }
  v21 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 19928);
  if ( (*(_DWORD *)v21 & 4) == 0 )
    return 0LL;
  if ( v11 == -1 )
  {
    if ( !*(_QWORD *)(v8 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(*((_QWORD *)a2 + 5) + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v8 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    v20 = 0;
    if ( (unsigned int)(v9 - 241) <= 0xA )
    {
      v22 = 1779;
      if ( _bittest(&v22, v9 - 241) )
        v20 = 1;
    }
    if ( (unsigned int)(a3 - 260) <= 1 && v9 != 18 && v9 != 121 && !(_DWORD)v20 )
      return 0LL;
    v21 = *(unsigned int *)(*(_QWORD *)(v8 + 80) + 12LL);
    if ( (v21 & 8) == 0 && !(_DWORD)v20 && (v9 == 18 || (a5 & 0x20000000) != 0) )
      return 0LL;
  }
  if ( v9 == 231 )
    v9 = a4 | (*((unsigned __int16 *)PtiCurrent(v21, v20) + 461) << 16);
  v23 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v8 + 40), v9, a5, v11);
  AppImeCompatFlags = GetAppImeCompatFlags(*((struct tagTHREADINFO **)a2 + 2), v24);
  result = v23 & 0xFFFFFFFE;
  if ( (AppImeCompatFlags & 0x800000) == 0 )
    return v23;
  return result;
}
