/*
 * XREFs of RtlpCopyRemoteDebugInformation @ 0x180045DD0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x180047450 (RtlpCommitQueryDebugInfo.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpCopyRemoteDebugInformation(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  int v4; // ecx
  __int128 v5; // [rsp+70h] [rbp-39h]
  __int128 v6; // [rsp+90h] [rbp-19h]
  __int128 v7; // [rsp+A0h] [rbp-9h]
  __int128 v8; // [rsp+C0h] [rbp+17h]
  __int128 v9; // [rsp+D0h] [rbp+27h]
  __int64 v10; // [rsp+110h] [rbp+67h] BYREF
  _OWORD *v11; // [rsp+118h] [rbp+6Fh] BYREF

  v10 = 0LL;
  v11 = (_OWORD *)(a1 + *(_QWORD *)(a1 + 88));
  v5 = v11[4];
  v6 = v11[6];
  v7 = v11[7];
  v8 = v11[9];
  v9 = v11[10];
  v10 = *((_QWORD *)&v5 + 1);
  if ( *((_QWORD *)&v5 + 1) > *(_QWORD *)(a1 + 88) || *((_QWORD *)&v5 + 1) < 0xD0uLL )
    return 3221225473LL;
  result = ZwAllocateVirtualMemory(-1LL, &v11, 0LL, &v10, 4096, 4);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 208LL;
    v3 = v10 - 208;
    if ( RtlpCommitQueryDebugInfo(a1, (unsigned int)(v10 - 208)) )
    {
      memmove((void *)(a1 + 208), v11 + 13, v3);
      v4 = *(_DWORD *)(a1 + 64);
      if ( (v4 & 0x21C) != 0 )
      {
        *(_QWORD *)(a1 + 112) = v7;
        *(_QWORD *)(a1 + 152) = *((_QWORD *)&v8 + 1);
      }
      if ( (v4 & 0x41) != 0 )
        *(_QWORD *)(a1 + 96) = v6;
      if ( (v4 & 0x20) != 0 )
        *(_QWORD *)(a1 + 120) = *((_QWORD *)&v7 + 1);
      if ( (v4 & 2) != 0 )
        *(_QWORD *)(a1 + 104) = *((_QWORD *)&v6 + 1);
      if ( (v4 & 0x80u) != 0 )
        *(_QWORD *)(a1 + 144) = v8;
      if ( (v4 & 0xC00) != 0 )
        *(_QWORD *)(a1 + 168) = *((_QWORD *)&v9 + 1);
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
