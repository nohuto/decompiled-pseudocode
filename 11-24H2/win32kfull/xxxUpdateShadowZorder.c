/*
 * XREFs of xxxUpdateShadowZorder @ 0x14015CEB0
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x14015DF68 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  struct tagWND *v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  result = FindShadow(a1);
  if ( !result )
    return result;
  v3 = (struct tagWND *)*((_QWORD *)result + 1);
  v4 = *((_QWORD *)v3 + 5);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v4 + 24) & 8) == 0 )
    {
      v5 = 1;
LABEL_7:
      SetOrClrWF(v5, v3, 0x808u, 1);
    }
  }
  else if ( (*(_BYTE *)(v4 + 24) & 8) != 0 )
  {
    v5 = 0;
    goto LABEL_7;
  }
  v6 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  if ( *(_DWORD *)(*((_QWORD *)v3 + 5) + 236LL) != v6 )
    SetWindowGroupBand(v3, v6, 0);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v3);
  xxxSetWindowPos(v3, (__int64)a1, 0LL, 0LL, 0, 0, 19);
  v9 = PtiCurrent(v8, v7);
  return (struct tagSHADOW *)Win32HM_UnlockFromThread<1>((ULONG_PTR)v9, BugCheckParameter3);
}
