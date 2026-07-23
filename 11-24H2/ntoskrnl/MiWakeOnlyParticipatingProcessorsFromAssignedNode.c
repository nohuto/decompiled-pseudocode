/*
 * XREFs of MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140694BD4
 * Callers:
 *     MiZeroPageCalibrateDpc @ 0x140695350 (MiZeroPageCalibrateDpc.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiWakeOnlyParticipatingProcessorsFromAssignedNode(__int64 a1)
{
  PSLIST_ENTRY result; // rax
  _DWORD *v2; // rbp
  unsigned int v4; // ebp
  unsigned int v5; // esi
  __int64 v6; // r15
  __int64 *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  PSLIST_ENTRY v10; // rcx
  unsigned int v11; // r12d
  void **v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  _OWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (PSLIST_ENTRY)&retaddr;
  v2 = *(_DWORD **)a1;
  v18[0] = 0LL;
  if ( *v2 )
  {
    v11 = 0;
    if ( *((_BYTE *)v2 + 36) )
    {
      v12 = &Src;
    }
    else
    {
      result = (PSLIST_ENTRY)qword_140E2DC38;
      v12 = *(void ***)(384LL * *(unsigned int *)(a1 + 268) + qword_140E2DC38 + 376);
    }
    v13 = 0;
    if ( *((_WORD *)v12 + 8) )
    {
      do
      {
        v18[0] = *(_OWORD *)(*((_QWORD *)v2 + 19) + 16LL * v13);
        v14 = *(_QWORD *)&v18[0];
        while ( v14 )
        {
          v15 = KiProcessorBlock[(unsigned int)KeFindFirstSetRightGroupAffinity((__int64)v18)];
          v16 = *(_QWORD *)(v15 + 34872) + 192LL;
          v14 &= ~*(_QWORD *)(v15 + 200);
          *(_QWORD *)&v18[0] = v14;
          *(_DWORD *)(v16 + 68) = v11;
          *(_DWORD *)(v16 + 64) = *(_DWORD *)(a1 + 8);
          v17 = *(_QWORD *)(a1 + 296);
          *(_QWORD *)(v16 + 80) = v17;
          *(_QWORD *)(v16 + 72) = *(_QWORD *)(a1 + 272) + v17 * v11++;
          *(_QWORD *)(v16 + 88) = 0LL;
          *(_DWORD *)v16 = 1;
        }
        result = (PSLIST_ENTRY)*((unsigned __int16 *)v12 + 8);
        ++v13;
      }
      while ( v13 < (unsigned int)result );
    }
  }
  else
  {
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 192) + 1;
    if ( *(_DWORD *)(a1 + 192) != -1 )
    {
      v6 = 0LL;
      v7 = KiProcessorBlock;
      do
      {
        v8 = *(_QWORD *)(*v7 + 34872) + 192LL;
        *(_DWORD *)(v8 + 68) = v4;
        *(_DWORD *)(v8 + 64) = *(_DWORD *)(a1 + 8);
        v9 = *(_QWORD *)(a1 + 296);
        *(_QWORD *)(v8 + 80) = v9;
        *(_QWORD *)(v8 + 72) = *(_QWORD *)(a1 + 272) + v9 * v6;
        if ( **(_DWORD **)a1 || (result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 304))) == 0LL )
        {
          result = *(PSLIST_ENTRY *)a1;
          v10 = 0LL;
          if ( !**(_DWORD **)a1 )
            ++dword_140EF4EC8;
        }
        else
        {
          v10 = result + 2;
        }
        ++v4;
        *(_QWORD *)(v8 + 88) = v10;
        ++v6;
        *(_DWORD *)v8 = 1;
        ++v7;
      }
      while ( v4 < v5 );
    }
  }
  return result;
}
