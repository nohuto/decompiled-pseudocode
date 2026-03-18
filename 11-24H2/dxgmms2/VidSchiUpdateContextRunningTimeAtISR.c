/*
 * XREFs of VidSchiUpdateContextRunningTimeAtISR @ 0x140005720
 * Callers:
 *     VidSchiProcessIsrPreemptedPacket @ 0x14000504C (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x140005250 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiUpdateNodeRunningTimeAtISR @ 0x1400056A0 (VidSchiUpdateNodeRunningTimeAtISR.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x14004F9A4 (VidSchiProcessIsrFaultedPacket.c)
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x14000D3D0 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // r15
  __int64 v5; // r14
  bool v6; // si
  LARGE_INTEGER v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rcx
  _QWORD **v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _BOOL8 result; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  signed __int32 v20; // eax
  volatile signed __int32 *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r9
  _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 496) )
    v3 = *(_QWORD *)(v1 + 496);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 436), 0, 0) == 1;
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = v7.QuadPart - *(_QWORD *)(v1 + 464);
  v9 = v8 * (unsigned __int128)0x989680uLL;
  v25 = *((_QWORD *)&v9 + 1);
  if ( is_mul_ok(v8, 0x989680uLL) )
    v10 = v9 / (unsigned __int64)PerformanceFrequency.QuadPart;
  else
    v10 = 10000000 * (v8 / PerformanceFrequency.QuadPart)
        + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  *(_QWORD *)(v1 + 448) += v10;
  *(_QWORD *)(v1 + 456) += v10;
  v4[347] += v10;
  v11 = *(_QWORD *)(v1 + 96);
  if ( (*(_DWORD *)(v11 + 12) & 0x40) != 0 )
  {
    v15 = 0LL;
  }
  else
  {
    v12 = *(unsigned __int16 *)(v11 + 4);
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 32LL)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(v11 + 24) + 4LL));
    v14 = *(_QWORD ***)(v13 + 8);
    if ( (unsigned int)v12 < *(_DWORD *)(v13 + 80) )
      v14 += v12;
    v15 = *v14;
  }
  *v15 += v10;
  _InterlockedAdd64(*(volatile signed __int64 **)(v5 + 6840), v10);
  *(LARGE_INTEGER *)(v1 + 464) = v7;
  if ( v6 )
  {
    v18 = *(_QWORD *)(v3 + 440) - v10;
    *(_QWORD *)(v3 + 440) = v18;
    if ( v18 <= 0 )
    {
      v19 = *(_QWORD *)(v1 + 496);
      v20 = 1;
      if ( v19 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 436), 2, 1);
        v20 = 0;
        v21 = (volatile signed __int32 *)(*(_QWORD *)(v1 + 496) + 436LL);
      }
      else
      {
        v21 = (volatile signed __int32 *)(v1 + 436);
      }
      _InterlockedCompareExchange(v21, 2, v20);
      v6 = 0;
    }
  }
  else if ( (*(_DWORD *)(v5 + 2792) & 8) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)] )
  {
    *(_QWORD *)(v3 + 440) -= v10;
  }
  if ( (byte_140081241 & 2) != 0 )
  {
    v22 = *(_QWORD *)(v1 + 56);
    if ( !v22 || (*(_DWORD *)(v1 + 112) & 0x40) != 0 )
      LODWORD(v22) = v1;
    McTemplateK0piixqq_EtwWriteTransfer(
      *(_DWORD *)(v1 + 436),
      v4[267],
      *(_QWORD *)(v1 + 440),
      v22,
      *(_QWORD *)(v1 + 448),
      *(_QWORD *)(v1 + 440),
      v4[267],
      *(_DWORD *)(v1 + 436),
      2);
  }
  v16 = *(_QWORD *)(v1 + 496);
  if ( v16 && (byte_140081241 & 2) != 0 )
  {
    v23 = *(_QWORD *)(v16 + 56);
    if ( !v23 || (*(_DWORD *)(v16 + 112) & 0x40) != 0 )
      v23 = *(_QWORD *)(v1 + 496);
    McTemplateK0piixqq_EtwWriteTransfer(
      v16,
      *(_DWORD *)(v16 + 436),
      v4[267],
      v23,
      *(_QWORD *)(v16 + 448),
      *(_QWORD *)(v16 + 440),
      v4[267],
      *(_DWORD *)(v16 + 436),
      2);
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 440);
  a1[2] = *(_QWORD *)(v1 + 448);
  return result;
}
