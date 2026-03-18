/*
 * XREFs of ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44
 * Callers:
 *     xxxDrawAnimatedRects @ 0x1402DE074 (xxxDrawAnimatedRects.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     GetWindowBorders @ 0x14006E4E8 (GetWindowBorders.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     IsRemoteConnection @ 0x140131CF0 (IsRemoteConnection.c)
 *     _WindowFromDC @ 0x14015A3B8 (_WindowFromDC.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402DD95C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxAnimateCaption(struct tagWND *a1, HDC a2, struct tagRECT *a3, struct tagRECT *a4)
{
  __int64 v7; // rcx
  unsigned int DpiForSystem; // eax
  LONG v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 UserSessionState; // rax
  HDC CompatibleDC; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  LONG left; // ecx
  LONG top; // eax
  LONG v22; // r14d
  LONG v23; // r15d
  LONG right; // esi
  int v25; // r12d
  int v26; // esi
  __int64 v27; // rcx
  int WindowBorders; // r13d
  __int64 v29; // rcx
  unsigned int v30; // eax
  int DpiDependentMetric; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  LONG v34; // eax
  __int64 v35; // rax
  struct tagWND *v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  HDC v46; // r13
  __int64 v47; // rcx
  int v48; // r12d
  __int64 i; // rax
  int v50; // r8d
  unsigned int v51; // ecx
  unsigned __int16 v52; // cx
  __int64 v53; // rcx
  __int64 v54; // rdx
  _BYTE v55[4]; // [rsp+60h] [rbp-69h] BYREF
  int v56; // [rsp+64h] [rbp-65h]
  int v57; // [rsp+68h] [rbp-61h]
  int v58; // [rsp+6Ch] [rbp-5Dh]
  LONG v59; // [rsp+70h] [rbp-59h]
  LONG v60; // [rsp+74h] [rbp-55h]
  int v61; // [rsp+78h] [rbp-51h]
  HDC v62; // [rsp+80h] [rbp-49h]
  struct tagWND *v63; // [rsp+88h] [rbp-41h]
  unsigned __int64 v64; // [rsp+90h] [rbp-39h]
  struct tagRECT *v65; // [rsp+98h] [rbp-31h] BYREF
  struct tagWND *v66; // [rsp+A0h] [rbp-29h]
  __int64 v67; // [rsp+A8h] [rbp-21h]
  HBITMAP CompatibleBitmap; // [rsp+B0h] [rbp-19h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-11h] BYREF
  RECT v70; // [rsp+C8h] [rbp-1h] BYREF

  v63 = a1;
  v64 = (unsigned __int64)a4;
  v65 = a3;
  v62 = a2;
  v66 = (struct tagWND *)WindowFromDC((__int64)a2, (__int64)a2);
  if ( v66 )
  {
    DpiForSystem = GetDpiForSystem(v7);
    v9 = GetDpiDependentMetric(2, DpiForSystem) - 1;
    if ( !IsRemoteConnection(v11, v10) )
    {
      v14 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19928);
      v15 = *(unsigned int *)(v14 + 2236);
      if ( (v15 & 2) == 0 )
      {
        UserSessionState = W32GetUserSessionState(v14, v15);
        CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(UserSessionState + 43288));
        if ( CompatibleDC )
        {
          left = a4->left;
          top = a4->top;
          v22 = a3->top;
          v23 = a3->left;
          right = a3->right;
          v25 = a4->right - a4->left;
          v59 = left;
          v26 = right - v23;
          v27 = *((_QWORD *)a1 + 5);
          v60 = top;
          WindowBorders = GetWindowBorders(*(unsigned int *)(v27 + 28), *(unsigned int *)(v27 + 24), v18, v19);
          v30 = GetDpiForSystem(v29);
          DpiDependentMetric = GetDpiDependentMetric(2, v30);
          v32 = (unsigned int)(2 * WindowBorders);
          if ( v65->bottom - v22 > DpiDependentMetric )
          {
            v23 += WindowBorders;
            v22 += WindowBorders;
            v26 -= v32;
          }
          v33 = (unsigned int)(*(_DWORD *)(v64 + 12) - v60);
          if ( (int)v33 > DpiDependentMetric )
          {
            v59 += WindowBorders;
            v60 += WindowBorders;
            v25 -= v32;
          }
          v58 = v23;
          v34 = v25;
          v57 = v22;
          v56 = v26;
          v70.left = 0;
          if ( v26 > v25 )
            v34 = v26;
          v70.top = v9;
          v70.right = v34;
          v70.bottom = 2 * v9;
          v35 = W32GetUserSessionState(v33, v32);
          CompatibleBitmap = GreCreateCompatibleBitmapEx(
                               *(HDC *)(*(_QWORD *)(v35 + 57008) + 64LL),
                               v70.right,
                               2 * v9,
                               0,
                               0LL,
                               0LL);
          v36 = v66;
          v67 = GreSelectBitmap(CompatibleDC, CompatibleBitmap);
          Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v66);
          if ( *(_DWORD *)(W32GetUserSessionState(v38, v37) + 43304)
            || (v41 = *(_DWORD *)(W32GetUserSessionState(v40, v39) + 67060) & 0x80000010, v42 = 45, v41 != -2147483632) )
          {
            v42 = 13;
          }
          xxxDrawCaptionTemp(v63, CompatibleDC, &v70, 0LL, 0LL, 0LL, v42);
          LOBYTE(v43) = 1;
          LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v55, v43);
          EnterLeaveCritShared::EnterLeaveCritShared(&v65, 1LL);
          EnterSharedRenderCrit(v44);
          v45 = SaveScreen(v36, 0, 0LL, v23, v22, v26, v9);
          v46 = v62;
          v64 = v45;
          if ( v45 || (unsigned int)GreBitBltInternal(CompatibleDC, 0, 0, v26, v9, v62, v23, v22, 0xCC0020u, 0, 0) )
          {
            v59 -= v23;
            v60 -= v22;
            v48 = v25 - v26;
            v65 = (struct tagRECT *)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            GreBitBltInternal(v46, v23, v22, v26, v9, CompatibleDC, 0, v9, 0xCC0020u, 0, 0);
            for ( i = MEMORY[0xFFFFF78000000320]; ; i = MEMORY[0xFFFFF78000000320] )
            {
              v52 = ((i * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - (_WORD)v65;
              if ( v52 > 0xFAu )
                break;
              v50 = v52;
              v51 = (int)((unsigned __int64)(274877907LL * (v59 * v52 + 125)) >> 32) >> 4;
              LODWORD(v62) = v23 + (v51 >> 31) + v51;
              LODWORD(v63) = v22 + (v60 * v50 + 125) / 250;
              v61 = v26 + (v48 * v50 + 125) / 250;
              UserSleep(1LL);
              if ( v64 )
              {
                SaveScreen(v66, 1u, v64, v58, v57, v56, v9);
                v57 = (int)v63;
                v56 = v61;
                v58 = (int)v62;
                v64 = SaveScreen(v66, 0, 0LL, (int)v62, (int)v63, v61, v9);
              }
              else
              {
                GreBitBltInternal(v46, v58, v57, v56, v9, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
                v57 = (int)v63;
                v56 = v61;
                v58 = (int)v62;
                GreBitBltInternal(CompatibleDC, 0, 0, v61, v9, v46, (int)v62, (int)v63, 0xCC0020u, 0, 0);
              }
              GreBitBltInternal(v46, (int)v62, (int)v63, v61, v9, CompatibleDC, 0, v9, 0xCC0020u, 0, 0);
            }
            if ( v64 )
              SaveScreen(v66, 1u, v64, v58, v57, v56, v9);
            else
              GreBitBltInternal(v46, v58, v57, v56, v9, CompatibleDC, 0, 0, 0xCC0020u, 0, 0);
          }
          LeaveRenderCrit(v47);
          UserSessionSwitchLeaveCrit(v53);
          LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v55);
          GreSelectBitmap(CompatibleDC, v67);
          GreDeleteObject(CompatibleBitmap);
          GreDeleteDC(CompatibleDC);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v54);
        }
      }
    }
  }
}
