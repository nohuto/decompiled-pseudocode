/*
 * XREFs of MmCopyMemory @ 0x1403F3930
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockSystemVa @ 0x1402FC650 (MiUnlockSystemVa.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403DC8F0 (MiGetEffectivePagePriorityThread.c)
 *     MiTranslatePageForCopy @ 0x1403F3CE0 (MiTranslatePageForCopy.c)
 *     MiCopySinglePage @ 0x1403F4224 (MiCopySinglePage.c)
 *     MiCheckPhysicalAddressRange @ 0x1403F45B8 (MiCheckPhysicalAddressRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x1406AA290 (ZwReadVirtualMemoryEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        char *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T BufferSize,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  int v9; // r8d
  __int16 v11; // cx
  struct _KTHREAD *CurrentThread; // r12
  int v13; // edi
  char v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  char *v17; // rax
  int v18; // eax
  __int64 v19; // r12
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v24; // rcx
  unsigned __int64 v25; // rdx
  char v26; // r15
  char EffectivePagePriorityThread; // al
  int v28; // eax
  __int64 v29; // rcx
  char *v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *v35; // [rsp+60h] [rbp-A0h]
  PSIZE_T v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]

  v30 = Buffer;
  v36 = NumberOfBytesRead;
  memset_0(v38, 0, 0x80uLL);
  *NumberOfBytesRead = 0LL;
  v32 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(BaseAddress, BufferSize) )
    {
      v9 = a4 & 1;
      goto LABEL_13;
    }
  }
  else if ( BufferSize + BaseAddress > BaseAddress )
  {
    if ( BaseAddress <= 0x7FFFFFFEFFFFLL )
    {
      if ( BufferSize + BaseAddress <= 0x7FFFFFFEFFFFLL )
        return ZwReadVirtualMemoryEx(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 (PVOID)BaseAddress,
                 Buffer,
                 BufferSize,
                 NumberOfBytesRead,
                 1u);
      return -1073741800;
    }
    if ( BaseAddress >= 0xFFFF800000000000uLL )
    {
      v11 = BaseAddress;
LABEL_13:
      if ( (BufferSize + (v11 & 0xFFF) + 4095LL) >> 12 >= 0x100000000LL )
        return -1073741583;
      CurrentThread = KeGetCurrentThread();
      v13 = 0;
      v35 = CurrentThread;
      v14 = BaseAddress;
      v15 = 4096 - (BaseAddress & 0xFFF);
      if ( v15 > BufferSize )
        v15 = BufferSize;
      if ( v9 )
        v16 = BaseAddress >> 12;
      else
        v16 = -1LL;
      v31 = v16;
LABEL_19:
      v17 = v30;
      while ( 1 )
      {
        if ( !BufferSize )
        {
LABEL_21:
          *v36 += v32;
          return v13;
        }
        v34 = 0LL;
        v33 = 0LL;
        if ( v9 )
        {
          v19 = 0LL;
        }
        else
        {
          v18 = MiTranslatePageForCopy(BaseAddress, v38, &v31, &v34, &v33);
          v13 = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741608 )
              goto LABEL_21;
            v37 = 0LL;
            EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
            *(_QWORD *)&v37 = BaseAddress;
            v28 = EffectivePagePriorityThread & 7 | 0x80B8;
            v29 = BufferSize;
            if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
              v29 = 0x200000 - (BaseAddress & 0x1FFFFF);
            *((_QWORD *)&v37 + 1) = v29;
            if ( BaseAddress >= qword_140E2F3C0 && BaseAddress <= qword_140E2F3D0 )
            {
              v13 = -1073741585;
              goto LABEL_21;
            }
            v13 = MiPrefetchVirtualMemory(1uLL, (__int64)&v37, 1LL, v28);
            if ( v13 < 0 )
              goto LABEL_21;
            v9 = a4 & 1;
            goto LABEL_19;
          }
          v19 = v39;
          if ( v18 == 273 )
          {
            MiUnlockSystemVa((__int64)v38);
            v13 = 0;
            if ( v15 )
            {
              v24 = v30;
              v25 = v15;
              v26 = v14 - (_BYTE)v30;
              do
              {
                *v24 = *((_BYTE *)&v33 + ((v26 + (_BYTE)v24) & 7));
                ++v24;
                --v25;
              }
              while ( v25 );
            }
            goto LABEL_31;
          }
          v17 = v30;
        }
        v20 = v31;
        v13 = MiCopySinglePage(v17, a4);
        if ( v19 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v34 )
          {
            LOBYTE(v21) = 17;
            MiUnlockProtoPoolPage(v34, v21, v22, v23);
          }
          MiUnlockSystemVa((__int64)v38);
        }
        if ( v13 < 0 )
          goto LABEL_21;
LABEL_31:
        v32 += v15;
        BufferSize -= v15;
        BaseAddress += v15;
        ++v31;
        v17 = &v30[v15];
        v9 = a4 & 1;
        CurrentThread = v35;
        v15 = BufferSize;
        v30 = v17;
        if ( BufferSize > 0x1000 )
          v15 = 4096LL;
        v14 = 0;
      }
    }
  }
  return -1073741800;
}
