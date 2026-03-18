/*
 * XREFs of MagGetLensContextInformation @ 0x1C01A29B0
 * Callers:
 *     NtUserMagGetContextInformation @ 0x1C01D6030 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C014DF9A (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1C01A2614 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     _GetMagnificationInputTransform @ 0x1C01F6468 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C026D8D0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        struct tagWND *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  unsigned int updated; // ebx
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  int v9; // r9d
  struct _MAG_THREAD_CONTEXT *v10; // rsi
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  struct _MAG_LENS_CONTEXT *v20; // rax
  struct _MAG_LENS_CONTEXT *v21; // rax
  struct _MAG_LENS_CONTEXT *v22; // rax
  struct _MAG_LENS_CONTEXT *v23; // r14
  unsigned int v24; // eax
  _DWORD *v25; // r12
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  void **Handle; // rbp
  void *v41; // rdi
  void *v42; // rcx
  unsigned int *v43; // rax
  unsigned int *v44; // r10
  int v45; // ecx
  __int64 v46; // r8
  unsigned int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  struct _MAG_LENS_CONTEXT *v51; // rax
  struct _MAG_LENS_CONTEXT *v52; // r8
  int v53; // edx
  int v54; // ecx
  int v55; // eax
  __int64 v56; // r9
  __int64 v57; // r11
  __int64 v58; // rdx
  struct _MAG_LENS_CONTEXT *v59; // rax
  int v60; // eax
  struct _MAG_LENS_CONTEXT *v61; // rax
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  PVOID Object; // [rsp+40h] [rbp-48h]
  __int128 v64; // [rsp+48h] [rbp-40h] BYREF
  __int64 v65; // [rsp+58h] [rbp-30h]

  v64 = 0LL;
  v65 = 0LL;
  updated = -1073741811;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v10 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  v12 = v9 - 2;
  if ( !v12 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (LensContext = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 232LL)) == 0LL )
    {
      LensContext = MagpFindLensContext(v10, a3);
      if ( !LensContext )
        return updated;
    }
    *(_OWORD *)a5 = *(_OWORD *)((char *)LensContext + 72);
    return 0;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v61 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 232LL)) == 0LL )
    {
      v61 = MagpFindLensContext(v10, a3);
      if ( !v61 )
        return updated;
    }
    if ( (*((_DWORD *)v61 + 4) & 2) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v61 + 88);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v61 + 104);
    }
    else
    {
      *(_OWORD *)a5 = gMagOutTransformIdentity;
      *(_OWORD *)(a5 + 16) = xmmword_1C035A228;
    }
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
    return (unsigned int)GetMagnificationInputTransform(a5) == 0 ? 0xC0000001 : 0;
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v59 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 240LL)) == 0LL )
    {
      v59 = MagpFindLensContext(v10, a3);
      if ( !v59 )
        return updated;
    }
    if ( (*((_DWORD *)v59 + 4) & 4) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v59 + 120);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v59 + 136);
      *(_OWORD *)(a5 + 32) = *(_OWORD *)((char *)v59 + 152);
      *(_OWORD *)(a5 + 48) = *(_OWORD *)((char *)v59 + 168);
      *(_OWORD *)(a5 + 64) = *(_OWORD *)((char *)v59 + 184);
      *(_OWORD *)(a5 + 80) = *(_OWORD *)((char *)v59 + 200);
      v60 = *((_DWORD *)v59 + 54);
    }
    else
    {
      *(_OWORD *)a5 = gMagEffectIdentity;
      *(_OWORD *)(a5 + 16) = xmmword_1C035A250;
      *(_OWORD *)(a5 + 32) = xmmword_1C035A260;
      *(_OWORD *)(a5 + 48) = xmmword_1C035A270;
      *(_OWORD *)(a5 + 64) = xmmword_1C035A280;
      *(_OWORD *)(a5 + 80) = xmmword_1C035A290;
      v60 = dword_1C035A2A0;
    }
    *(_DWORD *)(a5 + 96) = v60;
    return 0;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v51 = MagpFindLensContext(ThreadContext, a3);
    v52 = v51;
    if ( !v51 )
      return updated;
    v53 = *a6;
    if ( (unsigned int)*a6 >= 8 )
    {
      v54 = *((_DWORD *)v51 + 56);
      *(_DWORD *)a5 = v54;
      v55 = *((_DWORD *)v51 + 57);
      *(_DWORD *)(a5 + 4) = v55;
      v56 = (unsigned int)(v55 + v54);
      v57 = (unsigned int)v56;
      if ( (unsigned int)(v53 - 8) >= (unsigned __int64)(8 * v56) )
      {
        if ( (_DWORD)v56 )
        {
          v58 = 0LL;
          do
          {
            *(_QWORD *)(a5 + v58 + 8) = *(_QWORD *)(v58 + *((_QWORD *)v52 + 29));
            v58 += 8LL;
            --v57;
          }
          while ( v57 );
        }
        *a6 = 8 * v56 + 8;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v43 = (unsigned int *)MagpFindLensContext(ThreadContext, a3);
    v44 = v43;
    if ( !v43 )
      return updated;
    v45 = *a6;
    if ( (unsigned int)*a6 >= 0x10 )
    {
      v46 = v43[60];
      *(_DWORD *)a5 = v46;
      *(_DWORD *)(a5 + 4) = v43[61];
      *(_DWORD *)(a5 + 8) = v43[62];
      *(_DWORD *)(a5 + 12) = v43[63];
      if ( (unsigned int)(v45 - 16) >= (unsigned __int64)(24 * v46) )
      {
        v47 = 0;
        if ( (_DWORD)v46 )
        {
          do
          {
            v48 = v47++;
            v49 = 3 * v48;
            v50 = *((_QWORD *)v44 + 32);
            *(_OWORD *)(a5 + 8 * v49 + 16) = *(_OWORD *)(v50 + 8 * v49);
            *(_QWORD *)(a5 + 8 * v49 + 32) = *(_QWORD *)(v50 + 8 * v49 + 16);
            LODWORD(v46) = *(_DWORD *)a5;
          }
          while ( v47 < *(_DWORD *)a5 );
        }
        *a6 = 24 * v46 + 16;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
        return updated;
      if ( !a3 )
        return updated;
      v20 = MagpFindLensContext(ThreadContext, a3);
      if ( !v20 )
        return updated;
      *(_DWORD *)a5 = *((_DWORD *)v20 + 66);
    }
    else
    {
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v21 = MagpFindLensContext(ThreadContext, a3);
      if ( !v21 )
        return updated;
      *(_DWORD *)a5 = 0;
      *(_DWORD *)a5 = (*((_BYTE *)v21 + 16) & 0x40) != 0;
    }
    return 0;
  }
  if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v22 = MagpFindLensContext(ThreadContext, a3);
  v23 = v22;
  if ( !v22 )
    return updated;
  v24 = *((_DWORD *)v22 + 4);
  v25 = (_DWORD *)((char *)v23 + 240);
  v26 = (v24 >> 6) & 1;
  if ( (v24 & 0x20) != 0 || !*v25 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 8) = 0;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_DWORD *)(a5 + 4) = *v25;
    *(_DWORD *)(a5 + 12) = *((_DWORD *)v23 + 61);
    *(_DWORD *)(a5 + 16) = *((_DWORD *)v23 + 62);
    *(_DWORD *)(a5 + 20) = *((_DWORD *)v23 + 63);
    return 0;
  }
  ThreadLock(a3, &v64);
  v27 = ReferenceDwmProcess();
  Object = (PVOID)ReferenceDwmApiPort(v29, v28);
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  if ( Object && v27 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(Object, (__int64)v23 + 32, *(_QWORD *)(a5 + 24), v26, a5);
  }
  else
  {
    DereferenceDwmApiPort(Object, v34, v35, v36);
    updated = -1073741823;
  }
  EnterCrit(1LL, 0LL);
  ThreadUnlock1(v38, v37, v39);
  DereferenceDwmProcess(v27);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a5 < 0 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  if ( *(_DWORD *)(a5 + 4) != *v25
    || *(_DWORD *)(a5 + 12) != *((_DWORD *)v23 + 61)
    || *(_DWORD *)(a5 + 16) != *((_DWORD *)v23 + 62)
    || *(_DWORD *)(a5 + 20) != *((_DWORD *)v23 + 63) )
  {
    v42 = *(void **)(a5 + 40);
    if ( v42 )
    {
      ObfDereferenceObject(v42);
      *(_QWORD *)(a5 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a5 + 8) )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  Handle = (void **)(a5 + 40);
  v41 = *(void **)(a5 + 40);
  if ( !v41 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  *Handle = 0LL;
  updated = ObOpenObjectByPointer(v41, 0x80u, 0LL, 4u, MmSectionObjectType, 1, Handle);
  ObfDereferenceObject(v41);
  if ( (updated & 0x80000000) == 0 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  return updated;
}
