/*
 * XREFs of ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x140195E58
 * Callers:
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140195DD8 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x140195E58 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140154180 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x140195E58 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1401960E4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1401C6E60 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401D3C2C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402803B0 (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxImmUnloadThreadsLayout(ULONG_PTR *a1, int a2, struct tagTLBLOCK *a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebp
  int v11; // edi
  ULONG_PTR *v12; // rbx
  ULONG_PTR v13; // rcx
  int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // ebp
  int v17; // r12d
  bool v18; // r15
  __int64 v19; // rbx
  int v20; // esi
  struct tagTLBLOCK **v21; // rdi
  struct tagTHREADINFO **v22; // rsi
  struct tagTHREADINFO **v23; // rbx
  ULONG_PTR v24; // r14
  struct tagTLBLOCK *v25; // [rsp+30h] [rbp-268h] BYREF
  _OWORD v26[32]; // [rsp+38h] [rbp-260h] BYREF

  `vector constructor iterator'(
    v26,
    0x20uLL,
    0x10uLL,
    (void *(*)(void *))tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_);
  PtiCurrent(v9, v8);
  v25 = a3;
  v10 = 0;
  v11 = 0;
  if ( a2 > 0 )
  {
    v12 = a1;
    do
    {
      if ( v11 >= 16 )
        break;
      v13 = *v12;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*v12 + 528), 0, 0) & 1) == 0
        && *(_QWORD *)(*v12 + 824)
        && *(_QWORD *)(*v12 + 480)
        && (a4 != 1
         || (**(_DWORD **)(W32GetUserSessionState(v13, 0LL) + 19928) & 4) != 0
         || (*(_WORD *)(*(_QWORD *)(*v12 + 480) + 42LL) & 0xF000) == 0xE000) )
      {
        Win32RawLockedW32Thread::ManualLock((ULONG_PTR)&v26[2 * v11++], *v12);
      }
      ++v10;
      ++v12;
    }
    while ( v10 < a2 );
  }
  v14 = v10 + 1;
  if ( v11 != 16 )
    v14 = v10;
  if ( v14 >= a2 )
  {
    v15 = v11;
    v16 = 1;
    v17 = v11 - 1;
    v18 = a4 != 2;
    if ( a4 != 2 )
      v16 = a4;
    while ( 1 )
    {
      v19 = v15 - 1;
      v20 = v17;
      v21 = &v25;
      if ( v17 >= 0 )
      {
LABEL_30:
        if ( v18 )
        {
          v23 = &v21[4 * v19 + 2];
          v24 = (ULONG_PTR)&v21[4 * (unsigned int)v20 + 1];
          do
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)*v23 + 132, 0, 0) & 1) == 0 )
              xxxImmUnloadLayout(*v23, v16);
            Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker(v24, 0LL);
            v24 -= 32LL;
            v23 -= 4;
            --v20;
          }
          while ( v20 >= 0 );
        }
        else if ( v19 >= 0 )
        {
          v22 = &v21[4 * v19 + 2];
          do
          {
            if ( (_InterlockedCompareExchange((volatile signed __int32 *)*v22 + 132, 0, 0) & 1) == 0 )
              xxxImmUnloadLayout(*v22, v16);
            v22 -= 4;
            --v19;
          }
          while ( v19 >= 0 );
        }
      }
      v21 = (struct tagTLBLOCK **)*v21;
      v20 = 15;
      v19 = 15LL;
      if ( v21 )
        goto LABEL_30;
      if ( v18 )
        goto LABEL_15;
      v18 = 1;
      v16 = 2;
    }
  }
  xxxImmUnloadThreadsLayout((struct tagTHREADINFO **)&a1[v14], a2 - v14, (struct tagTLBLOCK *)&v25, a4);
LABEL_15:
  `vector destructor iterator'(
    v26,
    0x20uLL,
    0x10uLL,
    (void (*)(void *))tagTLBLOCK::_unnamed_type_list_::~_unnamed_type_list_);
}
