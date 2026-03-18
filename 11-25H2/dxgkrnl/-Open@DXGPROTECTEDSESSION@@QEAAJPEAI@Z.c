/*
 * XREFs of ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1401EA820
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1401EACF0 (DxgkCreateProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1401EBE70 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1400761D8 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Open(DXGPROTECTEDSESSION *this, unsigned int *a2)
{
  struct DXGPROCESS *Current; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  _BYTE v10[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1120;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"phHandle", 1120LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
  v5 = HMGRTABLE::AllocHandle((char *)Current + 280, this, 14LL, 0LL, 0);
  *a2 = v5;
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *((_DWORD *)Current + 74) )
  {
    v7 = *((_QWORD *)Current + 35);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((v5 >> 25) & 0x60) == (v8 & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
      *(_DWORD *)(v7 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  DXGPROTECTEDSESSION::AddReference(this, 0);
  return 0LL;
}
