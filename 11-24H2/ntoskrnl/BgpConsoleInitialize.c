/*
 * XREFs of BgpConsoleInitialize @ 0x140BB10B0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwFreeMemory @ 0x14037DE10 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140467320 (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpGetResolution @ 0x1404D8C1C (BgpGetResolution.c)
 *     BgpConsoleSetPointSize @ 0x140698028 (BgpConsoleSetPointSize.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     BgpDisplayCharacterGetContext @ 0x140BB0860 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleClearScreenEx @ 0x140BB0A28 (BgpConsoleClearScreenEx.c)
 *     BgpFoGetFontHandle @ 0x140BB52B0 (BgpFoGetFontHandle.c)
 *     BgpConsoleGetFontName @ 0x140C6FE70 (BgpConsoleGetFontName.c)
 */

__int64 __fastcall BgpConsoleInitialize(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int *Memory; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int *v9; // r9
  int FontHandle; // ebx
  _DWORD *Resolution; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  __int64 Context; // rax
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int i; // r11d
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  wchar_t *Str2; // [rsp+38h] [rbp-38h] BYREF
  int v25[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v26[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+64h] [rbp-Ch]

  v27 = 0LL;
  v28 = 0;
  v23 = 0LL;
  Str2 = 0LL;
  BgpFwAcquireLock();
  Memory = (unsigned int *)BgpFwAllocateMemory(0x5E10uLL);
  qword_140EEFAB0 = (__int64)Memory;
  v9 = Memory;
  if ( !Memory )
  {
    FontHandle = -1073741801;
    goto LABEL_15;
  }
  *Memory = 80;
  Memory[1] = 25;
  Memory[2] |= (unsigned __int16)a1;
  Memory[3] = a2;
  Memory[4] = a3;
  Resolution = BgpGetResolution(v25);
  *(_QWORD *)(v12 + 20) = *(_QWORD *)Resolution;
  LODWORD(Resolution) = Resolution[2];
  *(_QWORD *)(v12 + 40) = 0LL;
  *(_DWORD *)(v12 + 56) = 0;
  *(_DWORD *)(v12 + 28) = (_DWORD)Resolution;
  *(_DWORD *)(v12 + 32) = 15;
  *(_DWORD *)(v12 + 48) = 12;
  *(_DWORD *)(v12 + 52) = 22;
  memset_0((void *)(v12 + 80), 0, 0x5DC0uLL);
  v26[0] = a3;
  v26[1] = a2;
  v29 = ((unsigned __int8)~(_BYTE)a1 >> 1) & 1;
  BgpConsoleGetFontName((unsigned int)dword_140EF01B8, &Str2);
  FontHandle = BgpFoGetFontHandle(Str2);
  if ( FontHandle < 0
    || (FontHandle = BgpConsoleSetPointSize(
                       *(_DWORD *)(qword_140EEFAB0 + 4),
                       *(_DWORD *)qword_140EEFAB0,
                       *(_DWORD *)(qword_140EEFAB0 + 24),
                       *(_DWORD *)(qword_140EEFAB0 + 20),
                       (__int64)v26,
                       (__int64)&v23),
        FontHandle < 0) )
  {
    v9 = (unsigned int *)qword_140EEFAB0;
LABEL_15:
    if ( v9 )
    {
      BgpFwFreeMemory((__int64)v9);
      qword_140EEFAB0 = 0LL;
    }
    goto LABEL_17;
  }
  v13 = qword_140EEFAB0;
  *(_DWORD *)(qword_140EEFAB0 + 32) = v28;
  v14 = (_DWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 48) = v23;
  Context = BgpDisplayCharacterGetContext((__int64)v26, (int *)(v13 + 48), ~(unsigned __int8)(a1 >> 1) & 2 | 1u);
  v9 = (unsigned int *)qword_140EEFAB0;
  *(_QWORD *)(qword_140EEFAB0 + 40) = Context;
  if ( !Context )
  {
    FontHandle = -1073741823;
    goto LABEL_15;
  }
  v7 = *v9;
  v16 = 0;
  v17 = v9[1];
  v9[15] = (v9[5] - *v14 * *v9) >> 1;
  v18 = v14[1] * v17;
  v19 = v9[6];
  v9[19] = 0;
  v9[17] = 0;
  v9[18] = 0;
  v8 = (v19 - v18) >> 1;
  v9[16] = v8;
  if ( (_DWORD)v7 )
  {
    do
    {
      for ( i = 0; i < v17; v17 = v9[1] )
      {
        v21 = i++;
        v8 = 25LL * v16 + v21;
        v7 = 3 * v8;
        LOWORD(v9[v7 + 22]) = 32;
        v9[3 * v8 + 21] = a3;
        v9[v7 + 20] = a2;
      }
      ++v16;
    }
    while ( v16 < *v9 );
  }
  if ( (a1 & 1) != 0 )
    BgpConsoleClearScreenEx();
  FontHandle = 0;
LABEL_17:
  BgpFwReleaseLock(v8, v7);
  return (unsigned int)FontHandle;
}
