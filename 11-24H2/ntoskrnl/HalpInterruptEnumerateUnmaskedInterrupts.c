/*
 * XREFs of HalpInterruptEnumerateUnmaskedInterrupts @ 0x14053E270
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptEnumerateUnmaskedSecondaryInterrupts @ 0x14055348C (HalpInterruptEnumerateUnmaskedSecondaryInterrupts.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpInterruptEnumerateUnmaskedInterrupts(__int64 a1, __int64 a2, _WORD *a3)
{
  unsigned int v3; // eax
  char v5; // di
  unsigned int v6; // ebx
  unsigned __int8 v7; // al
  ULONG_PTR *v8; // r12
  ULONG_PTR *v9; // r8
  _QWORD *v10; // r13
  _QWORD *v11; // r15
  _QWORD *v12; // rbp
  int i; // r14d
  _DWORD *v14; // rdx
  unsigned __int8 v18; // [rsp+80h] [rbp+18h]
  ULONG_PTR *v19; // [rsp+88h] [rbp+20h]

  v3 = (unsigned __int16)a3[1];
  if ( *a3 && v3 >= 0x20 )
  {
    memset_0(a3, 0, v3 - 4);
    v5 = 1;
    v6 = 0;
    v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
    v8 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    v18 = v7;
    while ( v8 != &HalpRegisteredInterruptControllers )
    {
      v9 = v8;
      v19 = v8;
      v8 = (ULONG_PTR *)*v8;
      v10 = v9 + 33;
      v11 = (_QWORD *)v9[33];
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        if ( *((_DWORD *)v12 + 7) != -1 )
        {
          for ( i = *((_DWORD *)v12 + 5); i < *((_DWORD *)v12 + 6); ++i )
          {
            v14 = (_DWORD *)(v12[5] + 56LL * (unsigned int)(i - *((_DWORD *)v12 + 5)));
            if ( (v14[3] & 1) != 0 )
            {
              *((_DWORD *)a3 + 4) = *((_DWORD *)v12 + 7) + i - *((_DWORD *)v12 + 5);
              a3[2] = 0;
              *((_DWORD *)a3 + 2) = v14[2];
              *((_DWORD *)a3 + 3) = *v14;
              *((_QWORD *)a3 + 3) = v9[46];
              v5 = guard_dispatch_icall_no_overrides(a2, a3);
              if ( !v5 )
                goto LABEL_15;
              v9 = v19;
            }
          }
        }
      }
    }
LABEL_15:
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v18);
    if ( v5 && SecondaryIcServicesEnabled )
      return (unsigned int)HalpInterruptEnumerateUnmaskedSecondaryInterrupts(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
