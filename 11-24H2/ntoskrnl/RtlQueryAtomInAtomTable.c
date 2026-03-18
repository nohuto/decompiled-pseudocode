/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140935920
 * Callers:
 *     NtQueryInformationAtom @ 0x1409356D0 (NtQueryInformationAtom.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1404320FC (RtlpLookupLowBox.c)
 *     _snwprintf_s @ 0x140503770 (_snwprintf_s.c)
 *     Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline @ 0x1405E8CD0 (Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlpLockAtomTable @ 0x140935D80 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140935E40 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // ebx
  unsigned int v10; // r14d
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+60h] [rbp-68h] BYREF

  v8 = a2;
  v10 = 0;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  if ( (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline() )
    v10 = *a6 & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v21 = -1073741816;
    v14 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
    v15 = v14;
    if ( !v14 || *(_WORD *)(v14 + 10) != (_WORD)v8 || !RtlpLookupLowBox(a1, v14, 0) )
      goto LABEL_42;
    v21 = 0;
    if ( a3 )
      *a3 = *(unsigned __int16 *)(v15 + 36);
    if ( a4 )
      *a4 = *(unsigned __int16 *)(v15 + 38);
    if ( !a5 )
      goto LABEL_42;
    v16 = 2 * *(unsigned __int8 *)(v15 + 40);
    if ( (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v16 < v10 )
        goto LABEL_39;
      if ( v10 >= 2 )
      {
        v16 = v10 - 2;
        goto LABEL_39;
      }
LABEL_35:
      *a6 = v16;
      goto LABEL_41;
    }
    v17 = *a6;
    if ( v16 >= *a6 )
    {
      if ( v17 < 2 )
        goto LABEL_35;
      v16 = v17 - 2;
    }
LABEL_39:
    if ( v16 )
    {
      memmove(a5, (const void *)(v15 + 42), v16);
      *((_WORD *)a5 + ((unsigned __int64)v16 >> 1)) = 0;
      *a6 = v16;
      goto LABEL_42;
    }
LABEL_41:
    v21 = -1073741789;
    goto LABEL_42;
  }
  if ( (_WORD)v8 )
  {
    v21 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_42;
    v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( (unsigned int)Feature_Servicing_OutOfBoundWriteAtom__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 < v10 )
        goto LABEL_21;
      if ( v10 >= 2 )
      {
        v12 = v10 - 2;
        goto LABEL_21;
      }
LABEL_17:
      v21 = -1073741789;
      goto LABEL_42;
    }
    v13 = *a6;
    if ( v12 >= *a6 )
    {
      if ( v13 < 2 )
        goto LABEL_17;
      v12 = v13 - 2;
    }
LABEL_21:
    if ( v12 )
    {
      memmove(a5, DstBuf, v12);
      *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
      *a6 = v12;
      goto LABEL_42;
    }
    goto LABEL_17;
  }
  v21 = -1073741811;
LABEL_42:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
  return v21;
}
