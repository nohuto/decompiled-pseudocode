/*
 * XREFs of ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x14007DD88
 * Callers:
 *     DrawTextExWorker @ 0x14007C800 (DrawTextExWorker.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14007DA3C (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     ?DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z @ 0x14007E3E8 (-DT_DrawJustifiedLine@@YAXPEAUHDC__@@HPEBGHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall AddEllipsisAndDrawLine(
        __int64 a1,
        __int64 a2,
        char *a3,
        int a4,
        unsigned int a5,
        struct DRAWTEXTDATA *a6)
{
  unsigned int v6; // edi
  HDC v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdi
  char *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  struct tagTHREADINFO *v19; // rax
  struct tagTHREADINFO *v20; // rax
  int v21; // [rsp+30h] [rbp-D0h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+80h] [rbp-80h]
  char v28; // [rsp+90h] [rbp-70h] BYREF

  v25 = a2;
  v27 = 0LL;
  v6 = a4;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v8 = (HDC)a1;
  v9 = 0LL;
  v24 = -1LL;
  v26 = a1;
  v22 = a4;
  PtiCurrent(a1, a2);
  if ( (a5 & 0x8000) == 0 )
    goto LABEL_6;
  if ( !(unsigned int)NeedsEndEllipsis(v8, (const unsigned __int16 *)a3, &v22, a6, a5, a6) )
  {
    v6 = v22;
    goto LABEL_6;
  }
  v10 = v22;
  if ( v22 + 4 <= 128 )
  {
    v11 = &v28;
LABEL_5:
    memmove(v11, a3, 2 * v10);
    a3 = v11;
    *(_QWORD *)&v11[2 * v10] = 0x2E002E002ELL;
    v6 = v10 + 3;
    v8 = (HDC)v26;
LABEL_6:
    DT_DrawJustifiedLine(v8, v25, (const unsigned __int16 *)a3, v6, a5, a6, v21);
    if ( v9 )
      UserRtlFreeMem(v9);
    if ( v24 != -1 )
    {
      v20 = PtiCurrent(v13, v12);
      *((_QWORD *)v20 + 48) = BugCheckParameter2[0];
    }
    return v6;
  }
  v9 = UserRtlAllocMem((unsigned int)(2 * (v22 + 4)));
  if ( v9 )
  {
    if ( v24 != -1 )
    {
      BugCheckParameter4 = PtiCurrent(v16, v15);
      KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, v9, (ULONG_PTR)BugCheckParameter4);
    }
    v19 = PtiCurrent(v16, v15);
    v11 = (char *)v9;
    BugCheckParameter2[0] = *((_QWORD *)v19 + 48);
    *((_QWORD *)v19 + 48) = BugCheckParameter2;
    v24 = (__int64)Win32FreePool;
    BugCheckParameter2[1] = v9;
    goto LABEL_5;
  }
  if ( v24 != -1 )
  {
    v17 = PtiCurrent(v16, v15);
    *((_QWORD *)v17 + 48) = BugCheckParameter2[0];
  }
  return 0LL;
}
