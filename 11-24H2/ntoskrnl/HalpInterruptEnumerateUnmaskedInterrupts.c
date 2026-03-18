/*
 * XREFs of HalpInterruptEnumerateUnmaskedInterrupts @ 0x140540970
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x140555B4C (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedInterrupts(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned int v3; // eax
  char v5; // di
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  __int64 v8; // r9
  ULONG_PTR *v9; // r12
  ULONG_PTR *v10; // r8
  _QWORD *v11; // r13
  _QWORD *v12; // r15
  _QWORD *v13; // rbp
  int i; // r14d
  _DWORD *v15; // rdx
  unsigned __int8 v19; // [rsp+80h] [rbp+18h]
  ULONG_PTR *v20; // [rsp+88h] [rbp+20h]

  v3 = (unsigned __int16)a3[1];
  if ( *a3 && v3 >= 0x20 )
  {
    memset_0(a3, 0, v3 - 4);
    v5 = 1;
    v6 = 0;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v9 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v19 = v7;
    while ( v9 != &HalpRegisteredInterruptControllers )
    {
      v10 = v9;
      v20 = v9;
      v9 = (ULONG_PTR *)*v9;
      v11 = v10 + 33;
      v12 = (_QWORD *)v10[33];
      while ( v12 != v11 )
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
        if ( *((_DWORD *)v13 + 7) != -1 )
        {
          for ( i = *((_DWORD *)v13 + 5); i < *((_DWORD *)v13 + 6); ++i )
          {
            v15 = (_DWORD *)(v13[5] + 56LL * (unsigned int)(i - *((_DWORD *)v13 + 5)));
            if ( (v15[3] & 1) != 0 )
            {
              *((_DWORD *)a3 + 4) = *((_DWORD *)v13 + 7) + i - *((_DWORD *)v13 + 5);
              a3[2] = 0;
              *((_DWORD *)a3 + 2) = v15[2];
              *((_DWORD *)a3 + 3) = *v15;
              *((_QWORD *)a3 + 3) = v10[46];
              v5 = guard_dispatch_icall_no_overrides(a2, a3, v10, v8);
              if ( !v5 )
                goto LABEL_15;
              v10 = v20;
            }
          }
        }
      }
    }
LABEL_15:
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v19);
    if ( v5 && SecondaryIcServicesEnabled )
      return (unsigned int)HalpInterruptEnumerateUnmaskedSecondaryInterrupts(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
