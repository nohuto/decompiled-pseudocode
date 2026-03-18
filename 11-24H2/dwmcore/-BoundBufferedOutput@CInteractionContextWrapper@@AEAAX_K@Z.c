/*
 * XREFs of ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x180126864
 * Callers:
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1801263A8 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x18012693C (-PeekFirst@-$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOut.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CInteractionContextWrapper::BoundBufferedOutput(CInteractionContextWrapper *this, __int64 a2)
{
  _DWORD *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  void *v6; // rsi
  _DWORD *v7; // rcx
  __int64 v8; // rax
  void *v9; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rax
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (_DWORD *)((char *)this + 536);
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 560);
  if ( *((_DWORD *)this + 138) < 0x7D0u )
    goto LABEL_2;
  do
  {
    v9 = 0LL;
    EnterCriticalSection(v3);
    v10 = *(_QWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
LABEL_10:
      __fastfail(3u);
    *(_QWORD *)v2 = v11;
    *(_QWORD *)(v11 + 8) = v2;
    if ( v10 != (_QWORD *)v2 )
    {
      v9 = (void *)v10[2];
      operator delete(v10, 0x18uLL);
      --v2[4];
    }
    LeaveCriticalSection(v3);
    v12 = v9;
    operator delete(v9);
  }
  while ( *((_DWORD *)this + 138) >= 0x7D0u );
LABEL_2:
  while ( CQueue<CBufferedInteractionOutput *>::PeekFirst(v2, a2, &v12) )
  {
    v6 = v12;
    if ( (unsigned __int64)(a2 - *(_QWORD *)v12) <= 0x1E8480 )
      break;
    EnterCriticalSection(v3);
    v7 = *(_DWORD **)v2;
    if ( *(_DWORD **)(*(_QWORD *)v2 + 8LL) != v2 )
      goto LABEL_10;
    v8 = *(_QWORD *)v7;
    if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_10;
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
    if ( v7 != v2 )
    {
      operator delete(v7, 0x18uLL);
      --v2[4];
    }
    LeaveCriticalSection(v3);
    operator delete(v6);
  }
}
