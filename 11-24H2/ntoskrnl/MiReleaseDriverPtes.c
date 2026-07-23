/*
 * XREFs of MiReleaseDriverPtes @ 0x140A611E4
 * Callers:
 *     MmUnmapLockedRestartPages @ 0x1407E8850 (MmUnmapLockedRestartPages.c)
 *     MiReturnSystemImageAddress @ 0x140A611C0 (MiReturnSystemImageAddress.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     MiGetPdeAddress @ 0x14040A4F0 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     RtlAreBitsSet @ 0x140441BC0 (RtlAreBitsSet.c)
 *     RtlAreBitsClear @ 0x140442240 (RtlAreBitsClear.c)
 *     MiDecommitSystemPageTables @ 0x14045B6DC (MiDecommitSystemPageTables.c)
 *     MiUnlockDriverMappings @ 0x1404A51C8 (MiUnlockDriverMappings.c)
 *     MiLockDriverMappings @ 0x1404A9FD0 (MiLockDriverMappings.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseDriverPtes(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rsi
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v6; // r15
  char *i; // rbx
  __int128 v8; // rtt
  __int64 v9; // rbp
  int v10; // eax
  unsigned __int64 v11; // rdi
  ULONG v12; // r15d
  ULONG v13; // esi
  unsigned int v14; // r15d
  ULONG v15; // ebp
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  __int64 PdeAddress; // rax
  __int64 v19; // r9
  ULONG v20; // r8d
  int v21; // esi
  unsigned __int64 NumberToClear; // [rsp+60h] [rbp+8h]
  ULONG NumberToCleara; // [rsp+60h] [rbp+8h]

  v4 = (__int64)(a1 << 25) >> 16;
  if ( (_WORD)a1 << 9 )
    KeBugCheckEx(0x1Au, 0x101AuLL, (__int64)(a1 << 25) >> 16, a2 << 12, 0LL);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  MiLockDriverMappings((__int64)CurrentThread);
  for ( i = (char *)qword_140E2D9A0; i; i = *(char **)i )
  {
    v16 = *((_QWORD *)i + 1);
    if ( a1 >= v16 && a1 < v16 + 8LL * (unsigned int)(16 * *((_DWORD *)i + 4)) )
      break;
    v6 = i;
  }
  if ( !i )
    KeBugCheckEx(0x1Au, 0x1017uLL, v4, a2 << 12, 0LL);
  NumberToClear = (unsigned __int64)(a2 + 15) >> 4;
  v8 = (__int64)(a1 - *((_QWORD *)i + 1)) >> 3;
  v9 = ((__int64)(a1 - *((_QWORD *)i + 1)) >> 3) / 16;
  if ( !RtlAreBitsSet((PRTL_BITMAP)i + 1, v8 / 16, NumberToClear) )
    KeBugCheckEx(0x1Au, 0x1018uLL, v4, a2 << 12, 0LL);
  v10 = *((_DWORD *)i + 9);
  v11 = (__int64)(*((_QWORD *)i + 1) << 25) >> 16;
  if ( (v10 & 1) == 0 )
  {
    if ( (v10 & 2) != 0 )
    {
LABEL_15:
      MiUnlockDriverMappings((__int64)CurrentThread);
      return;
    }
    RtlClearBits((PRTL_BITMAP)i + 1, v9, NumberToClear);
    if ( RtlNumberOfSetBits((PRTL_BITMAP)i + 1) )
    {
      if ( *((_QWORD *)i + 6) )
      {
        v12 = NumberToClear + v9 + 31;
        NumberToCleara = NumberToClear + v9;
        v13 = v9 & 0xFFFFFFE0;
        if ( !RtlAreBitsClear((PRTL_BITMAP)i + 1, v9 & 0xFFFFFFE0, 0x20u) )
          v13 = (v9 + 31) & 0xFFFFFFE0;
        if ( !RtlAreBitsClear((PRTL_BITMAP)i + 1, ((NumberToCleara + 31) & 0xFFFFFFE0) - 32, 0x20u) )
          v12 = NumberToCleara;
        v14 = v12 & 0xFFFFFFE0;
        v15 = v14 - v13;
        if ( v13 < v14 )
        {
          if ( RtlAreBitsClear((PRTL_BITMAP)i + 1, v13, v15) )
          {
            v17 = (v13 << 16) + v11;
            MiGetPteAddress(*((_QWORD *)i + 1));
            PdeAddress = MiGetPdeAddress(v17);
            RtlClearBits((PRTL_BITMAP)(i + 40), (PdeAddress - v19) >> 3, v20);
            MiDecommitSystemPageTables(v17, v17 + (v15 << 16), 11);
          }
        }
      }
      goto LABEL_15;
    }
  }
  v21 = *((_DWORD *)i + 4);
  if ( v6 )
    *v6 = *(_QWORD *)i;
  else
    qword_140E2D9A0 = *(PVOID *)i;
  MiUnlockDriverMappings((__int64)CurrentThread);
  MiReturnSystemVa(v11, v11 + (unsigned int)(v21 << 16));
  ExFreePoolWithTag(i, 0);
}
