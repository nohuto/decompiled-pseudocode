/*
 * XREFs of MiCountWslesInPageTableRange @ 0x140392E70
 * Callers:
 *     MiCountWslesInPageTable @ 0x140392D68 (MiCountWslesInPageTable.c)
 * Callees:
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiLockWorkingSetCoreShared @ 0x140240A40 (MiLockWorkingSetCoreShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiGetVaAge @ 0x140296DE0 (MiGetVaAge.c)
 *     MiUnlockWorkingSetCoreShared @ 0x1403030A0 (MiUnlockWorkingSetCoreShared.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

volatile signed __int32 *__fastcall MiCountWslesInPageTableRange(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rcx
  BOOL v8; // r13d
  __int64 CurrentThread; // rcx
  volatile signed __int32 *result; // rax
  ULONG_PTR v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int8 v15; // di
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int8 VaAge; // r15
  __int64 v19; // r8
  unsigned int *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-78h]
  _OWORD v29[2]; // [rsp+48h] [rbp-60h] BYREF

  v5 = a2;
  v26 = 0;
  memset(v29, 0, sizeof(v29));
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL;
  while ( 1 )
  {
    CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
    result = (volatile signed __int32 *)0xFFFFF6FB7DBED000LL;
    if ( !a3 )
      break;
    v11 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v12 = *(_QWORD *)v5;
      if ( (v11 & 1) == 0 )
        goto LABEL_9;
      LOBYTE(CurrentThread) = (v11 & 0x20) != 0;
      if ( (((v11 & 0x42) != 0) & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
      {
        CurrentThread = (__int64)KeGetCurrentThread();
        v13 = *(_QWORD *)(CurrentThread + 184);
        if ( *(_BYTE *)(v13 + 352) != 1 )
        {
          v14 = *(_QWORD *)(v13 + 1288);
          if ( v14 )
          {
            CurrentThread = *(_QWORD *)(v14 + 8 * ((v5 >> 3) & 0x1FF));
            if ( (CurrentThread & 0x20) != 0 )
              v12 = v11 | 0x20;
            v11 = v12 | 0x42;
            if ( (CurrentThread & 0x42) == 0 )
              v11 = v12;
          }
        }
      }
    }
    if ( (v11 & 1) != 0 )
    {
      v15 = 0;
      v16 = (__int64)(v5 << 25) >> 16;
      if ( !v8 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        VaAge = HIBYTE(v17) & 0xF;
        v15 = HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7));
        if ( (unsigned __int8)((HIBYTE(v17) & 0xF) - 8) <= 2u )
          goto LABEL_9;
LABEL_20:
        if ( VaAge == 0xFF )
          goto LABEL_9;
        if ( VaAge >= 8u )
          KeBugCheckEx(0x1Au, 0x41280uLL, (__int64)(v5 << 25) >> 16, v11, v15);
        if ( VaAge && (v11 & 0x20) != 0 && (a5 & 1) != 0 )
        {
          v23 = a1;
          if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0 )
          {
            v24 = *(_QWORD *)(a1 + 624) != 0LL;
            goto LABEL_36;
          }
          if ( !_bittest64(&MiFlags, 0x24u) )
            goto LABEL_37;
          v24 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
LABEL_36:
          if ( v24 )
          {
            if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
            {
              if ( (MiGetPagePrivilege(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) == 0 )
                goto LABEL_37;
            }
            else if ( v16 > 0x7FFFFFFEFFFFLL )
            {
              goto LABEL_37;
            }
          }
          else
          {
LABEL_37:
            if ( v8 )
            {
              v25 = MI_READ_PTE_LOCK_FREE(((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
              *(_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) &= 0xFFFFE3FFFFFFFFFFuLL;
            }
            else
            {
              MiWriteWsle(v23, (__int64)(v5 << 25) >> 16, v15 & 0xF0);
            }
            ++v26;
            ++*((_DWORD *)v29 + VaAge);
            VaAge = 0;
          }
        }
        ++*(_DWORD *)(a4 + 4LL * VaAge);
        goto LABEL_9;
      }
      if ( (v11 & 0x80u) == 0LL )
      {
        VaAge = MiGetVaAge(CurrentThread, (__int64)(v5 << 25) >> 16);
        goto LABEL_20;
      }
    }
LABEL_9:
    v5 += 8LL;
    --a3;
  }
  if ( v26 )
  {
    MiLockWorkingSetCoreShared(a1, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL, a4);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 40), v26);
    v19 = 48LL;
    v20 = (unsigned int *)v29 + 1;
    v21 = 7LL;
    do
    {
      v22 = *v20;
      if ( (_DWORD)v22 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + v19), -v22);
      v19 += 8LL;
      ++v20;
      --v21;
    }
    while ( v21 );
    return MiUnlockWorkingSetCoreShared(a1);
  }
  return result;
}
