/*
 * XREFs of NvmeDbgLogCriticalEvent @ 0x1400F5DA0
 * Callers:
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     NvmeAdapterNvmeControllerKeepAliveWork @ 0x1400E4AA0 (NvmeAdapterNvmeControllerKeepAliveWork.c)
 *     NvmeControllerDetectCommandTimeout @ 0x140136F70 (NvmeControllerDetectCommandTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeDbgLogCriticalEvent(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  __int64 CurrentProcessorNumber; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  unsigned __int128 v16; // xmm1
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+20h] [rbp-28h]
  unsigned __int128 v19; // [rsp+30h] [rbp-18h]

  v19 = __PAIR128__(a6, a5);
  result = a6;
  *(_QWORD *)&v18 = a3;
  *((_QWORD *)&v18 + 1) = a4;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 == 1314276178 )
    {
      CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
      result = *(_QWORD *)(a1 + 1368);
      v10 = *(_QWORD *)(result + 8 * CurrentProcessorNumber);
      v11 = *(_DWORD *)(v10 + 12);
      v12 = v10 + 64;
      _InterlockedOr(v17, 0);
      if ( v11 )
      {
        if ( v10 != -64 )
        {
          v13 = _InterlockedIncrement((volatile signed __int32 *)v10) % v11;
          v14 = v12 + ((unsigned __int64)v13 << 6);
          if ( (*(_DWORD *)(a1 + 1336) & 1) != 0 )
            *(_DWORD *)(v14 + 4) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1408));
          else
            *(_DWORD *)(v14 + 4) = v13;
          *(_WORD *)v14 = 3;
          v15 = (_QWORD *)(v14 + 8);
          *(_WORD *)(v14 + 2) = a2;
          if ( (*(_DWORD *)(a1 + 1336) & 2) != 0 )
          {
            result = KeQuerySystemTimePrecise(v15);
          }
          else
          {
            result = MEMORY[0xFFFFF78000000014];
            *v15 = MEMORY[0xFFFFF78000000014];
          }
          v16 = v19;
          *(_OWORD *)(v14 + 16) = v18;
          *(_OWORD *)(v14 + 32) = v16;
        }
      }
    }
  }
  return result;
}
