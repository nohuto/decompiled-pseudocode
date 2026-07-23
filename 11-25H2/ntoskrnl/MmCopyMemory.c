/*
 * XREFs of MmCopyMemory @ 0x140378030
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockSystemVa @ 0x1402BB200 (MiUnlockSystemVa.c)
 *     MiCopySinglePage @ 0x140377E44 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiGetEffectivePagePriorityThread @ 0x140387440 (MiGetEffectivePagePriorityThread.c)
 *     MiCheckPhysicalAddressRange @ 0x140498CE4 (MiCheckPhysicalAddressRange.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x14069E020 (ZwReadVirtualMemoryEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned __int64 v14; // r15
  size_t v15; // r14
  unsigned __int64 v16; // rax
  char *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r12
  __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  _BYTE *v26; // rcx
  size_t v27; // rdx
  char v28; // r15
  char EffectivePagePriorityThread; // al
  unsigned int v30; // eax
  __int64 v31; // rcx
  char *v32; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v36; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *v37; // [rsp+60h] [rbp-A0h]
  PSIZE_T v38; // [rsp+68h] [rbp-98h]
  __int128 v39; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h]

  v32 = Buffer;
  v38 = NumberOfBytesRead;
  memset_0(v40, 0, 0x80uLL);
  *NumberOfBytesRead = 0LL;
  v34 = 0LL;
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
      v37 = CurrentThread;
      v14 = BaseAddress & 0xFFF;
      v15 = 4096 - v14;
      if ( 4096 - v14 > BufferSize )
        v15 = BufferSize;
      if ( v9 )
        v16 = BaseAddress >> 12;
      else
        v16 = -1LL;
      v33 = v16;
LABEL_19:
      v17 = v32;
      while ( 1 )
      {
        if ( !BufferSize )
        {
LABEL_21:
          *v38 += v34;
          return v13;
        }
        v36 = 0LL;
        v35 = 0LL;
        if ( v9 )
        {
          v21 = 0LL;
        }
        else
        {
          v18 = MiTranslatePageForCopy(BaseAddress, v40, &v33, &v36, &v35);
          v13 = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741608 )
              goto LABEL_21;
            v39 = 0LL;
            EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v19, v20);
            *(_QWORD *)&v39 = BaseAddress;
            v30 = EffectivePagePriorityThread & 7 | 0x80B8;
            v31 = BufferSize;
            if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
              v31 = 0x200000 - (BaseAddress & 0x1FFFFF);
            *((_QWORD *)&v39 + 1) = v31;
            if ( BaseAddress >= qword_140E2F040 && BaseAddress <= qword_140E2F050 )
            {
              v13 = -1073741585;
              goto LABEL_21;
            }
            v13 = MiPrefetchVirtualMemory(1LL, &v39, 1LL, v30);
            if ( v13 < 0 )
              goto LABEL_21;
            v9 = a4 & 1;
            goto LABEL_19;
          }
          v21 = v41;
          if ( v18 == 273 )
          {
            MiUnlockSystemVa((__int64)v40);
            v13 = 0;
            if ( v15 )
            {
              v26 = v32;
              v27 = v15;
              v28 = v14 - (_BYTE)v32;
              do
              {
                *v26 = *((_BYTE *)&v35 + ((v28 + (_BYTE)v26) & 7));
                ++v26;
                --v27;
              }
              while ( v27 );
            }
            goto LABEL_31;
          }
          v17 = v32;
        }
        v22 = v14;
        v23 = v33;
        v13 = MiCopySinglePage(v17, v33, v22, v15, a4);
        if ( v21 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v23 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v36 )
            MiUnlockProtoPoolPage(v36, 0x11u, v24, v25);
          MiUnlockSystemVa((__int64)v40);
        }
        if ( v13 < 0 )
          goto LABEL_21;
LABEL_31:
        v34 += v15;
        BufferSize -= v15;
        BaseAddress += v15;
        ++v33;
        v17 = &v32[v15];
        v9 = a4 & 1;
        CurrentThread = v37;
        v15 = BufferSize;
        v32 = v17;
        if ( BufferSize > 0x1000 )
          v15 = 4096LL;
        v14 = 0LL;
      }
    }
  }
  return -1073741800;
}
