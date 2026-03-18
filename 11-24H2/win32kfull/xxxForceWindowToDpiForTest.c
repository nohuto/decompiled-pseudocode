/*
 * XREFs of xxxForceWindowToDpiForTest @ 0x140282104
 * Callers:
 *     NtUserForceWindowToDpiForTest @ 0x1402954F0 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x14008CEB0 (xxxNotifyMonitorChanged.c)
 */

_BOOL8 __fastcall xxxForceWindowToDpiForTest(struct tagWND *a1, int a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rbx
  _OWORD *v6; // r8
  unsigned int v7; // edx
  unsigned __int16 v8; // r12
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  BOOL v11; // r14d
  __int64 *i; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rcx

  v4 = Win32AllocPoolZInit(100LL, 1886872661LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (_OWORD *)*((_QWORD *)a1 + 36);
    *(_OWORD *)v4 = *v6;
    *(_OWORD *)(v4 + 16) = v6[1];
    *(_OWORD *)(v4 + 32) = v6[2];
    *(_OWORD *)(v4 + 48) = v6[3];
    *(_OWORD *)(v4 + 64) = v6[4];
    *(_OWORD *)(v4 + 80) = v6[5];
    *(_DWORD *)v4 = 1;
    v7 = (100 * a2 + 48) / 0x60u;
    *(_DWORD *)(v4 + 4) = v7;
    *(_DWORD *)(v4 + 8) = v7;
    *(_DWORD *)(v4 + 12) = v7;
    *(_DWORD *)(v4 + 16) = v7;
    v8 = *(_WORD *)(*((_QWORD *)a1 + 5) + 284LL);
    v9 = BuildHwndList(a1, 1LL, 0LL, 1);
    v11 = v9 != 0LL;
    if ( v11 )
    {
      *((_DWORD *)a1 + 95) |= 0x40000u;
      for ( i = (__int64 *)((char *)v9 + 32); *i != 1; ++i )
      {
        LOBYTE(v10) = 1;
        v13 = HMValidateHandleNoSecure(*i, v10);
        v14 = v13;
        if ( v13 )
        {
          *(_WORD *)(*(_QWORD *)(v13 + 40) + 284LL) = a2;
          v15 = *(_DWORD **)(v13 + 288);
          if ( v15 )
          {
            --*v15;
            v16 = *(_DWORD **)(v14 + 288);
            if ( !*v16 )
              Win32FreePool(v16);
          }
          *(_QWORD *)(v14 + 288) = v5;
          ++*v5;
        }
      }
    }
    if ( (*v5)-- == 1 )
      Win32FreePool(v5);
    xxxNotifyMonitorChanged(a1, 0LL, 0LL, v8);
  }
  else
  {
    return 0;
  }
  return v11;
}
