/*
 * XREFs of SmHpBufferUpdateFullness @ 0x140381C40
 * Callers:
 *     SmHpBufferAlloc @ 0x140381B00 (SmHpBufferAlloc.c)
 *     SmHpBufferCleanup @ 0x140487B60 (SmHpBufferCleanup.c)
 * Callees:
 *     SmPrepareForFatalHeapCorruption @ 0x14037A040 (SmPrepareForFatalHeapCorruption.c)
 *     SmHpUnprotectListNeighbors @ 0x140381E34 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtectEx @ 0x140382050 (SmHpBufferProtectEx.c)
 *     ExProtectPoolEx @ 0x140382168 (ExProtectPoolEx.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall SmHpBufferUpdateFullness(__int64 a1, _QWORD *a2, __int16 a3)
{
  unsigned int v3; // eax
  signed int v6; // ebx
  int v7; // edi
  __int64 result; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  void *v16; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((unsigned __int16 *)a2 + 5);
  v6 = -1;
  if ( (_WORD)v3 )
    v7 = v3 >> *(_BYTE *)(a1 + 552);
  else
    v7 = -1;
  *((_WORD *)a2 + 5) = a3 + v3;
  *(_DWORD *)(a1 + 560) += a3;
  result = *((unsigned __int16 *)a2 + 5);
  if ( (_WORD)result )
    v6 = (unsigned int)result >> *(_BYTE *)(a1 + 552);
  if ( v7 != v6 )
  {
    BugCheckParameter4 = 0LL;
    if ( *((_DWORD *)a2 + 3) )
    {
      v14 = wyhash(*a2, 4096LL, 0LL);
      v15 = *((_DWORD *)a2 + 3);
      v16 = (void *)*a2;
      if ( !v14 )
        v14 = 1;
      if ( v14 != v15 )
      {
        SmPrepareForFatalHeapCorruption(v16, (__int64)&BugCheckParameter4, v15, v14, (LONGLONG *)&BugCheckParameter4);
        KeBugCheckEx(0x1C7u, 0LL, *a2, *((unsigned int *)a2 + 3), BugCheckParameter4);
      }
      result = ExProtectPoolEx(v16, *a2, 4096LL, 4LL);
      *((_DWORD *)a2 + 3) = 0;
    }
    v9 = (_QWORD *)*a2;
    if ( v7 >= 0 )
    {
      SmHpUnprotectListNeighbors(a1, a1 + 16 * (v7 + 18LL), v9);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_16;
      result = v9[1];
      if ( *(_QWORD **)result != v9 )
        goto LABEL_16;
      *(_QWORD *)result = v10;
      *(_QWORD *)(v10 + 8) = result;
      if ( *(_QWORD *)(a1 + 16 * (v7 + 18LL)) == a1 + 16 * (v7 + 18LL) )
      {
        result = (unsigned int)(1 << v7);
        *(_DWORD *)(a1 + 284) ^= result;
      }
    }
    if ( v6 < 0 )
    {
      v9[1] = v9;
      *v9 = v9;
    }
    else
    {
      v11 = (_QWORD *)(a1 + 16 * (v6 + 18LL));
      if ( (_QWORD *)*v11 == v11 )
      {
        *(_DWORD *)(a1 + 284) ^= 1 << v6;
      }
      else
      {
        v12 = *(unsigned int *)(v11[1] + 16LL);
        _BitScanReverse((unsigned int *)&v13, v12);
        SmHpBufferProtectEx(v13, *(_QWORD *)(a1 + 8 * v13) + 16 * (v12 ^ (unsigned int)(1 << v13)), 1LL, 0LL);
      }
      result = v11[1];
      if ( *(_QWORD **)result != v11 )
LABEL_16:
        __fastfail(3u);
      *v9 = v11;
      v9[1] = result;
      *(_QWORD *)result = v9;
      v11[1] = v9;
    }
  }
  return result;
}
