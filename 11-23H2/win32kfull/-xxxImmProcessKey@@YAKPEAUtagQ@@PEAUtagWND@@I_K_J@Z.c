/*
 * XREFs of ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00819DC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012BAE0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1C0081B90 (-CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1C0081CCC (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1C0081CF4 (ClientImmProcessKey.c)
 *     _PostMessage @ 0x1C00983E0 (_PostMessage.c)
 */

__int64 __fastcall xxxImmProcessKey(struct tagQ *a1, struct tagWND *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // ebx
  struct _tagIMEHOTKEYOBJ *v11; // rax
  __int64 v12; // rdx
  int v13; // r15d
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v19; // r9

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 440LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  v12 = 0xFFFFFFFFLL;
  if ( v11 )
  {
    v13 = *((_DWORD *)v11 + 2);
    v19 = *((_QWORD *)v11 + 3);
    if ( (unsigned int)(v13 - 256) > 0x1F )
      goto LABEL_5;
    if ( *(_QWORD *)(v9 + 40) != v19 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
      PostMessage(a2, 80LL, v8, v19);
    }
    return (GetAppImeCompatFlags(*((_QWORD *)a2 + 2), v12) & 0x800000) == 0;
  }
  v13 = -1;
LABEL_5:
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  if ( v13 == -1 )
  {
    if ( !*(_QWORD *)(v9 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(*((_QWORD *)a2 + 5) + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( (unsigned int)(v10 - 241) > 0xA || (v14 = 1779, v15 = 1, !_bittest(&v14, v10 - 241)) )
      v15 = 0;
    if ( (unsigned int)(a3 - 260) <= 1 && v10 != 18 && v10 != 121 && !v15
      || (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 8) == 0 && !v15 && (v10 == 18 || (a5 & 0x20000000) != 0) )
    {
      return 0LL;
    }
  }
  if ( v10 == 231 )
    v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 882LL) << 16);
  v16 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v13);
  if ( (GetAppImeCompatFlags(*((_QWORD *)a2 + 2), v17) & 0x800000) != 0 )
    v16 &= ~1u;
  return v16;
}
