/*
 * XREFs of MmCopyMemory @ 0x140395E40
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiUnlockSystemVa @ 0x1402E1BA0 (MiUnlockSystemVa.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E44B0 (MiGetEffectivePagePriorityThread.c)
 *     MiCheckPhysicalAddressRange @ 0x1403952D0 (MiCheckPhysicalAddressRange.c)
 *     MiCopySinglePage @ 0x140395C54 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwReadVirtualMemoryEx @ 0x1406A92F0 (ZwReadVirtualMemoryEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmCopyMemory(char *a1, unsigned __int64 a2, unsigned __int64 a3, int a4, _QWORD *a5)
{
  int v9; // r8d
  __int16 v11; // cx
  struct _KTHREAD *CurrentThread; // r12
  int v13; // edi
  unsigned __int64 v14; // r15
  size_t v15; // r14
  ULONG_PTR v16; // rax
  char *v17; // rax
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // r8
  ULONG_PTR v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  _BYTE *v24; // rcx
  size_t v25; // rdx
  char v26; // r15
  char EffectivePagePriorityThread; // al
  int v28; // eax
  __int64 v29; // rcx
  char *v30; // [rsp+38h] [rbp-C8h]
  ULONG_PTR v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v34; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *v35; // [rsp+60h] [rbp-A0h]
  _QWORD *v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h]

  v30 = a1;
  v36 = a5;
  memset_0(v38, 0, 0x80uLL);
  *a5 = 0LL;
  v32 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(a2, a3) )
    {
      v9 = a4 & 1;
      goto LABEL_13;
    }
  }
  else if ( a3 + a2 > a2 )
  {
    if ( a2 <= 0x7FFFFFFEFFFFLL )
    {
      if ( a3 + a2 <= 0x7FFFFFFEFFFFLL )
        return ZwReadVirtualMemoryEx(-1LL, a2, a1, a3, a5, 1);
      return 3221225496LL;
    }
    if ( a2 >= 0xFFFF800000000000uLL )
    {
      v11 = a2;
LABEL_13:
      if ( (a3 + (v11 & 0xFFF) + 4095LL) >> 12 >= 0x100000000LL )
        return 3221225713LL;
      CurrentThread = KeGetCurrentThread();
      v13 = 0;
      v35 = CurrentThread;
      v14 = a2 & 0xFFF;
      v15 = 4096 - v14;
      if ( 4096 - v14 > a3 )
        v15 = a3;
      if ( v9 )
        v16 = a2 >> 12;
      else
        v16 = -1LL;
      v31 = v16;
LABEL_19:
      v17 = v30;
      while ( 1 )
      {
        if ( !a3 )
        {
LABEL_21:
          *v36 += v32;
          return (unsigned int)v13;
        }
        v34 = 0LL;
        v33 = 0LL;
        if ( v9 )
        {
          v19 = 0LL;
        }
        else
        {
          v18 = MiTranslatePageForCopy(a2, v38, &v31, &v34, &v33);
          v13 = v18;
          if ( v18 < 0 )
          {
            if ( v18 != -1073741608 )
              goto LABEL_21;
            v37 = 0LL;
            EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
            *(_QWORD *)&v37 = a2;
            v28 = EffectivePagePriorityThread & 7 | 0x80B8;
            v29 = a3;
            if ( a3 > 0x200000 - (a2 & 0x1FFFFF) )
              v29 = 0x200000 - (a2 & 0x1FFFFF);
            *((_QWORD *)&v37 + 1) = v29;
            if ( a2 >= qword_140E2F280 && a2 <= qword_140E2F290 )
            {
              v13 = -1073741585;
              goto LABEL_21;
            }
            v13 = MiPrefetchVirtualMemory(1uLL, (unsigned __int64)&v37, 1LL, v28);
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
        v20 = v14;
        v21 = v31;
        v13 = MiCopySinglePage(v17, v31, v20, v15, a4);
        if ( v19 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(48 * v21 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v34 )
          {
            LOBYTE(v22) = 17;
            MiUnlockProtoPoolPage(v34, v22, v23);
          }
          MiUnlockSystemVa((__int64)v38);
        }
        if ( v13 < 0 )
          goto LABEL_21;
LABEL_31:
        v32 += v15;
        a3 -= v15;
        a2 += v15;
        ++v31;
        v17 = &v30[v15];
        v9 = a4 & 1;
        CurrentThread = v35;
        v15 = a3;
        v30 = v17;
        if ( a3 > 0x1000 )
          v15 = 4096LL;
        v14 = 0LL;
      }
    }
  }
  return 3221225496LL;
}
