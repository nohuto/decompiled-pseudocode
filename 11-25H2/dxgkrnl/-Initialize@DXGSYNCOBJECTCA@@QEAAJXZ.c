/*
 * XREFs of ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1403EE64C
 * Callers:
 *     ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z @ 0x1401811E4 (-Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@PEAVDXGDEVICE@@PEAE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSYNCOBJECTCA::Initialize(DXGSYNCOBJECTCA *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Pool2; // rax
  __int64 v6; // rbx
  _QWORD *v8; // rax
  int v9; // eax

  Pool2 = ExAllocatePool2(64LL, 56LL, 1265072196LL, a4);
  v6 = 0LL;
  *((_QWORD *)this + 55) = Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_OWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    v8 = (_QWORD *)(*((_QWORD *)this + 55) + 16LL);
    v8[1] = v8;
    *v8 = v8;
    KeInitializeSpinLock((PKSPIN_LOCK)(*((_QWORD *)this + 55) + 8LL));
    _InterlockedIncrement(*((volatile signed __int32 **)this + 55));
    v9 = *((_DWORD *)this + 101);
    if ( v9 == 3 || v9 == 5 )
    {
      v6 = *((_QWORD *)this + 27);
    }
    else if ( v9 == 7 )
    {
      v6 = *((_QWORD *)this + 36);
    }
    *(_QWORD *)(*((_QWORD *)this + 55) + 40LL) = v6;
    *(_QWORD *)(*((_QWORD *)this + 55) + 32LL) = v6;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 2122;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating VIDSCH_CROSS_ADAPTER_SYNC_OBJECT_INFO class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
