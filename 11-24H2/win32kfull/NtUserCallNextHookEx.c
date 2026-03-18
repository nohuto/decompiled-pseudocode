/*
 * XREFs of NtUserCallNextHookEx @ 0x14007EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x14007E77C (-NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x14007EA28 (-NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z.c)
 *     ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x14007EAA0 (-NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z.c)
 *     ?NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z @ 0x14007F1C8 (-NtUserfnHkINLPMSLLHOOKSTRUCT@@YA_JK_KPEAUtagMSLLHOOKSTRUCT@@@Z.c)
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14007FC00 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x1402915A0 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1402917F8 (-NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z.c)
 *     ?NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z @ 0x140291918 (-NtUserfnHkINLPMSG@@YA_JHK_KREAUtagMSG@@@Z.c)
 *     ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x140291A10 (-NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall NtUserCallNextHookEx(unsigned int a1, unsigned __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  struct tagRECT *v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // ecx

  EnterCrit(0LL, 0LL);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v9, v8);
  v12 = 0LL;
  if ( CurrentThreadNonPaged )
    v13 = *CurrentThreadNonPaged;
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(v13 + 728);
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 + 48);
    if ( (int)v15 > 7 )
    {
      v19 = v15 - 9;
      if ( !v19 )
      {
        v17 = NtUserfnHkINLPDEBUGHOOKSTRUCT(a1, a2, a3);
        goto LABEL_10;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v23 = (struct tagRECT *)a3;
        v24 = a2;
        if ( a1 != 5 )
          goto LABEL_33;
        v25 = 5;
        goto LABEL_35;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 2;
        if ( v22 )
        {
          if ( v22 != 1 )
            goto LABEL_11;
          v17 = NtUserfnHkINLPMSLLHOOKSTRUCT(a1, a2, a3);
        }
        else
        {
          v17 = NtUserfnHkINLPKBDLLHOOKSTRUCT(a1, a2, a3);
        }
        goto LABEL_10;
      }
    }
    else
    {
      switch ( (_DWORD)v15 )
      {
        case 7:
          goto LABEL_23;
        case 3:
LABEL_7:
          v16 = (__int64 *)W32GetCurrentThreadNonPaged(v15, v11);
          if ( v16 )
            v12 = *v16;
          v17 = NtUserfnHkINLPMSG(*(_DWORD *)(*(_QWORD *)(v12 + 728) + 48LL), a1, a2, a3);
          goto LABEL_10;
        case 5:
          if ( a1 )
          {
            switch ( a1 )
            {
              case 3u:
                v17 = NtUserfnHkINLPCBTCREATESTRUCT(3u, a2, a3, a4);
                goto LABEL_10;
              case 5u:
                v17 = NtUserfnHkINLPCBTACTIVATESTRUCT(5, a2, a3);
                goto LABEL_10;
              case 6u:
LABEL_23:
                v17 = NtUserfnHkINLPMOUSEHOOKSTRUCTEX(a1, a2, a3);
LABEL_10:
                v12 = v17;
                goto LABEL_11;
            }
            goto LABEL_32;
          }
          v23 = (struct tagRECT *)a3;
          v24 = a2;
          v25 = 0;
LABEL_35:
          v17 = NtUserfnHkINLPRECT(v25, v24, v23);
          goto LABEL_10;
        case 0xFFFFFFFF:
          goto LABEL_7;
      }
      if ( (_DWORD)v15 != 2 )
      {
        if ( (_DWORD)v15 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
    }
LABEL_32:
    v23 = (struct tagRECT *)a3;
    v24 = a2;
LABEL_33:
    v17 = xxxCallNextHookEx(a1, v24, (__int64)v23);
    goto LABEL_10;
  }
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v12;
}
