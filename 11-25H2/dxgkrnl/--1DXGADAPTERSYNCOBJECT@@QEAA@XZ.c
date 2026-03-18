/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1403953C4
 * Callers:
 *     ??1DXGSYNCOBJECTSA@@QEAA@XZ @ 0x1400111C0 (--1DXGSYNCOBJECTSA@@QEAA@XZ.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x140058F54 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140189A90 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // rdi
  DXGADAPTERSYNCOBJECT *v3; // rdx
  DXGADAPTERSYNCOBJECT **v4; // rax
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v2 + 192));
    v3 = *(DXGADAPTERSYNCOBJECT **)this;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)this + 8LL) != this
      || (v4 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)this + 1), *v4 != this) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v2 + 192));
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v5 + 16), (struct DXGADAPTER *)v5);
  }
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1652;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pVidSchSyncObject == NULL", 1652LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
