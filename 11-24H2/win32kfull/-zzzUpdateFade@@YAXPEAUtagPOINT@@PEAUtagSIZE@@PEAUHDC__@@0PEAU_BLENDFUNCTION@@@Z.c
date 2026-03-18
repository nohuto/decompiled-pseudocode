/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1401E2B3C
 * Callers:
 *     zzzShowFade @ 0x1401E2AC0 (zzzShowFade.c)
 *     zzzAnimateFade @ 0x14023A678 (zzzAnimateFade.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     GreUpdateSprite @ 0x1400CB8F0 (GreUpdateSprite.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  __int64 UserSessionState; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rax
  struct tagWND *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  unsigned int v18; // ebx
  void *v19; // rdi
  __int64 v20; // rax
  int v21; // [rsp+70h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+80h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v12 = *(_DWORD *)(UserSessionState + 43072);
  if ( (v12 & 8) != 0 )
  {
    LOBYTE(v10) = 1;
    v13 = HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 43024), v10);
    v14 = (struct tagWND *)v13;
    if ( v13 )
    {
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v13);
      zzzUpdateLayeredWindow(v14, 0LL, a1, a2, a3, (__int64)a4, 0, (__int64)a5, 2u, 0LL);
      v17 = PtiCurrent(v16, v15);
      Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
    }
  }
  else
  {
    v18 = *(_DWORD *)(UserSessionState + 43076);
    v19 = *(void **)(UserSessionState + 43024);
    v20 = W32GetUserSessionState(v11, v10);
    GreUpdateSprite(
      *(HDEV *)(*(_QWORD *)(v20 + 57008) + 48LL),
      0LL,
      v19,
      0LL,
      a1,
      a2,
      a3,
      a4,
      v18,
      a5,
      2 - ((v12 & 0x40) != 0),
      0LL,
      0LL,
      1,
      v21,
      0);
  }
}
