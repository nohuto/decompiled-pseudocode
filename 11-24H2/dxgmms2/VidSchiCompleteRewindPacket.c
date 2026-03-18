/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x14001B590
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x140008BD0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitWaitCommand @ 0x140013940 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRewindPacket @ 0x14001B49C (VidSchiRewindPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x140046B44 (VidSchiProcessDpcPreemptedPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // edx
  int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  void (__fastcall *v23)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 184) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 184) &= ~4u;
    WdLogSingleEntry5(
      4LL,
      a1,
      *(_QWORD *)(a1 + 648),
      *(_QWORD *)(a1 + 656),
      0LL,
      _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0]);
    v7 = *(_QWORD *)(a1 + 656);
    WdLogGlobalForLineNumber = 15931;
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 648);
      if ( v8 )
      {
        v9 = v7;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 32);
          v9 = v10 - 32;
          if ( v10 - 32 == v8 )
            break;
          if ( v10 == a1 + 664 )
            goto LABEL_20;
        }
      }
      do
      {
        WdLogSingleEntry4(4LL, v7, *(int *)(v7 + 52));
        v11 = *(_DWORD *)(v7 + 80);
        WdLogGlobalForLineNumber = 15997;
        if ( (v11 & 0x10) != 0 )
        {
          *(_DWORD *)(v7 + 80) = v11 & 0xFFFFFFEF;
          if ( *(_DWORD *)(v2 + 16520) != -1 )
          {
            v23 = *(void (__fastcall **)(_QWORD))(v6 + 3320);
            if ( v23 )
              v23(*(_QWORD *)(v6 + 3352));
          }
        }
        ++*(_DWORD *)(a1 + 780);
        ++*(_DWORD *)(v2 + 3008);
        ++*(_DWORD *)(v6 + 776);
        if ( a2 )
        {
          v12 = *(_DWORD *)(v7 + 48);
          if ( v12 )
          {
            if ( v12 == 7 || v12 == 5 )
              *(_DWORD *)(v7 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v7 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 3000));
            RtlSetBitEx(v6 + 544, *(unsigned __int16 *)(v2 + 4));
          }
        }
        v13 = *(_QWORD *)(v7 + 32);
        v7 = v13 - 32;
      }
      while ( v13 - 32 != *(_QWORD *)(a1 + 648) && v13 != a1 + 664 );
      v14 = *(_QWORD *)(a1 + 656);
      *(_QWORD *)(a1 + 648) = v14;
      if ( v14 )
      {
        v15 = ((unsigned int)(*(_DWORD *)(v14 + 48) - 4) <= 1) | *(_DWORD *)(a1 + 644) & 0xFFFFFFFE;
        v16 = 0;
        *(_DWORD *)(a1 + 644) = v15;
        if ( *(_DWORD *)(v14 + 48) == 3 )
          v16 = 2;
        v17 = v15 & 0xFFFFFFFD | v16;
        v18 = 0;
        *(_DWORD *)(a1 + 644) = v17;
        v19 = 0;
        if ( *(_DWORD *)(v14 + 48) == 7 )
          v18 = 4;
        v20 = v17 & 0xFFFFFFFB | v18;
        *(_DWORD *)(a1 + 644) = v20;
        if ( *(_DWORD *)(v14 + 48) == 6 )
          v19 = 8;
        *(_DWORD *)(a1 + 644) = v20 & 0xFFFFFFF7 | v19;
      }
      else
      {
        *(_DWORD *)(a1 + 644) &= 0xFFFFFFF0;
      }
    }
LABEL_20:
    v21 = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 656) = 0LL;
    if ( (v21 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 184) >> 9) | *(_BYTE *)(a1 + 184)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, 10, 16094LL);
    }
    else if ( *(_DWORD *)(a1 + 780)
           && (*(_DWORD *)(a1 + 184) & 1) == 0
           && (*(_DWORD *)(a1 + 184) & 0x10) == 0
           && (*(_DWORD *)(a1 + 184) & 0x40) == 0
           && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, 5, 16107LL);
    }
  }
  return v3;
}
