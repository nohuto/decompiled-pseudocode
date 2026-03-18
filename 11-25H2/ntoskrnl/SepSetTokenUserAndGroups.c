/*
 * XREFs of SepSetTokenUserAndGroups @ 0x140AB26B4
 * Callers:
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SepLogTokenSidManagement @ 0x140780AA0 (SepLogTokenSidManagement.c)
 *     SepCompareSidValuesBlocks @ 0x140783AA8 (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x140783B4C (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x140783E44 (SepDereferenceSidValuesBlock.c)
 *     SepDuplicateSid @ 0x1408A3D8C (SepDuplicateSid.c)
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
  __int64 *v16; // rax
  __int64 *v17; // rbp
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
  __int64 v30[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v32; // [rsp+88h] [rbp+10h]

  v32 = a2;
  v5 = *(_DWORD *)(a1 + 208);
  v6 = -1;
  P = 0LL;
  v30[0] = 0LL;
  v11 = 0;
  if ( v5 != -1 )
  {
    v6 = v5 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v5 - 1)), v30);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v30[0];
  }
  v13 = SepCreateSidValuesBlock(&P, a2, a3, a4, a5, v6);
  if ( v13 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
      goto LABEL_18;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 216) + 104LL);
    v16 = KeAbPreAcquire((__int64)v15, 0LL);
    v17 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
      ExfAcquirePushLockExclusiveEx(v15, v16, (__int64)v15);
    if ( v17 )
      *((_BYTE *)v17 + 10) = 1;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v11 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
    }
    v18 = *(_QWORD *)(a1 + 216);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v18 + 104));
    KeAbPostRelease(v18 + 104);
    KeLeaveCriticalRegion();
    if ( !v11 )
    {
LABEL_18:
      v19 = P;
      v20 = SepCompareSidValuesBlocks((__int64)P, *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL));
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
      if ( v20 )
      {
        SepLogTokenSidManagement(2, (__int64)v19, v22, a1, 0LL);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1, 0LL);
        goto LABEL_26;
      }
      v21 = 1;
    }
    else
    {
      v19 = P;
      v21 = 0;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
    }
    SepLogTokenSidManagement(v21, (__int64)v19, v22, a1, 0LL);
    *(_QWORD *)(a1 + 1128) = v19;
LABEL_26:
    v23 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1168;
    v24 = v23 + 24;
    v25 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v26 = v32;
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
