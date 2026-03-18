/*
 * XREFs of MiCountWslesInPageTableRange @ 0x140385CD0
 * Callers:
 *     MiCountWslesInPageTable @ 0x140385BC0 (MiCountWslesInPageTable.c)
 * Callees:
 *     MiLockWorkingSetCoreShared @ 0x1402146E0 (MiLockWorkingSetCoreShared.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetCoreShared @ 0x140323E80 (MiUnlockWorkingSetCoreShared.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiGetVaAge @ 0x140381820 (MiGetVaAge.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  unsigned __int8 v12; // di
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int8 VaAge; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
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
      v16 = *(_QWORD *)v5;
      if ( (v11 & 1) == 0 )
        goto LABEL_8;
      LOBYTE(CurrentThread) = (v11 & 0x20) != 0;
      if ( (((v11 & 0x42) != 0) & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
      {
        CurrentThread = (__int64)KeGetCurrentThread();
        v17 = *(_QWORD *)(CurrentThread + 184);
        if ( *(_BYTE *)(v17 + 352) != 1 )
        {
          v18 = *(_QWORD *)(v17 + 1288);
          if ( v18 )
          {
            CurrentThread = *(_QWORD *)(v18 + 8 * ((v5 >> 3) & 0x1FF));
            if ( (CurrentThread & 0x20) != 0 )
              v16 = v11 | 0x20;
            v11 = v16 | 0x42;
            if ( (CurrentThread & 0x42) == 0 )
              v11 = v16;
          }
        }
      }
    }
    if ( (v11 & 1) == 0 )
      goto LABEL_8;
    v12 = 0;
    v13 = (__int64)(v5 << 25) >> 16;
    if ( !v8 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      VaAge = HIBYTE(v14) & 0xF;
      v12 = HIBYTE(v14) & 0xF | (16 * ((v14 >> 60) & 7));
      if ( (unsigned __int8)((HIBYTE(v14) & 0xF) - 8) <= 2u )
        goto LABEL_8;
LABEL_29:
      if ( VaAge == 0xFF )
        goto LABEL_8;
      if ( VaAge >= 8u )
        KeBugCheckEx(0x1Au, 0x41280uLL, (__int64)(v5 << 25) >> 16, v11, v12);
      if ( !VaAge || (v11 & 0x20) == 0 || (a5 & 1) == 0 )
      {
LABEL_33:
        ++*(_DWORD *)(a4 + 4LL * VaAge);
        goto LABEL_8;
      }
      v23 = a1;
      if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
      {
        if ( _bittest64(&MiFlags, 0x24u) )
        {
          v24 = (*(_DWORD *)(a1 + 184) >> 11) & 1;
          goto LABEL_36;
        }
      }
      else
      {
        v24 = *(_QWORD *)(a1 + 624) != 0LL;
LABEL_36:
        if ( v24 )
        {
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
          {
            if ( (MiGetPagePrivilege(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2, 0LL) & 0x41) != 0 )
              goto LABEL_33;
          }
          else if ( v13 <= 0x7FFFFFFEFFFFLL )
          {
            goto LABEL_33;
          }
        }
      }
      if ( v8 )
      {
        v25 = MI_READ_PTE_LOCK_FREE(((v13 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        *(_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) &= 0xFFFFE3FFFFFFFFFFuLL;
      }
      else
      {
        MiWriteWsle(v23, (__int64)(v5 << 25) >> 16, v12 & 0xF0);
      }
      ++v26;
      ++*((_DWORD *)v29 + VaAge);
      VaAge = 0;
      goto LABEL_33;
    }
    if ( (v11 & 0x80u) == 0LL )
    {
      VaAge = MiGetVaAge(CurrentThread, (__int64)(v5 << 25) >> 16);
      goto LABEL_29;
    }
LABEL_8:
    v5 += 8LL;
    --a3;
  }
  if ( v26 )
  {
    MiLockWorkingSetCoreShared(a1);
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
