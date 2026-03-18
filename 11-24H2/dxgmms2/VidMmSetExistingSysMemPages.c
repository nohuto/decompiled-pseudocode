/*
 * XREFs of VidMmSetExistingSysMemPages @ 0x140096F00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140031B80 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140031D70 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall VidMmSetExistingSysMemPages(
        __int64 **a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _KTHREAD **v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 Pool2; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = **a1;
  if ( (*(_DWORD *)(v8 + 28) & 0x10000) == 0 )
  {
    WdLogSingleEntry1(1LL, a1);
    WdLogGlobalForLineNumber = 2319;
LABEL_20:
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v8 + 16LL) >> 12;
  if ( a4 >= (unsigned int)v10 || (unsigned int)v10 - a4 < a3 )
  {
    WdLogSingleEntry3(1LL, a4, a3, (unsigned int)v10);
    WdLogGlobalForLineNumber = 2327;
    goto LABEL_20;
  }
  v11 = (struct _KTHREAD **)(v8 + 136);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 136));
  if ( *(_DWORD *)(v8 + 448) )
  {
    if ( *(_QWORD *)(v8 + 440) )
      goto LABEL_11;
  }
  else if ( *(_QWORD *)(v8 + 440) )
  {
    WdLogSingleEntry0(1LL);
    v13 = 2340;
LABEL_13:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    v16 = -1073741811;
    goto LABEL_14;
  }
  *(_DWORD *)(v8 + 448) = 0;
  Pool2 = ExAllocatePool2(256LL, v7 + 8LL * (unsigned int)v10, 808937814LL);
  *(_QWORD *)(v8 + 440) = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2351;
    DxgkLogInternalTriageEvent(v15, 0x40000LL);
    v16 = -1073741801;
LABEL_14:
    DXGFASTMUTEX::Release(v11);
    return v16;
  }
LABEL_11:
  *(_DWORD *)(v8 + 448) += v6;
  if ( *(_DWORD *)(v8 + 448) > (unsigned int)v10 )
  {
    WdLogSingleEntry0(1LL);
    v13 = 2360;
    goto LABEL_13;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 136));
  v18 = (_QWORD *)(*(_QWORD *)(v8 + 440) + v7 + 8 * v5);
  if ( (_DWORD)v6 )
  {
    v19 = v6;
    v20 = a5 - (_QWORD)v18;
    do
    {
      *v18 = *(_QWORD *)((char *)v18 + v20);
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  return 0LL;
}
