/*
 * XREFs of SepSetTokenUserAndGroups @ 0x1409E8D10
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SepLogTokenSidManagement @ 0x14078FD30 (SepLogTokenSidManagement.c)
 *     SepCompareSidValuesBlocks @ 0x140792F98 (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x14079303C (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x1407932B0 (SepDereferenceSidValuesBlock.c)
 *     SepDuplicateSid @ 0x1409E90B8 (SepDuplicateSid.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, unsigned __int8 **a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  char v11; // r14
  __int64 result; // rax
  int v13; // r12d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 *v15; // rsi
  char *v16; // rax
  char *v17; // rbp
  __int64 v18; // rsi
  PVOID v19; // rbx
  char v20; // cl
  int v21; // ecx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  unsigned int v25; // edx
  unsigned __int8 **v26; // r11
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v31; // [rsp+88h] [rbp+10h]

  v31 = a2;
  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(void **)(a4 + 16LL * (unsigned int)(v5 - 1)));
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  v13 = SepCreateSidValuesBlock(&P, a2, a3, a4, a5, v6);
  if ( v13 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) )
      goto LABEL_18;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 112LL);
    v16 = (char *)KeAbPreAcquire((__int64)v15, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
    if ( v17 )
      v17[10] = 1;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) = P;
    }
    v18 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 112));
    KeAbPostRelease(v18 + 112);
    KeLeaveCriticalRegion();
    if ( !v11 )
    {
LABEL_18:
      v19 = P;
      v20 = SepCompareSidValuesBlocks((__int64)P, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL));
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL);
      if ( v20 )
      {
        SepLogTokenSidManagement(2, (__int64)v19, v22, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_26;
      }
      v21 = 1;
    }
    else
    {
      v19 = P;
      v21 = 0;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 128LL);
    }
    SepLogTokenSidManagement(v21, (__int64)v19, v22, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v19;
LABEL_26:
    v23 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1176;
    v24 = v23 + 24;
    v25 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v26 = v31;
      do
      {
        v27 = *(_QWORD *)(a1 + 152);
        v28 = 2LL * v25;
        if ( v25 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v27 + 16LL * v25) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v27 + 16LL * v25) = v24;
          v24 += (4LL * *(unsigned __int8 *)(v24 + 1) + 11) & 0xFFFFFFFCLL;
        }
        if ( v25 )
          v29 = *(_DWORD *)(a4 + 16LL * (v25 - 1) + 8);
        else
          v29 = *((_DWORD *)v26 + 2);
        ++v25;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v28 + 8) = v29;
      }
      while ( v25 < *(_DWORD *)(a1 + 124) );
    }
  }
  return (unsigned int)v13;
}
