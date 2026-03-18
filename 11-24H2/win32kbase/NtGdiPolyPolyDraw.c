/*
 * XREFs of NtGdiPolyPolyDraw @ 0x140067C00
 * Callers:
 *     <none>
 * Callees:
 *     FreeTmpBuffer @ 0x14001A2D0 (FreeTmpBuffer.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     AllocFreeTmpBuffer @ 0x140068090 (AllocFreeTmpBuffer.c)
 *     NtGdiFastPolyPolyline @ 0x140068368 (NtGdiFastPolyPolyline.c)
 *     GrePolyPolygon @ 0x140068E58 (GrePolyPolygon.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x14006AC5C (GreCreatePolyPolygonRgnInternal.c)
 *     GrePolyPolyline @ 0x140128930 (GrePolyPolyline.c)
 *     GrePolylineTo @ 0x140135F54 (GrePolylineTo.c)
 *     GrePolyBezier @ 0x14019CEA4 (GrePolyBezier.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r13
  __int64 PolyPolygonRgnInternal; // rdi
  int v9; // r14d
  unsigned int *p_Buffer; // r12
  struct _POINTL *v11; // r15
  void *v12; // rdx
  char *v13; // rcx
  unsigned int v14; // r13d
  __int64 i; // rcx
  size_t v16; // r8
  void *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (*v20)(void); // rax
  unsigned int v21; // edi
  __int64 (__fastcall *v22)(__int64, struct _POINTL *, _QWORD); // rax
  __int64 (*v24)(void); // rax
  int v25; // eax
  __int64 (*v26)(void); // rax
  __int64 (*v27)(void); // rax
  __int64 (*v28)(void); // rax
  __int64 (*v29)(void); // rax
  unsigned int Buffer; // [rsp+34h] [rbp-F4h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-F0h]
  __int64 v33; // [rsp+40h] [rbp-E8h]
  int v34; // [rsp+48h] [rbp-E0h]
  unsigned int v35; // [rsp+50h] [rbp-D8h]
  __int64 v36; // [rsp+58h] [rbp-D0h]
  unsigned int *v37; // [rsp+60h] [rbp-C8h]
  void *v38; // [rsp+68h] [rbp-C0h]
  struct _POINTL *v39; // [rsp+70h] [rbp-B8h]
  void *Src; // [rsp+78h] [rbp-B0h]
  __int64 v41; // [rsp+80h] [rbp-A8h]
  struct _POINTL v42; // [rsp+90h] [rbp-98h] BYREF

  v5 = a4;
  Src = a3;
  v38 = a2;
  v33 = a1;
  v41 = a1;
  v35 = a4;
  v32 = 0;
  PolyPolygonRgnInternal = 1LL;
  v36 = 1LL;
  Buffer = 0;
  if ( !a4 )
    return 0LL;
  if ( a5 == 2 )
  {
    v24 = *(__int64 (**)(void))(*(_QWORD *)(((__int64 (*)(void))W32GetWin32kBaseApiSetTable)() + 24) + 2200LL);
    if ( v24 )
    {
      v25 = v24();
      v9 = -1073741637;
    }
    else
    {
      v9 = -1073741637;
      v25 = -1073741637;
    }
    if ( v25 < 0 || (unsigned int)NtGdiFastPolyPolyline(a1, v38, a3, (unsigned int)v5) )
      return PolyPolygonRgnInternal;
  }
  else
  {
    v9 = -1073741637;
  }
  if ( (unsigned int)v5 <= 1 )
  {
    p_Buffer = &Buffer;
    goto LABEL_6;
  }
  if ( (unsigned int)(a5 - 3) > 2 )
  {
    if ( (unsigned int)v5 > 0x9C4000 )
    {
      EngSetLastError(0x57u);
      p_Buffer = 0LL;
    }
    else
    {
      p_Buffer = (unsigned int *)PALLOCNOZ((unsigned int)(4 * v5), 0x706D7447u);
    }
LABEL_6:
    v37 = p_Buffer;
    if ( p_Buffer )
    {
      v11 = &v42;
      v39 = &v42;
      v34 = 0;
      v12 = Src;
      v13 = (char *)Src + 4 * v5;
      if ( v13 < Src || (unsigned __int64)v13 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(p_Buffer, v12, 4 * v5);
      v14 = 0;
      v32 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v34 = i;
        if ( (unsigned int)i >= a4 )
          break;
        v14 += p_Buffer[i];
        v32 = v14;
      }
      if ( v14 > 0x4E2000 )
        goto LABEL_19;
      if ( v14 > 0xA )
      {
        v11 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v14);
        v39 = v11;
      }
      if ( v11 )
      {
        v16 = 8LL * v14;
        v17 = v38;
        if ( (char *)v38 + v16 < v38 || (unsigned __int64)v38 + v16 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, v17, v16);
      }
      else
      {
LABEL_19:
        PolyPolygonRgnInternal = 0LL;
        v36 = 0LL;
      }
      v18 = v33;
      if ( !PolyPolygonRgnInternal )
        goto LABEL_34;
      switch ( a5 )
      {
        case 1:
          v26 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a4, v33) + 24) + 2184LL);
          if ( v26 )
            v9 = v26();
          if ( v9 < 0 )
            goto LABEL_50;
          LODWORD(v22) = GrePolyPolygon(v33, (_DWORD)v11, (_DWORD)p_Buffer, a4, v14);
          break;
        case 2:
          v27 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a4, v33) + 24) + 2232LL);
          if ( v27 )
            v9 = v27();
          if ( v9 < 0 )
            goto LABEL_50;
          LODWORD(v22) = GrePolyPolyline(v33, (_DWORD)v11, (_DWORD)p_Buffer, a4, v14);
          break;
        case 3:
          v29 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a4, v33) + 24) + 2216LL);
          if ( v29 )
            v9 = v29();
          if ( v9 < 0 )
            goto LABEL_50;
          LODWORD(v22) = GrePolyBezier(v33, v11, Buffer);
          break;
        case 4:
          v28 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a4, v33) + 24) + 2264LL);
          if ( v28 )
            v9 = v28();
          if ( v9 < 0 )
            goto LABEL_50;
          LODWORD(v22) = GrePolylineTo(v33, v11, Buffer);
          break;
        case 5:
          v19 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(a4, v33) + 24);
          v20 = *(__int64 (**)(void))(v19 + 2248);
          if ( v20 )
            v9 = v20();
          if ( v9 >= 0 )
          {
            v21 = Buffer;
            v22 = *(__int64 (__fastcall **)(__int64, struct _POINTL *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                              v19,
                                                                                              v18)
                                                                                          + 24)
                                                                              + 2256LL);
            if ( v22 )
              LODWORD(v22) = v22(v33, v11, v21);
            break;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v11, v14);
LABEL_34:
          if ( v11 && v11 != &v42 )
            FreeTmpBuffer((__int64)v11, v18);
          if ( p_Buffer != &Buffer )
            GreDeleteFastMutex((char *)p_Buffer);
          return PolyPolygonRgnInternal;
        default:
LABEL_50:
          PolyPolygonRgnInternal = 0LL;
          goto LABEL_34;
      }
      PolyPolygonRgnInternal = (int)v22;
      goto LABEL_34;
    }
    return 0LL;
  }
  return 0LL;
}
