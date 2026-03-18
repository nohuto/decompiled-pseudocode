/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x14004F83C
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14004F7E8 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1401C96B4 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  DWORD LowPart; // ebx
  int v2; // r12d
  _QWORD *v3; // r14
  _DWORD *v4; // rsi
  __int64 i; // rbp
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // edi
  __int64 v10; // rbx
  LONG HighPart; // [rsp+54h] [rbp+Ch]

  HighPart = a1.HighPart;
  LowPart = a1.LowPart;
  v2 = 0;
  v3 = *(_QWORD **)(W32GetSessionState(a1) + 88);
  v4 = (_DWORD *)(v3[221] + 1573024LL);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3[221] + 1573028LL); i = (unsigned int)(i + 1) )
  {
    if ( __PAIR64__(HighPart, LowPart) == *(_QWORD *)(v3[143] + 8 * i) )
    {
      --*(_BYTE *)(v3[144] + i);
      if ( !*(_BYTE *)(i + v3[144]) )
      {
        v2 = 1;
        if ( v4[1] - (_DWORD)i != 1 )
        {
          v9 = v4[1] - i - 1;
          v10 = (unsigned int)(i + 1);
          memmove((void *)(v3[143] + 8 * i), (const void *)(v3[143] + 8 * v10), 8LL * v9);
          memmove((void *)(v3[144] + i), (const void *)(v3[144] + v10), v9);
        }
      }
      break;
    }
  }
  v6 = v4[1];
  if ( (_DWORD)i == v6 )
    return 3221225524LL;
  if ( v2 )
  {
    ++*v4;
    v7 = v6 - 1;
    v4[1] = v7;
    *(_QWORD *)(v3[143] + 8LL * v7) = 0LL;
    *(_BYTE *)((unsigned int)v4[1] + v3[144]) = 0;
  }
  return 0LL;
}
