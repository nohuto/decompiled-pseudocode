/*
 * XREFs of ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C8244
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140088950 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032E40 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x140076C44 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1)
{
  __int64 v2; // rdx
  const struct tagWND *v3; // rax
  struct tagWND *v4; // rdi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, 0LL);
  while ( a1 )
  {
    LOBYTE(v2) = 1;
    v3 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), v2);
    v4 = v3;
    if ( v3 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || IsChildWindowDpiBoundary(v3)) )
    {
      Win32HM_ExchangeThreadLock<1>((__int64)v4, (__int64)BugCheckParameter3);
      xxxSetWindowPos(v4, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
    }
    a1 = *(struct tagWLDBI **)a1;
  }
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v2);
}
