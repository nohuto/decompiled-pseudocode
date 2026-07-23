/*
 * XREFs of BgpConsoleInitialize @ 0x140BB30B0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpGetResolution @ 0x1404D206C (BgpGetResolution.c)
 *     BgpConsoleSetPointSize @ 0x1406990A8 (BgpConsoleSetPointSize.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB2860 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x140BB2A28 (BgpConsoleClearScreenEx.c)
 *     BgpFoGetFontHandle @ 0x140BB72B0 (BgpFoGetFontHandle.c)
 *     BgpConsoleGetFontName @ 0x140C71FD0 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // edi
  unsigned int *Memory; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // r9
  int FontHandle; // ebx
  _DWORD *Resolution; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 Context; // rax
  unsigned int v17; // r10d
  unsigned int v18; // r8d
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int i; // r11d
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-38h] BYREF
  int v26[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v27[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+64h] [rbp-Ch]

  v28 = 0LL;
  v4 = a3;
  v29 = 0;
  v5 = a2;
  v24 = 0LL;
  v6 = a1;
  Str2 = 0LL;
  BgpFwAcquireLock(a1, a2, a3, a4);
  Memory = (unsigned int *)BgpFwAllocateMemory(0x5E10uLL);
  qword_140EEFD00 = (__int64)Memory;
  v10 = Memory;
  if ( !Memory )
  {
    FontHandle = -1073741801;
    goto LABEL_15;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= (unsigned __int16)v6;
  Memory[3] = v5;
  Memory[4] = v4;
  Resolution = BgpGetResolution(v26);
  *(_QWORD *)(v13 + 20) = *(_QWORD *)Resolution;
  LODWORD(Resolution) = Resolution[2];
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_DWORD *)(v13 + 56) = 0;
  *(_DWORD *)(v13 + 28) = (_DWORD)Resolution;
  *(_DWORD *)(v13 + 32) = 15;
  *(_DWORD *)(v13 + 48) = 12;
  *(_DWORD *)(v13 + 52) = 22;
  memset_0((void *)(v13 + 80), 0, 0x5DC0uLL);
  v27[0] = v4;
  v27[1] = v5;
  v30 = ((unsigned __int8)~(_BYTE)v6 >> 1) & 1;
  BgpConsoleGetFontName((unsigned int)dword_140EF03D8, &Str2);
  FontHandle = BgpFoGetFontHandle(Str2);
  if ( FontHandle < 0
    || (FontHandle = BgpConsoleSetPointSize(
                       *(_DWORD *)(qword_140EEFD00 + 4),
                       *(_DWORD *)qword_140EEFD00,
                       *(_DWORD *)(qword_140EEFD00 + 24),
                       *(_DWORD *)(qword_140EEFD00 + 20),
                       (__int64)v27,
                       (__int64)&v24),
        FontHandle < 0) )
  {
    v10 = (unsigned int *)qword_140EEFD00;
LABEL_15:
    if ( v10 )
    {
      BgpFwFreeMemory((__int64)v10);
      qword_140EEFD00 = 0LL;
    }
    goto LABEL_17;
  }
  v14 = qword_140EEFD00;
  *(_DWORD *)(qword_140EEFD00 + 32) = v29;
  v15 = (_DWORD *)(v14 + 48);
  *(_QWORD *)(v14 + 48) = v24;
  Context = BgpDisplayCharacterGetContext((__int64)v27, (int *)(v14 + 48), ~(unsigned __int8)(v6 >> 1) & 2 | 1u);
  v10 = (unsigned int *)qword_140EEFD00;
  *(_QWORD *)(qword_140EEFD00 + 40) = Context;
  if ( !Context )
  {
    FontHandle = -1073741823;
    goto LABEL_15;
  }
  v8 = *v10;
  v17 = 0;
  v18 = v10[1];
  v10[15] = (v10[5] - *v15 * *v10) >> 1;
  v19 = v15[1] * v18;
  v20 = v10[6];
  v10[19] = 0;
  v10[17] = 0;
  v10[18] = 0;
  v9 = (v20 - v19) >> 1;
  v10[16] = v9;
  if ( (_DWORD)v8 )
  {
    do
    {
      for ( i = 0; i < v18; v18 = v10[1] )
      {
        v22 = i++;
        v9 = 25LL * v17 + v22;
        v8 = 3 * v9;
        LOWORD(v10[v8 + 22]) = 32;
        v10[3 * v9 + 21] = v4;
        v10[v8 + 20] = v5;
      }
      ++v17;
    }
    while ( v17 < *v10 );
  }
  if ( (v6 & 1) != 0 )
    BgpConsoleClearScreenEx();
  FontHandle = 0;
LABEL_17:
  BgpFwReleaseLock(v9, v8);
  return (unsigned int)FontHandle;
}
