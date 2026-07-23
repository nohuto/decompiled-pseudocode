/*
 * XREFs of MiComputeAgeDistribution @ 0x140425950
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1402F3C60 (MiComputeSystemTrimCriteria.c)
 *     MiOrderTrimList @ 0x140425554 (MiOrderTrimList.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int16 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  _QWORD *v4; // rdi
  KIRQL v5; // al
  _QWORD *v6; // r10
  unsigned __int8 v7; // r14
  _QWORD *v8; // r9
  __int64 v9; // rsi
  char v10; // bp
  unsigned __int64 *v11; // r11
  __int64 v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rax
  int v16; // ecx
  unsigned int i; // edx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  _BYTE Src[64]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(Src, 0, sizeof(Src));
  v4 = *(_QWORD **)(a1 + 17600);
  if ( a2 )
  {
    v5 = ExAcquireSpinLockExclusive(&SpinLock);
    v6 = (_QWORD *)(a1 + 17608);
    v7 = v5;
    v8 = *(_QWORD **)(a1 + 17608);
    v9 = 2LL;
    while ( v8 != v6 )
    {
      v10 = 3;
      v11 = (unsigned __int64 *)Src;
      v12 = 8LL;
      if ( (unsigned __int8)BYTE2(*((_DWORD *)v8 + 40)) != 2 )
        v10 = 1;
      do
      {
        v13 = (*(unsigned __int64 *)((char *)v11 + (char *)(v8 - 3) - Src + 40) >> v10) + *v11;
        if ( v13 < *v11 )
          v13 = -1LL;
        *v11++ = v13;
        --v12;
      }
      while ( v12 );
      v8 = (_QWORD *)*v8;
    }
    memmove(v4 + 43, Src, 0x40uLL);
    v14 = 0LL;
    v15 = v4 + 49;
    do
    {
      v14 += *v15++;
      --v9;
    }
    while ( v9 );
    v4[42] = v14;
    MiReleaseSpinLockExclusive(&SpinLock, v7);
  }
  else
  {
    v14 = v4[42];
  }
  v16 = 0;
  for ( i = 5; v14 < 4LL * v4[39]; --i )
  {
    ++v16;
    v14 += v4[i + 43];
    if ( i == 1 )
      break;
  }
  v18 = v4[35];
  if ( v18 )
  {
    v19 = (unsigned int)(1000 * v16) / v18;
    if ( (unsigned __int16)v19 > 0x3E8u )
      LOWORD(v19) = 1000;
  }
  else
  {
    LOWORD(v19) = v16 != 0 ? 0x3E8 : 0;
  }
  return v19;
}
