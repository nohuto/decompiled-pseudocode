/*
 * XREFs of ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C01282F0
 * Callers:
 *     xxxSendMessageCallback @ 0x1C00333BC (xxxSendMessageCallback.c)
 *     xxxReceiveMessage @ 0x1C0126ED0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     xxxDefWindowProc @ 0x1C00DF700 (xxxDefWindowProc.c)
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 *     SfnDWORD @ 0x1C01243F0 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01C3958 (PrepareSentPointerMessageForClient.c)
 */

void __fastcall xxxSendMessageToClient(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagSMS *a5,
        int a6,
        __int64 *a7)
{
  __int64 v7; // r13
  unsigned int v8; // edi
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // r15
  char v17; // si
  BOOL v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int16 v23; // cx
  __int64 v24; // r11
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // r8
  _QWORD *v39; // r13
  __int64 CurrentProcessWow64Process; // rax
  ULONG v41; // r8d
  signed __int32 v42[8]; // [rsp+0h] [rbp-B8h] BYREF
  BOOL v43; // [rsp+30h] [rbp-88h]
  struct tagSMS *v44; // [rsp+38h] [rbp-80h]
  char v45; // [rsp+50h] [rbp-68h]
  BOOL v46; // [rsp+54h] [rbp-64h]
  char *v47; // [rsp+58h] [rbp-60h]
  __int128 v48; // [rsp+68h] [rbp-50h] BYREF
  __int64 v49; // [rsp+78h] [rbp-40h]
  unsigned int v50; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v51; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v52; // [rsp+D8h] [rbp+20h] BYREF

  v52 = a4;
  v51 = a3;
  v50 = a2;
  v7 = a3;
  v8 = a2;
  v10 = 1LL;
  v11 = 0LL;
  if ( a2 - 577 <= 3 )
    goto LABEL_37;
  if ( a2 < 0x245 || a2 > 0x257 || (v12 = 1, a2 == 589) )
    v12 = 0;
  if ( v12 )
LABEL_37:
    v13 = 1;
  else
    v13 = 0;
  if ( !v13 || (v14 = 1, a2 == 595) )
    v14 = 0;
  if ( v14 || (a2 != 528 || (_WORD)a3 != 582 ? (v15 = 0) : (v15 = 1), v15) )
  {
    if ( (_WORD)a3 != 1 )
    {
      if ( !(unsigned int)PrepareSentPointerMessageForClient(&v50, &v51, &v52, 0LL) )
      {
        *a7 = 0LL;
        return;
      }
      v7 = v51;
      v8 = v50;
    }
  }
  v16 = (char *)a1 + 40;
  v47 = (char *)a1 + 40;
  v17 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8;
  v45 = v17;
  v18 = v17 != 0;
  v46 = v18;
  if ( (unsigned int)PsGetWin32KFilterSet(v10) == 5 )
  {
    v37 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
    v39 = *(_QWORD **)(v37 + 248);
    _InterlockedOr(v42, 0);
    if ( v39 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v36, v35, v38);
      v41 = 4;
      if ( CurrentProcessWow64Process )
        v41 = 1;
      ProbeForRead(v39, 0x20uLL, v41);
      if ( *v39 )
      {
        *(_QWORD *)(v37 + 224) |= 0x100uLL;
        v7 = v51;
        v8 = v50;
LABEL_14:
        if ( (v8 & 0x1FFFF) >= 0x400 )
        {
          v20 = *(_QWORD *)(gpsi + 752LL);
          v21 = *(_QWORD *)(*(_QWORD *)v16 + 120LL);
          v44 = a5;
          v43 = v18;
          v19 = SfnDWORD((__int64 *)a1, v8, v7, v52, v21, v20);
        }
        else
        {
          v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v8]])(
                  a1,
                  v8,
                  v7,
                  v52,
                  *(_QWORD *)(*(_QWORD *)v16 + 120LL),
                  *(_QWORD *)(gpsi + 752LL),
                  v18,
                  a5);
        }
LABEL_16:
        *a7 = v19;
        return;
      }
    }
    v7 = v51;
    v8 = v50;
  }
  if ( gihmodUserApiHook >= 0 )
    goto LABEL_14;
  if ( gihmodDManipHook >= 0 )
    goto LABEL_14;
  if ( v8 == 90 )
    goto LABEL_14;
  v22 = *(_QWORD *)v16;
  v23 = *(_WORD *)(*(_QWORD *)v16 + 42LL) & 0x2FFF;
  if ( (unsigned __int16)(v23 - 673) > 9u )
    goto LABEL_14;
  v24 = v23;
  v25 = v23 - 666LL;
  v26 = *(_QWORD *)(v22 + 120);
  if ( v26 != *(_QWORD *)(gpsi + 8 * v25 + 584) && v26 != *(_QWORD *)(gpsi + 8 * v25 + 392) )
    goto LABEL_14;
  v27 = 2 * v25;
  v28 = gSharedInfo[v27 + 6];
  if ( !v28
    || v8 <= LODWORD(gSharedInfo[v27 + 5])
    && ((unsigned __int8)(1 << (v8 & 7)) & *(_BYTE *)(((unsigned __int64)v8 >> 3) + v28)) != 0
    || (*(_BYTE *)(v22 + 18) & 1) != 0 )
  {
    LOBYTE(v11) = v17 != 0;
    v29 = gpsi + 8 * v24;
    if ( (v8 & 0x1FFFF) >= 0x400 )
    {
      v44 = a5;
      v43 = v18;
      v19 = SfnDWORD((__int64 *)a1, v8, v7, v52, v11, *(_QWORD *)(v29 - 4608));
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, __int64, _QWORD, BOOL, struct tagSMS *))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v8]])(
              a1,
              v8,
              v7,
              v52,
              v11,
              *(_QWORD *)(v29 - 4608),
              v18,
              a5);
    }
    goto LABEL_16;
  }
  v48 = 0LL;
  v49 = 0LL;
  v30 = a6;
  if ( a6 )
    ThreadLock(a1, &v48);
  v31 = xxxDefWindowProc(a1, v8, v7, v52);
  v34 = a7;
  *a7 = v31;
  if ( v30 )
    ThreadUnlock1(v34, v32, v33);
}
