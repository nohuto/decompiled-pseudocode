/*
 * XREFs of WheaRemoveErrorSource @ 0x1407C7080
 * Callers:
 *     WheaUnregisterErrorSourceOverride @ 0x14065D3D0 (WheaUnregisterErrorSourceOverride.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C7470 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     WheapIsErrorSourceTypeAddable @ 0x14065A538 (WheapIsErrorSourceTypeAddable.c)
 *     WheapCallErrorSourceUninitialize @ 0x14065BE6C (WheapCallErrorSourceUninitialize.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall WheaRemoveErrorSource(unsigned int a1)
{
  __int64 *ErrorSource; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int128 v7; // xmm1
  int v8; // eax
  __int64 v9; // rdx
  void *v10; // rcx
  int v11; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[72]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+E0h] [rbp-20h]
  int v21; // [rsp+41Ch] [rbp+31Ch]
  char v22; // [rsp+420h] [rbp+320h]

  memset_0(v15, 0, 0x3CCuLL);
  ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, a1);
  v3 = (__int64)ErrorSource;
  if ( ErrorSource )
  {
    LOBYTE(ErrorSource) = WheapIsErrorSourceTypeAddable((__int64)(ErrorSource + 12));
    if ( (_BYTE)ErrorSource )
    {
      LODWORD(ErrorSource) = *(_DWORD *)(v3 + 108) - 3;
      if ( (unsigned int)ErrorSource > 1 )
      {
        v5 = 7LL;
        Interval.QuadPart = -1000LL;
        v6 = v15;
        do
        {
          *(_OWORD *)v6 = *(_OWORD *)v4;
          *((_OWORD *)v6 + 1) = *(_OWORD *)(v4 + 16);
          *((_OWORD *)v6 + 2) = *(_OWORD *)(v4 + 32);
          *((_OWORD *)v6 + 3) = *(_OWORD *)(v4 + 48);
          *((_OWORD *)v6 + 4) = *(_OWORD *)(v4 + 64);
          *((_OWORD *)v6 + 5) = *(_OWORD *)(v4 + 80);
          *((_OWORD *)v6 + 6) = *(_OWORD *)(v4 + 96);
          v6 += 128;
          v7 = *(_OWORD *)(v4 + 112);
          v4 += 128LL;
          *((_OWORD *)v6 - 1) = v7;
          --v5;
        }
        while ( v5 );
        *(_OWORD *)v6 = *(_OWORD *)v4;
        *((_OWORD *)v6 + 1) = *(_OWORD *)(v4 + 16);
        *((_OWORD *)v6 + 2) = *(_OWORD *)(v4 + 32);
        *((_OWORD *)v6 + 3) = *(_OWORD *)(v4 + 48);
        *((_QWORD *)v6 + 8) = *(_QWORD *)(v4 + 64);
        *((_DWORD *)v6 + 18) = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v3 + 108) = 4;
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 92), -1, 0) > 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        v8 = WheapCallErrorSourceUninitialize(v3);
        v10 = *(void **)(v3 + 48);
        v11 = v8;
        *(_DWORD *)(v3 + 108) = 3;
        if ( v10 )
        {
          ExFreePoolWithTag(v10, 0x61656857u);
          *(_QWORD *)(v3 + 48) = 0LL;
        }
        Src[3] = 0;
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[2] = 1009;
        Src[5] = -2147483636;
        Src[4] = 1280201291;
        Src[6] = 2;
        Src[7] = 977;
        if ( *(_DWORD *)(v3 + 104) == 16 )
        {
          v17 = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          v16 = 0LL;
          v20 = 0LL;
        }
        v21 = v11;
        v22 = 1;
        LOBYTE(ErrorSource) = WheaLogInternalEvent(Src, v9);
      }
    }
  }
  return (char)ErrorSource;
}
